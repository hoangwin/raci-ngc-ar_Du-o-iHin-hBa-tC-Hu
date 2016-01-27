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

// UnityEngine.ParticleSystem/IteratorDelegate
struct IteratorDelegate_t1114714736_0;
// System.Object
struct Object_t;
// UnityEngine.ParticleSystem
struct ParticleSystem_t1604016392_0;
// System.IAsyncResult
struct IAsyncResult_t_87838773_0;
// System.AsyncCallback
struct AsyncCallback_t2110631700_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr117299260.h"

// System.Void UnityEngine.ParticleSystem/IteratorDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void IteratorDelegate__ctor_m_602573354_0 (IteratorDelegate_t1114714736_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem/IteratorDelegate::Invoke(UnityEngine.ParticleSystem)
extern "C"  bool IteratorDelegate_Invoke_m_905828928_0 (IteratorDelegate_t1114714736_0 * __this, ParticleSystem_t1604016392_0 * ___ps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool pinvoke_delegate_wrapper_IteratorDelegate_t1114714736_0(Il2CppObject* delegate, ParticleSystem_t1604016392_0 * ___ps);
// System.IAsyncResult UnityEngine.ParticleSystem/IteratorDelegate::BeginInvoke(UnityEngine.ParticleSystem,System.AsyncCallback,System.Object)
extern "C"  Object_t * IteratorDelegate_BeginInvoke_m1741046139_0 (IteratorDelegate_t1114714736_0 * __this, ParticleSystem_t1604016392_0 * ___ps, AsyncCallback_t2110631700_0 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem/IteratorDelegate::EndInvoke(System.IAsyncResult)
extern "C"  bool IteratorDelegate_EndInvoke_m121475984_0 (IteratorDelegate_t1114714736_0 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
