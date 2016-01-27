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

// System.Threading.ThreadStart
struct ThreadStart_t1642636255_0;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t_87838773_0;
// System.AsyncCallback
struct AsyncCallback_t2110631700_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr117299260.h"

// System.Void System.Threading.ThreadStart::.ctor(System.Object,System.IntPtr)
extern "C"  void ThreadStart__ctor_m_1279710455_0 (ThreadStart_t1642636255_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ThreadStart::Invoke()
extern "C"  void ThreadStart_Invoke_m_384632975_0 (ThreadStart_t1642636255_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ThreadStart_t1642636255_0(Il2CppObject* delegate);
// System.IAsyncResult System.Threading.ThreadStart::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Object_t * ThreadStart_BeginInvoke_m1016304538_0 (ThreadStart_t1642636255_0 * __this, AsyncCallback_t2110631700_0 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ThreadStart::EndInvoke(System.IAsyncResult)
extern "C"  void ThreadStart_EndInvoke_m_1446896129_0 (ThreadStart_t1642636255_0 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
