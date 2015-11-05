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

// MyAds/HandleCompleted
struct HandleCompleted_t43;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t45;
// System.AsyncCallback
struct AsyncCallback_t46;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void MyAds/HandleCompleted::.ctor(System.Object,System.IntPtr)
extern "C" void HandleCompleted__ctor_m103 (HandleCompleted_t43 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MyAds/HandleCompleted::Invoke()
extern "C" void HandleCompleted_Invoke_m104 (HandleCompleted_t43 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_HandleCompleted_t43(Il2CppObject* delegate);
// System.IAsyncResult MyAds/HandleCompleted::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * HandleCompleted_BeginInvoke_m105 (HandleCompleted_t43 * __this, AsyncCallback_t46 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MyAds/HandleCompleted::EndInvoke(System.IAsyncResult)
extern "C" void HandleCompleted_EndInvoke_m106 (HandleCompleted_t43 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
