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


#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_1MethodDeclarations.h"

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Object>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
#define ObjectPool_1__ctor_m13260(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t2116 *, UnityAction_1_t2117 *, UnityAction_1_t2117 *, const MethodInfo*))ObjectPool_1__ctor_m13114_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Object>>::get_countAll()
#define ObjectPool_1_get_countAll_m13261(__this, method) (( int32_t (*) (ObjectPool_1_t2116 *, const MethodInfo*))ObjectPool_1_get_countAll_m13116_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Object>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m13262(__this, ___value, method) (( void (*) (ObjectPool_1_t2116 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m13118_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Object>>::get_countActive()
#define ObjectPool_1_get_countActive_m13263(__this, method) (( int32_t (*) (ObjectPool_1_t2116 *, const MethodInfo*))ObjectPool_1_get_countActive_m13120_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Object>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m13264(__this, method) (( int32_t (*) (ObjectPool_1_t2116 *, const MethodInfo*))ObjectPool_1_get_countInactive_m13122_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Object>>::Get()
#define ObjectPool_1_Get_m13265(__this, method) (( List_1_t573 * (*) (ObjectPool_1_t2116 *, const MethodInfo*))ObjectPool_1_Get_m13124_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<System.Object>>::Release(T)
#define ObjectPool_1_Release_m13266(__this, ___element, method) (( void (*) (ObjectPool_1_t2116 *, List_1_t573 *, const MethodInfo*))ObjectPool_1_Release_m13126_gshared)(__this, ___element, method)