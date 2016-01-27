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

// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_t47513119_0;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t_87838773_0;
// System.AsyncCallback
struct AsyncCallback_t2110631700_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr117299260.h"

// System.Void UnityEngine.Font/FontTextureRebuildCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void FontTextureRebuildCallback__ctor_m_1750636007_0 (FontTextureRebuildCallback_t47513119_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font/FontTextureRebuildCallback::Invoke()
extern "C"  void FontTextureRebuildCallback_Invoke_m_354166567_0 (FontTextureRebuildCallback_t47513119_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_FontTextureRebuildCallback_t47513119_0(Il2CppObject* delegate);
// System.IAsyncResult UnityEngine.Font/FontTextureRebuildCallback::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Object_t * FontTextureRebuildCallback_BeginInvoke_m381807774_0 (FontTextureRebuildCallback_t47513119_0 * __this, AsyncCallback_t2110631700_0 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font/FontTextureRebuildCallback::EndInvoke(System.IAsyncResult)
extern "C"  void FontTextureRebuildCallback_EndInvoke_m_19412085_0 (FontTextureRebuildCallback_t47513119_0 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
