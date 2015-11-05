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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Boolean>
struct DefaultComparer_t2524;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Boolean>::.ctor()
extern "C" void DefaultComparer__ctor_m18717_gshared (DefaultComparer_t2524 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m18717(__this, method) (( void (*) (DefaultComparer_t2524 *, const MethodInfo*))DefaultComparer__ctor_m18717_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Boolean>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m18718_gshared (DefaultComparer_t2524 * __this, bool ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m18718(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2524 *, bool, const MethodInfo*))DefaultComparer_GetHashCode_m18718_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Boolean>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m18719_gshared (DefaultComparer_t2524 * __this, bool ___x, bool ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m18719(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2524 *, bool, bool, const MethodInfo*))DefaultComparer_Equals_m18719_gshared)(__this, ___x, ___y, method)
