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

// System.Object
struct Object_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Nullable_1_gen_0.h"
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
extern "C" void Nullable_1__ctor_m11616_gshared (Nullable_1_t1925 * __this, TimeSpan_t947  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m11616(__this, ___value, method) (( void (*) (Nullable_1_t1925 *, TimeSpan_t947 , const MethodInfo*))Nullable_1__ctor_m11616_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m11617_gshared (Nullable_1_t1925 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m11617(__this, method) (( bool (*) (Nullable_1_t1925 *, const MethodInfo*))Nullable_1_get_HasValue_m11617_gshared)(__this, method)
// T System.Nullable`1<System.TimeSpan>::get_Value()
extern "C" TimeSpan_t947  Nullable_1_get_Value_m11618_gshared (Nullable_1_t1925 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m11618(__this, method) (( TimeSpan_t947  (*) (Nullable_1_t1925 *, const MethodInfo*))Nullable_1_get_Value_m11618_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m19670_gshared (Nullable_1_t1925 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m19670(__this, ___other, method) (( bool (*) (Nullable_1_t1925 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m19670_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m19671_gshared (Nullable_1_t1925 * __this, Nullable_1_t1925  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m19671(__this, ___other, method) (( bool (*) (Nullable_1_t1925 *, Nullable_1_t1925 , const MethodInfo*))Nullable_1_Equals_m19671_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.TimeSpan>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m19672_gshared (Nullable_1_t1925 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m19672(__this, method) (( int32_t (*) (Nullable_1_t1925 *, const MethodInfo*))Nullable_1_GetHashCode_m19672_gshared)(__this, method)
// System.String System.Nullable`1<System.TimeSpan>::ToString()
extern "C" String_t* Nullable_1_ToString_m19673_gshared (Nullable_1_t1925 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m19673(__this, method) (( String_t* (*) (Nullable_1_t1925 *, const MethodInfo*))Nullable_1_ToString_m19673_gshared)(__this, method)
