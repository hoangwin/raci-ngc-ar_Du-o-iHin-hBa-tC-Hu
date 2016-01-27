#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Threading.EventWaitHandle
struct EventWaitHandle_t_942938438_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Threading_EventResetMode816502747.h"

// System.Void System.Threading.EventWaitHandle::.ctor(System.Boolean,System.Threading.EventResetMode)
extern "C"  void EventWaitHandle__ctor_m106135182_0 (EventWaitHandle_t_942938438_0 * __this, bool ___initialState, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.EventWaitHandle::IsManualReset(System.Threading.EventResetMode)
extern "C"  bool EventWaitHandle_IsManualReset_m616210854_0 (EventWaitHandle_t_942938438_0 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.EventWaitHandle::Reset()
extern "C"  bool EventWaitHandle_Reset_m779895263_0 (EventWaitHandle_t_942938438_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.EventWaitHandle::Set()
extern "C"  bool EventWaitHandle_Set_m_1319190626_0 (EventWaitHandle_t_942938438_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
