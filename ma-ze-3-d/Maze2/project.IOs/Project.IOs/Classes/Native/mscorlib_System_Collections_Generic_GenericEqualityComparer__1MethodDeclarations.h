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

// System.Collections.Generic.GenericEqualityComparer`1<System.Guid>
struct GenericEqualityComparer_1_t1971;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::.ctor()
extern "C" void GenericEqualityComparer_1__ctor_m11620_gshared (GenericEqualityComparer_1_t1971 * __this, const MethodInfo* method);
#define GenericEqualityComparer_1__ctor_m11620(__this, method) (( void (*) (GenericEqualityComparer_1_t1971 *, const MethodInfo*))GenericEqualityComparer_1__ctor_m11620_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::GetHashCode(T)
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m19681_gshared (GenericEqualityComparer_1_t1971 * __this, Guid_t281  ___obj, const MethodInfo* method);
#define GenericEqualityComparer_1_GetHashCode_m19681(__this, ___obj, method) (( int32_t (*) (GenericEqualityComparer_1_t1971 *, Guid_t281 , const MethodInfo*))GenericEqualityComparer_1_GetHashCode_m19681_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m19682_gshared (GenericEqualityComparer_1_t1971 * __this, Guid_t281  ___x, Guid_t281  ___y, const MethodInfo* method);
#define GenericEqualityComparer_1_Equals_m19682(__this, ___x, ___y, method) (( bool (*) (GenericEqualityComparer_1_t1971 *, Guid_t281 , Guid_t281 , const MethodInfo*))GenericEqualityComparer_1_Equals_m19682_gshared)(__this, ___x, ___y, method)
