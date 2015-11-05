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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>
struct DefaultComparer_t2315;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>::.ctor()
extern "C" void DefaultComparer__ctor_m16208_gshared (DefaultComparer_t2315 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m16208(__this, method) (( void (*) (DefaultComparer_t2315 *, const MethodInfo*))DefaultComparer__ctor_m16208_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m16209_gshared (DefaultComparer_t2315 * __this, Vector3_t17  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m16209(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2315 *, Vector3_t17 , const MethodInfo*))DefaultComparer_GetHashCode_m16209_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m16210_gshared (DefaultComparer_t2315 * __this, Vector3_t17  ___x, Vector3_t17  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m16210(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2315 *, Vector3_t17 , Vector3_t17 , const MethodInfo*))DefaultComparer_Equals_m16210_gshared)(__this, ___x, ___y, method)
