﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Diagnostics.StackTrace
struct StackTrace_t1351389214_0;
// System.Exception
struct Exception_t_116002698_0;
// System.Diagnostics.StackFrame[]
struct StackFrameU5BU5D_t1327847334_0;
// System.Diagnostics.StackFrame
struct StackFrame_t_1262081114_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Diagnostics.StackTrace::.ctor()
extern "C"  void StackTrace__ctor_m_1889981940_0 (StackTrace_t1351389214_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::.ctor(System.Int32,System.Boolean)
extern "C"  void StackTrace__ctor_m1811467992_0 (StackTrace_t1351389214_0 * __this, int32_t ___skipFrames, bool ___fNeedFileInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::.ctor(System.Exception,System.Boolean)
extern "C"  void StackTrace__ctor_m772333217_0 (StackTrace_t1351389214_0 * __this, Exception_t_116002698_0 * ___e, bool ___fNeedFileInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::.ctor(System.Exception,System.Int32,System.Boolean)
extern "C"  void StackTrace__ctor_m_1238164804_0 (StackTrace_t1351389214_0 * __this, Exception_t_116002698_0 * ___e, int32_t ___skipFrames, bool ___fNeedFileInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::.ctor(System.Exception,System.Int32,System.Boolean,System.Boolean)
extern "C"  void StackTrace__ctor_m_1959418529_0 (StackTrace_t1351389214_0 * __this, Exception_t_116002698_0 * ___e, int32_t ___skipFrames, bool ___fNeedFileInfo, bool ___returnNativeFrames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::init_frames(System.Int32,System.Boolean)
extern "C"  void StackTrace_init_frames_m_990324301_0 (StackTrace_t1351389214_0 * __this, int32_t ___skipFrames, bool ___fNeedFileInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.StackFrame[] System.Diagnostics.StackTrace::get_trace(System.Exception,System.Int32,System.Boolean)
extern "C"  StackFrameU5BU5D_t1327847334_0* StackTrace_get_trace_m1709902627_0 (Object_t * __this /* static, unused */, Exception_t_116002698_0 * ___e, int32_t ___skipFrames, bool ___fNeedFileInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.StackTrace::get_FrameCount()
extern "C"  int32_t StackTrace_get_FrameCount_m1447315207_0 (StackTrace_t1351389214_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.StackFrame System.Diagnostics.StackTrace::GetFrame(System.Int32)
extern "C"  StackFrame_t_1262081114_0 * StackTrace_GetFrame_m722859709_0 (StackTrace_t1351389214_0 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.StackTrace::ToString()
extern "C"  String_t* StackTrace_ToString_m1480148941_0 (StackTrace_t1351389214_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
