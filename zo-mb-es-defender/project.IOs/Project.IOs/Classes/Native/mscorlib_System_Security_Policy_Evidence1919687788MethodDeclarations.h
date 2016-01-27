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

// System.Security.Policy.Evidence
struct Evidence_t1919687788_0;
// System.Object
struct Object_t;
// System.Collections.ArrayList
struct ArrayList_t2138871437_0;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t435631375_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Policy.Evidence::.ctor()
extern "C"  void Evidence__ctor_m1638117806_0 (Evidence_t1919687788_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.Evidence::get_Count()
extern "C"  int32_t Evidence_get_Count_m_1489809914_0 (Evidence_t1919687788_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.Evidence::get_IsSynchronized()
extern "C"  bool Evidence_get_IsSynchronized_m1427392003_0 (Evidence_t1919687788_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Policy.Evidence::get_SyncRoot()
extern "C"  Object_t * Evidence_get_SyncRoot_m_1176316061_0 (Evidence_t1919687788_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Security.Policy.Evidence::get_HostEvidenceList()
extern "C"  ArrayList_t2138871437_0 * Evidence_get_HostEvidenceList_m2095478124_0 (Evidence_t1919687788_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Security.Policy.Evidence::get_AssemblyEvidenceList()
extern "C"  ArrayList_t2138871437_0 * Evidence_get_AssemblyEvidenceList_m354414178_0 (Evidence_t1919687788_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.Evidence::CopyTo(System.Array,System.Int32)
extern "C"  void Evidence_CopyTo_m_972929005_0 (Evidence_t1919687788_0 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.Evidence::Equals(System.Object)
extern "C"  bool Evidence_Equals_m_1969107381_0 (Evidence_t1919687788_0 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Security.Policy.Evidence::GetEnumerator()
extern "C"  Object_t * Evidence_GetEnumerator_m_383375574_0 (Evidence_t1919687788_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.Evidence::GetHashCode()
extern "C"  int32_t Evidence_GetHashCode_m1260371757_0 (Evidence_t1919687788_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
