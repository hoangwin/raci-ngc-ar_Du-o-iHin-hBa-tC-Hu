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

// System.Runtime.Serialization.SerializationCallbacks/CallbackHandler
struct CallbackHandler_t_969176303_0;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t_87838773_0;
// System.AsyncCallback
struct AsyncCallback_t2110631700_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr117299260.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2060733842.h"

// System.Void System.Runtime.Serialization.SerializationCallbacks/CallbackHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void CallbackHandler__ctor_m1235509347_0 (CallbackHandler_t_969176303_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationCallbacks/CallbackHandler::Invoke(System.Runtime.Serialization.StreamingContext)
extern "C"  void CallbackHandler_Invoke_m1498072969_0 (CallbackHandler_t_969176303_0 * __this, StreamingContext_t2060733842_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_CallbackHandler_t_969176303_0(Il2CppObject* delegate, StreamingContext_t2060733842_0  ___context);
// System.IAsyncResult System.Runtime.Serialization.SerializationCallbacks/CallbackHandler::BeginInvoke(System.Runtime.Serialization.StreamingContext,System.AsyncCallback,System.Object)
extern "C"  Object_t * CallbackHandler_BeginInvoke_m2132218624_0 (CallbackHandler_t_969176303_0 * __this, StreamingContext_t2060733842_0  ___context, AsyncCallback_t2110631700_0 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationCallbacks/CallbackHandler::EndInvoke(System.IAsyncResult)
extern "C"  void CallbackHandler_EndInvoke_m_1888741667_0 (CallbackHandler_t_969176303_0 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
