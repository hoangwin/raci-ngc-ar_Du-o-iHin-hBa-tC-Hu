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

// UnityEngine.Display/DisplaysUpdatedDelegate
struct DisplaysUpdatedDelegate_t_2074847071_0;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t_87838773_0;
// System.AsyncCallback
struct AsyncCallback_t2110631700_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr117299260.h"

// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void DisplaysUpdatedDelegate__ctor_m_1443298129_0 (DisplaysUpdatedDelegate_t_2074847071_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::Invoke()
extern "C"  void DisplaysUpdatedDelegate_Invoke_m_648628053_0 (DisplaysUpdatedDelegate_t_2074847071_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_DisplaysUpdatedDelegate_t_2074847071_0(Il2CppObject* delegate);
// System.IAsyncResult UnityEngine.Display/DisplaysUpdatedDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Object_t * DisplaysUpdatedDelegate_BeginInvoke_m2030617484_0 (DisplaysUpdatedDelegate_t_2074847071_0 * __this, AsyncCallback_t2110631700_0 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void DisplaysUpdatedDelegate_EndInvoke_m_1060402459_0 (DisplaysUpdatedDelegate_t_2074847071_0 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
