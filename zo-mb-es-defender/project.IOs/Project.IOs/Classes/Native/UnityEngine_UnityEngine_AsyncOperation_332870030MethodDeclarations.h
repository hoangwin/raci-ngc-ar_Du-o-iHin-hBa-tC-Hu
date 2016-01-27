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

// UnityEngine.AsyncOperation
struct AsyncOperation_t_332870030_0;
struct AsyncOperation_t_332870030_0_marshaled;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C"  void AsyncOperation__ctor_m_1380106350_0 (AsyncOperation_t_332870030_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C"  void AsyncOperation_InternalDestroy_m_982905473_0 (AsyncOperation_t_332870030_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C"  void AsyncOperation_Finalize_m67522446_0 (AsyncOperation_t_332870030_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AsyncOperation::get_isDone()
extern "C"  bool AsyncOperation_get_isDone_m1085614149_0 (AsyncOperation_t_332870030_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AsyncOperation::get_progress()
extern "C"  float AsyncOperation_get_progress_m478775228_0 (AsyncOperation_t_332870030_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AsyncOperation::get_priority()
extern "C"  int32_t AsyncOperation_get_priority_m966065939_0 (AsyncOperation_t_332870030_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::set_priority(System.Int32)
extern "C"  void AsyncOperation_set_priority_m_713946852_0 (AsyncOperation_t_332870030_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AsyncOperation::get_allowSceneActivation()
extern "C"  bool AsyncOperation_get_allowSceneActivation_m_1469516114_0 (AsyncOperation_t_332870030_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::set_allowSceneActivation(System.Boolean)
extern "C"  void AsyncOperation_set_allowSceneActivation_m_306468345_0 (AsyncOperation_t_332870030_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void AsyncOperation_t_332870030_0_marshal(const AsyncOperation_t_332870030_0& unmarshaled, AsyncOperation_t_332870030_0_marshaled& marshaled);
extern "C" void AsyncOperation_t_332870030_0_marshal_back(const AsyncOperation_t_332870030_0_marshaled& marshaled, AsyncOperation_t_332870030_0& unmarshaled);
extern "C" void AsyncOperation_t_332870030_0_marshal_cleanup(AsyncOperation_t_332870030_0_marshaled& marshaled);
