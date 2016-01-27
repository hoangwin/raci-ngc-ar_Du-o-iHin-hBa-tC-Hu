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

// System.ResolveEventHandler
struct ResolveEventHandler_t_662443151_0;
// System.Object
struct Object_t;
// System.Reflection.Assembly
struct Assembly_t_808956426_0;
// System.ResolveEventArgs
struct ResolveEventArgs_t_560051156_0;
// System.IAsyncResult
struct IAsyncResult_t_87838773_0;
// System.AsyncCallback
struct AsyncCallback_t2110631700_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr117299260.h"

// System.Void System.ResolveEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void ResolveEventHandler__ctor_m_1196696253_0 (ResolveEventHandler_t_662443151_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::Invoke(System.Object,System.ResolveEventArgs)
extern "C"  Assembly_t_808956426_0 * ResolveEventHandler_Invoke_m_951074830_0 (ResolveEventHandler_t_662443151_0 * __this, Object_t * ___sender, ResolveEventArgs_t_560051156_0 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Assembly_t_808956426_0 * pinvoke_delegate_wrapper_ResolveEventHandler_t_662443151_0(Il2CppObject* delegate, Object_t * ___sender, ResolveEventArgs_t_560051156_0 * ___args);
// System.IAsyncResult System.ResolveEventHandler::BeginInvoke(System.Object,System.ResolveEventArgs,System.AsyncCallback,System.Object)
extern "C"  Object_t * ResolveEventHandler_BeginInvoke_m916075374_0 (ResolveEventHandler_t_662443151_0 * __this, Object_t * ___sender, ResolveEventArgs_t_560051156_0 * ___args, AsyncCallback_t2110631700_0 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  Assembly_t_808956426_0 * ResolveEventHandler_EndInvoke_m1489338158_0 (ResolveEventHandler_t_662443151_0 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
