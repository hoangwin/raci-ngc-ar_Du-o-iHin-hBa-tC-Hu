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

// System.Collections.Generic.Comparer`1/DefaultComparer<System.Object>
struct DefaultComparer_t2011;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Object>::.ctor()
extern "C" void DefaultComparer__ctor_m12060_gshared (DefaultComparer_t2011 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12060(__this, method) (( void (*) (DefaultComparer_t2011 *, const MethodInfo*))DefaultComparer__ctor_m12060_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Object>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m12061_gshared (DefaultComparer_t2011 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m12061(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t2011 *, Object_t *, Object_t *, const MethodInfo*))DefaultComparer_Compare_m12061_gshared)(__this, ___x, ___y, method)
