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

// System.OrdinalComparer
struct OrdinalComparer_t1315733583_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.OrdinalComparer::.ctor(System.Boolean)
extern "C"  void OrdinalComparer__ctor_m_1342025238_0 (OrdinalComparer_t1315733583_0 * __this, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.OrdinalComparer::Compare(System.String,System.String)
extern "C"  int32_t OrdinalComparer_Compare_m_1438153022_0 (OrdinalComparer_t1315733583_0 * __this, String_t* ___x, String_t* ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.OrdinalComparer::Equals(System.String,System.String)
extern "C"  bool OrdinalComparer_Equals_m_1486497256_0 (OrdinalComparer_t1315733583_0 * __this, String_t* ___x, String_t* ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.OrdinalComparer::GetHashCode(System.String)
extern "C"  int32_t OrdinalComparer_GetHashCode_m_893991524_0 (OrdinalComparer_t1315733583_0 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
