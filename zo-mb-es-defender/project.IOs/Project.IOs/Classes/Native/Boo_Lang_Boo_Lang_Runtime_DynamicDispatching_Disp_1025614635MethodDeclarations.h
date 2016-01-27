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

// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
struct Dispatcher_t_1025614635_0;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t_591698798_0;
// System.IAsyncResult
struct IAsyncResult_t_87838773_0;
// System.AsyncCallback
struct AsyncCallback_t2110631700_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr117299260.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Object_1786876978.h"

// System.Void Boo.Lang.Runtime.DynamicDispatching.Dispatcher::.ctor(System.Object,System.IntPtr)
extern "C"  void Dispatcher__ctor_m1899878867_0 (Dispatcher_t_1025614635_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Boo.Lang.Runtime.DynamicDispatching.Dispatcher::Invoke(System.Object,System.Object[])
extern "C"  Object_t * Dispatcher_Invoke_m_1648856782_0 (Dispatcher_t_1025614635_0 * __this, Object_t * ___target, ObjectU5BU5D_t_591698798_0* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Object_t * pinvoke_delegate_wrapper_Dispatcher_t_1025614635_0(Il2CppObject* delegate, Object_t * ___target, ObjectU5BU5D_t_591698798_0* ___args);
// System.IAsyncResult Boo.Lang.Runtime.DynamicDispatching.Dispatcher::BeginInvoke(System.Object,System.Object[],System.AsyncCallback,System.Object)
extern "C"  Object_t * Dispatcher_BeginInvoke_m_1828328514_0 (Dispatcher_t_1025614635_0 * __this, Object_t * ___target, ObjectU5BU5D_t_591698798_0* ___args, AsyncCallback_t2110631700_0 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Boo.Lang.Runtime.DynamicDispatching.Dispatcher::EndInvoke(System.IAsyncResult)
extern "C"  Object_t * Dispatcher_EndInvoke_m_1738505784_0 (Dispatcher_t_1025614635_0 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
