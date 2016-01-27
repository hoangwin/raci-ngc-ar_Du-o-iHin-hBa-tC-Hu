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

// UnityEngine.Events.CachedInvokableCall`1<System.Object>
struct CachedInvokableCall_1_t77537256_0;
// UnityEngine.Object
struct Object_t_1540828846_0;
struct Object_t_1540828846_0_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t_591698798_0;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C"  void CachedInvokableCall_1__ctor_m79259589_0_gshared (CachedInvokableCall_1_t77537256_0 * __this, Object_t_1540828846_0 * ___target, MethodInfo_t * ___theFunction, Object_t * ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m79259589_0(__this, ___target, ___theFunction, ___argument, method) ((  void (*) (CachedInvokableCall_1_t77537256_0 *, Object_t_1540828846_0 *, MethodInfo_t *, Object_t *, const MethodInfo*))CachedInvokableCall_1__ctor_m79259589_0_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::Invoke(System.Object[])
extern "C"  void CachedInvokableCall_1_Invoke_m_1893730352_0_gshared (CachedInvokableCall_1_t77537256_0 * __this, ObjectU5BU5D_t_591698798_0* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m_1893730352_0(__this, ___args, method) ((  void (*) (CachedInvokableCall_1_t77537256_0 *, ObjectU5BU5D_t_591698798_0*, const MethodInfo*))CachedInvokableCall_1_Invoke_m_1893730352_0_gshared)(__this, ___args, method)
