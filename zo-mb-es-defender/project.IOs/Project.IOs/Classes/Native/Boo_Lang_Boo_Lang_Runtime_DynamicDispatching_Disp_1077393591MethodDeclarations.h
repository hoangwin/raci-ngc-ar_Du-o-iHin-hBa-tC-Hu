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

// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory
struct DispatcherFactory_t_1077393591_0;
// System.Object
struct Object_t;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
struct Dispatcher_t_1025614635_0;
// System.IAsyncResult
struct IAsyncResult_t_87838773_0;
// System.AsyncCallback
struct AsyncCallback_t2110631700_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr117299260.h"
#include "Boo_Lang_Boo_Lang_Runtime_DynamicDispatching_Disp_1025614635.h"

// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory::.ctor(System.Object,System.IntPtr)
extern "C"  void DispatcherFactory__ctor_m_988951113_0 (DispatcherFactory_t_1077393591_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory::Invoke()
extern "C"  Dispatcher_t_1025614635_0 * DispatcherFactory_Invoke_m1899124168_0 (DispatcherFactory_t_1077393591_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Dispatcher_t_1025614635_0 * pinvoke_delegate_wrapper_DispatcherFactory_t_1077393591_0(Il2CppObject* delegate);
// System.IAsyncResult Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Object_t * DispatcherFactory_BeginInvoke_m_1612960702_0 (DispatcherFactory_t_1077393591_0 * __this, AsyncCallback_t2110631700_0 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory::EndInvoke(System.IAsyncResult)
extern "C"  Dispatcher_t_1025614635_0 * DispatcherFactory_EndInvoke_m_562565284_0 (DispatcherFactory_t_1077393591_0 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
