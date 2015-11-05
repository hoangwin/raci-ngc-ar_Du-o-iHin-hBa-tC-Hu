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

// System.Threading.WaitCallback
struct WaitCallback_t1882;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t45;
// System.AsyncCallback
struct AsyncCallback_t46;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Threading.WaitCallback::.ctor(System.Object,System.IntPtr)
extern "C" void WaitCallback__ctor_m11580 (WaitCallback_t1882 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitCallback::Invoke(System.Object)
extern "C" void WaitCallback_Invoke_m11581 (WaitCallback_t1882 * __this, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_WaitCallback_t1882(Il2CppObject* delegate, Object_t * ___state);
// System.IAsyncResult System.Threading.WaitCallback::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern "C" Object_t * WaitCallback_BeginInvoke_m11582 (WaitCallback_t1882 * __this, Object_t * ___state, AsyncCallback_t46 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitCallback::EndInvoke(System.IAsyncResult)
extern "C" void WaitCallback_EndInvoke_m11583 (WaitCallback_t1882 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
