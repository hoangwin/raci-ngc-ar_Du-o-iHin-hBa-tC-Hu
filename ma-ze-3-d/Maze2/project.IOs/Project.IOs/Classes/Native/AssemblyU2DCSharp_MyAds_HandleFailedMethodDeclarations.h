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

// MyAds/HandleFailed
struct HandleFailed_t47;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t45;
// System.AsyncCallback
struct AsyncCallback_t46;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void MyAds/HandleFailed::.ctor(System.Object,System.IntPtr)
extern "C" void HandleFailed__ctor_m107 (HandleFailed_t47 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MyAds/HandleFailed::Invoke()
extern "C" void HandleFailed_Invoke_m108 (HandleFailed_t47 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_HandleFailed_t47(Il2CppObject* delegate);
// System.IAsyncResult MyAds/HandleFailed::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * HandleFailed_BeginInvoke_m109 (HandleFailed_t47 * __this, AsyncCallback_t46 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MyAds/HandleFailed::EndInvoke(System.IAsyncResult)
extern "C" void HandleFailed_EndInvoke_m110 (HandleFailed_t47 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
