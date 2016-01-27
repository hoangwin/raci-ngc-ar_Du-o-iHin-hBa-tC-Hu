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

// iTween/EasingFunction
struct EasingFunction_t1611348517_0;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t_87838773_0;
// System.AsyncCallback
struct AsyncCallback_t2110631700_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr117299260.h"

// System.Void iTween/EasingFunction::.ctor(System.Object,System.IntPtr)
extern "C"  void EasingFunction__ctor_m_1725371053_0 (EasingFunction_t1611348517_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween/EasingFunction::Invoke(System.Single,System.Single,System.Single)
extern "C"  float EasingFunction_Invoke_m126482598_0 (EasingFunction_t1611348517_0 * __this, float ___start, float ___end, float ___Value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" float pinvoke_delegate_wrapper_EasingFunction_t1611348517_0(Il2CppObject* delegate, float ___start, float ___end, float ___Value);
// System.IAsyncResult iTween/EasingFunction::BeginInvoke(System.Single,System.Single,System.Single,System.AsyncCallback,System.Object)
extern "C"  Object_t * EasingFunction_BeginInvoke_m_1642194091_0 (EasingFunction_t1611348517_0 * __this, float ___start, float ___end, float ___Value, AsyncCallback_t2110631700_0 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single iTween/EasingFunction::EndInvoke(System.IAsyncResult)
extern "C"  float EasingFunction_EndInvoke_m_1455781953_0 (EasingFunction_t1611348517_0 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
