﻿#pragma once

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
struct CachedInvokableCall_1_t2494;
// UnityEngine.Object
struct Object_t245;
struct Object_t245_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t242;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m18348_gshared (CachedInvokableCall_1_t2494 * __this, Object_t245 * ___target, MethodInfo_t * ___theFunction, Object_t * ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m18348(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t2494 *, Object_t245 *, MethodInfo_t *, Object_t *, const MethodInfo*))CachedInvokableCall_1__ctor_m18348_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m18349_gshared (CachedInvokableCall_1_t2494 * __this, ObjectU5BU5D_t242* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m18349(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t2494 *, ObjectU5BU5D_t242*, const MethodInfo*))CachedInvokableCall_1_Invoke_m18349_gshared)(__this, ___args, method)