// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTestHarness__Syms.h"


void VTestHarness::traceChgThis__4998(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+39897);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full));
        vcdp->chgBit(oldp+1,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full));
        vcdp->chgCData(oldp+2,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__acknum),3);
        vcdp->chgCData(oldp+3,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__dOrig),3);
        vcdp->chgBit(oldp+4,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__dToggle));
        vcdp->chgBit(oldp+5,((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__acknum))));
        vcdp->chgCData(oldp+6,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__gennum),3);
        vcdp->chgBit(oldp+7,((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__gennum))));
        vcdp->chgBit(oldp+8,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aToggle_r));
        vcdp->chgBit(oldp+9,((1U & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__gennum))
                                        ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__dToggle)
                                        : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aToggle_r))))));
        vcdp->chgCData(oldp+10,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter),3);
        vcdp->chgCData(oldp+11,((7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter) 
                                       - (IData)(1U)))),3);
        vcdp->chgBit(oldp+12,((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter))));
        vcdp->chgCData(oldp+13,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__opcode),3);
        vcdp->chgCData(oldp+14,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__param),3);
        vcdp->chgCData(oldp+15,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__size),3);
        vcdp->chgCData(oldp+16,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__source),4);
        vcdp->chgIData(oldp+17,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__address),29);
        vcdp->chgCData(oldp+18,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter),3);
        vcdp->chgCData(oldp+19,((7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter) 
                                       - (IData)(1U)))),3);
        vcdp->chgBit(oldp+20,((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter))));
        vcdp->chgCData(oldp+21,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__opcode_1),3);
        vcdp->chgCData(oldp+22,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__param_1),2);
        vcdp->chgCData(oldp+23,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__size_1),3);
        vcdp->chgCData(oldp+24,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__source_1),4);
        vcdp->chgBit(oldp+25,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__sink));
        vcdp->chgBit(oldp+26,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__denied));
        vcdp->chgSData(oldp+27,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__inflight),16);
        vcdp->chgQData(oldp+28,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes),64);
        vcdp->chgQData(oldp+30,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes),64);
        vcdp->chgCData(oldp+32,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1),3);
        vcdp->chgCData(oldp+33,((7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1) 
                                       - (IData)(1U)))),3);
        vcdp->chgBit(oldp+34,((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1))));
        vcdp->chgCData(oldp+35,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1),3);
        vcdp->chgCData(oldp+36,((7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1) 
                                       - (IData)(1U)))),3);
        vcdp->chgBit(oldp+37,((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1))));
        vcdp->chgIData(oldp+38,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__watchdog),32);
        vcdp->chgSData(oldp+39,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__inflight_1),16);
    }
}

void VTestHarness::traceChgThis__5000(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+39937);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgQData(oldp+0,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes_1),64);
        vcdp->chgCData(oldp+2,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2),3);
        vcdp->chgCData(oldp+3,((7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2) 
                                      - (IData)(1U)))),3);
        vcdp->chgBit(oldp+4,((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2))));
        vcdp->chgIData(oldp+5,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__watchdog_1),32);
        vcdp->chgCData(oldp+6,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_opcode),3);
        vcdp->chgCData(oldp+7,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_param),3);
        vcdp->chgCData(oldp+8,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_size),3);
        vcdp->chgCData(oldp+9,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_source),4);
        vcdp->chgIData(oldp+10,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_address),29);
        vcdp->chgCData(oldp+11,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_mask),8);
        vcdp->chgBit(oldp+12,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt));
        vcdp->chgBit(oldp+13,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full));
        vcdp->chgCData(oldp+14,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__acknum),3);
        vcdp->chgCData(oldp+15,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__dOrig),3);
        vcdp->chgBit(oldp+16,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__dToggle));
        vcdp->chgBit(oldp+17,((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__acknum))));
        vcdp->chgCData(oldp+18,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__gennum),3);
        vcdp->chgBit(oldp+19,((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__gennum))));
        vcdp->chgBit(oldp+20,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aToggle_r));
        vcdp->chgBit(oldp+21,((1U & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__gennum))
                                         ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__dToggle)
                                         : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aToggle_r))))));
        vcdp->chgCData(oldp+22,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter),3);
        vcdp->chgCData(oldp+23,((7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter) 
                                       - (IData)(1U)))),3);
        vcdp->chgBit(oldp+24,((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter))));
        vcdp->chgCData(oldp+25,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__opcode),3);
        vcdp->chgCData(oldp+26,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__param),3);
        vcdp->chgCData(oldp+27,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__size),3);
        vcdp->chgCData(oldp+28,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__source),4);
        vcdp->chgIData(oldp+29,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__address),18);
        vcdp->chgCData(oldp+30,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter),3);
        vcdp->chgCData(oldp+31,((7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter) 
                                       - (IData)(1U)))),3);
        vcdp->chgBit(oldp+32,((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter))));
        vcdp->chgCData(oldp+33,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__size_1),3);
        vcdp->chgCData(oldp+34,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__source_1),4);
        vcdp->chgSData(oldp+35,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__inflight),16);
        vcdp->chgQData(oldp+36,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__inflight_opcodes),64);
        vcdp->chgQData(oldp+38,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__inflight_sizes),64);
        vcdp->chgCData(oldp+40,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter_1),3);
        vcdp->chgCData(oldp+41,((7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter_1) 
                                       - (IData)(1U)))),3);
    }
}

void VTestHarness::traceChgThis__5002(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+39979);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter_1))));
        vcdp->chgCData(oldp+1,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter_1),3);
        vcdp->chgCData(oldp+2,((7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter_1) 
                                      - (IData)(1U)))),3);
        vcdp->chgBit(oldp+3,((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter_1))));
        vcdp->chgIData(oldp+4,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__watchdog),32);
        vcdp->chgCData(oldp+5,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_opcode),3);
        vcdp->chgCData(oldp+6,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param),3);
        vcdp->chgCData(oldp+7,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_size),3);
        vcdp->chgCData(oldp+8,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_source),4);
        vcdp->chgIData(oldp+9,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_address),18);
        vcdp->chgCData(oldp+10,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_mask),8);
        vcdp->chgBit(oldp+11,(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_corrupt));
        vcdp->chgCData(oldp+12,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]),2);
        vcdp->chgCData(oldp+13,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_sink
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]),4);
        vcdp->chgBit(oldp+14,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied
                              [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]));
        vcdp->chgBit(oldp+15,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                              [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]));
        vcdp->chgBit(oldp+16,((1U & (~ (((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                          ? 1U : 4U) 
                                        >> 2U)))));
        vcdp->chgSData(oldp+17,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter),9);
        vcdp->chgSData(oldp+18,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter) 
                                           - (IData)(1U)))),9);
        vcdp->chgBit(oldp+19,((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter))));
        vcdp->chgCData(oldp+20,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__opcode),3);
        vcdp->chgCData(oldp+21,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__size),4);
        vcdp->chgIData(oldp+22,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__address),32);
        vcdp->chgSData(oldp+23,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter),9);
        vcdp->chgSData(oldp+24,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter) 
                                           - (IData)(1U)))),9);
        vcdp->chgBit(oldp+25,((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))));
        vcdp->chgCData(oldp+26,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__opcode_1),3);
        vcdp->chgCData(oldp+27,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__param_1),2);
        vcdp->chgCData(oldp+28,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__size_1),4);
        vcdp->chgBit(oldp+29,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__source_1));
        vcdp->chgCData(oldp+30,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__sink),4);
        vcdp->chgBit(oldp+31,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__denied));
        vcdp->chgBit(oldp+32,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight));
        vcdp->chgCData(oldp+33,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight_opcodes),4);
        vcdp->chgCData(oldp+34,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes),8);
    }
}

void VTestHarness::traceChgThis__5004(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+40014);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgSData(oldp+0,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1),9);
        vcdp->chgSData(oldp+1,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1) 
                                          - (IData)(1U)))),9);
        vcdp->chgBit(oldp+2,((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))));
        vcdp->chgSData(oldp+3,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1),9);
        vcdp->chgSData(oldp+4,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1) 
                                          - (IData)(1U)))),9);
        vcdp->chgBit(oldp+5,((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))));
        vcdp->chgIData(oldp+6,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__watchdog),32);
        vcdp->chgCData(oldp+7,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes_1),8);
        vcdp->chgSData(oldp+8,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2),9);
        vcdp->chgSData(oldp+9,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2) 
                                          - (IData)(1U)))),9);
        vcdp->chgBit(oldp+10,((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2))));
        vcdp->chgCData(oldp+11,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode[0]),3);
        vcdp->chgCData(oldp+12,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode[1]),3);
        vcdp->chgBit(oldp+13,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1));
        vcdp->chgBit(oldp+14,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value));
        vcdp->chgCData(oldp+15,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param[0]),3);
        vcdp->chgCData(oldp+16,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param[1]),3);
        vcdp->chgCData(oldp+17,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size[0]),4);
        vcdp->chgCData(oldp+18,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size[1]),4);
        vcdp->chgBit(oldp+19,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source[0]));
        vcdp->chgBit(oldp+20,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source[1]));
        vcdp->chgIData(oldp+21,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address[0]),32);
        vcdp->chgIData(oldp+22,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address[1]),32);
        vcdp->chgCData(oldp+23,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_mask[0]),8);
        vcdp->chgCData(oldp+24,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_mask[1]),8);
        vcdp->chgQData(oldp+25,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_data[0]),64);
        vcdp->chgQData(oldp+27,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_data[1]),64);
        vcdp->chgBit(oldp+29,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_corrupt[0]));
        vcdp->chgBit(oldp+30,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_corrupt[1]));
        vcdp->chgBit(oldp+31,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__maybe_full));
        vcdp->chgCData(oldp+32,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode[0]),3);
        vcdp->chgCData(oldp+33,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode[1]),3);
        vcdp->chgBit(oldp+34,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1));
        vcdp->chgBit(oldp+35,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value));
        vcdp->chgCData(oldp+36,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param[0]),2);
        vcdp->chgCData(oldp+37,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param[1]),2);
        vcdp->chgCData(oldp+38,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size[0]),4);
        vcdp->chgCData(oldp+39,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size[1]),4);
        vcdp->chgBit(oldp+40,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source[0]));
        vcdp->chgBit(oldp+41,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source[1]));
        vcdp->chgCData(oldp+42,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_sink[0]),4);
        vcdp->chgCData(oldp+43,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_sink[1]),4);
        vcdp->chgBit(oldp+44,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied[0]));
        vcdp->chgBit(oldp+45,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied[1]));
        vcdp->chgQData(oldp+46,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_data[0]),64);
        vcdp->chgQData(oldp+48,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_data[1]),64);
        vcdp->chgBit(oldp+50,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt[0]));
        vcdp->chgBit(oldp+51,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt[1]));
        vcdp->chgBit(oldp+52,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__maybe_full));
        vcdp->chgCData(oldp+53,(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txData),8);
        vcdp->chgBit(oldp+54,(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__sim__DOT_____05Fout_ready_reg));
        vcdp->chgCData(oldp+55,(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__ram
                                [vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__deq_ptr_value]),8);
        vcdp->chgBit(oldp+56,(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__sim__DOT_____05Fin_valid_reg));
        vcdp->chgCData(oldp+57,(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__sim__DOT_____05Fin_bits_reg),8);
        vcdp->chgCData(oldp+58,(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__ram
                                [vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__deq_ptr_value]),8);
        vcdp->chgCData(oldp+59,(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txState),2);
        vcdp->chgCData(oldp+60,(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txDataIdx),3);
        vcdp->chgBit(oldp+61,((7U == (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txDataIdx))));
    }
}

void VTestHarness::traceChgThis__5006(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+40076);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgSData(oldp+0,(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txBaudCount),10);
        vcdp->chgBit(oldp+1,((0x363U == (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txBaudCount))));
        vcdp->chgCData(oldp+2,(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txSlackCount),2);
        vcdp->chgBit(oldp+3,((3U == (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txSlackCount))));
        vcdp->chgCData(oldp+4,(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxState),2);
        vcdp->chgSData(oldp+5,(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxBaudCount),10);
        vcdp->chgBit(oldp+6,((0x363U == (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxBaudCount))));
        vcdp->chgCData(oldp+7,(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxDataIdx),3);
        vcdp->chgBit(oldp+8,((7U == (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxDataIdx))));
        vcdp->chgCData(oldp+9,(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__deq_ptr_value),7);
        vcdp->chgCData(oldp+10,(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__enq_ptr_value),7);
        vcdp->chgBit(oldp+11,(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__maybe_full));
        vcdp->chgCData(oldp+12,(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__deq_ptr_value),7);
        vcdp->chgCData(oldp+13,(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__enq_ptr_value),7);
        vcdp->chgBit(oldp+14,(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__maybe_full));
    }
}

void VTestHarness::traceChgThis__5007(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+40091);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(((0x10U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__activeInstruction)) 
                              & (IData)(vlTOPp->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TDI))));
        vcdp->chgBit(oldp+1,(((0x11U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__activeInstruction)) 
                              & (IData)(vlTOPp->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TDI))));
        vcdp->chgBit(oldp+2,(((1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__activeInstruction)) 
                              & (IData)(vlTOPp->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TDI))));
    }
}

void VTestHarness::traceChgThis__5008(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+40094);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        vcdp->chgBit(oldp+1,(vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        vcdp->chgCData(oldp+2,(vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__ridx_ridx_bin),4);
        vcdp->chgBit(oldp+3,(vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__valid_reg));
        vcdp->chgBit(oldp+4,(vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
        vcdp->chgBit(oldp+5,(vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0));
        vcdp->chgBit(oldp+6,(vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0));
        vcdp->chgBit(oldp+7,(vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0));
        vcdp->chgCData(oldp+8,((((IData)(vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                 << 1U) | (IData)(vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0))),2);
        vcdp->chgCData(oldp+9,((((IData)(vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                                 << 1U) | (IData)(vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0))),2);
        vcdp->chgBit(oldp+10,(vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
        vcdp->chgBit(oldp+11,(vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
        vcdp->chgBit(oldp+12,(vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
        vcdp->chgBit(oldp+13,(vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
        vcdp->chgBit(oldp+14,(vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
        vcdp->chgBit(oldp+15,(vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
        vcdp->chgBit(oldp+16,(vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
        vcdp->chgBit(oldp+17,(vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
        vcdp->chgBit(oldp+18,(vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        vcdp->chgBit(oldp+19,(vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        vcdp->chgBit(oldp+20,(vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        vcdp->chgBit(oldp+21,(vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        vcdp->chgCData(oldp+22,(((((IData)(vlTOPp->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                   << 3U) | ((IData)(vlTOPp->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                             << 2U)) 
                                 | (((IData)(vlTOPp->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                     << 1U) | (IData)(vlTOPp->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))),4);
        vcdp->chgBit(oldp+23,(vlTOPp->TestHarness__DOT__bits_in_queue__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        vcdp->chgBit(oldp+24,(vlTOPp->TestHarness__DOT__bits_in_queue__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
        vcdp->chgCData(oldp+25,(vlTOPp->TestHarness__DOT__bits_in_queue__DOT__source__DOT__widx_widx_bin),4);
        vcdp->chgBit(oldp+26,(vlTOPp->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ready_reg));
        vcdp->chgBit(oldp+27,(vlTOPp->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
        vcdp->chgBit(oldp+28,(vlTOPp->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0));
        vcdp->chgBit(oldp+29,(vlTOPp->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0));
        vcdp->chgBit(oldp+30,(vlTOPp->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0));
        vcdp->chgCData(oldp+31,((((IData)(vlTOPp->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                  << 1U) | (IData)(vlTOPp->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))),2);
        vcdp->chgCData(oldp+32,((((IData)(vlTOPp->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                  << 1U) | (IData)(vlTOPp->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0))),2);
        vcdp->chgBit(oldp+33,(vlTOPp->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
        vcdp->chgBit(oldp+34,(vlTOPp->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
        vcdp->chgBit(oldp+35,(vlTOPp->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
        vcdp->chgBit(oldp+36,(vlTOPp->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
        vcdp->chgBit(oldp+37,(vlTOPp->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
        vcdp->chgBit(oldp+38,(vlTOPp->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
        vcdp->chgBit(oldp+39,(vlTOPp->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
        vcdp->chgBit(oldp+40,(vlTOPp->TestHarness__DOT__bits_in_queue__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
        vcdp->chgBit(oldp+41,(vlTOPp->TestHarness__DOT__bits_in_queue__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
        vcdp->chgBit(oldp+42,(vlTOPp->TestHarness__DOT__bits_in_queue__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
        vcdp->chgBit(oldp+43,(vlTOPp->TestHarness__DOT__bits_in_queue__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    }
}

void VTestHarness::traceChgThis__5010(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+40138);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(vlTOPp->TestHarness__DOT__bits_in_queue__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    }
}

void VTestHarness::traceChgThis__5011(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+40139);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgCData(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiReqReg_addr),7);
        vcdp->chgIData(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiReqReg_data),32);
        vcdp->chgCData(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiReqReg_op),2);
        vcdp->chgCData(oldp+3,((7U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                              >> 0x28U)))),3);
        vcdp->chgCData(oldp+4,((3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                              >> 0x26U)))),2);
        vcdp->chgCData(oldp+5,((3U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                              >> 0x24U)))),2);
        vcdp->chgBit(oldp+6,((1U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                            >> 0x23U)))));
        vcdp->chgBit(oldp+7,((1U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                            >> 0x22U)))));
        vcdp->chgBit(oldp+8,((1U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                            >> 0x21U)))));
        vcdp->chgIData(oldp+9,((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                        >> 1U))),32);
        vcdp->chgBit(oldp+10,((1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg))));
        vcdp->chgBit(oldp+11,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__beatsLeft));
        vcdp->chgBit(oldp+12,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__beatsLeft)))));
        vcdp->chgCData(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__readys_mask),2);
        vcdp->chgBit(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__state_0));
        vcdp->chgBit(oldp+15,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__state_1));
        vcdp->chgBit(oldp+16,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_counter));
        vcdp->chgBit(oldp+17,((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_counter) 
                                     - (IData)(1U)))));
        vcdp->chgBit(oldp+18,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_counter)))));
        vcdp->chgCData(oldp+19,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__opcode),3);
        vcdp->chgSData(oldp+20,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__address),9);
        vcdp->chgBit(oldp+21,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_counter));
        vcdp->chgBit(oldp+22,((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_counter) 
                                     - (IData)(1U)))));
        vcdp->chgBit(oldp+23,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_counter)))));
        vcdp->chgCData(oldp+24,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__opcode_1),3);
        vcdp->chgCData(oldp+25,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__param_1),2);
        vcdp->chgCData(oldp+26,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__size_1),2);
        vcdp->chgBit(oldp+27,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__sink));
        vcdp->chgBit(oldp+28,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__denied));
        vcdp->chgBit(oldp+29,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__inflight));
        vcdp->chgCData(oldp+30,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__inflight_opcodes),4);
        vcdp->chgCData(oldp+31,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__inflight_sizes),4);
        vcdp->chgBit(oldp+32,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_counter_1));
        vcdp->chgBit(oldp+33,((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_counter_1) 
                                     - (IData)(1U)))));
    }
}

void VTestHarness::traceChgThis__5013(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+40173);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_counter_1)))));
        vcdp->chgBit(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_counter_1));
        vcdp->chgBit(oldp+2,((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_counter_1) 
                                    - (IData)(1U)))));
        vcdp->chgBit(oldp+3,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_counter_1)))));
        vcdp->chgCData(oldp+4,((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__inflight_opcodes) 
                                      >> 1U))),4);
        vcdp->chgCData(oldp+5,((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__inflight_sizes) 
                                      >> 1U))),4);
        vcdp->chgIData(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__watchdog),32);
        vcdp->chgCData(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__inflight_sizes_1),4);
        vcdp->chgBit(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_counter_2));
        vcdp->chgBit(oldp+9,((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_counter_2) 
                                    - (IData)(1U)))));
        vcdp->chgBit(oldp+10,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_counter_2)))));
        vcdp->chgCData(oldp+11,((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__inflight_sizes_1) 
                                       >> 1U))),4);
        vcdp->chgSData(oldp+12,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiReqReg_addr) 
                                 << 2U)),9);
        vcdp->chgBit(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_counter));
        vcdp->chgBit(oldp+14,((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_counter) 
                                     - (IData)(1U)))));
        vcdp->chgBit(oldp+15,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_counter)))));
        vcdp->chgCData(oldp+16,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__opcode),3);
        vcdp->chgCData(oldp+17,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__address),7);
        vcdp->chgBit(oldp+18,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first_counter));
        vcdp->chgBit(oldp+19,((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first_counter) 
                                     - (IData)(1U)))));
        vcdp->chgBit(oldp+20,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first_counter)))));
        vcdp->chgCData(oldp+21,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__opcode_1),3);
        vcdp->chgBit(oldp+22,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__inflight));
        vcdp->chgCData(oldp+23,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__inflight_opcodes),4);
        vcdp->chgCData(oldp+24,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__inflight_sizes),4);
        vcdp->chgBit(oldp+25,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_counter_1));
        vcdp->chgBit(oldp+26,((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_counter_1) 
                                     - (IData)(1U)))));
    }
}

void VTestHarness::traceChgThis__5015(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+40200);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_counter_1)))));
        vcdp->chgBit(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first_counter_1));
        vcdp->chgBit(oldp+2,((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first_counter_1) 
                                    - (IData)(1U)))));
        vcdp->chgBit(oldp+3,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first_counter_1)))));
        vcdp->chgCData(oldp+4,((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__inflight_opcodes) 
                                      >> 1U))),4);
        vcdp->chgCData(oldp+5,((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__inflight_sizes) 
                                      >> 1U))),4);
        vcdp->chgIData(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__watchdog),32);
        vcdp->chgCData(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__inflight_sizes_1),4);
        vcdp->chgBit(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first_counter_2));
        vcdp->chgBit(oldp+9,((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first_counter_2) 
                                    - (IData)(1U)))));
        vcdp->chgBit(oldp+10,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first_counter_2)))));
        vcdp->chgCData(oldp+11,((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__inflight_sizes_1) 
                                       >> 1U))),4);
        vcdp->chgBit(oldp+12,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_reset));
        vcdp->chgBit(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__bypass_reg));
        vcdp->chgCData(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__flight),2);
        vcdp->chgBit(oldp+15,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__stall_counter));
        vcdp->chgBit(oldp+16,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__stall_counter)))));
        vcdp->chgBit(oldp+17,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__counter));
        vcdp->chgBit(oldp+18,((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__counter) 
                                     - (IData)(1U)))));
        vcdp->chgBit(oldp+19,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__counter)))));
        vcdp->chgBit(oldp+20,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__counter_3));
        vcdp->chgBit(oldp+21,((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__counter_3) 
                                     - (IData)(1U)))));
        vcdp->chgBit(oldp+22,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__counter_3)))));
        vcdp->chgBit(oldp+23,((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__stall_counter) 
                                     - (IData)(1U)))));
        vcdp->chgBit(oldp+24,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_counter));
        vcdp->chgBit(oldp+25,((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_counter) 
                                     - (IData)(1U)))));
        vcdp->chgBit(oldp+26,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_counter)))));
    }
}

void VTestHarness::traceChgThis__5017(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+40227);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgCData(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__opcode),3);
        vcdp->chgSData(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__address),9);
        vcdp->chgBit(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_counter));
        vcdp->chgBit(oldp+3,((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_counter) 
                                    - (IData)(1U)))));
        vcdp->chgBit(oldp+4,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_counter)))));
        vcdp->chgCData(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__opcode_1),3);
        vcdp->chgCData(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__param_1),2);
        vcdp->chgCData(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__size_1),2);
        vcdp->chgBit(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__source_1));
        vcdp->chgBit(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__sink));
        vcdp->chgBit(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__denied));
        vcdp->chgBit(oldp+11,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__inflight));
        vcdp->chgCData(oldp+12,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__inflight_opcodes),4);
        vcdp->chgCData(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__inflight_sizes),4);
        vcdp->chgBit(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_counter_1));
        vcdp->chgBit(oldp+15,((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_counter_1) 
                                     - (IData)(1U)))));
        vcdp->chgBit(oldp+16,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_counter_1)))));
        vcdp->chgBit(oldp+17,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_counter_1));
        vcdp->chgBit(oldp+18,((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_counter_1) 
                                     - (IData)(1U)))));
        vcdp->chgBit(oldp+19,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_counter_1)))));
        vcdp->chgIData(oldp+20,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__watchdog),32);
        vcdp->chgCData(oldp+21,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__inflight_sizes_1),4);
        vcdp->chgBit(oldp+22,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_counter_2));
        vcdp->chgBit(oldp+23,((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_counter_2) 
                                     - (IData)(1U)))));
        vcdp->chgBit(oldp+24,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_counter_2)))));
        vcdp->chgBit(oldp+25,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__idle));
        vcdp->chgBit(oldp+26,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__beatsLeft));
        vcdp->chgBit(oldp+27,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__beatsLeft)))));
        vcdp->chgBit(oldp+28,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__state_1));
        vcdp->chgBit(oldp+29,((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__beatsLeft)) 
                                     | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__state_1)))));
        vcdp->chgBit(oldp+30,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__counter));
        vcdp->chgBit(oldp+31,((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__counter) 
                                     - (IData)(1U)))));
        vcdp->chgBit(oldp+32,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__counter)))));
        vcdp->chgBit(oldp+33,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_counter));
        vcdp->chgBit(oldp+34,((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_counter) 
                                     - (IData)(1U)))));
        vcdp->chgBit(oldp+35,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_counter)))));
        vcdp->chgCData(oldp+36,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__opcode),3);
        vcdp->chgWData(oldp+37,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__address),128);
        vcdp->chgBit(oldp+41,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_counter));
        vcdp->chgBit(oldp+42,((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_counter) 
                                     - (IData)(1U)))));
    }
}

void VTestHarness::traceChgThis__5019(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+40270);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_counter)))));
        vcdp->chgCData(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__opcode_1),3);
        vcdp->chgCData(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__size_1),2);
        vcdp->chgBit(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__denied));
        vcdp->chgBit(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight));
        vcdp->chgCData(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight_opcodes),4);
        vcdp->chgCData(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight_sizes),4);
        vcdp->chgBit(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_counter_1));
        vcdp->chgBit(oldp+8,((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_counter_1) 
                                    - (IData)(1U)))));
        vcdp->chgBit(oldp+9,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_counter_1)))));
        vcdp->chgBit(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_counter_1));
        vcdp->chgBit(oldp+11,((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_counter_1) 
                                     - (IData)(1U)))));
        vcdp->chgBit(oldp+12,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_counter_1)))));
        vcdp->chgCData(oldp+13,((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight_opcodes) 
                                       >> 1U))),4);
        vcdp->chgCData(oldp+14,((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight_sizes) 
                                       >> 1U))),4);
        vcdp->chgIData(oldp+15,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__watchdog),32);
        vcdp->chgCData(oldp+16,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight_sizes_1),4);
        vcdp->chgBit(oldp+17,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_counter_2));
        vcdp->chgBit(oldp+18,((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_counter_2) 
                                     - (IData)(1U)))));
        vcdp->chgBit(oldp+19,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_counter_2)))));
        vcdp->chgCData(oldp+20,((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__inflight_sizes_1) 
                                       >> 1U))),4);
        vcdp->chgBit(oldp+21,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_counter));
        vcdp->chgBit(oldp+22,((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_counter) 
                                     - (IData)(1U)))));
        vcdp->chgBit(oldp+23,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_counter)))));
        vcdp->chgCData(oldp+24,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__opcode),3);
        vcdp->chgSData(oldp+25,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__address),9);
        vcdp->chgBit(oldp+26,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_counter));
        vcdp->chgBit(oldp+27,((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_counter) 
                                     - (IData)(1U)))));
    }
}

void VTestHarness::traceChgThis__5021(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+40298);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_counter)))));
        vcdp->chgCData(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__opcode_1),3);
        vcdp->chgCData(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__param_1),2);
        vcdp->chgCData(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__size_1),2);
        vcdp->chgBit(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__source_1));
        vcdp->chgBit(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__sink));
        vcdp->chgBit(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__denied));
        vcdp->chgBit(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__inflight));
        vcdp->chgCData(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__inflight_opcodes),4);
        vcdp->chgCData(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__inflight_sizes),4);
        vcdp->chgBit(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_counter_1));
        vcdp->chgBit(oldp+11,((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_counter_1) 
                                     - (IData)(1U)))));
        vcdp->chgBit(oldp+12,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_counter_1)))));
        vcdp->chgBit(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_counter_1));
        vcdp->chgBit(oldp+14,((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_counter_1) 
                                     - (IData)(1U)))));
        vcdp->chgBit(oldp+15,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_counter_1)))));
        vcdp->chgCData(oldp+16,((7U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__inflight_sizes) 
                                        >> (4U & ((IData)(
                                                          (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                           >> 0x23U)) 
                                                  << 2U))) 
                                       >> 1U))),4);
        vcdp->chgIData(oldp+17,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__watchdog),32);
        vcdp->chgCData(oldp+18,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__inflight_sizes_1),4);
        vcdp->chgBit(oldp+19,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_counter_2));
        vcdp->chgBit(oldp+20,((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_counter_2) 
                                     - (IData)(1U)))));
        vcdp->chgBit(oldp+21,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_counter_2)))));
        vcdp->chgCData(oldp+22,((7U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__inflight_sizes_1) 
                                        >> (4U & ((IData)(
                                                          (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                           >> 0x23U)) 
                                                  << 2U))) 
                                       >> 1U))),4);
        vcdp->chgQData(oldp+23,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg),43);
        vcdp->chgBit(oldp+25,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_1));
        vcdp->chgBit(oldp+26,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_2));
        vcdp->chgBit(oldp+27,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_3));
        vcdp->chgBit(oldp+28,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_4));
    }
}

void VTestHarness::traceChgThis__5023(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+40327);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_5));
        vcdp->chgBit(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_6));
        vcdp->chgBit(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_7));
        vcdp->chgBit(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_8));
        vcdp->chgBit(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_9));
        vcdp->chgBit(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_10));
        vcdp->chgBit(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_11));
        vcdp->chgBit(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_12));
        vcdp->chgBit(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_13));
        vcdp->chgBit(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_14));
        vcdp->chgBit(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_15));
        vcdp->chgBit(oldp+11,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_16));
        vcdp->chgBit(oldp+12,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_17));
        vcdp->chgBit(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_18));
        vcdp->chgBit(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_19));
        vcdp->chgBit(oldp+15,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_20));
        vcdp->chgBit(oldp+16,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_21));
        vcdp->chgBit(oldp+17,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_22));
        vcdp->chgBit(oldp+18,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_23));
        vcdp->chgBit(oldp+19,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_24));
        vcdp->chgBit(oldp+20,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_25));
        vcdp->chgBit(oldp+21,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_26));
        vcdp->chgBit(oldp+22,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_27));
        vcdp->chgBit(oldp+23,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_28));
        vcdp->chgBit(oldp+24,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_29));
        vcdp->chgBit(oldp+25,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_30));
        vcdp->chgBit(oldp+26,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_31));
    }
}

void VTestHarness::traceChgThis__5024(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+40354);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiReqValidReg));
        vcdp->chgBit(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmactiveAck_dmactiveAckSync__DOT__output_chain__DOT__sync_0));
        vcdp->chgBit(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_haltreq));
        vcdp->chgBit(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ndmreset));
        vcdp->chgBit(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__hrmaskReg_0));
        vcdp->chgBit(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__innerCtrlValidReg));
        vcdp->chgBit(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__innerCtrlResumeReqReg));
        vcdp->chgBit(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__innerCtrlAckHaveResetReg));
        vcdp->chgBit(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleOut_0_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
        vcdp->chgBit(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleOut_0_a_source__DOT__ready_reg));
        vcdp->chgBit(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleOut_0_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
        vcdp->chgBit(oldp+11,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleOut_0_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
        vcdp->chgBit(oldp+12,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0));
        vcdp->chgBit(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__valid_reg));
        vcdp->chgBit(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
        vcdp->chgBit(oldp+15,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
        vcdp->chgBit(oldp+16,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmactiveAck_dmactiveAckSync__DOT__output_chain__DOT__sync_1));
        vcdp->chgBit(oldp+17,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmactiveAck_dmactiveAckSync__DOT__output_chain__DOT__sync_2));
        vcdp->chgBit(oldp+18,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0));
        vcdp->chgBit(oldp+19,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__ready_reg));
        vcdp->chgBit(oldp+20,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
        vcdp->chgBit(oldp+21,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
        vcdp->chgBit(oldp+22,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__busyReg));
        vcdp->chgBit(oldp+23,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__stickyBusyReg));
        vcdp->chgBit(oldp+24,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__stickyNonzeroRespReg));
        vcdp->chgBit(oldp+25,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__downgradeOpReg));
    }
}

void VTestHarness::traceChgThis__5026(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+40380);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgCData(oldp+0,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ndmreset) 
                                 << 1U) | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_dmactive) 
                                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmactiveAck_dmactiveAckSync__DOT__output_chain__DOT__sync_0)))),5);
        vcdp->chgIData(oldp+1,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ndmreset) 
                                 << 1U) | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_dmactive) 
                                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmactiveAck_dmactiveAckSync__DOT__output_chain__DOT__sync_0)))),18);
        vcdp->chgIData(oldp+2,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_haltreq) 
                                 << 0x1fU) | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_ndmreset) 
                                               << 1U) 
                                              | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_dmactive) 
                                                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmactiveAck_dmactiveAckSync__DOT__output_chain__DOT__sync_0))))),32);
    }
}

void VTestHarness::traceChgThis__5027(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+40383);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__tdoReg));
    }
}

void VTestHarness::traceChgThis__5028(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+40384);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__inDes__DOT__receiving));
        vcdp->chgIData(oldp+1,(vlTOPp->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg),32);
        vcdp->chgBit(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__outSer__DOT__sending));
        vcdp->chgBit(oldp+3,(vlTOPp->TestHarness__DOT__simdram__DOT_____05Faw_ready_reg));
        vcdp->chgCData(oldp+4,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__maybe_full)
                                 ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_burst
                                [0U] : 1U)),2);
        vcdp->chgBit(oldp+5,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__maybe_full) 
                              & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_lock
                              [0U])));
        vcdp->chgCData(oldp+6,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__maybe_full)
                                 ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_cache
                                [0U] : 0U)),4);
        vcdp->chgCData(oldp+7,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__maybe_full)
                                 ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_prot
                                [0U] : 1U)),3);
        vcdp->chgCData(oldp+8,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__maybe_full)
                                 ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_qos
                                [0U] : 0U)),4);
        vcdp->chgBit(oldp+9,(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fw_ready_reg));
        vcdp->chgBit(oldp+10,(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fb_valid_reg));
        vcdp->chgCData(oldp+11,(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fb_id_reg),4);
        vcdp->chgCData(oldp+12,(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fb_resp_reg),2);
        vcdp->chgBit(oldp+13,(vlTOPp->TestHarness__DOT__simdram__DOT_____05Far_ready_reg));
        vcdp->chgBit(oldp+14,(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_valid_reg));
        vcdp->chgCData(oldp+15,(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_id_reg),4);
        vcdp->chgQData(oldp+16,(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_data_reg),64);
        vcdp->chgCData(oldp+18,(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_resp_reg),2);
        vcdp->chgBit(oldp+19,(vlTOPp->TestHarness__DOT__simdram__DOT_____05Fr_last_reg));
        vcdp->chgBit(oldp+20,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txm__DOT__out));
        vcdp->chgIData(oldp+21,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__outSer__DOT__data[0U]),32);
        vcdp->chgBit(oldp+22,((1U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__outSer__DOT__data[0U])));
        vcdp->chgBit(oldp+23,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__outSer__DOT__data[0U] 
                                     >> 1U))));
        vcdp->chgBit(oldp+24,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__outSer__DOT__data[0U] 
                                     >> 2U))));
        vcdp->chgBit(oldp+25,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__outSer__DOT__data[0U] 
                                     >> 3U))));
        vcdp->chgBit(oldp+26,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__outSer__DOT__data[0U] 
                                     >> 4U))));
        vcdp->chgBit(oldp+27,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__outSer__DOT__data[0U] 
                                     >> 5U))));
        vcdp->chgBit(oldp+28,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__outSer__DOT__data[0U] 
                                     >> 6U))));
    }
}

void VTestHarness::traceChgThis__5030(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+40413);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__outSer__DOT__data[0U] 
                                    >> 7U))));
        vcdp->chgBit(oldp+1,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__outSer__DOT__data[0U] 
                                    >> 8U))));
        vcdp->chgBit(oldp+2,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__outSer__DOT__data[0U] 
                                    >> 9U))));
        vcdp->chgBit(oldp+3,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__outSer__DOT__data[0U] 
                                    >> 0xaU))));
        vcdp->chgBit(oldp+4,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__outSer__DOT__data[0U] 
                                    >> 0xbU))));
        vcdp->chgBit(oldp+5,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__outSer__DOT__data[0U] 
                                    >> 0xcU))));
        vcdp->chgBit(oldp+6,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__outSer__DOT__data[0U] 
                                    >> 0xdU))));
        vcdp->chgBit(oldp+7,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__outSer__DOT__data[0U] 
                                    >> 0xeU))));
        vcdp->chgBit(oldp+8,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__outSer__DOT__data[0U] 
                                    >> 0xfU))));
        vcdp->chgBit(oldp+9,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__outSer__DOT__data[0U] 
                                    >> 0x10U))));
        vcdp->chgBit(oldp+10,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__outSer__DOT__data[0U] 
                                     >> 0x11U))));
        vcdp->chgBit(oldp+11,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__outSer__DOT__data[0U] 
                                     >> 0x12U))));
        vcdp->chgBit(oldp+12,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__outSer__DOT__data[0U] 
                                     >> 0x13U))));
        vcdp->chgBit(oldp+13,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__outSer__DOT__data[0U] 
                                     >> 0x14U))));
        vcdp->chgBit(oldp+14,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__outSer__DOT__data[0U] 
                                     >> 0x15U))));
        vcdp->chgBit(oldp+15,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__outSer__DOT__data[0U] 
                                     >> 0x16U))));
        vcdp->chgBit(oldp+16,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__outSer__DOT__data[0U] 
                                     >> 0x17U))));
        vcdp->chgBit(oldp+17,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__outSer__DOT__data[0U] 
                                     >> 0x18U))));
        vcdp->chgBit(oldp+18,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__outSer__DOT__data[0U] 
                                     >> 0x19U))));
        vcdp->chgBit(oldp+19,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__outSer__DOT__data[0U] 
                                     >> 0x1aU))));
        vcdp->chgBit(oldp+20,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__outSer__DOT__data[0U] 
                                     >> 0x1bU))));
    }
}

void VTestHarness::traceChgThis__5032(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+40434);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__outSer__DOT__data[0U] 
                                    >> 0x1cU))));
        vcdp->chgBit(oldp+1,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__outSer__DOT__data[0U] 
                                    >> 0x1dU))));
        vcdp->chgBit(oldp+2,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__outSer__DOT__data[0U] 
                                    >> 0x1eU))));
        vcdp->chgBit(oldp+3,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__outSer__DOT__data[0U] 
                                    >> 0x1fU))));
        vcdp->chgBit(oldp+4,((1U & vlTOPp->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)));
        vcdp->chgBit(oldp+5,((1U & (vlTOPp->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                    >> 1U))));
        vcdp->chgBit(oldp+6,((1U & (vlTOPp->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                    >> 2U))));
        vcdp->chgBit(oldp+7,((1U & (vlTOPp->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                    >> 3U))));
        vcdp->chgBit(oldp+8,((1U & (vlTOPp->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                    >> 4U))));
        vcdp->chgBit(oldp+9,((1U & (vlTOPp->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                    >> 5U))));
        vcdp->chgBit(oldp+10,((1U & (vlTOPp->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                     >> 6U))));
        vcdp->chgBit(oldp+11,((1U & (vlTOPp->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                     >> 7U))));
        vcdp->chgBit(oldp+12,((1U & (vlTOPp->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                     >> 8U))));
        vcdp->chgBit(oldp+13,((1U & (vlTOPp->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                     >> 9U))));
        vcdp->chgBit(oldp+14,((1U & (vlTOPp->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                     >> 0xaU))));
        vcdp->chgBit(oldp+15,((1U & (vlTOPp->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                     >> 0xbU))));
        vcdp->chgBit(oldp+16,((1U & (vlTOPp->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                     >> 0xcU))));
        vcdp->chgBit(oldp+17,((1U & (vlTOPp->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                     >> 0xdU))));
        vcdp->chgBit(oldp+18,((1U & (vlTOPp->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                     >> 0xeU))));
        vcdp->chgBit(oldp+19,((1U & (vlTOPp->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                     >> 0xfU))));
        vcdp->chgBit(oldp+20,((1U & (vlTOPp->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                     >> 0x10U))));
    }
}

void VTestHarness::traceChgThis__5034(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+40455);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((1U & (vlTOPp->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                    >> 0x11U))));
        vcdp->chgBit(oldp+1,((1U & (vlTOPp->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                    >> 0x12U))));
        vcdp->chgBit(oldp+2,((1U & (vlTOPp->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                    >> 0x13U))));
        vcdp->chgBit(oldp+3,((1U & (vlTOPp->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                    >> 0x14U))));
        vcdp->chgBit(oldp+4,((1U & (vlTOPp->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                    >> 0x15U))));
        vcdp->chgBit(oldp+5,((1U & (vlTOPp->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                    >> 0x16U))));
        vcdp->chgBit(oldp+6,((1U & (vlTOPp->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                    >> 0x17U))));
        vcdp->chgBit(oldp+7,((1U & (vlTOPp->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                    >> 0x18U))));
        vcdp->chgBit(oldp+8,((1U & (vlTOPp->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                    >> 0x19U))));
        vcdp->chgBit(oldp+9,((1U & (vlTOPp->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                    >> 0x1aU))));
        vcdp->chgBit(oldp+10,((1U & (vlTOPp->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                     >> 0x1bU))));
        vcdp->chgBit(oldp+11,((1U & (vlTOPp->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                     >> 0x1cU))));
        vcdp->chgBit(oldp+12,((1U & (vlTOPp->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                     >> 0x1dU))));
        vcdp->chgBit(oldp+13,((1U & (vlTOPp->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                     >> 0x1eU))));
        vcdp->chgBit(oldp+14,((1U & (vlTOPp->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                     >> 0x1fU))));
        vcdp->chgCData(oldp+15,((0xffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__outSer__DOT__data[0U])),8);
        vcdp->chgSData(oldp+16,((0xffffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__outSer__DOT__data[0U])),16);
        vcdp->chgCData(oldp+17,((0xffU & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__outSer__DOT__data[1U] 
                                           << 0x10U) 
                                          | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__outSer__DOT__data[0U] 
                                             >> 0x10U)))),8);
        vcdp->chgSData(oldp+18,((0xffffU & ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__outSer__DOT__data[1U] 
                                             << 0x10U) 
                                            | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__outSer__DOT__data[0U] 
                                               >> 0x10U)))),16);
        vcdp->chgCData(oldp+19,((0xffU & vlTOPp->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)),8);
        vcdp->chgSData(oldp+20,((0xffffU & vlTOPp->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)),16);
    }
}

void VTestHarness::traceChgThis__5036(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+40476);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*127:0*/ __Vtemp28200[4];
    // Body
    {
        vcdp->chgCData(oldp+0,((0xffU & (vlTOPp->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                         >> 0x10U))),8);
        vcdp->chgSData(oldp+1,((0xffffU & (vlTOPp->TestHarness__DOT__bits_in_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                           >> 0x10U))),16);
        __Vtemp28200[0U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__ram_data
            [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__value_1][0U];
        __Vtemp28200[1U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__ram_data
            [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__value_1][1U];
        __Vtemp28200[2U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__ram_data
            [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__value_1][2U];
        __Vtemp28200[3U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__ram_data
            [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__value_1][3U];
        vcdp->chgWData(oldp+2,(__Vtemp28200),128);
        vcdp->chgBit(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__ram_corrupt
                             [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__value_1]));
        vcdp->chgBit(oldp+7,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q__DOT__maybe_full)))));
        vcdp->chgQData(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_data
                               [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]),64);
        vcdp->chgQData(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data
                                [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1]),64);
        vcdp->chgBit(oldp+12,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                              [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1]));
        vcdp->chgQData(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data
                                [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]),64);
        vcdp->chgBit(oldp+15,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                              [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]));
        vcdp->chgBit(oldp+16,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                              [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]));
        vcdp->chgBit(oldp+17,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full)))));
        vcdp->chgBit(oldp+18,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full));
        vcdp->chgCData(oldp+19,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_read
                                [0U]),3);
        vcdp->chgCData(oldp+20,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_extra_tlrr_extra_size
                                [0U]),2);
        vcdp->chgSData(oldp+21,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                                [0U]),11);
        vcdp->chgBit(oldp+22,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full));
        vcdp->chgCData(oldp+23,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode
                                [0U]),3);
        vcdp->chgCData(oldp+24,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                                [0U]),3);
        vcdp->chgCData(oldp+25,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size
                                [0U]),2);
        vcdp->chgSData(oldp+26,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source
                                [0U]),11);
        vcdp->chgIData(oldp+27,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address
                                [0U]),26);
        vcdp->chgCData(oldp+28,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask
                                [0U]),8);
        vcdp->chgQData(oldp+29,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data
                                [0U]),64);
        vcdp->chgBit(oldp+31,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                              [0U]));
        vcdp->chgBit(oldp+32,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full)))));
        vcdp->chgCData(oldp+33,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_read
                                [0U]),3);
    }
}

void VTestHarness::traceChgThis__5038(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+40510);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgCData(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_extra_tlrr_extra_size
                               [0U]),2);
        vcdp->chgSData(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                               [0U]),11);
        vcdp->chgQData(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data
                               [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1]),64);
        vcdp->chgBit(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                             [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1]));
        vcdp->chgCData(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__beatsLeft_3),8);
        vcdp->chgBit(oldp+6,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__beatsLeft_3))));
        vcdp->chgCData(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_mask_3),2);
        vcdp->chgBit(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__state_3_0));
        vcdp->chgBit(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__state_3_1));
        vcdp->chgCData(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__beatsLeft_4),8);
        vcdp->chgBit(oldp+11,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__beatsLeft_4))));
        vcdp->chgCData(oldp+12,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_mask_4),2);
        vcdp->chgBit(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__state_4_0));
        vcdp->chgBit(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__state_4_1));
        vcdp->chgCData(oldp+15,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__beatsLeft),8);
        vcdp->chgBit(oldp+16,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__beatsLeft))));
        vcdp->chgCData(oldp+17,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_mask),3);
        vcdp->chgBit(oldp+18,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__state___05F0));
        vcdp->chgCData(oldp+19,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__beatsLeft_1),8);
        vcdp->chgBit(oldp+20,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__beatsLeft_1))));
        vcdp->chgCData(oldp+21,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_mask_1),3);
        vcdp->chgBit(oldp+22,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__state_1_0));
        vcdp->chgBit(oldp+23,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__state___05F1));
        vcdp->chgBit(oldp+24,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__state_1_1));
        vcdp->chgBit(oldp+25,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__state___05F2));
        vcdp->chgBit(oldp+26,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__state_1_2));
        vcdp->chgCData(oldp+27,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__beatsLeft_2),8);
        vcdp->chgBit(oldp+28,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__beatsLeft_2))));
        vcdp->chgCData(oldp+29,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_mask_2),2);
        vcdp->chgBit(oldp+30,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__state_2_0));
        vcdp->chgBit(oldp+31,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__state_2_1));
        vcdp->chgCData(oldp+32,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__a_first_counter),8);
        vcdp->chgCData(oldp+33,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__a_first_counter) 
                                          - (IData)(1U)))),8);
        vcdp->chgBit(oldp+34,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__a_first_counter))));
        vcdp->chgCData(oldp+35,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__opcode),3);
        vcdp->chgCData(oldp+36,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__param),3);
        vcdp->chgCData(oldp+37,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__size),4);
        vcdp->chgBit(oldp+38,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__source));
        vcdp->chgIData(oldp+39,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__address),32);
        vcdp->chgCData(oldp+40,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__d_first_counter),8);
    }
}

void VTestHarness::traceChgThis__5040(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+40551);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgCData(oldp+0,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__d_first_counter) 
                                         - (IData)(1U)))),8);
        vcdp->chgBit(oldp+1,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__d_first_counter))));
        vcdp->chgCData(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__opcode_1),3);
        vcdp->chgCData(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__param_1),2);
        vcdp->chgCData(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__size_1),4);
        vcdp->chgCData(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__sink),4);
        vcdp->chgBit(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__denied));
        vcdp->chgBit(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight));
        vcdp->chgCData(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes),4);
        vcdp->chgCData(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes),8);
        vcdp->chgCData(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__a_first_counter_1),8);
        vcdp->chgCData(oldp+11,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__a_first_counter_1) 
                                          - (IData)(1U)))),8);
        vcdp->chgBit(oldp+12,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__a_first_counter_1))));
        vcdp->chgCData(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__d_first_counter_1),8);
        vcdp->chgCData(oldp+14,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__d_first_counter_1) 
                                          - (IData)(1U)))),8);
        vcdp->chgBit(oldp+15,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__d_first_counter_1))));
        vcdp->chgCData(oldp+16,((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes) 
                                       >> 1U))),4);
        vcdp->chgCData(oldp+17,((0x7fU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes) 
                                          >> 1U))),8);
        vcdp->chgIData(oldp+18,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__watchdog),32);
        vcdp->chgCData(oldp+19,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes_1),8);
        vcdp->chgCData(oldp+20,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__d_first_counter_2),8);
        vcdp->chgCData(oldp+21,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__d_first_counter_2) 
                                          - (IData)(1U)))),8);
        vcdp->chgBit(oldp+22,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__d_first_counter_2))));
        vcdp->chgCData(oldp+23,((0x7fU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes_1) 
                                          >> 1U))),8);
        vcdp->chgCData(oldp+24,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__a_first_counter),8);
        vcdp->chgCData(oldp+25,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__a_first_counter) 
                                          - (IData)(1U)))),8);
        vcdp->chgBit(oldp+26,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__a_first_counter))));
    }
}

void VTestHarness::traceChgThis__5042(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+40578);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgCData(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__opcode),3);
        vcdp->chgCData(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__param),3);
        vcdp->chgCData(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__size),4);
        vcdp->chgCData(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__source),5);
        vcdp->chgIData(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__address),32);
        vcdp->chgCData(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__d_first_counter),8);
        vcdp->chgCData(oldp+6,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__d_first_counter) 
                                         - (IData)(1U)))),8);
        vcdp->chgBit(oldp+7,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__d_first_counter))));
        vcdp->chgCData(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__opcode_1),3);
        vcdp->chgCData(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__param_1),2);
        vcdp->chgCData(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__size_1),4);
        vcdp->chgCData(oldp+11,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__source_1),5);
        vcdp->chgCData(oldp+12,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__sink),4);
        vcdp->chgBit(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__denied));
        vcdp->chgIData(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__inflight),32);
        vcdp->chgWData(oldp+15,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__inflight_opcodes),128);
        vcdp->chgWData(oldp+19,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__inflight_sizes),256);
        vcdp->chgCData(oldp+27,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__a_first_counter_1),8);
        vcdp->chgCData(oldp+28,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__a_first_counter_1) 
                                          - (IData)(1U)))),8);
        vcdp->chgBit(oldp+29,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__a_first_counter_1))));
        vcdp->chgCData(oldp+30,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__d_first_counter_1),8);
        vcdp->chgCData(oldp+31,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__d_first_counter_1) 
                                          - (IData)(1U)))),8);
        vcdp->chgBit(oldp+32,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__d_first_counter_1))));
        vcdp->chgIData(oldp+33,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__watchdog),32);
        vcdp->chgIData(oldp+34,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__inflight_1),32);
        vcdp->chgWData(oldp+35,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__inflight_sizes_1),256);
        vcdp->chgCData(oldp+43,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__d_first_counter_2),8);
        vcdp->chgCData(oldp+44,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__d_first_counter_2) 
                                          - (IData)(1U)))),8);
        vcdp->chgBit(oldp+45,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__d_first_counter_2))));
        vcdp->chgIData(oldp+46,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__watchdog_1),32);
        vcdp->chgCData(oldp+47,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__a_first_counter),8);
        vcdp->chgCData(oldp+48,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__a_first_counter) 
                                          - (IData)(1U)))),8);
        vcdp->chgBit(oldp+49,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__a_first_counter))));
        vcdp->chgCData(oldp+50,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__opcode),3);
        vcdp->chgCData(oldp+51,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__param),3);
        vcdp->chgCData(oldp+52,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__size),4);
        vcdp->chgCData(oldp+53,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__source),2);
        vcdp->chgIData(oldp+54,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__address),32);
        vcdp->chgCData(oldp+55,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__d_first_counter),8);
        vcdp->chgCData(oldp+56,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__d_first_counter) 
                                          - (IData)(1U)))),8);
    }
}

void VTestHarness::traceChgThis__5044(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+40635);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__d_first_counter))));
        vcdp->chgCData(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__opcode_1),3);
        vcdp->chgCData(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__param_1),2);
        vcdp->chgCData(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__size_1),4);
        vcdp->chgCData(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__source_1),2);
        vcdp->chgCData(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__sink),4);
        vcdp->chgBit(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__denied));
        vcdp->chgCData(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__b_first_counter),8);
        vcdp->chgCData(oldp+8,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__b_first_counter) 
                                         - (IData)(1U)))),8);
        vcdp->chgBit(oldp+9,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__b_first_counter))));
        vcdp->chgCData(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__param_2),2);
        vcdp->chgIData(oldp+11,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__address_1),32);
        vcdp->chgCData(oldp+12,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__c_first_counter),8);
        vcdp->chgCData(oldp+13,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__c_first_counter) 
                                          - (IData)(1U)))),8);
        vcdp->chgBit(oldp+14,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__c_first_counter))));
        vcdp->chgCData(oldp+15,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__opcode_3),3);
        vcdp->chgCData(oldp+16,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__param_3),3);
        vcdp->chgCData(oldp+17,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__size_3),4);
        vcdp->chgCData(oldp+18,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__source_3),2);
        vcdp->chgIData(oldp+19,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__address_2),32);
        vcdp->chgCData(oldp+20,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__inflight),3);
        vcdp->chgSData(oldp+21,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__inflight_opcodes),12);
        vcdp->chgIData(oldp+22,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__inflight_sizes),24);
        vcdp->chgCData(oldp+23,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__a_first_counter_1),8);
        vcdp->chgCData(oldp+24,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__a_first_counter_1) 
                                          - (IData)(1U)))),8);
        vcdp->chgBit(oldp+25,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__a_first_counter_1))));
        vcdp->chgCData(oldp+26,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__d_first_counter_1),8);
        vcdp->chgCData(oldp+27,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__d_first_counter_1) 
                                          - (IData)(1U)))),8);
        vcdp->chgBit(oldp+28,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__d_first_counter_1))));
        vcdp->chgIData(oldp+29,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__watchdog),32);
        vcdp->chgCData(oldp+30,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__inflight_1),3);
        vcdp->chgIData(oldp+31,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__inflight_sizes_1),24);
        vcdp->chgCData(oldp+32,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__c_first_counter_1),8);
        vcdp->chgCData(oldp+33,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__c_first_counter_1) 
                                          - (IData)(1U)))),8);
        vcdp->chgBit(oldp+34,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__c_first_counter_1))));
        vcdp->chgCData(oldp+35,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__d_first_counter_2),8);
        vcdp->chgCData(oldp+36,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__d_first_counter_2) 
                                          - (IData)(1U)))),8);
        vcdp->chgBit(oldp+37,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__d_first_counter_2))));
    }
}

void VTestHarness::traceChgThis__5046(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+40673);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgIData(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__watchdog_1),32);
        vcdp->chgSData(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__inflight_2),16);
        vcdp->chgCData(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__d_first_counter_3),8);
        vcdp->chgCData(oldp+3,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__d_first_counter_3) 
                                         - (IData)(1U)))),8);
        vcdp->chgBit(oldp+4,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__d_first_counter_3))));
        vcdp->chgCData(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__a_first_counter),8);
        vcdp->chgCData(oldp+6,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__a_first_counter) 
                                         - (IData)(1U)))),8);
        vcdp->chgBit(oldp+7,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__a_first_counter))));
        vcdp->chgCData(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__opcode),3);
        vcdp->chgCData(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__param),3);
        vcdp->chgCData(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__size),4);
        vcdp->chgBit(oldp+11,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__source));
        vcdp->chgIData(oldp+12,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__address),32);
        vcdp->chgCData(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__d_first_counter),8);
        vcdp->chgCData(oldp+14,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__d_first_counter) 
                                          - (IData)(1U)))),8);
        vcdp->chgBit(oldp+15,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__d_first_counter))));
        vcdp->chgCData(oldp+16,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__opcode_1),3);
        vcdp->chgCData(oldp+17,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__param_1),2);
        vcdp->chgCData(oldp+18,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__size_1),4);
        vcdp->chgCData(oldp+19,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__sink),4);
        vcdp->chgBit(oldp+20,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__denied));
        vcdp->chgBit(oldp+21,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__inflight));
        vcdp->chgCData(oldp+22,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes),4);
        vcdp->chgCData(oldp+23,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes),8);
        vcdp->chgCData(oldp+24,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1),8);
        vcdp->chgCData(oldp+25,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1) 
                                          - (IData)(1U)))),8);
        vcdp->chgBit(oldp+26,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1))));
        vcdp->chgCData(oldp+27,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1),8);
        vcdp->chgCData(oldp+28,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1) 
                                          - (IData)(1U)))),8);
        vcdp->chgBit(oldp+29,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))));
        vcdp->chgCData(oldp+30,((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes) 
                                       >> 1U))),4);
        vcdp->chgCData(oldp+31,((0x7fU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes) 
                                          >> 1U))),8);
    }
}

void VTestHarness::traceChgThis__5048(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+40705);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgIData(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__watchdog),32);
        vcdp->chgCData(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1),8);
        vcdp->chgCData(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2),8);
        vcdp->chgCData(oldp+3,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2) 
                                         - (IData)(1U)))),8);
        vcdp->chgBit(oldp+4,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2))));
        vcdp->chgCData(oldp+5,((0x7fU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1) 
                                         >> 1U))),8);
        vcdp->chgCData(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__a_first_counter),8);
        vcdp->chgCData(oldp+7,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__a_first_counter) 
                                         - (IData)(1U)))),8);
        vcdp->chgBit(oldp+8,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__a_first_counter))));
        vcdp->chgCData(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__opcode),3);
        vcdp->chgCData(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__param),3);
        vcdp->chgCData(oldp+11,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__size),4);
        vcdp->chgCData(oldp+12,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__source),5);
        vcdp->chgIData(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__address),32);
        vcdp->chgCData(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__d_first_counter),8);
        vcdp->chgCData(oldp+15,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__d_first_counter) 
                                          - (IData)(1U)))),8);
        vcdp->chgBit(oldp+16,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__d_first_counter))));
        vcdp->chgCData(oldp+17,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__opcode_1),3);
        vcdp->chgCData(oldp+18,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__param_1),2);
        vcdp->chgCData(oldp+19,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__size_1),4);
        vcdp->chgCData(oldp+20,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__source_1),5);
        vcdp->chgCData(oldp+21,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__sink),4);
        vcdp->chgBit(oldp+22,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__denied));
        vcdp->chgIData(oldp+23,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__inflight),32);
        vcdp->chgWData(oldp+24,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__inflight_opcodes),128);
        vcdp->chgWData(oldp+28,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__inflight_sizes),256);
        vcdp->chgCData(oldp+36,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__a_first_counter_1),8);
        vcdp->chgCData(oldp+37,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__a_first_counter_1) 
                                          - (IData)(1U)))),8);
        vcdp->chgBit(oldp+38,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__a_first_counter_1))));
        vcdp->chgCData(oldp+39,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__d_first_counter_1),8);
        vcdp->chgCData(oldp+40,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__d_first_counter_1) 
                                          - (IData)(1U)))),8);
        vcdp->chgBit(oldp+41,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__d_first_counter_1))));
        vcdp->chgIData(oldp+42,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__watchdog),32);
        vcdp->chgIData(oldp+43,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__inflight_1),32);
        vcdp->chgWData(oldp+44,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__inflight_sizes_1),256);
        vcdp->chgCData(oldp+52,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__d_first_counter_2),8);
    }
}

void VTestHarness::traceChgThis__5050(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+40758);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgCData(oldp+0,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__d_first_counter_2) 
                                         - (IData)(1U)))),8);
        vcdp->chgBit(oldp+1,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__d_first_counter_2))));
        vcdp->chgIData(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__watchdog_1),32);
        vcdp->chgCData(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__a_first_counter),8);
        vcdp->chgCData(oldp+4,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__a_first_counter) 
                                         - (IData)(1U)))),8);
        vcdp->chgBit(oldp+5,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__a_first_counter))));
        vcdp->chgCData(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__opcode),3);
        vcdp->chgCData(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__param),3);
        vcdp->chgCData(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__size),4);
        vcdp->chgCData(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__source),2);
        vcdp->chgIData(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__address),32);
        vcdp->chgCData(oldp+11,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__d_first_counter),8);
        vcdp->chgCData(oldp+12,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__d_first_counter) 
                                          - (IData)(1U)))),8);
        vcdp->chgBit(oldp+13,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__d_first_counter))));
        vcdp->chgCData(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__opcode_1),3);
        vcdp->chgCData(oldp+15,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__param_1),2);
        vcdp->chgCData(oldp+16,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__size_1),4);
        vcdp->chgCData(oldp+17,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__source_1),2);
        vcdp->chgCData(oldp+18,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__sink),4);
        vcdp->chgBit(oldp+19,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__denied));
        vcdp->chgCData(oldp+20,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__b_first_counter),8);
        vcdp->chgCData(oldp+21,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__b_first_counter) 
                                          - (IData)(1U)))),8);
        vcdp->chgBit(oldp+22,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__b_first_counter))));
        vcdp->chgCData(oldp+23,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__param_2),2);
        vcdp->chgIData(oldp+24,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__address_1),32);
        vcdp->chgCData(oldp+25,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__c_first_counter),8);
        vcdp->chgCData(oldp+26,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__c_first_counter) 
                                          - (IData)(1U)))),8);
        vcdp->chgBit(oldp+27,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__c_first_counter))));
        vcdp->chgCData(oldp+28,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__opcode_3),3);
        vcdp->chgCData(oldp+29,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__param_3),3);
        vcdp->chgCData(oldp+30,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__size_3),4);
        vcdp->chgCData(oldp+31,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__source_3),2);
        vcdp->chgIData(oldp+32,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__address_2),32);
        vcdp->chgCData(oldp+33,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__inflight),3);
        vcdp->chgSData(oldp+34,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__inflight_opcodes),12);
        vcdp->chgIData(oldp+35,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__inflight_sizes),24);
        vcdp->chgCData(oldp+36,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__a_first_counter_1),8);
        vcdp->chgCData(oldp+37,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__a_first_counter_1) 
                                          - (IData)(1U)))),8);
        vcdp->chgBit(oldp+38,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__a_first_counter_1))));
    }
}

void VTestHarness::traceChgThis__5052(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+40797);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgCData(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__d_first_counter_1),8);
        vcdp->chgCData(oldp+1,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__d_first_counter_1) 
                                         - (IData)(1U)))),8);
        vcdp->chgBit(oldp+2,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__d_first_counter_1))));
        vcdp->chgIData(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__watchdog),32);
        vcdp->chgCData(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__inflight_1),3);
        vcdp->chgIData(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__inflight_sizes_1),24);
        vcdp->chgCData(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__c_first_counter_1),8);
        vcdp->chgCData(oldp+7,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__c_first_counter_1) 
                                         - (IData)(1U)))),8);
        vcdp->chgBit(oldp+8,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__c_first_counter_1))));
        vcdp->chgCData(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__d_first_counter_2),8);
        vcdp->chgCData(oldp+10,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__d_first_counter_2) 
                                          - (IData)(1U)))),8);
        vcdp->chgBit(oldp+11,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__d_first_counter_2))));
        vcdp->chgIData(oldp+12,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__watchdog_1),32);
        vcdp->chgSData(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__inflight_2),16);
        vcdp->chgCData(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__d_first_counter_3),8);
        vcdp->chgCData(oldp+15,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__d_first_counter_3) 
                                          - (IData)(1U)))),8);
        vcdp->chgBit(oldp+16,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__d_first_counter_3))));
        vcdp->chgBit(oldp+17,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeat_count));
        vcdp->chgBit(oldp+18,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__count));
        vcdp->chgBit(oldp+19,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__corrupt_reg));
        vcdp->chgBit(oldp+20,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__bundleIn_0_d_bits_data_rdata_written_once));
        vcdp->chgQData(oldp+21,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__bundleIn_0_d_bits_data_rdata_0),64);
        vcdp->chgCData(oldp+23,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__a_first_counter),8);
        vcdp->chgCData(oldp+24,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__a_first_counter) 
                                          - (IData)(1U)))),8);
        vcdp->chgBit(oldp+25,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__a_first_counter))));
        vcdp->chgCData(oldp+26,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__opcode),3);
        vcdp->chgCData(oldp+27,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__param),3);
        vcdp->chgCData(oldp+28,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__size),4);
        vcdp->chgCData(oldp+29,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__source),6);
        vcdp->chgIData(oldp+30,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__address),31);
        vcdp->chgCData(oldp+31,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter),8);
        vcdp->chgCData(oldp+32,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter) 
                                          - (IData)(1U)))),8);
        vcdp->chgBit(oldp+33,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter))));
        vcdp->chgCData(oldp+34,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__opcode_1),3);
        vcdp->chgCData(oldp+35,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__param_1),2);
        vcdp->chgCData(oldp+36,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__size_1),4);
        vcdp->chgCData(oldp+37,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__source_1),6);
        vcdp->chgBit(oldp+38,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__sink));
        vcdp->chgBit(oldp+39,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__denied));
    }
}

void VTestHarness::traceChgThis__5054(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+40837);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgQData(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight),37);
        vcdp->chgWData(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_opcodes),148);
        vcdp->chgWData(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes),296);
        vcdp->chgCData(oldp+17,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__a_first_counter_1),8);
        vcdp->chgCData(oldp+18,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__a_first_counter_1) 
                                          - (IData)(1U)))),8);
        vcdp->chgBit(oldp+19,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__a_first_counter_1))));
        vcdp->chgCData(oldp+20,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter_1),8);
        vcdp->chgCData(oldp+21,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter_1) 
                                          - (IData)(1U)))),8);
        vcdp->chgBit(oldp+22,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter_1))));
        vcdp->chgIData(oldp+23,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__watchdog),32);
        vcdp->chgQData(oldp+24,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_1),37);
        vcdp->chgWData(oldp+26,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes_1),296);
        vcdp->chgCData(oldp+36,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter_2),8);
        vcdp->chgCData(oldp+37,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter_2) 
                                          - (IData)(1U)))),8);
        vcdp->chgBit(oldp+38,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter_2))));
        vcdp->chgIData(oldp+39,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__watchdog_1),32);
        vcdp->chgBit(oldp+40,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT__full));
        vcdp->chgCData(oldp+41,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT__saved_opcode),3);
        vcdp->chgCData(oldp+42,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT__saved_param),3);
        vcdp->chgCData(oldp+43,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT__saved_size),4);
        vcdp->chgCData(oldp+44,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT__saved_source),6);
        vcdp->chgIData(oldp+45,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT__saved_address),31);
        vcdp->chgSData(oldp+46,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT__saved_mask),16);
        vcdp->chgWData(oldp+47,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT__saved_data),128);
        vcdp->chgBit(oldp+51,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT__saved_corrupt));
        vcdp->chgBit(oldp+52,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__count));
        vcdp->chgBit(oldp+53,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__corrupt_reg));
        vcdp->chgBit(oldp+54,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__bundleOut_0_a_bits_data_rdata_written_once));
        vcdp->chgQData(oldp+55,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__bundleOut_0_a_bits_data_rdata_0),64);
        vcdp->chgBit(oldp+57,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__bundleOut_0_a_bits_mask_rdata_written_once));
        vcdp->chgCData(oldp+58,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__bundleOut_0_a_bits_mask_rdata_0),8);
        vcdp->chgBit(oldp+59,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeat_count));
        vcdp->chgBit(oldp+60,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeat_count)))));
        vcdp->chgBit(oldp+61,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeat_sel_sel_sources_0));
        vcdp->chgBit(oldp+62,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeat_sel_hold_r));
        vcdp->chgSData(oldp+63,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__a_first_counter),9);
        vcdp->chgSData(oldp+64,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__a_first_counter) 
                                           - (IData)(1U)))),9);
        vcdp->chgBit(oldp+65,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__a_first_counter))));
        vcdp->chgCData(oldp+66,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__opcode),3);
        vcdp->chgCData(oldp+67,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__param),3);
        vcdp->chgCData(oldp+68,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__size),4);
        vcdp->chgBit(oldp+69,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__source));
    }
}

void VTestHarness::traceChgThis__5056(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+40907);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgIData(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__address),32);
        vcdp->chgSData(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__d_first_counter),9);
        vcdp->chgSData(oldp+2,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__d_first_counter) 
                                          - (IData)(1U)))),9);
        vcdp->chgBit(oldp+3,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__d_first_counter))));
        vcdp->chgCData(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__opcode_1),3);
        vcdp->chgCData(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__param_1),2);
        vcdp->chgCData(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__size_1),4);
        vcdp->chgCData(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__sink),4);
        vcdp->chgBit(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__denied));
        vcdp->chgBit(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__inflight));
        vcdp->chgCData(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__inflight_opcodes),4);
        vcdp->chgCData(oldp+11,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__inflight_sizes),8);
        vcdp->chgSData(oldp+12,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__a_first_counter_1),9);
        vcdp->chgSData(oldp+13,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__a_first_counter_1) 
                                           - (IData)(1U)))),9);
        vcdp->chgBit(oldp+14,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__a_first_counter_1))));
        vcdp->chgSData(oldp+15,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__d_first_counter_1),9);
        vcdp->chgSData(oldp+16,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__d_first_counter_1) 
                                           - (IData)(1U)))),9);
        vcdp->chgBit(oldp+17,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__d_first_counter_1))));
        vcdp->chgCData(oldp+18,((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__inflight_opcodes) 
                                       >> 1U))),4);
        vcdp->chgCData(oldp+19,((0x7fU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__inflight_sizes) 
                                          >> 1U))),8);
        vcdp->chgIData(oldp+20,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__watchdog),32);
        vcdp->chgCData(oldp+21,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__inflight_sizes_1),8);
        vcdp->chgSData(oldp+22,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__d_first_counter_2),9);
        vcdp->chgSData(oldp+23,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__d_first_counter_2) 
                                           - (IData)(1U)))),9);
        vcdp->chgBit(oldp+24,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__d_first_counter_2))));
        vcdp->chgCData(oldp+25,((0x7fU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__inflight_sizes_1) 
                                          >> 1U))),8);
        vcdp->chgBit(oldp+26,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeated_repeater__DOT__full));
        vcdp->chgCData(oldp+27,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeated_repeater__DOT__saved_opcode),3);
    }
}

void VTestHarness::traceChgThis__5058(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+40935);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgCData(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeated_repeater__DOT__saved_param),2);
        vcdp->chgCData(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeated_repeater__DOT__saved_size),4);
        vcdp->chgCData(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeated_repeater__DOT__saved_sink),4);
        vcdp->chgBit(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeated_repeater__DOT__saved_denied));
        vcdp->chgWData(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeated_repeater__DOT__saved_data),128);
        vcdp->chgBit(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__repeated_repeater__DOT__saved_corrupt));
        vcdp->chgQData(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__bootAddrReg),64);
        vcdp->chgCData(oldp+11,((0xffU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__bootAddrReg))),8);
        vcdp->chgCData(oldp+12,((0xffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__bootAddrReg 
                                                  >> 8U)))),8);
        vcdp->chgCData(oldp+13,((0xffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__bootAddrReg 
                                                  >> 0x10U)))),8);
        vcdp->chgCData(oldp+14,((0xffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__bootAddrReg 
                                                  >> 0x18U)))),8);
        vcdp->chgCData(oldp+15,((0xffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__bootAddrReg 
                                                  >> 0x20U)))),8);
        vcdp->chgCData(oldp+16,((0xffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__bootAddrReg 
                                                  >> 0x28U)))),8);
        vcdp->chgCData(oldp+17,((0xffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__bootAddrReg 
                                                  >> 0x30U)))),8);
        vcdp->chgCData(oldp+18,((0xffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__bootAddrReg 
                                                  >> 0x38U)))),8);
        vcdp->chgCData(oldp+19,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__a_first_counter),3);
        vcdp->chgCData(oldp+20,((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__a_first_counter) 
                                       - (IData)(1U)))),3);
        vcdp->chgBit(oldp+21,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__a_first_counter))));
        vcdp->chgCData(oldp+22,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__opcode),3);
        vcdp->chgCData(oldp+23,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__param),3);
        vcdp->chgCData(oldp+24,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__size),3);
        vcdp->chgCData(oldp+25,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__source),7);
        vcdp->chgIData(oldp+26,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__address),31);
        vcdp->chgCData(oldp+27,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter),3);
        vcdp->chgCData(oldp+28,((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter) 
                                       - (IData)(1U)))),3);
        vcdp->chgBit(oldp+29,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter))));
        vcdp->chgCData(oldp+30,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__opcode_1),3);
        vcdp->chgCData(oldp+31,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__size_1),3);
        vcdp->chgCData(oldp+32,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__source_1),7);
        vcdp->chgWData(oldp+33,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__inflight),65);
        vcdp->chgWData(oldp+36,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes),260);
        vcdp->chgWData(oldp+45,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes),260);
        vcdp->chgCData(oldp+54,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1),3);
        vcdp->chgCData(oldp+55,((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1) 
                                       - (IData)(1U)))),3);
    }
}

void VTestHarness::traceChgThis__5060(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+40991);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1))));
        vcdp->chgCData(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1),3);
        vcdp->chgCData(oldp+2,((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1) 
                                      - (IData)(1U)))),3);
        vcdp->chgBit(oldp+3,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))));
        vcdp->chgIData(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__watchdog),32);
        vcdp->chgWData(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__inflight_1),65);
        vcdp->chgWData(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1),260);
        vcdp->chgCData(oldp+17,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2),3);
        vcdp->chgCData(oldp+18,((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2) 
                                       - (IData)(1U)))),3);
        vcdp->chgBit(oldp+19,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2))));
        vcdp->chgIData(oldp+20,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__watchdog_1),32);
        vcdp->chgCData(oldp+21,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__beatsLeft),3);
        vcdp->chgBit(oldp+22,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__beatsLeft))));
        vcdp->chgCData(oldp+23,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__readys_mask),2);
        vcdp->chgBit(oldp+24,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__state_0));
        vcdp->chgBit(oldp+25,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__state_1));
        vcdp->chgCData(oldp+26,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter),3);
        vcdp->chgCData(oldp+27,((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter) 
                                       - (IData)(1U)))),3);
        vcdp->chgBit(oldp+28,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter))));
        vcdp->chgCData(oldp+29,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__opcode),3);
        vcdp->chgCData(oldp+30,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__param),3);
        vcdp->chgCData(oldp+31,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__size),3);
        vcdp->chgCData(oldp+32,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__source),7);
        vcdp->chgIData(oldp+33,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__address),31);
        vcdp->chgCData(oldp+34,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter),3);
        vcdp->chgCData(oldp+35,((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter) 
                                       - (IData)(1U)))),3);
        vcdp->chgBit(oldp+36,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter))));
        vcdp->chgCData(oldp+37,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__opcode_1),3);
        vcdp->chgCData(oldp+38,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__size_1),3);
        vcdp->chgCData(oldp+39,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__source_1),7);
        vcdp->chgWData(oldp+40,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__inflight),65);
        vcdp->chgWData(oldp+43,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_opcodes),260);
        vcdp->chgWData(oldp+52,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes),260);
        vcdp->chgCData(oldp+61,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1),3);
        vcdp->chgCData(oldp+62,((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1) 
                                       - (IData)(1U)))),3);
        vcdp->chgBit(oldp+63,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1))));
        vcdp->chgCData(oldp+64,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1),3);
        vcdp->chgCData(oldp+65,((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1) 
                                       - (IData)(1U)))),3);
    }
}

void VTestHarness::traceChgThis__5062(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+41057);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))));
        vcdp->chgIData(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__watchdog),32);
        vcdp->chgWData(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1),65);
        vcdp->chgWData(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes_1),260);
        vcdp->chgCData(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2),3);
        vcdp->chgCData(oldp+15,((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2) 
                                       - (IData)(1U)))),3);
        vcdp->chgBit(oldp+16,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2))));
        vcdp->chgIData(oldp+17,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__watchdog_1),32);
        vcdp->chgCData(oldp+18,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__a_first_counter),3);
        vcdp->chgCData(oldp+19,((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__a_first_counter) 
                                       - (IData)(1U)))),3);
        vcdp->chgBit(oldp+20,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__a_first_counter))));
        vcdp->chgCData(oldp+21,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__opcode),3);
        vcdp->chgCData(oldp+22,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__param),3);
        vcdp->chgCData(oldp+23,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__size),3);
        vcdp->chgCData(oldp+24,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__source),7);
        vcdp->chgIData(oldp+25,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__address),31);
        vcdp->chgCData(oldp+26,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__d_first_counter),3);
        vcdp->chgCData(oldp+27,((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__d_first_counter) 
                                       - (IData)(1U)))),3);
        vcdp->chgBit(oldp+28,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__d_first_counter))));
        vcdp->chgCData(oldp+29,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__opcode_1),3);
        vcdp->chgCData(oldp+30,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__param_1),2);
        vcdp->chgCData(oldp+31,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__size_1),3);
        vcdp->chgCData(oldp+32,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__source_1),7);
        vcdp->chgBit(oldp+33,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__sink));
        vcdp->chgBit(oldp+34,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__denied));
        vcdp->chgWData(oldp+35,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__inflight),65);
        vcdp->chgWData(oldp+38,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__inflight_opcodes),260);
        vcdp->chgWData(oldp+47,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes),260);
        vcdp->chgCData(oldp+56,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__a_first_counter_1),3);
        vcdp->chgCData(oldp+57,((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__a_first_counter_1) 
                                       - (IData)(1U)))),3);
        vcdp->chgBit(oldp+58,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))));
        vcdp->chgCData(oldp+59,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1),3);
        vcdp->chgCData(oldp+60,((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1) 
                                       - (IData)(1U)))),3);
        vcdp->chgBit(oldp+61,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))));
        vcdp->chgIData(oldp+62,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__watchdog),32);
        vcdp->chgWData(oldp+63,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__inflight_1),65);
        vcdp->chgWData(oldp+66,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1),260);
        vcdp->chgCData(oldp+75,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_2),3);
        vcdp->chgCData(oldp+76,((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_2) 
                                       - (IData)(1U)))),3);
    }
}

void VTestHarness::traceChgThis__5064(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+41134);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))));
        vcdp->chgIData(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__watchdog_1),32);
        vcdp->chgCData(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode[0]),3);
        vcdp->chgCData(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode[1]),3);
        vcdp->chgBit(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1));
        vcdp->chgBit(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value));
        vcdp->chgCData(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param[0]),3);
        vcdp->chgCData(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param[1]),3);
        vcdp->chgCData(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size[0]),3);
        vcdp->chgCData(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size[1]),3);
        vcdp->chgCData(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source[0]),7);
        vcdp->chgCData(oldp+11,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source[1]),7);
        vcdp->chgIData(oldp+12,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address[0]),31);
        vcdp->chgIData(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address[1]),31);
        vcdp->chgCData(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask[0]),8);
        vcdp->chgCData(oldp+15,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask[1]),8);
        vcdp->chgQData(oldp+16,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data[0]),64);
        vcdp->chgQData(oldp+18,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data[1]),64);
        vcdp->chgBit(oldp+20,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt[0]));
        vcdp->chgBit(oldp+21,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt[1]));
        vcdp->chgBit(oldp+22,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full));
        vcdp->chgCData(oldp+23,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode[0]),3);
        vcdp->chgCData(oldp+24,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode[1]),3);
        vcdp->chgBit(oldp+25,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1));
        vcdp->chgBit(oldp+26,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value));
        vcdp->chgCData(oldp+27,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param[0]),2);
        vcdp->chgCData(oldp+28,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param[1]),2);
        vcdp->chgCData(oldp+29,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size[0]),3);
        vcdp->chgCData(oldp+30,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size[1]),3);
        vcdp->chgCData(oldp+31,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source[0]),7);
        vcdp->chgCData(oldp+32,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source[1]),7);
        vcdp->chgBit(oldp+33,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink[0]));
        vcdp->chgBit(oldp+34,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink[1]));
        vcdp->chgBit(oldp+35,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied[0]));
        vcdp->chgBit(oldp+36,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied[1]));
        vcdp->chgQData(oldp+37,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data[0]),64);
        vcdp->chgQData(oldp+39,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data[1]),64);
        vcdp->chgBit(oldp+41,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt[0]));
        vcdp->chgBit(oldp+42,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt[1]));
        vcdp->chgBit(oldp+43,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full));
        vcdp->chgCData(oldp+44,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_s_0_state),2);
        vcdp->chgCData(oldp+45,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_opcode),3);
        vcdp->chgCData(oldp+46,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_param),3);
        vcdp->chgCData(oldp+47,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_size),3);
        vcdp->chgCData(oldp+48,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_source),7);
        vcdp->chgIData(oldp+49,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_address),31);
        vcdp->chgCData(oldp+50,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_mask),8);
        vcdp->chgQData(oldp+51,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data),64);
        vcdp->chgBit(oldp+53,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_corrupt));
        vcdp->chgCData(oldp+54,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut),4);
        vcdp->chgQData(oldp+55,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data),64);
        vcdp->chgBit(oldp+57,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_denied));
        vcdp->chgBit(oldp+58,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_corrupt));
        vcdp->chgBit(oldp+59,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_s_0_state))));
        vcdp->chgBit(oldp+60,((2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_s_0_state))));
        vcdp->chgBit(oldp+61,(((3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_s_0_state)) 
                               | (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_s_0_state)))));
        vcdp->chgBit(oldp+62,((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_s_0_state))));
        vcdp->chgCData(oldp+63,(((2U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data) 
                                        << 1U)) | (1U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data)))),2);
    }
}

void VTestHarness::traceChgThis__5066(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+41198);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgCData(oldp+0,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 1U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 1U))))),2);
        vcdp->chgCData(oldp+1,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 2U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 2U))))),2);
        vcdp->chgCData(oldp+2,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 3U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 3U))))),2);
        vcdp->chgCData(oldp+3,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 4U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 4U))))),2);
        vcdp->chgCData(oldp+4,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 5U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 5U))))),2);
        vcdp->chgCData(oldp+5,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 6U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 6U))))),2);
        vcdp->chgCData(oldp+6,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 7U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 7U))))),2);
        vcdp->chgCData(oldp+7,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 8U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 8U))))),2);
        vcdp->chgCData(oldp+8,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 9U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 9U))))),2);
        vcdp->chgCData(oldp+9,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0xaU)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0xaU))))),2);
        vcdp->chgCData(oldp+10,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                 >> 0xbU)) 
                                        << 1U)) | (1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                              >> 0xbU))))),2);
    }
}

void VTestHarness::traceChgThis__5068(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+41209);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgCData(oldp+0,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0xcU)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0xcU))))),2);
        vcdp->chgCData(oldp+1,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0xdU)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0xdU))))),2);
        vcdp->chgCData(oldp+2,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0xeU)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0xeU))))),2);
        vcdp->chgCData(oldp+3,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0xfU)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0xfU))))),2);
        vcdp->chgCData(oldp+4,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x10U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x10U))))),2);
        vcdp->chgCData(oldp+5,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x11U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x11U))))),2);
        vcdp->chgCData(oldp+6,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x12U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x12U))))),2);
        vcdp->chgCData(oldp+7,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x13U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x13U))))),2);
        vcdp->chgCData(oldp+8,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x14U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x14U))))),2);
        vcdp->chgCData(oldp+9,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x15U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x15U))))),2);
        vcdp->chgCData(oldp+10,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                 >> 0x16U)) 
                                        << 1U)) | (1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                              >> 0x16U))))),2);
    }
}

void VTestHarness::traceChgThis__5070(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+41220);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgCData(oldp+0,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x17U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x17U))))),2);
        vcdp->chgCData(oldp+1,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x18U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x18U))))),2);
        vcdp->chgCData(oldp+2,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x19U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x19U))))),2);
        vcdp->chgCData(oldp+3,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x1aU)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x1aU))))),2);
        vcdp->chgCData(oldp+4,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x1bU)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x1bU))))),2);
        vcdp->chgCData(oldp+5,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x1cU)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x1cU))))),2);
        vcdp->chgCData(oldp+6,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x1dU)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x1dU))))),2);
        vcdp->chgCData(oldp+7,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x1eU)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x1eU))))),2);
        vcdp->chgCData(oldp+8,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x1fU)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x1fU))))),2);
        vcdp->chgCData(oldp+9,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x20U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x20U))))),2);
        vcdp->chgCData(oldp+10,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                 >> 0x21U)) 
                                        << 1U)) | (1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                              >> 0x21U))))),2);
    }
}

void VTestHarness::traceChgThis__5072(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+41231);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgCData(oldp+0,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x22U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x22U))))),2);
        vcdp->chgCData(oldp+1,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x23U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x23U))))),2);
        vcdp->chgCData(oldp+2,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x24U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x24U))))),2);
        vcdp->chgCData(oldp+3,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x25U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x25U))))),2);
        vcdp->chgCData(oldp+4,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x26U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x26U))))),2);
        vcdp->chgCData(oldp+5,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x27U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x27U))))),2);
        vcdp->chgCData(oldp+6,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x28U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x28U))))),2);
        vcdp->chgCData(oldp+7,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x29U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x29U))))),2);
        vcdp->chgCData(oldp+8,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x2aU)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x2aU))))),2);
        vcdp->chgCData(oldp+9,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x2bU)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x2bU))))),2);
        vcdp->chgCData(oldp+10,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                 >> 0x2cU)) 
                                        << 1U)) | (1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                              >> 0x2cU))))),2);
    }
}

void VTestHarness::traceChgThis__5074(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+41242);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgCData(oldp+0,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x2dU)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x2dU))))),2);
        vcdp->chgCData(oldp+1,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x2eU)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x2eU))))),2);
        vcdp->chgCData(oldp+2,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x2fU)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x2fU))))),2);
        vcdp->chgCData(oldp+3,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x30U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x30U))))),2);
        vcdp->chgCData(oldp+4,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x31U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x31U))))),2);
        vcdp->chgCData(oldp+5,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x32U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x32U))))),2);
        vcdp->chgCData(oldp+6,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x33U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x33U))))),2);
        vcdp->chgCData(oldp+7,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x34U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x34U))))),2);
        vcdp->chgCData(oldp+8,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x35U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x35U))))),2);
        vcdp->chgCData(oldp+9,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x36U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x36U))))),2);
        vcdp->chgCData(oldp+10,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                 >> 0x37U)) 
                                        << 1U)) | (1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                              >> 0x37U))))),2);
    }
}

void VTestHarness::traceChgThis__5076(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+41253);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgCData(oldp+0,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x38U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x38U))))),2);
        vcdp->chgCData(oldp+1,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x39U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x39U))))),2);
        vcdp->chgCData(oldp+2,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x3aU)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x3aU))))),2);
        vcdp->chgCData(oldp+3,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x3bU)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x3bU))))),2);
        vcdp->chgCData(oldp+4,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x3cU)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x3cU))))),2);
        vcdp->chgCData(oldp+5,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x3dU)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x3dU))))),2);
        vcdp->chgCData(oldp+6,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x3eU)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x3eU))))),2);
        vcdp->chgCData(oldp+7,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x3fU)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x3fU))))),2);
        vcdp->chgBit(oldp+8,((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_param) 
                                    >> 1U))));
        vcdp->chgBit(oldp+9,((1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_param))));
        vcdp->chgBit(oldp+10,((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_param) 
                                     >> 2U))));
        vcdp->chgCData(oldp+11,(((0x80U & ((IData)(
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                    >> 0x3fU)) 
                                           << 7U)) 
                                 | ((0x40U & ((IData)(
                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                       >> 0x37U)) 
                                              << 6U)) 
                                    | ((0x20U & ((IData)(
                                                         (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                          >> 0x2fU)) 
                                                 << 5U)) 
                                       | ((0x10U & 
                                           ((IData)(
                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                     >> 0x27U)) 
                                            << 4U)) 
                                          | ((8U & 
                                              ((IData)(
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                        >> 0x1fU)) 
                                               << 3U)) 
                                             | ((4U 
                                                 & ((IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                             >> 0x17U)) 
                                                    << 2U)) 
                                                | ((2U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0xfU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                 >> 7U))))))))))),8);
    }
}

void VTestHarness::traceChgThis__5079(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+41265);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgCData(oldp+0,(((0x80U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                   >> 0x3fU)) 
                                          << 7U)) | 
                                ((0x40U & ((IData)(
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                    >> 0x37U)) 
                                           << 6U)) 
                                 | ((0x20U & ((IData)(
                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                       >> 0x2fU)) 
                                              << 5U)) 
                                    | ((0x10U & ((IData)(
                                                         (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                          >> 0x27U)) 
                                                 << 4U)) 
                                       | ((8U & ((IData)(
                                                         (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                          >> 0x1fU)) 
                                                 << 3U)) 
                                          | ((4U & 
                                              ((IData)(
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                        >> 0x17U)) 
                                               << 2U)) 
                                             | ((2U 
                                                 & ((IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0xfU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                              >> 7U))))))))))),8);
        vcdp->chgCData(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__beatsLeft),3);
        vcdp->chgBit(oldp+2,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__beatsLeft))));
        vcdp->chgBit(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__state_1));
        vcdp->chgBit(oldp+4,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_corrupt) 
                              | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_corrupt))));
        vcdp->chgCData(oldp+5,((3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_size))),2);
        vcdp->chgCData(oldp+6,((7U & (1U | (0xfU & 
                                            ((IData)(1U) 
                                             << (3U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_size))))))),3);
        vcdp->chgBit(oldp+7,((1U & (((IData)(1U) << 
                                     (3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_size))) 
                                    >> 2U))));
        vcdp->chgBit(oldp+8,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_address 
                                    >> 2U))));
        vcdp->chgBit(oldp+9,((1U & (~ (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_address 
                                       >> 2U)))));
        vcdp->chgBit(oldp+10,((1U & (((IData)(1U) << 
                                      (3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_size))) 
                                     >> 1U))));
    }
}

void VTestHarness::traceChgThis__5081(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+41276);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_address 
                                    >> 1U))));
        vcdp->chgBit(oldp+1,((1U & (~ (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_address 
                                       >> 1U)))));
        vcdp->chgBit(oldp+2,((1U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_address)));
        vcdp->chgBit(oldp+3,((1U & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_address))));
        vcdp->chgBit(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__state_0));
        vcdp->chgBit(oldp+5,(((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__beatsLeft)) 
                              | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__state_0))));
        vcdp->chgCData(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__d_first_counter),3);
        vcdp->chgBit(oldp+7,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__d_first_counter))));
        vcdp->chgCData(oldp+8,((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__d_first_counter) 
                                      - (IData)(1U)))),3);
        vcdp->chgCData(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__a_first_counter),3);
        vcdp->chgCData(oldp+10,((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__a_first_counter) 
                                       - (IData)(1U)))),3);
        vcdp->chgBit(oldp+11,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__a_first_counter))));
        vcdp->chgCData(oldp+12,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__opcode),3);
        vcdp->chgCData(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__param),3);
        vcdp->chgCData(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__size),3);
        vcdp->chgCData(oldp+15,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__source),7);
        vcdp->chgIData(oldp+16,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__address),31);
        vcdp->chgCData(oldp+17,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__d_first_counter),3);
        vcdp->chgCData(oldp+18,((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__d_first_counter) 
                                       - (IData)(1U)))),3);
        vcdp->chgBit(oldp+19,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__d_first_counter))));
        vcdp->chgCData(oldp+20,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__opcode_1),3);
        vcdp->chgCData(oldp+21,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__param_1),2);
        vcdp->chgCData(oldp+22,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__size_1),3);
        vcdp->chgCData(oldp+23,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__source_1),7);
        vcdp->chgBit(oldp+24,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__sink));
        vcdp->chgBit(oldp+25,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__denied));
        vcdp->chgWData(oldp+26,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__inflight),65);
        vcdp->chgWData(oldp+29,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes),260);
        vcdp->chgWData(oldp+38,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes),260);
        vcdp->chgCData(oldp+47,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__a_first_counter_1),3);
        vcdp->chgCData(oldp+48,((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__a_first_counter_1) 
                                       - (IData)(1U)))),3);
        vcdp->chgBit(oldp+49,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__a_first_counter_1))));
        vcdp->chgCData(oldp+50,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_1),3);
        vcdp->chgCData(oldp+51,((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_1) 
                                       - (IData)(1U)))),3);
    }
}

void VTestHarness::traceChgThis__5083(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+41328);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))));
        vcdp->chgIData(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__watchdog),32);
        vcdp->chgWData(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__inflight_1),65);
        vcdp->chgWData(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1),260);
        vcdp->chgCData(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_2),3);
        vcdp->chgCData(oldp+15,((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_2) 
                                       - (IData)(1U)))),3);
        vcdp->chgBit(oldp+16,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))));
        vcdp->chgIData(oldp+17,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__watchdog_1),32);
        vcdp->chgCData(oldp+18,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__a_first_counter),3);
        vcdp->chgCData(oldp+19,((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__a_first_counter) 
                                       - (IData)(1U)))),3);
        vcdp->chgBit(oldp+20,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__a_first_counter))));
        vcdp->chgCData(oldp+21,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__opcode),3);
        vcdp->chgCData(oldp+22,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__param),3);
        vcdp->chgCData(oldp+23,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__size),3);
        vcdp->chgCData(oldp+24,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__source),7);
        vcdp->chgIData(oldp+25,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__address),31);
        vcdp->chgCData(oldp+26,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__d_first_counter),3);
        vcdp->chgCData(oldp+27,((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__d_first_counter) 
                                       - (IData)(1U)))),3);
        vcdp->chgBit(oldp+28,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))));
        vcdp->chgCData(oldp+29,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__opcode_1),3);
        vcdp->chgCData(oldp+30,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__param_1),2);
        vcdp->chgCData(oldp+31,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__size_1),3);
        vcdp->chgCData(oldp+32,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__source_1),7);
        vcdp->chgBit(oldp+33,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__sink));
        vcdp->chgBit(oldp+34,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__denied));
        vcdp->chgWData(oldp+35,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__inflight),65);
        vcdp->chgWData(oldp+38,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_opcodes),260);
        vcdp->chgWData(oldp+47,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes),260);
        vcdp->chgCData(oldp+56,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1),3);
        vcdp->chgCData(oldp+57,((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1) 
                                       - (IData)(1U)))),3);
        vcdp->chgBit(oldp+58,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))));
        vcdp->chgCData(oldp+59,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1),3);
        vcdp->chgCData(oldp+60,((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1) 
                                       - (IData)(1U)))),3);
        vcdp->chgBit(oldp+61,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))));
        vcdp->chgIData(oldp+62,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__watchdog),32);
        vcdp->chgWData(oldp+63,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_1),65);
        vcdp->chgWData(oldp+66,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes_1),260);
        vcdp->chgCData(oldp+75,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2),3);
        vcdp->chgCData(oldp+76,((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2) 
                                       - (IData)(1U)))),3);
    }
}

void VTestHarness::traceChgThis__5085(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+41405);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2))));
        vcdp->chgIData(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__watchdog_1),32);
        vcdp->chgCData(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode[0]),3);
        vcdp->chgCData(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode[1]),3);
        vcdp->chgBit(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1));
        vcdp->chgBit(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value));
        vcdp->chgCData(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param[0]),3);
        vcdp->chgCData(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param[1]),3);
        vcdp->chgCData(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size[0]),3);
        vcdp->chgCData(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size[1]),3);
        vcdp->chgCData(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source[0]),7);
        vcdp->chgCData(oldp+11,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source[1]),7);
        vcdp->chgIData(oldp+12,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address[0]),31);
        vcdp->chgIData(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address[1]),31);
        vcdp->chgCData(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_mask[0]),8);
        vcdp->chgCData(oldp+15,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_mask[1]),8);
        vcdp->chgQData(oldp+16,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_data[0]),64);
        vcdp->chgQData(oldp+18,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_data[1]),64);
        vcdp->chgBit(oldp+20,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_corrupt[0]));
        vcdp->chgBit(oldp+21,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_corrupt[1]));
        vcdp->chgBit(oldp+22,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__maybe_full));
        vcdp->chgCData(oldp+23,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode[0]),3);
        vcdp->chgCData(oldp+24,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode[1]),3);
        vcdp->chgBit(oldp+25,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1));
        vcdp->chgBit(oldp+26,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value));
        vcdp->chgCData(oldp+27,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param[0]),2);
        vcdp->chgCData(oldp+28,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param[1]),2);
        vcdp->chgCData(oldp+29,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size[0]),3);
        vcdp->chgCData(oldp+30,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size[1]),3);
        vcdp->chgCData(oldp+31,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source[0]),7);
        vcdp->chgCData(oldp+32,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source[1]),7);
        vcdp->chgBit(oldp+33,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_sink[0]));
        vcdp->chgBit(oldp+34,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_sink[1]));
        vcdp->chgBit(oldp+35,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied[0]));
        vcdp->chgBit(oldp+36,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied[1]));
        vcdp->chgQData(oldp+37,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_data[0]),64);
        vcdp->chgQData(oldp+39,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_data[1]),64);
        vcdp->chgBit(oldp+41,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt[0]));
        vcdp->chgBit(oldp+42,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt[1]));
        vcdp->chgBit(oldp+43,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__maybe_full));
        vcdp->chgBit(oldp+44,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__repeater__DOT__full));
        vcdp->chgCData(oldp+45,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__acknum),3);
        vcdp->chgCData(oldp+46,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__dOrig),3);
        vcdp->chgBit(oldp+47,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__dToggle));
        vcdp->chgBit(oldp+48,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__acknum))));
        vcdp->chgCData(oldp+49,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__gennum),3);
        vcdp->chgBit(oldp+50,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__gennum))));
        vcdp->chgBit(oldp+51,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__aToggle_r));
        vcdp->chgBit(oldp+52,((1U & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__gennum))
                                         ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__dToggle)
                                         : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__aToggle_r))))));
        vcdp->chgCData(oldp+53,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__a_first_counter),3);
        vcdp->chgCData(oldp+54,((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__a_first_counter) 
                                       - (IData)(1U)))),3);
        vcdp->chgBit(oldp+55,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__a_first_counter))));
        vcdp->chgCData(oldp+56,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__opcode),3);
        vcdp->chgCData(oldp+57,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__param),3);
        vcdp->chgCData(oldp+58,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__size),3);
        vcdp->chgCData(oldp+59,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__source),7);
        vcdp->chgSData(oldp+60,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__address),15);
        vcdp->chgCData(oldp+61,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__d_first_counter),3);
        vcdp->chgCData(oldp+62,((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__d_first_counter) 
                                       - (IData)(1U)))),3);
    }
}

void VTestHarness::traceChgThis__5087(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+41468);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__d_first_counter))));
        vcdp->chgCData(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__opcode_1),3);
        vcdp->chgCData(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__size_1),3);
        vcdp->chgCData(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__source_1),7);
        vcdp->chgWData(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__inflight),65);
        vcdp->chgWData(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes),260);
        vcdp->chgWData(oldp+16,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes),260);
        vcdp->chgCData(oldp+25,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1),3);
        vcdp->chgCData(oldp+26,((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1) 
                                       - (IData)(1U)))),3);
        vcdp->chgBit(oldp+27,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1))));
        vcdp->chgCData(oldp+28,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1),3);
        vcdp->chgCData(oldp+29,((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1) 
                                       - (IData)(1U)))),3);
        vcdp->chgBit(oldp+30,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1))));
        vcdp->chgIData(oldp+31,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__watchdog),32);
        vcdp->chgWData(oldp+32,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__inflight_1),65);
        vcdp->chgWData(oldp+35,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes_1),260);
        vcdp->chgCData(oldp+44,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2),3);
        vcdp->chgCData(oldp+45,((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2) 
                                       - (IData)(1U)))),3);
        vcdp->chgBit(oldp+46,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2))));
        vcdp->chgIData(oldp+47,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__watchdog_1),32);
        vcdp->chgCData(oldp+48,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__repeater__DOT__saved_opcode),3);
        vcdp->chgCData(oldp+49,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__repeater__DOT__saved_param),3);
        vcdp->chgCData(oldp+50,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__repeater__DOT__saved_size),3);
        vcdp->chgCData(oldp+51,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__repeater__DOT__saved_source),7);
        vcdp->chgSData(oldp+52,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__repeater__DOT__saved_address),15);
        vcdp->chgCData(oldp+53,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__repeater__DOT__saved_mask),8);
        vcdp->chgBit(oldp+54,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt));
        vcdp->chgBit(oldp+55,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater__DOT__full));
        vcdp->chgCData(oldp+56,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__acknum),3);
        vcdp->chgCData(oldp+57,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__dOrig),3);
        vcdp->chgBit(oldp+58,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__dToggle));
        vcdp->chgBit(oldp+59,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__acknum))));
        vcdp->chgCData(oldp+60,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__gennum),3);
        vcdp->chgBit(oldp+61,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__gennum))));
        vcdp->chgBit(oldp+62,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__aToggle_r));
        vcdp->chgBit(oldp+63,((1U & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__gennum))
                                         ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__dToggle)
                                         : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__aToggle_r))))));
        vcdp->chgCData(oldp+64,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__a_first_counter),3);
        vcdp->chgCData(oldp+65,((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__a_first_counter) 
                                       - (IData)(1U)))),3);
    }
}

void VTestHarness::traceChgThis__5089(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+41534);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__a_first_counter))));
        vcdp->chgCData(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__opcode),3);
        vcdp->chgCData(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__param),3);
        vcdp->chgCData(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__size),3);
        vcdp->chgCData(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__source),7);
        vcdp->chgIData(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__address),31);
        vcdp->chgCData(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__d_first_counter),3);
        vcdp->chgCData(oldp+7,((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__d_first_counter) 
                                      - (IData)(1U)))),3);
        vcdp->chgBit(oldp+8,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__d_first_counter))));
        vcdp->chgCData(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__opcode_1),3);
        vcdp->chgCData(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__size_1),3);
        vcdp->chgCData(oldp+11,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__source_1),7);
        vcdp->chgWData(oldp+12,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__inflight),65);
        vcdp->chgWData(oldp+15,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes),260);
        vcdp->chgWData(oldp+24,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes),260);
        vcdp->chgCData(oldp+33,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1),3);
        vcdp->chgCData(oldp+34,((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1) 
                                       - (IData)(1U)))),3);
        vcdp->chgBit(oldp+35,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1))));
        vcdp->chgCData(oldp+36,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1),3);
        vcdp->chgCData(oldp+37,((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1) 
                                       - (IData)(1U)))),3);
        vcdp->chgBit(oldp+38,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1))));
        vcdp->chgIData(oldp+39,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__watchdog),32);
        vcdp->chgWData(oldp+40,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__inflight_1),65);
        vcdp->chgWData(oldp+43,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes_1),260);
        vcdp->chgCData(oldp+52,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2),3);
        vcdp->chgCData(oldp+53,((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2) 
                                       - (IData)(1U)))),3);
        vcdp->chgBit(oldp+54,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2))));
        vcdp->chgIData(oldp+55,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__watchdog_1),32);
        vcdp->chgCData(oldp+56,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater__DOT__saved_opcode),3);
        vcdp->chgCData(oldp+57,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater__DOT__saved_param),3);
        vcdp->chgCData(oldp+58,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater__DOT__saved_size),3);
        vcdp->chgCData(oldp+59,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater__DOT__saved_source),7);
        vcdp->chgIData(oldp+60,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater__DOT__saved_address),31);
        vcdp->chgCData(oldp+61,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater__DOT__saved_mask),8);
        vcdp->chgBit(oldp+62,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt));
        vcdp->chgBit(oldp+63,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter));
        vcdp->chgBit(oldp+64,((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter) 
                                     - (IData)(1U)))));
        vcdp->chgBit(oldp+65,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter)))));
        vcdp->chgCData(oldp+66,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__opcode),3);
        vcdp->chgCData(oldp+67,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__param),3);
    }
}

void VTestHarness::traceChgThis__5091(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+41602);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgCData(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__size),2);
        vcdp->chgSData(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__source),11);
        vcdp->chgSData(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__address),15);
        vcdp->chgBit(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__d_first_counter));
        vcdp->chgBit(oldp+4,((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__d_first_counter) 
                                    - (IData)(1U)))));
        vcdp->chgBit(oldp+5,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__d_first_counter)))));
        vcdp->chgCData(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__opcode_1),3);
        vcdp->chgCData(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__size_1),2);
        vcdp->chgSData(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__source_1),11);
        vcdp->chgWData(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight),1040);
        vcdp->chgWData(oldp+42,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_opcodes),4160);
        vcdp->chgWData(oldp+172,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes),4160);
        vcdp->chgBit(oldp+302,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1));
        vcdp->chgBit(oldp+303,((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1) 
                                      - (IData)(1U)))));
        vcdp->chgBit(oldp+304,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__a_first_counter_1)))));
        vcdp->chgBit(oldp+305,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__d_first_counter_1));
        vcdp->chgBit(oldp+306,((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__d_first_counter_1) 
                                      - (IData)(1U)))));
        vcdp->chgBit(oldp+307,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__d_first_counter_1)))));
        vcdp->chgIData(oldp+308,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__watchdog),32);
        vcdp->chgWData(oldp+309,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_1),1040);
        vcdp->chgWData(oldp+342,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight_sizes_1),4160);
        vcdp->chgBit(oldp+472,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__d_first_counter_2));
        vcdp->chgBit(oldp+473,((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__d_first_counter_2) 
                                      - (IData)(1U)))));
        vcdp->chgBit(oldp+474,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__d_first_counter_2)))));
        vcdp->chgIData(oldp+475,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__watchdog_1),32);
        vcdp->chgCData(oldp+476,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask
                                 [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]),8);
        vcdp->chgQData(oldp+477,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data
                                 [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]),64);
        vcdp->chgBit(oldp+479,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                               [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]));
        vcdp->chgQData(oldp+480,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data
                                 [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1]),64);
        vcdp->chgBit(oldp+482,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                               [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1]));
        vcdp->chgSData(oldp+483,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__a_first_counter),9);
        vcdp->chgSData(oldp+484,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__a_first_counter) 
                                            - (IData)(1U)))),9);
        vcdp->chgBit(oldp+485,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__a_first_counter))));
        vcdp->chgCData(oldp+486,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__opcode),3);
        vcdp->chgCData(oldp+487,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__param),3);
        vcdp->chgCData(oldp+488,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__size),4);
        vcdp->chgBit(oldp+489,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__source));
        vcdp->chgIData(oldp+490,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__address),32);
    }
}

void VTestHarness::traceChgThis__5093(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+42093);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgSData(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__d_first_counter),9);
        vcdp->chgSData(oldp+1,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__d_first_counter) 
                                          - (IData)(1U)))),9);
        vcdp->chgBit(oldp+2,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__d_first_counter))));
        vcdp->chgCData(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__opcode_1),3);
        vcdp->chgCData(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__param_1),2);
        vcdp->chgCData(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__size_1),4);
        vcdp->chgBit(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__source_1));
        vcdp->chgCData(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__sink),4);
        vcdp->chgBit(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__denied));
        vcdp->chgBit(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__inflight));
        vcdp->chgCData(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__inflight_opcodes),4);
        vcdp->chgCData(oldp+11,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes),8);
        vcdp->chgSData(oldp+12,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__a_first_counter_1),9);
        vcdp->chgSData(oldp+13,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__a_first_counter_1) 
                                           - (IData)(1U)))),9);
        vcdp->chgBit(oldp+14,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))));
        vcdp->chgSData(oldp+15,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1),9);
        vcdp->chgSData(oldp+16,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1) 
                                           - (IData)(1U)))),9);
        vcdp->chgBit(oldp+17,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))));
        vcdp->chgIData(oldp+18,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__watchdog),32);
        vcdp->chgCData(oldp+19,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1),8);
        vcdp->chgSData(oldp+20,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_2),9);
        vcdp->chgSData(oldp+21,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_2) 
                                           - (IData)(1U)))),9);
        vcdp->chgBit(oldp+22,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))));
        vcdp->chgCData(oldp+23,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode[0]),3);
        vcdp->chgCData(oldp+24,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode[1]),3);
        vcdp->chgBit(oldp+25,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1));
        vcdp->chgBit(oldp+26,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value));
        vcdp->chgCData(oldp+27,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param[0]),3);
        vcdp->chgCData(oldp+28,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param[1]),3);
        vcdp->chgCData(oldp+29,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size[0]),4);
        vcdp->chgCData(oldp+30,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size[1]),4);
        vcdp->chgBit(oldp+31,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source[0]));
        vcdp->chgBit(oldp+32,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source[1]));
        vcdp->chgIData(oldp+33,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address[0]),32);
        vcdp->chgIData(oldp+34,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address[1]),32);
        vcdp->chgCData(oldp+35,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask[0]),8);
        vcdp->chgCData(oldp+36,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask[1]),8);
        vcdp->chgQData(oldp+37,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data[0]),64);
        vcdp->chgQData(oldp+39,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data[1]),64);
        vcdp->chgBit(oldp+41,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt[0]));
        vcdp->chgBit(oldp+42,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt[1]));
        vcdp->chgBit(oldp+43,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full));
        vcdp->chgCData(oldp+44,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode[0]),3);
        vcdp->chgCData(oldp+45,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode[1]),3);
        vcdp->chgBit(oldp+46,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1));
        vcdp->chgBit(oldp+47,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value));
        vcdp->chgCData(oldp+48,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param[0]),2);
        vcdp->chgCData(oldp+49,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param[1]),2);
        vcdp->chgCData(oldp+50,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size[0]),4);
        vcdp->chgCData(oldp+51,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size[1]),4);
        vcdp->chgBit(oldp+52,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source[0]));
        vcdp->chgBit(oldp+53,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source[1]));
        vcdp->chgCData(oldp+54,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink[0]),4);
        vcdp->chgCData(oldp+55,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink[1]),4);
        vcdp->chgBit(oldp+56,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied[0]));
        vcdp->chgBit(oldp+57,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied[1]));
        vcdp->chgQData(oldp+58,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data[0]),64);
        vcdp->chgQData(oldp+60,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data[1]),64);
    }
}

void VTestHarness::traceChgThis__5095(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+42155);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt[0]));
        vcdp->chgBit(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt[1]));
        vcdp->chgBit(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full));
        vcdp->chgSData(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter),9);
        vcdp->chgSData(oldp+4,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter) 
                                          - (IData)(1U)))),9);
        vcdp->chgBit(oldp+5,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter))));
        vcdp->chgCData(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__opcode),3);
        vcdp->chgCData(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__param),3);
        vcdp->chgCData(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__size),4);
        vcdp->chgBit(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__source));
        vcdp->chgIData(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__address),32);
        vcdp->chgSData(oldp+11,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter),9);
        vcdp->chgSData(oldp+12,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter) 
                                           - (IData)(1U)))),9);
        vcdp->chgBit(oldp+13,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter))));
        vcdp->chgCData(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__opcode_1),3);
        vcdp->chgCData(oldp+15,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__param_1),2);
        vcdp->chgCData(oldp+16,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__size_1),4);
        vcdp->chgBit(oldp+17,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__source_1));
        vcdp->chgCData(oldp+18,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__sink),4);
        vcdp->chgBit(oldp+19,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__denied));
        vcdp->chgBit(oldp+20,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__inflight));
        vcdp->chgCData(oldp+21,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_opcodes),4);
        vcdp->chgCData(oldp+22,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_sizes),8);
        vcdp->chgSData(oldp+23,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1),9);
        vcdp->chgSData(oldp+24,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1) 
                                           - (IData)(1U)))),9);
        vcdp->chgBit(oldp+25,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))));
        vcdp->chgSData(oldp+26,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1),9);
        vcdp->chgSData(oldp+27,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1) 
                                           - (IData)(1U)))),9);
        vcdp->chgBit(oldp+28,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))));
        vcdp->chgIData(oldp+29,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__watchdog),32);
        vcdp->chgCData(oldp+30,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1),8);
        vcdp->chgSData(oldp+31,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_2),9);
        vcdp->chgSData(oldp+32,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_2) 
                                           - (IData)(1U)))),9);
        vcdp->chgBit(oldp+33,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))));
        vcdp->chgCData(oldp+34,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode[0]),3);
        vcdp->chgCData(oldp+35,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode[1]),3);
        vcdp->chgBit(oldp+36,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1));
        vcdp->chgBit(oldp+37,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value));
        vcdp->chgCData(oldp+38,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param[0]),3);
        vcdp->chgCData(oldp+39,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param[1]),3);
        vcdp->chgCData(oldp+40,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size[0]),4);
        vcdp->chgCData(oldp+41,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size[1]),4);
        vcdp->chgBit(oldp+42,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source[0]));
        vcdp->chgBit(oldp+43,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source[1]));
        vcdp->chgIData(oldp+44,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address[0]),32);
        vcdp->chgIData(oldp+45,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address[1]),32);
        vcdp->chgCData(oldp+46,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask[0]),8);
        vcdp->chgCData(oldp+47,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask[1]),8);
    }
}

void VTestHarness::traceChgThis__5097(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+42203);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgQData(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data[0]),64);
        vcdp->chgQData(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data[1]),64);
        vcdp->chgBit(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt[0]));
        vcdp->chgBit(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt[1]));
        vcdp->chgBit(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full));
        vcdp->chgCData(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode[0]),3);
        vcdp->chgCData(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode[1]),3);
        vcdp->chgBit(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1));
        vcdp->chgBit(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value));
        vcdp->chgCData(oldp+11,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param[0]),2);
        vcdp->chgCData(oldp+12,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param[1]),2);
        vcdp->chgCData(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size[0]),4);
        vcdp->chgCData(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size[1]),4);
        vcdp->chgBit(oldp+15,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source[0]));
        vcdp->chgBit(oldp+16,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source[1]));
        vcdp->chgCData(oldp+17,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink[0]),4);
        vcdp->chgCData(oldp+18,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink[1]),4);
        vcdp->chgBit(oldp+19,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied[0]));
        vcdp->chgBit(oldp+20,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied[1]));
        vcdp->chgQData(oldp+21,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data[0]),64);
        vcdp->chgQData(oldp+23,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data[1]),64);
        vcdp->chgBit(oldp+25,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt[0]));
        vcdp->chgBit(oldp+26,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt[1]));
        vcdp->chgBit(oldp+27,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full));
        vcdp->chgIData(oldp+28,(((1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__state))
                                  ? 0x4000U : 0x2000000U)),31);
        vcdp->chgQData(oldp+29,(((1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__state))
                                  ? VL_ULL(0x80000000)
                                  : VL_ULL(1))),64);
        vcdp->chgQData(oldp+31,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data
                                [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1]),64);
        vcdp->chgQData(oldp+33,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data
                                [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1]),64);
        vcdp->chgCData(oldp+35,((0x7fU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_extra_tlrr_extra_source
                                          [0U] >> 4U))),7);
        vcdp->chgCData(oldp+36,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                [0U]),3);
        vcdp->chgCData(oldp+37,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param
                                [0U]),2);
        vcdp->chgCData(oldp+38,((0x7fU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source
                                          [0U] >> 4U))),7);
        vcdp->chgBit(oldp+39,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink
                              [0U]));
        vcdp->chgBit(oldp+40,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied
                              [0U]));
        vcdp->chgQData(oldp+41,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data
                                [0U]),64);
        vcdp->chgBit(oldp+43,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                              [0U]));
        vcdp->chgQData(oldp+44,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data
                                [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1]),64);
        vcdp->chgBit(oldp+46,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                              [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1]));
        vcdp->chgCData(oldp+47,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__state),3);
        vcdp->chgSData(oldp+48,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter),9);
        vcdp->chgSData(oldp+49,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter) 
                                           - (IData)(1U)))),9);
    }
}

void VTestHarness::traceChgThis__5099(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+42253);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter))));
        vcdp->chgCData(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__opcode),3);
        vcdp->chgCData(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__param),3);
        vcdp->chgCData(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__size),4);
        vcdp->chgCData(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__source),7);
        vcdp->chgIData(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__address),31);
        vcdp->chgSData(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter),9);
        vcdp->chgSData(oldp+7,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter) 
                                          - (IData)(1U)))),9);
        vcdp->chgBit(oldp+8,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter))));
        vcdp->chgCData(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__opcode_1),3);
        vcdp->chgCData(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__param_1),2);
        vcdp->chgCData(oldp+11,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__size_1),4);
        vcdp->chgCData(oldp+12,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__source_1),7);
        vcdp->chgBit(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__sink));
        vcdp->chgBit(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__denied));
        vcdp->chgWData(oldp+15,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight),65);
        vcdp->chgWData(oldp+18,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes),260);
        vcdp->chgWData(oldp+27,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes),520);
        vcdp->chgSData(oldp+44,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1),9);
        vcdp->chgSData(oldp+45,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1) 
                                           - (IData)(1U)))),9);
        vcdp->chgBit(oldp+46,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1))));
        vcdp->chgSData(oldp+47,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1),9);
        vcdp->chgSData(oldp+48,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1) 
                                           - (IData)(1U)))),9);
        vcdp->chgBit(oldp+49,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))));
        vcdp->chgIData(oldp+50,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__watchdog),32);
        vcdp->chgWData(oldp+51,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_1),65);
        vcdp->chgWData(oldp+54,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1),520);
        vcdp->chgSData(oldp+71,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2),9);
        vcdp->chgSData(oldp+72,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2) 
                                           - (IData)(1U)))),9);
        vcdp->chgBit(oldp+73,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2))));
        vcdp->chgIData(oldp+74,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__watchdog_1),32);
        vcdp->chgSData(oldp+75,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__beatsLeft),9);
        vcdp->chgBit(oldp+76,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__beatsLeft))));
        vcdp->chgCData(oldp+77,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__readys_mask),2);
        vcdp->chgBit(oldp+78,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__state_0));
        vcdp->chgBit(oldp+79,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__state_1));
        vcdp->chgSData(oldp+80,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__a_first_counter),9);
        vcdp->chgSData(oldp+81,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__a_first_counter) 
                                           - (IData)(1U)))),9);
        vcdp->chgBit(oldp+82,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__a_first_counter))));
    }
}

void VTestHarness::traceChgThis__5101(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+42336);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgCData(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__opcode),3);
        vcdp->chgCData(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__param),3);
        vcdp->chgCData(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__size),4);
        vcdp->chgCData(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__source),6);
        vcdp->chgIData(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__address),31);
        vcdp->chgSData(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__d_first_counter),9);
        vcdp->chgSData(oldp+6,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__d_first_counter) 
                                          - (IData)(1U)))),9);
        vcdp->chgBit(oldp+7,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__d_first_counter))));
        vcdp->chgCData(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__opcode_1),3);
        vcdp->chgCData(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__param_1),2);
        vcdp->chgCData(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__size_1),4);
        vcdp->chgCData(oldp+11,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__source_1),6);
        vcdp->chgBit(oldp+12,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__sink));
        vcdp->chgBit(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__denied));
        vcdp->chgQData(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight),37);
        vcdp->chgWData(oldp+16,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_opcodes),148);
        vcdp->chgWData(oldp+21,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes),296);
        vcdp->chgSData(oldp+31,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__a_first_counter_1),9);
        vcdp->chgSData(oldp+32,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__a_first_counter_1) 
                                           - (IData)(1U)))),9);
        vcdp->chgBit(oldp+33,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__a_first_counter_1))));
        vcdp->chgSData(oldp+34,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__d_first_counter_1),9);
        vcdp->chgSData(oldp+35,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__d_first_counter_1) 
                                           - (IData)(1U)))),9);
        vcdp->chgBit(oldp+36,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__d_first_counter_1))));
        vcdp->chgIData(oldp+37,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__watchdog),32);
        vcdp->chgQData(oldp+38,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_1),37);
        vcdp->chgWData(oldp+40,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes_1),296);
        vcdp->chgSData(oldp+50,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__d_first_counter_2),9);
        vcdp->chgSData(oldp+51,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__d_first_counter_2) 
                                           - (IData)(1U)))),9);
        vcdp->chgBit(oldp+52,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__d_first_counter_2))));
        vcdp->chgIData(oldp+53,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__watchdog_1),32);
        vcdp->chgBit(oldp+54,((1U & (((1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__state))
                                       ? 0x4000U : 0x2000000U) 
                                     >> 2U))));
        vcdp->chgBit(oldp+55,((1U & (~ (((1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__state))
                                          ? 0x4000U
                                          : 0x2000000U) 
                                        >> 2U)))));
        vcdp->chgBit(oldp+56,((1U & (((1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__state))
                                       ? 0x4000U : 0x2000000U) 
                                     >> 1U))));
    }
}

void VTestHarness::traceChgThis__5103(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+42393);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((1U & (~ (((1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__state))
                                         ? 0x4000U : 0x2000000U) 
                                       >> 1U)))));
        vcdp->chgBit(oldp+1,(0U));
        vcdp->chgBit(oldp+2,((1U & (~ ((1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__state))
                                        ? 0x4000U : 0x2000000U)))));
        vcdp->chgSData(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__a_first_counter),9);
        vcdp->chgSData(oldp+4,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__a_first_counter) 
                                          - (IData)(1U)))),9);
        vcdp->chgBit(oldp+5,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__a_first_counter))));
        vcdp->chgIData(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__address),31);
        vcdp->chgSData(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__d_first_counter),9);
        vcdp->chgSData(oldp+8,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__d_first_counter) 
                                          - (IData)(1U)))),9);
        vcdp->chgBit(oldp+9,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__d_first_counter))));
        vcdp->chgCData(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__opcode_1),3);
        vcdp->chgCData(oldp+11,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__param_1),2);
        vcdp->chgCData(oldp+12,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__size_1),4);
        vcdp->chgBit(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__sink));
        vcdp->chgBit(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__denied));
        vcdp->chgBit(oldp+15,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__inflight));
        vcdp->chgCData(oldp+16,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__inflight_opcodes),4);
        vcdp->chgCData(oldp+17,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__inflight_sizes),8);
        vcdp->chgSData(oldp+18,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__a_first_counter_1),9);
        vcdp->chgSData(oldp+19,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__a_first_counter_1) 
                                           - (IData)(1U)))),9);
        vcdp->chgBit(oldp+20,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__a_first_counter_1))));
        vcdp->chgSData(oldp+21,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__d_first_counter_1),9);
        vcdp->chgSData(oldp+22,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__d_first_counter_1) 
                                           - (IData)(1U)))),9);
        vcdp->chgBit(oldp+23,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__d_first_counter_1))));
        vcdp->chgCData(oldp+24,((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__inflight_opcodes) 
                                       >> 1U))),4);
    }
}

void VTestHarness::traceChgThis__5105(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+42418);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgCData(oldp+0,((0x7fU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__inflight_sizes) 
                                         >> 1U))),8);
        vcdp->chgIData(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__watchdog),32);
        vcdp->chgCData(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__inflight_sizes_1),8);
        vcdp->chgSData(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__d_first_counter_2),9);
        vcdp->chgSData(oldp+4,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__d_first_counter_2) 
                                          - (IData)(1U)))),9);
        vcdp->chgBit(oldp+5,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__d_first_counter_2))));
        vcdp->chgCData(oldp+6,((0x7fU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__inflight_sizes_1) 
                                         >> 1U))),8);
        vcdp->chgSData(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__beatsLeft),9);
        vcdp->chgBit(oldp+8,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__beatsLeft))));
        vcdp->chgSData(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__readys_mask),9);
        vcdp->chgBit(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__state_0));
        vcdp->chgBit(oldp+11,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__state_1));
        vcdp->chgBit(oldp+12,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__state_2));
        vcdp->chgBit(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__state_3));
        vcdp->chgBit(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__state_4));
        vcdp->chgBit(oldp+15,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__state_5));
        vcdp->chgBit(oldp+16,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__state_6));
        vcdp->chgBit(oldp+17,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__state_7));
        vcdp->chgBit(oldp+18,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__state_8));
        vcdp->chgBit(oldp+19,((1U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                               [0U])));
        vcdp->chgBit(oldp+20,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_read
                              [0U]));
        vcdp->chgSData(oldp+21,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter),9);
        vcdp->chgSData(oldp+22,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter) 
                                           - (IData)(1U)))),9);
        vcdp->chgBit(oldp+23,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter))));
        vcdp->chgCData(oldp+24,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__opcode),3);
        vcdp->chgCData(oldp+25,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__param),3);
        vcdp->chgCData(oldp+26,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__size),4);
        vcdp->chgCData(oldp+27,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__source),7);
        vcdp->chgIData(oldp+28,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__address),31);
        vcdp->chgSData(oldp+29,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter),9);
        vcdp->chgSData(oldp+30,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter) 
                                           - (IData)(1U)))),9);
    }
}

void VTestHarness::traceChgThis__5107(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+42449);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter))));
        vcdp->chgCData(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__opcode_1),3);
        vcdp->chgCData(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__param_1),2);
        vcdp->chgCData(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__size_1),4);
        vcdp->chgCData(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__source_1),7);
        vcdp->chgBit(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__sink));
        vcdp->chgBit(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__denied));
        vcdp->chgWData(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight),65);
        vcdp->chgWData(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_opcodes),260);
        vcdp->chgWData(oldp+19,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes),520);
        vcdp->chgSData(oldp+36,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1),9);
        vcdp->chgSData(oldp+37,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1) 
                                           - (IData)(1U)))),9);
        vcdp->chgBit(oldp+38,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1))));
        vcdp->chgSData(oldp+39,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1),9);
        vcdp->chgSData(oldp+40,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1) 
                                           - (IData)(1U)))),9);
        vcdp->chgBit(oldp+41,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))));
        vcdp->chgIData(oldp+42,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__watchdog),32);
        vcdp->chgWData(oldp+43,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1),65);
        vcdp->chgWData(oldp+46,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes_1),520);
        vcdp->chgSData(oldp+63,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2),9);
        vcdp->chgSData(oldp+64,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2) 
                                           - (IData)(1U)))),9);
        vcdp->chgBit(oldp+65,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2))));
        vcdp->chgIData(oldp+66,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__watchdog_1),32);
        vcdp->chgSData(oldp+67,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__a_first_counter),9);
        vcdp->chgSData(oldp+68,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__a_first_counter) 
                                           - (IData)(1U)))),9);
        vcdp->chgBit(oldp+69,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__a_first_counter))));
        vcdp->chgCData(oldp+70,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__opcode),3);
        vcdp->chgCData(oldp+71,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__param),3);
        vcdp->chgCData(oldp+72,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__size),4);
        vcdp->chgCData(oldp+73,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__source),7);
        vcdp->chgIData(oldp+74,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__address),31);
        vcdp->chgSData(oldp+75,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter),9);
        vcdp->chgSData(oldp+76,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter) 
                                           - (IData)(1U)))),9);
        vcdp->chgBit(oldp+77,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter))));
        vcdp->chgCData(oldp+78,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__opcode_1),3);
        vcdp->chgCData(oldp+79,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__param_1),2);
        vcdp->chgCData(oldp+80,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__size_1),4);
        vcdp->chgCData(oldp+81,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__source_1),7);
        vcdp->chgBit(oldp+82,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__sink));
        vcdp->chgBit(oldp+83,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__denied));
    }
}

void VTestHarness::traceChgThis__5109(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+42533);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgWData(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight),65);
        vcdp->chgWData(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_opcodes),260);
        vcdp->chgWData(oldp+12,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes),520);
        vcdp->chgSData(oldp+29,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__a_first_counter_1),9);
        vcdp->chgSData(oldp+30,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__a_first_counter_1) 
                                           - (IData)(1U)))),9);
        vcdp->chgBit(oldp+31,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))));
        vcdp->chgSData(oldp+32,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1),9);
        vcdp->chgSData(oldp+33,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1) 
                                           - (IData)(1U)))),9);
        vcdp->chgBit(oldp+34,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))));
        vcdp->chgIData(oldp+35,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__watchdog),32);
        vcdp->chgWData(oldp+36,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_1),65);
        vcdp->chgWData(oldp+39,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1),520);
        vcdp->chgSData(oldp+56,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_2),9);
        vcdp->chgSData(oldp+57,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_2) 
                                           - (IData)(1U)))),9);
        vcdp->chgBit(oldp+58,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))));
        vcdp->chgIData(oldp+59,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__watchdog_1),32);
        vcdp->chgCData(oldp+60,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode[0]),3);
        vcdp->chgCData(oldp+61,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode[1]),3);
        vcdp->chgBit(oldp+62,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1));
        vcdp->chgBit(oldp+63,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value));
        vcdp->chgCData(oldp+64,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param[0]),3);
        vcdp->chgCData(oldp+65,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param[1]),3);
        vcdp->chgCData(oldp+66,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size[0]),4);
        vcdp->chgCData(oldp+67,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size[1]),4);
        vcdp->chgCData(oldp+68,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source[0]),7);
        vcdp->chgCData(oldp+69,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source[1]),7);
        vcdp->chgIData(oldp+70,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address[0]),31);
        vcdp->chgIData(oldp+71,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address[1]),31);
        vcdp->chgCData(oldp+72,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask[0]),8);
        vcdp->chgCData(oldp+73,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask[1]),8);
        vcdp->chgQData(oldp+74,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data[0]),64);
        vcdp->chgQData(oldp+76,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data[1]),64);
        vcdp->chgBit(oldp+78,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt[0]));
        vcdp->chgBit(oldp+79,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt[1]));
        vcdp->chgBit(oldp+80,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full));
        vcdp->chgCData(oldp+81,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode[0]),3);
        vcdp->chgCData(oldp+82,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode[1]),3);
        vcdp->chgBit(oldp+83,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1));
        vcdp->chgBit(oldp+84,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value));
        vcdp->chgCData(oldp+85,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param[0]),2);
        vcdp->chgCData(oldp+86,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param[1]),2);
        vcdp->chgCData(oldp+87,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size[0]),4);
        vcdp->chgCData(oldp+88,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size[1]),4);
        vcdp->chgCData(oldp+89,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source[0]),7);
        vcdp->chgCData(oldp+90,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source[1]),7);
        vcdp->chgBit(oldp+91,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink[0]));
        vcdp->chgBit(oldp+92,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink[1]));
        vcdp->chgBit(oldp+93,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied[0]));
        vcdp->chgBit(oldp+94,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied[1]));
        vcdp->chgQData(oldp+95,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data[0]),64);
        vcdp->chgQData(oldp+97,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data[1]),64);
        vcdp->chgBit(oldp+99,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt[0]));
        vcdp->chgBit(oldp+100,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt[1]));
        vcdp->chgBit(oldp+101,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full));
        vcdp->chgCData(oldp+102,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_s_0_state),2);
        vcdp->chgCData(oldp+103,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_opcode),3);
        vcdp->chgCData(oldp+104,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_param),3);
        vcdp->chgCData(oldp+105,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_size),4);
        vcdp->chgCData(oldp+106,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_source),7);
        vcdp->chgIData(oldp+107,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_address),31);
        vcdp->chgCData(oldp+108,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_mask),8);
    }
}

void VTestHarness::traceChgThis__5111(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+42642);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgQData(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data),64);
        vcdp->chgBit(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_corrupt));
        vcdp->chgCData(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_lut),4);
        vcdp->chgQData(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data),64);
        vcdp->chgBit(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_denied));
        vcdp->chgBit(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_corrupt));
        vcdp->chgBit(oldp+8,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_s_0_state))));
        vcdp->chgBit(oldp+9,((2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_s_0_state))));
        vcdp->chgBit(oldp+10,(((3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_s_0_state)) 
                               | (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_s_0_state)))));
        vcdp->chgBit(oldp+11,((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_s_0_state))));
        vcdp->chgCData(oldp+12,(((2U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data) 
                                        << 1U)) | (1U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data)))),2);
        vcdp->chgCData(oldp+13,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                 >> 1U)) 
                                        << 1U)) | (1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                              >> 1U))))),2);
        vcdp->chgCData(oldp+14,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                 >> 2U)) 
                                        << 1U)) | (1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                              >> 2U))))),2);
        vcdp->chgCData(oldp+15,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                 >> 3U)) 
                                        << 1U)) | (1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                              >> 3U))))),2);
        vcdp->chgCData(oldp+16,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                 >> 4U)) 
                                        << 1U)) | (1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                              >> 4U))))),2);
        vcdp->chgCData(oldp+17,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                 >> 5U)) 
                                        << 1U)) | (1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                              >> 5U))))),2);
        vcdp->chgCData(oldp+18,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                 >> 6U)) 
                                        << 1U)) | (1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                              >> 6U))))),2);
    }
}

void VTestHarness::traceChgThis__5113(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+42661);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgCData(oldp+0,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 7U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 7U))))),2);
        vcdp->chgCData(oldp+1,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 8U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 8U))))),2);
        vcdp->chgCData(oldp+2,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 9U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 9U))))),2);
        vcdp->chgCData(oldp+3,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0xaU)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0xaU))))),2);
        vcdp->chgCData(oldp+4,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0xbU)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0xbU))))),2);
        vcdp->chgCData(oldp+5,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0xcU)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0xcU))))),2);
        vcdp->chgCData(oldp+6,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0xdU)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0xdU))))),2);
        vcdp->chgCData(oldp+7,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0xeU)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0xeU))))),2);
        vcdp->chgCData(oldp+8,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0xfU)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0xfU))))),2);
        vcdp->chgCData(oldp+9,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x10U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x10U))))),2);
        vcdp->chgCData(oldp+10,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                 >> 0x11U)) 
                                        << 1U)) | (1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                              >> 0x11U))))),2);
    }
}

void VTestHarness::traceChgThis__5115(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+42672);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgCData(oldp+0,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x12U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x12U))))),2);
        vcdp->chgCData(oldp+1,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x13U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x13U))))),2);
        vcdp->chgCData(oldp+2,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x14U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x14U))))),2);
        vcdp->chgCData(oldp+3,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x15U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x15U))))),2);
        vcdp->chgCData(oldp+4,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x16U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x16U))))),2);
        vcdp->chgCData(oldp+5,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x17U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x17U))))),2);
        vcdp->chgCData(oldp+6,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x18U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x18U))))),2);
        vcdp->chgCData(oldp+7,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x19U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x19U))))),2);
        vcdp->chgCData(oldp+8,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x1aU)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x1aU))))),2);
        vcdp->chgCData(oldp+9,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x1bU)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x1bU))))),2);
        vcdp->chgCData(oldp+10,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                 >> 0x1cU)) 
                                        << 1U)) | (1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                              >> 0x1cU))))),2);
    }
}

void VTestHarness::traceChgThis__5117(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+42683);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgCData(oldp+0,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x1dU)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x1dU))))),2);
        vcdp->chgCData(oldp+1,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x1eU)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x1eU))))),2);
        vcdp->chgCData(oldp+2,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x1fU)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x1fU))))),2);
        vcdp->chgCData(oldp+3,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x20U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x20U))))),2);
        vcdp->chgCData(oldp+4,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x21U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x21U))))),2);
        vcdp->chgCData(oldp+5,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x22U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x22U))))),2);
        vcdp->chgCData(oldp+6,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x23U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x23U))))),2);
        vcdp->chgCData(oldp+7,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x24U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x24U))))),2);
        vcdp->chgCData(oldp+8,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x25U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x25U))))),2);
        vcdp->chgCData(oldp+9,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x26U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x26U))))),2);
        vcdp->chgCData(oldp+10,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                 >> 0x27U)) 
                                        << 1U)) | (1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                              >> 0x27U))))),2);
    }
}

void VTestHarness::traceChgThis__5119(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+42694);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgCData(oldp+0,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x28U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x28U))))),2);
        vcdp->chgCData(oldp+1,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x29U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x29U))))),2);
        vcdp->chgCData(oldp+2,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x2aU)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x2aU))))),2);
        vcdp->chgCData(oldp+3,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x2bU)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x2bU))))),2);
        vcdp->chgCData(oldp+4,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x2cU)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x2cU))))),2);
        vcdp->chgCData(oldp+5,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x2dU)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x2dU))))),2);
        vcdp->chgCData(oldp+6,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x2eU)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x2eU))))),2);
        vcdp->chgCData(oldp+7,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x2fU)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x2fU))))),2);
        vcdp->chgCData(oldp+8,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x30U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x30U))))),2);
        vcdp->chgCData(oldp+9,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x31U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x31U))))),2);
        vcdp->chgCData(oldp+10,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                 >> 0x32U)) 
                                        << 1U)) | (1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                              >> 0x32U))))),2);
    }
}

void VTestHarness::traceChgThis__5121(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+42705);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgCData(oldp+0,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x33U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x33U))))),2);
        vcdp->chgCData(oldp+1,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x34U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x34U))))),2);
        vcdp->chgCData(oldp+2,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x35U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x35U))))),2);
        vcdp->chgCData(oldp+3,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x36U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x36U))))),2);
        vcdp->chgCData(oldp+4,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x37U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x37U))))),2);
        vcdp->chgCData(oldp+5,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x38U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x38U))))),2);
        vcdp->chgCData(oldp+6,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x39U)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x39U))))),2);
        vcdp->chgCData(oldp+7,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x3aU)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x3aU))))),2);
        vcdp->chgCData(oldp+8,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x3bU)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x3bU))))),2);
        vcdp->chgCData(oldp+9,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x3cU)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x3cU))))),2);
        vcdp->chgCData(oldp+10,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                 >> 0x3dU)) 
                                        << 1U)) | (1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                              >> 0x3dU))))),2);
    }
}

void VTestHarness::traceChgThis__5123(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+42716);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgCData(oldp+0,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x3eU)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x3eU))))),2);
        vcdp->chgCData(oldp+1,(((2U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x3fU)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x3fU))))),2);
        vcdp->chgBit(oldp+2,((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_param) 
                                    >> 1U))));
        vcdp->chgBit(oldp+3,((1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_param))));
        vcdp->chgBit(oldp+4,((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_param) 
                                    >> 2U))));
        vcdp->chgCData(oldp+5,(((0x80U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                   >> 0x3fU)) 
                                          << 7U)) | 
                                ((0x40U & ((IData)(
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                    >> 0x37U)) 
                                           << 6U)) 
                                 | ((0x20U & ((IData)(
                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                       >> 0x2fU)) 
                                              << 5U)) 
                                    | ((0x10U & ((IData)(
                                                         (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                          >> 0x27U)) 
                                                 << 4U)) 
                                       | ((8U & ((IData)(
                                                         (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                          >> 0x1fU)) 
                                                 << 3U)) 
                                          | ((4U & 
                                              ((IData)(
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                        >> 0x17U)) 
                                               << 2U)) 
                                             | ((2U 
                                                 & ((IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                             >> 0xfU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                              >> 7U))))))))))),8);
        vcdp->chgCData(oldp+6,(((0x80U & ((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                   >> 0x3fU)) 
                                          << 7U)) | 
                                ((0x40U & ((IData)(
                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                    >> 0x37U)) 
                                           << 6U)) 
                                 | ((0x20U & ((IData)(
                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                       >> 0x2fU)) 
                                              << 5U)) 
                                    | ((0x10U & ((IData)(
                                                         (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                          >> 0x27U)) 
                                                 << 4U)) 
                                       | ((8U & ((IData)(
                                                         (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                          >> 0x1fU)) 
                                                 << 3U)) 
                                          | ((4U & 
                                              ((IData)(
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                        >> 0x17U)) 
                                               << 2U)) 
                                             | ((2U 
                                                 & ((IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0xfU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_data 
                                                              >> 7U))))))))))),8);
    }
}

void VTestHarness::traceChgThis__5125(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+42723);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgSData(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__beatsLeft),9);
        vcdp->chgBit(oldp+1,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__beatsLeft))));
        vcdp->chgBit(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__state_1));
        vcdp->chgBit(oldp+3,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_corrupt) 
                              | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_corrupt))));
        vcdp->chgCData(oldp+4,((3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_size))),2);
        vcdp->chgCData(oldp+5,((7U & (1U | (0xfU & 
                                            ((IData)(1U) 
                                             << (3U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_size))))))),3);
        vcdp->chgBit(oldp+6,((1U & (((IData)(1U) << 
                                     (3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_size))) 
                                    >> 2U))));
        vcdp->chgBit(oldp+7,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_address 
                                    >> 2U))));
        vcdp->chgBit(oldp+8,((1U & (~ (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_address 
                                       >> 2U)))));
        vcdp->chgBit(oldp+9,((1U & (((IData)(1U) << 
                                     (3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_size))) 
                                    >> 1U))));
        vcdp->chgBit(oldp+10,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_address 
                                     >> 1U))));
        vcdp->chgBit(oldp+11,((1U & (~ (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_address 
                                        >> 1U)))));
        vcdp->chgBit(oldp+12,((1U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_address)));
        vcdp->chgBit(oldp+13,((1U & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_bits_address))));
        vcdp->chgBit(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__state_0));
        vcdp->chgBit(oldp+15,(((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__beatsLeft)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__state_0))));
        vcdp->chgSData(oldp+16,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__d_first_counter),9);
    }
}

void VTestHarness::traceChgThis__5127(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+42740);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__d_first_counter))));
        vcdp->chgSData(oldp+1,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__d_first_counter) 
                                          - (IData)(1U)))),9);
        vcdp->chgSData(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter),9);
        vcdp->chgSData(oldp+3,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter) 
                                          - (IData)(1U)))),9);
        vcdp->chgBit(oldp+4,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter))));
        vcdp->chgCData(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__opcode),3);
        vcdp->chgCData(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__param),3);
        vcdp->chgCData(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__size),4);
        vcdp->chgCData(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__source),7);
        vcdp->chgIData(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__address),31);
        vcdp->chgSData(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter),9);
        vcdp->chgSData(oldp+11,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter) 
                                           - (IData)(1U)))),9);
        vcdp->chgBit(oldp+12,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter))));
        vcdp->chgCData(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__opcode_1),3);
        vcdp->chgCData(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__param_1),2);
        vcdp->chgCData(oldp+15,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__size_1),4);
        vcdp->chgCData(oldp+16,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__source_1),7);
        vcdp->chgBit(oldp+17,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__sink));
        vcdp->chgBit(oldp+18,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__denied));
        vcdp->chgWData(oldp+19,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight),65);
        vcdp->chgWData(oldp+22,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes),260);
        vcdp->chgWData(oldp+31,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes),520);
        vcdp->chgSData(oldp+48,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter_1),9);
        vcdp->chgSData(oldp+49,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter_1) 
                                           - (IData)(1U)))),9);
        vcdp->chgBit(oldp+50,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter_1))));
        vcdp->chgSData(oldp+51,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_1),9);
        vcdp->chgSData(oldp+52,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_1) 
                                           - (IData)(1U)))),9);
        vcdp->chgBit(oldp+53,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))));
        vcdp->chgIData(oldp+54,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__watchdog),32);
        vcdp->chgWData(oldp+55,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_1),65);
        vcdp->chgWData(oldp+58,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1),520);
        vcdp->chgSData(oldp+75,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_2),9);
        vcdp->chgSData(oldp+76,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_2) 
                                           - (IData)(1U)))),9);
        vcdp->chgBit(oldp+77,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))));
        vcdp->chgIData(oldp+78,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__watchdog_1),32);
        vcdp->chgBit(oldp+79,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__maybe_full)))));
        vcdp->chgCData(oldp+80,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                                [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]),3);
    }
}

void VTestHarness::traceChgThis__5129(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+42821);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgCData(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask
                               [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]),8);
        vcdp->chgBit(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                             [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]));
        vcdp->chgCData(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_size
                               [0U]),4);
        vcdp->chgCData(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_source
                               [0U]),7);
        vcdp->chgBit(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__maybe_full));
        vcdp->chgCData(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_opcode
                               [0U]),3);
        vcdp->chgSData(oldp+6,((0x1ffU & (~ (0xffffffU 
                                             & (((IData)(0xfffU) 
                                                 << 
                                                 vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_size
                                                 [0U]) 
                                                >> 3U))))),9);
        vcdp->chgBit(oldp+7,((1U & (~ (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_opcode
                                       [0U] >> 2U)))));
        vcdp->chgSData(oldp+8,(((4U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_opcode
                                 [0U]) ? 0U : (0x1ffU 
                                               & (~ 
                                                  (0xffffffU 
                                                   & (((IData)(0xfffU) 
                                                       << 
                                                       vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_size
                                                       [0U]) 
                                                      >> 3U)))))),9);
        vcdp->chgSData(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a_last_counter),9);
        vcdp->chgSData(oldp+10,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a_last_counter) 
                                           - (IData)(1U)))),9);
        vcdp->chgBit(oldp+11,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a_last_counter))));
        vcdp->chgSData(oldp+12,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__counter),9);
        vcdp->chgSData(oldp+13,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__counter) 
                                           - (IData)(1U)))),9);
        vcdp->chgBit(oldp+14,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__counter))));
        vcdp->chgBit(oldp+15,((((((((0x24U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_source
                                     [0U]) | (1U == 
                                              (7U & 
                                               (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_source
                                                [0U] 
                                                >> 4U)))) 
                                   | (0U == (7U & (
                                                   vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_source
                                                   [0U] 
                                                   >> 4U)))) 
                                  | (0x20U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_source
                                     [0U])) | (0x21U 
                                               == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_source
                                               [0U])) 
                                | (0x22U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_source
                                   [0U])) | (0x40U 
                                             == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_source
                                             [0U]))));
    }
}

void VTestHarness::traceChgThis__5131(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+42837);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*543:0*/ __Vtemp28217[17];
    WData/*543:0*/ __Vtemp28220[17];
    WData/*543:0*/ __Vtemp28221[17];
    WData/*543:0*/ __Vtemp28224[17];
    WData/*543:0*/ __Vtemp28227[17];
    WData/*543:0*/ __Vtemp28228[17];
    // Body
    {
        vcdp->chgSData(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__a_first_counter),9);
        vcdp->chgSData(oldp+1,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__a_first_counter) 
                                          - (IData)(1U)))),9);
        vcdp->chgBit(oldp+2,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__a_first_counter))));
        vcdp->chgCData(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__opcode),3);
        vcdp->chgCData(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__param),3);
        vcdp->chgCData(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__size),4);
        vcdp->chgCData(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__source),7);
        vcdp->chgSData(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__address),14);
        vcdp->chgSData(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__d_first_counter),9);
        vcdp->chgSData(oldp+9,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__d_first_counter) 
                                          - (IData)(1U)))),9);
        vcdp->chgBit(oldp+10,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__d_first_counter))));
        vcdp->chgCData(oldp+11,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__opcode_1),3);
        vcdp->chgCData(oldp+12,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__size_1),4);
        vcdp->chgCData(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__source_1),7);
        vcdp->chgWData(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__inflight),65);
        vcdp->chgWData(oldp+17,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__inflight_opcodes),260);
        vcdp->chgWData(oldp+26,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__inflight_sizes),520);
        vcdp->chgSData(oldp+43,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__a_first_counter_1),9);
        vcdp->chgSData(oldp+44,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__a_first_counter_1) 
                                           - (IData)(1U)))),9);
        vcdp->chgBit(oldp+45,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__a_first_counter_1))));
        vcdp->chgSData(oldp+46,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__d_first_counter_1),9);
        vcdp->chgSData(oldp+47,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__d_first_counter_1) 
                                           - (IData)(1U)))),9);
        vcdp->chgBit(oldp+48,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__d_first_counter_1))));
        VL_SHIFTR_WWI(520,520,10, __Vtemp28217, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__inflight_sizes, 
                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_source
                       [0U] << 3U));
        __Vtemp28220[0U] = (0x7fU & (__Vtemp28217[0U] 
                                     >> 1U));
        __Vtemp28220[1U] = 0U;
        __Vtemp28220[2U] = 0U;
        __Vtemp28220[3U] = 0U;
        __Vtemp28220[4U] = 0U;
        __Vtemp28220[5U] = 0U;
        __Vtemp28220[6U] = 0U;
        __Vtemp28220[7U] = 0U;
        __Vtemp28220[8U] = 0U;
        __Vtemp28220[9U] = 0U;
        __Vtemp28220[0xaU] = 0U;
        __Vtemp28220[0xbU] = 0U;
        __Vtemp28220[0xcU] = 0U;
        __Vtemp28220[0xdU] = 0U;
        __Vtemp28220[0xeU] = 0U;
        __Vtemp28220[0xfU] = 0U;
        __Vtemp28220[0x10U] = 0U;
        VL_EXTEND_WW(520,519, __Vtemp28221, __Vtemp28220);
        vcdp->chgCData(oldp+49,((0xffU & __Vtemp28221[0U])),8);
        vcdp->chgIData(oldp+50,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__watchdog),32);
        vcdp->chgWData(oldp+51,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__inflight_1),65);
        vcdp->chgWData(oldp+54,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__inflight_sizes_1),520);
        vcdp->chgSData(oldp+71,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__d_first_counter_2),9);
        vcdp->chgSData(oldp+72,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__d_first_counter_2) 
                                           - (IData)(1U)))),9);
        vcdp->chgBit(oldp+73,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__d_first_counter_2))));
        VL_SHIFTR_WWI(520,520,10, __Vtemp28224, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__inflight_sizes_1, 
                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_source
                       [0U] << 3U));
        __Vtemp28227[0U] = (0x7fU & (__Vtemp28224[0U] 
                                     >> 1U));
        __Vtemp28227[1U] = 0U;
        __Vtemp28227[2U] = 0U;
        __Vtemp28227[3U] = 0U;
        __Vtemp28227[4U] = 0U;
        __Vtemp28227[5U] = 0U;
        __Vtemp28227[6U] = 0U;
        __Vtemp28227[7U] = 0U;
        __Vtemp28227[8U] = 0U;
        __Vtemp28227[9U] = 0U;
        __Vtemp28227[0xaU] = 0U;
        __Vtemp28227[0xbU] = 0U;
        __Vtemp28227[0xcU] = 0U;
        __Vtemp28227[0xdU] = 0U;
        __Vtemp28227[0xeU] = 0U;
        __Vtemp28227[0xfU] = 0U;
        __Vtemp28227[0x10U] = 0U;
        VL_EXTEND_WW(520,519, __Vtemp28228, __Vtemp28227);
        vcdp->chgCData(oldp+74,((0xffU & __Vtemp28228[0U])),8);
    }
}

void VTestHarness::traceChgThis__5133(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+42912);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgIData(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__watchdog_1),32);
        vcdp->chgCData(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_opcode[0]),3);
        vcdp->chgCData(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_size[0]),4);
        vcdp->chgCData(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_source[0]),7);
        vcdp->chgSData(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first_counter),9);
        vcdp->chgSData(oldp+5,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first_counter) 
                                          - (IData)(1U)))),9);
        vcdp->chgBit(oldp+6,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first_counter))));
        vcdp->chgCData(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__opcode),3);
        vcdp->chgCData(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__param),3);
        vcdp->chgCData(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__size),4);
        vcdp->chgCData(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__source),7);
        vcdp->chgSData(oldp+11,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__address),14);
        vcdp->chgSData(oldp+12,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter),9);
        vcdp->chgSData(oldp+13,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter) 
                                           - (IData)(1U)))),9);
        vcdp->chgBit(oldp+14,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter))));
        vcdp->chgCData(oldp+15,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__opcode_1),3);
        vcdp->chgCData(oldp+16,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__param_1),2);
        vcdp->chgCData(oldp+17,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__size_1),4);
        vcdp->chgCData(oldp+18,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__source_1),7);
        vcdp->chgBit(oldp+19,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__sink));
        vcdp->chgBit(oldp+20,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__denied));
        vcdp->chgWData(oldp+21,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight),65);
        vcdp->chgWData(oldp+24,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_opcodes),260);
        vcdp->chgWData(oldp+33,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes),520);
        vcdp->chgSData(oldp+50,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first_counter_1),9);
        vcdp->chgSData(oldp+51,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first_counter_1) 
                                           - (IData)(1U)))),9);
        vcdp->chgBit(oldp+52,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))));
        vcdp->chgSData(oldp+53,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter_1),9);
        vcdp->chgSData(oldp+54,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter_1) 
                                           - (IData)(1U)))),9);
        vcdp->chgBit(oldp+55,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))));
        vcdp->chgIData(oldp+56,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__watchdog),32);
        vcdp->chgWData(oldp+57,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_1),65);
        vcdp->chgWData(oldp+60,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1),520);
        vcdp->chgSData(oldp+77,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter_2),9);
        vcdp->chgSData(oldp+78,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter_2) 
                                           - (IData)(1U)))),9);
        vcdp->chgBit(oldp+79,((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))));
        vcdp->chgIData(oldp+80,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__watchdog_1),32);
        vcdp->chgCData(oldp+81,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode[0]),3);
        vcdp->chgCData(oldp+82,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode[1]),3);
        vcdp->chgBit(oldp+83,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1));
        vcdp->chgBit(oldp+84,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value));
        vcdp->chgCData(oldp+85,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param[0]),3);
        vcdp->chgCData(oldp+86,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param[1]),3);
    }
}

void VTestHarness::traceChgThis__5135(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+42999);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgCData(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size[0]),4);
        vcdp->chgCData(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size[1]),4);
        vcdp->chgCData(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source[0]),7);
        vcdp->chgCData(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source[1]),7);
        vcdp->chgSData(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address[0]),14);
        vcdp->chgSData(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address[1]),14);
        vcdp->chgCData(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask[0]),8);
        vcdp->chgCData(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask[1]),8);
        vcdp->chgBit(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt[0]));
        vcdp->chgBit(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt[1]));
        vcdp->chgBit(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full));
        vcdp->chgCData(oldp+11,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode[0]),3);
        vcdp->chgCData(oldp+12,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode[1]),3);
        vcdp->chgBit(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1));
        vcdp->chgBit(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value));
        vcdp->chgCData(oldp+15,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param[0]),2);
        vcdp->chgCData(oldp+16,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param[1]),2);
        vcdp->chgCData(oldp+17,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size[0]),4);
        vcdp->chgCData(oldp+18,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size[1]),4);
        vcdp->chgCData(oldp+19,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source[0]),7);
        vcdp->chgCData(oldp+20,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source[1]),7);
        vcdp->chgBit(oldp+21,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink[0]));
        vcdp->chgBit(oldp+22,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink[1]));
        vcdp->chgBit(oldp+23,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied[0]));
        vcdp->chgBit(oldp+24,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied[1]));
        vcdp->chgQData(oldp+25,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data[0]),64);
        vcdp->chgQData(oldp+27,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data[1]),64);
        vcdp->chgBit(oldp+29,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt[0]));
        vcdp->chgBit(oldp+30,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt[1]));
        vcdp->chgBit(oldp+31,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full));
        vcdp->chgBit(oldp+32,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full)))));
        vcdp->chgBit(oldp+33,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full));
        vcdp->chgCData(oldp+34,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size
                                [0U]),2);
        vcdp->chgSData(oldp+35,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source
                                [0U]),11);
        vcdp->chgBit(oldp+36,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter));
        vcdp->chgBit(oldp+37,((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter) 
                                     - (IData)(1U)))));
        vcdp->chgBit(oldp+38,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter)))));
        vcdp->chgCData(oldp+39,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__opcode),3);
        vcdp->chgCData(oldp+40,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__param),3);
        vcdp->chgCData(oldp+41,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__size),2);
        vcdp->chgSData(oldp+42,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__source),11);
        vcdp->chgIData(oldp+43,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__address),26);
        vcdp->chgBit(oldp+44,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter));
        vcdp->chgBit(oldp+45,((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter) 
                                     - (IData)(1U)))));
        vcdp->chgBit(oldp+46,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter)))));
        vcdp->chgCData(oldp+47,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__opcode_1),3);
        vcdp->chgCData(oldp+48,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__param_1),2);
        vcdp->chgCData(oldp+49,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__size_1),2);
        vcdp->chgSData(oldp+50,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__source_1),11);
        vcdp->chgBit(oldp+51,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__sink));
        vcdp->chgBit(oldp+52,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__denied));
        vcdp->chgWData(oldp+53,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight),1040);
        vcdp->chgWData(oldp+86,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_opcodes),4160);
        vcdp->chgWData(oldp+216,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_sizes),4160);
        vcdp->chgBit(oldp+346,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1));
        vcdp->chgBit(oldp+347,((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1) 
                                      - (IData)(1U)))));
        vcdp->chgBit(oldp+348,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))));
    }
}

void VTestHarness::traceChgThis__5137(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+43348);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*4159:0*/ __Vtemp28253[130];
    WData/*4159:0*/ __Vtemp28256[130];
    WData/*4159:0*/ __Vtemp28257[130];
    WData/*2047:0*/ __Vtemp28259[64];
    WData/*2047:0*/ __Vtemp28260[64];
    WData/*1055:0*/ __Vtemp28265[33];
    WData/*4159:0*/ __Vtemp28268[130];
    WData/*4159:0*/ __Vtemp28271[130];
    WData/*4159:0*/ __Vtemp28272[130];
    IData/*31:0*/ __Vilp;
    // Body
    {
        vcdp->chgBit(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1));
        vcdp->chgBit(oldp+1,((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1) 
                                    - (IData)(1U)))));
        vcdp->chgBit(oldp+2,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1)))));
        VL_SHIFTR_WWI(4160,4160,14, __Vtemp28253, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_sizes, 
                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source
                       [0U] << 2U));
        __Vtemp28256[0U] = (7U & (__Vtemp28253[0U] 
                                  >> 1U));
        __Vilp = 1U;
        while ((__Vilp <= 0x81U)) {
            __Vtemp28256[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
        VL_EXTEND_WW(4160,4159, __Vtemp28257, __Vtemp28256);
        vcdp->chgCData(oldp+3,((0xfU & __Vtemp28257[0U])),4);
        __Vtemp28259[0U] = 1U;
        __Vilp = 1U;
        while ((__Vilp <= 0x3fU)) {
            __Vtemp28259[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
        VL_SHIFTL_WWI(2048,2048,11, __Vtemp28260, __Vtemp28259, 
                      vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source
                      [0U]);
        __Vtemp28265[0U] = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                             & (6U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                [0U])) ? __Vtemp28260[0U]
                             : 0U);
        __Vtemp28265[1U] = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                             & (6U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                [0U])) ? __Vtemp28260[1U]
                             : 0U);
        __Vtemp28265[2U] = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                             & (6U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                [0U])) ? __Vtemp28260[2U]
                             : 0U);
        __Vtemp28265[3U] = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                             & (6U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                [0U])) ? __Vtemp28260[3U]
                             : 0U);
        __Vtemp28265[4U] = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                             & (6U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                [0U])) ? __Vtemp28260[4U]
                             : 0U);
        __Vtemp28265[5U] = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                             & (6U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                [0U])) ? __Vtemp28260[5U]
                             : 0U);
        __Vtemp28265[6U] = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                             & (6U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                [0U])) ? __Vtemp28260[6U]
                             : 0U);
        __Vtemp28265[7U] = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                             & (6U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                [0U])) ? __Vtemp28260[7U]
                             : 0U);
        __Vtemp28265[8U] = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                             & (6U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                [0U])) ? __Vtemp28260[8U]
                             : 0U);
        __Vtemp28265[9U] = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                             & (6U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                [0U])) ? __Vtemp28260[9U]
                             : 0U);
        __Vtemp28265[0xaU] = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                               & (6U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                  [0U])) ? __Vtemp28260[0xaU]
                               : 0U);
        __Vtemp28265[0xbU] = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                               & (6U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                  [0U])) ? __Vtemp28260[0xbU]
                               : 0U);
        __Vtemp28265[0xcU] = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                               & (6U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                  [0U])) ? __Vtemp28260[0xcU]
                               : 0U);
        __Vtemp28265[0xdU] = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                               & (6U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                  [0U])) ? __Vtemp28260[0xdU]
                               : 0U);
        __Vtemp28265[0xeU] = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                               & (6U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                  [0U])) ? __Vtemp28260[0xeU]
                               : 0U);
        __Vtemp28265[0xfU] = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                               & (6U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                  [0U])) ? __Vtemp28260[0xfU]
                               : 0U);
        __Vtemp28265[0x10U] = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                & (6U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                   [0U])) ? __Vtemp28260[0x10U]
                                : 0U);
        __Vtemp28265[0x11U] = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                & (6U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                   [0U])) ? __Vtemp28260[0x11U]
                                : 0U);
        __Vtemp28265[0x12U] = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                & (6U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                   [0U])) ? __Vtemp28260[0x12U]
                                : 0U);
        __Vtemp28265[0x13U] = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                & (6U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                   [0U])) ? __Vtemp28260[0x13U]
                                : 0U);
        __Vtemp28265[0x14U] = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                & (6U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                   [0U])) ? __Vtemp28260[0x14U]
                                : 0U);
        __Vtemp28265[0x15U] = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                & (6U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                   [0U])) ? __Vtemp28260[0x15U]
                                : 0U);
        __Vtemp28265[0x16U] = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                & (6U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                   [0U])) ? __Vtemp28260[0x16U]
                                : 0U);
        __Vtemp28265[0x17U] = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                & (6U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                   [0U])) ? __Vtemp28260[0x17U]
                                : 0U);
        __Vtemp28265[0x18U] = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                & (6U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                   [0U])) ? __Vtemp28260[0x18U]
                                : 0U);
        __Vtemp28265[0x19U] = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                & (6U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                   [0U])) ? __Vtemp28260[0x19U]
                                : 0U);
        __Vtemp28265[0x1aU] = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                & (6U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                   [0U])) ? __Vtemp28260[0x1aU]
                                : 0U);
        __Vtemp28265[0x1bU] = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                & (6U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                   [0U])) ? __Vtemp28260[0x1bU]
                                : 0U);
        __Vtemp28265[0x1cU] = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                & (6U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                   [0U])) ? __Vtemp28260[0x1cU]
                                : 0U);
        __Vtemp28265[0x1dU] = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                & (6U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                   [0U])) ? __Vtemp28260[0x1dU]
                                : 0U);
        __Vtemp28265[0x1eU] = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                & (6U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                   [0U])) ? __Vtemp28260[0x1eU]
                                : 0U);
        __Vtemp28265[0x1fU] = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                & (6U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                   [0U])) ? __Vtemp28260[0x1fU]
                                : 0U);
        __Vtemp28265[0x20U] = ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                & (6U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode
                                   [0U])) ? (0xffffU 
                                             & __Vtemp28260[0x20U])
                                : 0U);
        vcdp->chgWData(oldp+4,(__Vtemp28265),1040);
        vcdp->chgIData(oldp+37,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__watchdog),32);
        vcdp->chgWData(oldp+38,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1),1040);
        vcdp->chgWData(oldp+71,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1),4160);
        vcdp->chgBit(oldp+201,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_2));
        vcdp->chgBit(oldp+202,((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_2) 
                                      - (IData)(1U)))));
        vcdp->chgBit(oldp+203,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_2)))));
        VL_SHIFTR_WWI(4160,4160,14, __Vtemp28268, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1, 
                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source
                       [0U] << 2U));
        __Vtemp28271[0U] = (7U & (__Vtemp28268[0U] 
                                  >> 1U));
        __Vilp = 1U;
        while ((__Vilp <= 0x81U)) {
            __Vtemp28271[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
        VL_EXTEND_WW(4160,4159, __Vtemp28272, __Vtemp28271);
        vcdp->chgCData(oldp+204,((0xfU & __Vtemp28272[0U])),4);
        vcdp->chgIData(oldp+205,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__watchdog_1),32);
        vcdp->chgCData(oldp+206,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode[0]),3);
        vcdp->chgCData(oldp+207,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param[0]),3);
        vcdp->chgCData(oldp+208,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size[0]),2);
        vcdp->chgSData(oldp+209,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source[0]),11);
        vcdp->chgIData(oldp+210,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address[0]),26);
        vcdp->chgCData(oldp+211,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask[0]),8);
        vcdp->chgQData(oldp+212,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data[0]),64);
        vcdp->chgBit(oldp+214,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt[0]));
        vcdp->chgCData(oldp+215,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode[0]),3);
    }
}
