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

// System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>
struct GenericEqualityComparer_1_t1974;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::.ctor()
extern "C" void GenericEqualityComparer_1__ctor_m11623_gshared (GenericEqualityComparer_1_t1974 * __this, const MethodInfo* method);
#define GenericEqualityComparer_1__ctor_m11623(__this, method) (( void (*) (GenericEqualityComparer_1_t1974 *, const MethodInfo*))GenericEqualityComparer_1__ctor_m11623_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::GetHashCode(T)
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m19734_gshared (GenericEqualityComparer_1_t1974 * __this, TimeSpan_t947  ___obj, const MethodInfo* method);
#define GenericEqualityComparer_1_GetHashCode_m19734(__this, ___obj, method) (( int32_t (*) (GenericEqualityComparer_1_t1974 *, TimeSpan_t947 , const MethodInfo*))GenericEqualityComparer_1_GetHashCode_m19734_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m19735_gshared (GenericEqualityComparer_1_t1974 * __this, TimeSpan_t947  ___x, TimeSpan_t947  ___y, const MethodInfo* method);
#define GenericEqualityComparer_1_Equals_m19735(__this, ___x, ___y, method) (( bool (*) (GenericEqualityComparer_1_t1974 *, TimeSpan_t947 , TimeSpan_t947 , const MethodInfo*))GenericEqualityComparer_1_Equals_m19735_gshared)(__this, ___x, ___y, method)
