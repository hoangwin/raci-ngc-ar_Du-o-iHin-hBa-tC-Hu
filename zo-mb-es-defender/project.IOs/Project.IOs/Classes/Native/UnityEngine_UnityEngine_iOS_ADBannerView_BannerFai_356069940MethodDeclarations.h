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

// UnityEngine.iOS.ADBannerView/BannerFailedToLoadDelegate
struct BannerFailedToLoadDelegate_t_356069940_0;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t_87838773_0;
// System.AsyncCallback
struct AsyncCallback_t2110631700_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr117299260.h"

// System.Void UnityEngine.iOS.ADBannerView/BannerFailedToLoadDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void BannerFailedToLoadDelegate__ctor_m_1212372782_0 (BannerFailedToLoadDelegate_t_356069940_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.ADBannerView/BannerFailedToLoadDelegate::Invoke()
extern "C"  void BannerFailedToLoadDelegate_Invoke_m_730203352_0 (BannerFailedToLoadDelegate_t_356069940_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_BannerFailedToLoadDelegate_t_356069940_0(Il2CppObject* delegate);
// System.IAsyncResult UnityEngine.iOS.ADBannerView/BannerFailedToLoadDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Object_t * BannerFailedToLoadDelegate_BeginInvoke_m_269146005_0 (BannerFailedToLoadDelegate_t_356069940_0 * __this, AsyncCallback_t2110631700_0 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.ADBannerView/BannerFailedToLoadDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void BannerFailedToLoadDelegate_EndInvoke_m_2023649528_0 (BannerFailedToLoadDelegate_t_356069940_0 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
