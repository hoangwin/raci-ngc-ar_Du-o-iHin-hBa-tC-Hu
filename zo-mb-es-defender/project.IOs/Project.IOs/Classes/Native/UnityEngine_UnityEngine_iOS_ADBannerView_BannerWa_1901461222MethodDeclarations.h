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

// UnityEngine.iOS.ADBannerView/BannerWasLoadedDelegate
struct BannerWasLoadedDelegate_t_1901461222_0;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t_87838773_0;
// System.AsyncCallback
struct AsyncCallback_t2110631700_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr117299260.h"

// System.Void UnityEngine.iOS.ADBannerView/BannerWasLoadedDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void BannerWasLoadedDelegate__ctor_m_54163182_0 (BannerWasLoadedDelegate_t_1901461222_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.ADBannerView/BannerWasLoadedDelegate::Invoke()
extern "C"  void BannerWasLoadedDelegate_Invoke_m329500768_0 (BannerWasLoadedDelegate_t_1901461222_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_BannerWasLoadedDelegate_t_1901461222_0(Il2CppObject* delegate);
// System.IAsyncResult UnityEngine.iOS.ADBannerView/BannerWasLoadedDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Object_t * BannerWasLoadedDelegate_BeginInvoke_m1777744059_0 (BannerWasLoadedDelegate_t_1901461222_0 * __this, AsyncCallback_t2110631700_0 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.ADBannerView/BannerWasLoadedDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void BannerWasLoadedDelegate_EndInvoke_m1631348540_0 (BannerWasLoadedDelegate_t_1901461222_0 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
