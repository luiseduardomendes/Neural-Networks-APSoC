# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VTestHarness.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VTestHarness \
	VTestHarness___024root__DepSet_h30a6511e__0 \
	VTestHarness___024root__DepSet_h30a6511e__1 \
	VTestHarness___024root__DepSet_h30a6511e__2 \
	VTestHarness___024root__DepSet_h30a6511e__3 \
	VTestHarness___024root__DepSet_h30a6511e__4 \
	VTestHarness___024root__DepSet_h30a6511e__5 \
	VTestHarness___024root__DepSet_h30a6511e__6 \
	VTestHarness___024root__DepSet_h30a6511e__7 \
	VTestHarness___024root__DepSet_h30a6511e__8 \
	VTestHarness___024root__DepSet_h30a6511e__9 \
	VTestHarness___024root__DepSet_h30a6511e__10 \
	VTestHarness___024root__DepSet_h30a6511e__11 \
	VTestHarness___024root__DepSet_h30a6511e__12 \
	VTestHarness___024root__DepSet_h30a6511e__13 \
	VTestHarness___024root__DepSet_h30a6511e__14 \
	VTestHarness___024root__DepSet_h30a6511e__15 \
	VTestHarness___024root__DepSet_h30a6511e__16 \
	VTestHarness___024root__DepSet_h30a6511e__17 \
	VTestHarness___024root__DepSet_h30a6511e__18 \
	VTestHarness___024root__DepSet_h30a6511e__19 \
	VTestHarness___024root__DepSet_h30a6511e__20 \
	VTestHarness___024root__DepSet_h30a6511e__21 \
	VTestHarness___024root__DepSet_h30a6511e__22 \
	VTestHarness___024root__DepSet_h30a6511e__23 \
	VTestHarness___024root__DepSet_h30a6511e__24 \
	VTestHarness___024root__DepSet_h30a6511e__25 \
	VTestHarness___024root__DepSet_h30a6511e__26 \
	VTestHarness___024root__DepSet_h30a6511e__27 \
	VTestHarness___024root__DepSet_h30a6511e__28 \
	VTestHarness___024root__DepSet_h30a6511e__29 \
	VTestHarness___024root__DepSet_h30a6511e__30 \
	VTestHarness___024root__DepSet_h30a6511e__31 \
	VTestHarness___024root__DepSet_h30a6511e__32 \
	VTestHarness___024root__DepSet_h30a6511e__33 \
	VTestHarness___024root__DepSet_h30a6511e__34 \
	VTestHarness___024root__DepSet_h30a6511e__35 \
	VTestHarness___024root__DepSet_h30a6511e__36 \
	VTestHarness___024root__DepSet_h30a6511e__37 \
	VTestHarness___024root__DepSet_h30a6511e__38 \
	VTestHarness___024root__DepSet_h30a6511e__39 \
	VTestHarness___024root__DepSet_h30a6511e__40 \
	VTestHarness___024root__DepSet_h30a6511e__41 \
	VTestHarness___024root__DepSet_h30a6511e__42 \
	VTestHarness___024root__DepSet_h30a6511e__43 \
	VTestHarness___024root__DepSet_h30a6511e__44 \
	VTestHarness___024root__DepSet_h30a6511e__45 \
	VTestHarness___024root__DepSet_h30a6511e__46 \
	VTestHarness___024root__DepSet_h30a6511e__47 \
	VTestHarness___024root__DepSet_h30a6511e__48 \
	VTestHarness___024root__DepSet_h30a6511e__49 \
	VTestHarness___024root__DepSet_h30a6511e__50 \
	VTestHarness___024root__DepSet_h30a6511e__51 \
	VTestHarness___024root__DepSet_h30a6511e__52 \
	VTestHarness___024root__DepSet_h30a6511e__53 \
	VTestHarness___024root__DepSet_h30a6511e__54 \
	VTestHarness___024root__DepSet_h30a6511e__55 \
	VTestHarness___024root__DepSet_h30a6511e__56 \
	VTestHarness___024root__DepSet_h30a6511e__57 \
	VTestHarness___024root__DepSet_h30a6511e__58 \
	VTestHarness___024root__DepSet_h30a6511e__59 \
	VTestHarness___024root__DepSet_h30a6511e__60 \
	VTestHarness___024root__DepSet_h30a6511e__61 \
	VTestHarness___024root__DepSet_h30a6511e__62 \
	VTestHarness___024root__DepSet_h30a6511e__63 \
	VTestHarness___024root__DepSet_h30a6511e__64 \
	VTestHarness___024root__DepSet_h30a6511e__65 \
	VTestHarness___024root__DepSet_h30a6511e__66 \
	VTestHarness___024root__DepSet_h30a6511e__67 \
	VTestHarness___024root__DepSet_h30a6511e__68 \
	VTestHarness___024root__DepSet_h30a6511e__69 \
	VTestHarness___024root__DepSet_h30a6511e__70 \
	VTestHarness___024root__DepSet_hcfd557fa__0 \
	VTestHarness___024root__DepSet_hcfd557fa__1 \
	VTestHarness___024root__DepSet_hcfd557fa__2 \
	VTestHarness___024root__DepSet_hcfd557fa__3 \
	VTestHarness___024root__DepSet_hcfd557fa__4 \
	VTestHarness___024root__DepSet_hcfd557fa__5 \
	VTestHarness___024root__DepSet_hcfd557fa__6 \
	VTestHarness___024root__DepSet_hcfd557fa__7 \
	VTestHarness___024root__DepSet_hcfd557fa__8 \
	VTestHarness___024root__DepSet_hcfd557fa__9 \
	VTestHarness___024root__DepSet_hcfd557fa__10 \
	VTestHarness___024root__DepSet_hcfd557fa__11 \
	VTestHarness___024root__DepSet_hcfd557fa__12 \
	VTestHarness___024root__DepSet_hcfd557fa__13 \
	VTestHarness___024root__DepSet_hcfd557fa__14 \
	VTestHarness___024root__DepSet_hcfd557fa__15 \
	VTestHarness___024root__DepSet_hcfd557fa__16 \
	VTestHarness___024root__DepSet_hcfd557fa__17 \
	VTestHarness___024root__DepSet_hcfd557fa__18 \
	VTestHarness___024root__DepSet_hcfd557fa__19 \
	VTestHarness___024root__DepSet_hcfd557fa__20 \
	VTestHarness___024root__DepSet_hcfd557fa__21 \
	VTestHarness___024root__DepSet_hcfd557fa__22 \
	VTestHarness___024root__DepSet_hcfd557fa__23 \
	VTestHarness___024root__DepSet_hcfd557fa__24 \
	VTestHarness___024root__DepSet_hcfd557fa__25 \
	VTestHarness___024root__DepSet_hcfd557fa__26 \
	VTestHarness___024root__DepSet_hcfd557fa__27 \
	VTestHarness___024root__DepSet_hcfd557fa__28 \
	VTestHarness___024root__DepSet_hcfd557fa__29 \
	VTestHarness___024root__DepSet_hcfd557fa__30 \
	VTestHarness___024root__DepSet_hcfd557fa__31 \
	VTestHarness___024root__DepSet_hcfd557fa__32 \
	VTestHarness___024root__DepSet_hcfd557fa__33 \
	VTestHarness___024root__DepSet_hcfd557fa__34 \
	VTestHarness___024root__DepSet_hcfd557fa__35 \
	VTestHarness___024root__DepSet_hcfd557fa__36 \
	VTestHarness___024root__DepSet_hcfd557fa__37 \
	VTestHarness___024root__DepSet_hcfd557fa__38 \
	VTestHarness___024root__DepSet_hcfd557fa__39 \
	VTestHarness___024root__DepSet_hcfd557fa__40 \
	VTestHarness___024root__DepSet_hcfd557fa__41 \
	VTestHarness___024root__DepSet_hcfd557fa__42 \
	VTestHarness___024root__DepSet_hcfd557fa__43 \
	VTestHarness___024root__DepSet_hcfd557fa__44 \
	VTestHarness___024root__DepSet_hcfd557fa__45 \
	VTestHarness___024root__DepSet_hcfd557fa__46 \
	VTestHarness___024root__DepSet_hcfd557fa__47 \
	VTestHarness___024root__DepSet_hcfd557fa__48 \
	VTestHarness___024root__DepSet_hcfd557fa__49 \
	VTestHarness___024root__DepSet_hcfd557fa__50 \
	VTestHarness___024root__DepSet_hcfd557fa__51 \
	VTestHarness___024root__DepSet_hcfd557fa__52 \
	VTestHarness___024root__DepSet_hcfd557fa__53 \
	VTestHarness___024root__DepSet_hcfd557fa__54 \
	VTestHarness___024root__DepSet_hcfd557fa__55 \
	VTestHarness___024root__DepSet_hcfd557fa__56 \
	VTestHarness___024root__DepSet_hcfd557fa__57 \
	VTestHarness___024root__DepSet_hcfd557fa__58 \
	VTestHarness___024root__DepSet_hcfd557fa__59 \
	VTestHarness___024root__DepSet_hcfd557fa__60 \
	VTestHarness___024root__DepSet_hcfd557fa__61 \
	VTestHarness___024root__DepSet_hcfd557fa__62 \
	VTestHarness___024root__DepSet_hcfd557fa__63 \
	VTestHarness___024root__DepSet_hcfd557fa__64 \
	VTestHarness___024root__DepSet_hcfd557fa__65 \
	VTestHarness___024root__DepSet_hcfd557fa__66 \
	VTestHarness___024root__DepSet_hcfd557fa__67 \
	VTestHarness___024root__DepSet_hcfd557fa__68 \
	VTestHarness___024root__DepSet_hcfd557fa__69 \
	VTestHarness___024root__DepSet_hcfd557fa__70 \
	VTestHarness___024root__DepSet_hcfd557fa__71 \
	VTestHarness___024root__DepSet_hcfd557fa__72 \
	VTestHarness___024root__DepSet_hcfd557fa__73 \
	VTestHarness___024root__DepSet_hcfd557fa__74 \
	VTestHarness___024root__DepSet_hcfd557fa__75 \
	VTestHarness___024root__DepSet_hcfd557fa__76 \
	VTestHarness___024root__DepSet_hcfd557fa__77 \
	VTestHarness___024root__DepSet_hcfd557fa__78 \
	VTestHarness___024root__DepSet_hcfd557fa__79 \
	VTestHarness___024root__DepSet_hcfd557fa__80 \
	VTestHarness___024root__DepSet_hcfd557fa__81 \
	VTestHarness___024root__DepSet_hcfd557fa__82 \
	VTestHarness___024root__DepSet_hcfd557fa__83 \
	VTestHarness___024root__DepSet_hcfd557fa__84 \
	VTestHarness___024root__DepSet_hcfd557fa__85 \
	VTestHarness___024root__DepSet_hcfd557fa__86 \
	VTestHarness___024root__DepSet_hcfd557fa__87 \
	VTestHarness___024root__DepSet_hcfd557fa__88 \
	VTestHarness___024root__DepSet_hcfd557fa__89 \
	VTestHarness___024unit__DepSet_hc9fa512f__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VTestHarness__ConstPool_0 \
	VTestHarness___024root__Slow \
	VTestHarness___024root__DepSet_h30a6511e__0__Slow \
	VTestHarness___024root__DepSet_hcfd557fa__0__Slow \
	VTestHarness___024root__DepSet_hcfd557fa__1__Slow \
	VTestHarness___024root__DepSet_hcfd557fa__2__Slow \
	VTestHarness___024root__DepSet_hcfd557fa__3__Slow \
	VTestHarness___024root__DepSet_hcfd557fa__4__Slow \
	VTestHarness___024root__DepSet_hcfd557fa__5__Slow \
	VTestHarness___024root__DepSet_hcfd557fa__6__Slow \
	VTestHarness___024root__DepSet_hcfd557fa__7__Slow \
	VTestHarness___024root__DepSet_hcfd557fa__8__Slow \
	VTestHarness___024root__DepSet_hcfd557fa__9__Slow \
	VTestHarness___024root__DepSet_hcfd557fa__10__Slow \
	VTestHarness___024root__DepSet_hcfd557fa__11__Slow \
	VTestHarness___024root__DepSet_hcfd557fa__12__Slow \
	VTestHarness___024root__DepSet_hcfd557fa__13__Slow \
	VTestHarness___024root__DepSet_hcfd557fa__14__Slow \
	VTestHarness___024root__DepSet_hcfd557fa__15__Slow \
	VTestHarness___024root__DepSet_hcfd557fa__16__Slow \
	VTestHarness___024root__DepSet_hcfd557fa__17__Slow \
	VTestHarness___024root__DepSet_hcfd557fa__18__Slow \
	VTestHarness___024root__DepSet_hcfd557fa__19__Slow \
	VTestHarness___024root__DepSet_hcfd557fa__20__Slow \
	VTestHarness___024root__DepSet_hcfd557fa__21__Slow \
	VTestHarness___024root__DepSet_hcfd557fa__22__Slow \
	VTestHarness___024root__DepSet_hcfd557fa__23__Slow \
	VTestHarness___024root__DepSet_hcfd557fa__24__Slow \
	VTestHarness___024root__DepSet_hcfd557fa__25__Slow \
	VTestHarness___024root__DepSet_hcfd557fa__26__Slow \
	VTestHarness___024root__DepSet_hcfd557fa__27__Slow \
	VTestHarness___024root__DepSet_hcfd557fa__28__Slow \
	VTestHarness___024root__DepSet_hcfd557fa__29__Slow \
	VTestHarness___024root__DepSet_hcfd557fa__30__Slow \
	VTestHarness___024root__DepSet_hcfd557fa__31__Slow \
	VTestHarness___024root__DepSet_hcfd557fa__32__Slow \
	VTestHarness___024root__DepSet_hcfd557fa__33__Slow \
	VTestHarness___024root__DepSet_hcfd557fa__34__Slow \
	VTestHarness___024root__DepSet_hcfd557fa__35__Slow \
	VTestHarness___024root__DepSet_hcfd557fa__36__Slow \
	VTestHarness___024root__DepSet_hcfd557fa__37__Slow \
	VTestHarness___024root__DepSet_hcfd557fa__38__Slow \
	VTestHarness___024root__DepSet_hcfd557fa__39__Slow \
	VTestHarness___024root__DepSet_hcfd557fa__40__Slow \
	VTestHarness___024root__DepSet_hcfd557fa__41__Slow \
	VTestHarness___024root__DepSet_hcfd557fa__42__Slow \
	VTestHarness___024root__DepSet_hcfd557fa__43__Slow \
	VTestHarness___024unit__Slow \
	VTestHarness___024unit__DepSet_h66f95809__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VTestHarness__Dpi \
	VTestHarness__Trace__0 \
	VTestHarness__Trace__1 \
	VTestHarness__Trace__2 \
	VTestHarness__Trace__3 \
	VTestHarness__Trace__4 \
	VTestHarness__Trace__5 \
	VTestHarness__Trace__6 \
	VTestHarness__Trace__7 \
	VTestHarness__Trace__8 \
	VTestHarness__Trace__9 \
	VTestHarness__Trace__10 \
	VTestHarness__Trace__11 \
	VTestHarness__Trace__12 \
	VTestHarness__Trace__13 \
	VTestHarness__Trace__14 \
	VTestHarness__Trace__15 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VTestHarness__Syms \
	VTestHarness__Syms__1 \
	VTestHarness__Trace__0__Slow \
	VTestHarness__Trace__1__Slow \
	VTestHarness__Trace__2__Slow \
	VTestHarness__Trace__3__Slow \
	VTestHarness__Trace__4__Slow \
	VTestHarness__Trace__5__Slow \
	VTestHarness__Trace__6__Slow \
	VTestHarness__Trace__7__Slow \
	VTestHarness__Trace__8__Slow \
	VTestHarness__Trace__9__Slow \
	VTestHarness__Trace__10__Slow \
	VTestHarness__Trace__11__Slow \
	VTestHarness__Trace__12__Slow \
	VTestHarness__Trace__13__Slow \
	VTestHarness__Trace__14__Slow \
	VTestHarness__Trace__15__Slow \
	VTestHarness__Trace__16__Slow \
	VTestHarness__Trace__17__Slow \
	VTestHarness__Trace__18__Slow \
	VTestHarness__Trace__19__Slow \
	VTestHarness__Trace__20__Slow \
	VTestHarness__Trace__21__Slow \
	VTestHarness__Trace__22__Slow \
	VTestHarness__Trace__23__Slow \
	VTestHarness__Trace__24__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vpi \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
