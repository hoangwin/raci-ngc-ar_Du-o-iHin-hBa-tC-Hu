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

// System.Collections.SortedList
struct SortedList_t2145693711_0;
// System.Collections.IComparer
struct IComparer_t_1964796564_0;
// System.Collections.IDictionary
struct IDictionary_t_2050639113_0;
// System.Collections.IEnumerator
struct IEnumerator_t435631375_0;
// System.Object
struct Object_t;
// System.Collections.ICollection
struct ICollection_t140887709_0;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t_2133791969_0;
// System.Array
struct Array_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_SortedList_Enumerator_1241807897.h"

// System.Void System.Collections.SortedList::.ctor()
extern "C"  void SortedList__ctor_m2018398549_0 (SortedList_t2145693711_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::.ctor(System.Int32)
extern "C"  void SortedList__ctor_m_596585940_0 (SortedList_t2145693711_0 * __this, int32_t ___initialCapacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::.ctor(System.Collections.IComparer,System.Int32)
extern "C"  void SortedList__ctor_m_420582236_0 (SortedList_t2145693711_0 * __this, Object_t * ___comparer, int32_t ___capacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::.ctor(System.Collections.IDictionary,System.Collections.IComparer)
extern "C"  void SortedList__ctor_m1831582390_0 (SortedList_t2145693711_0 * __this, Object_t * ___d, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::.cctor()
extern "C"  void SortedList__cctor_m_1419375384_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.SortedList::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * SortedList_System_Collections_IEnumerable_GetEnumerator_m561951806_0 (SortedList_t2145693711_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList::get_Count()
extern "C"  int32_t SortedList_get_Count_m989621893_0 (SortedList_t2145693711_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList::get_IsSynchronized()
extern "C"  bool SortedList_get_IsSynchronized_m1455943838_0 (SortedList_t2145693711_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList::get_SyncRoot()
extern "C"  Object_t * SortedList_get_SyncRoot_m_995263042_0 (SortedList_t2145693711_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList::get_IsFixedSize()
extern "C"  bool SortedList_get_IsFixedSize_m_1765737915_0 (SortedList_t2145693711_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList::get_IsReadOnly()
extern "C"  bool SortedList_get_IsReadOnly_m_588640070_0 (SortedList_t2145693711_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.SortedList::get_Keys()
extern "C"  Object_t * SortedList_get_Keys_m_1465675172_0 (SortedList_t2145693711_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList::get_Item(System.Object)
extern "C"  Object_t * SortedList_get_Item_m736581006_0 (SortedList_t2145693711_0 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::set_Item(System.Object,System.Object)
extern "C"  void SortedList_set_Item_m_1185798475_0 (SortedList_t2145693711_0 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList::get_Capacity()
extern "C"  int32_t SortedList_get_Capacity_m887547236_0 (SortedList_t2145693711_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::set_Capacity(System.Int32)
extern "C"  void SortedList_set_Capacity_m1978575685_0 (SortedList_t2145693711_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::Add(System.Object,System.Object)
extern "C"  void SortedList_Add_m_1134908976_0 (SortedList_t2145693711_0 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList::Contains(System.Object)
extern "C"  bool SortedList_Contains_m89042552_0 (SortedList_t2145693711_0 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.SortedList::GetEnumerator()
extern "C"  Object_t * SortedList_GetEnumerator_m1318483481_0 (SortedList_t2145693711_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::Remove(System.Object)
extern "C"  void SortedList_Remove_m2105729849_0 (SortedList_t2145693711_0 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::CopyTo(System.Array,System.Int32)
extern "C"  void SortedList_CopyTo_m1203849358_0 (SortedList_t2145693711_0 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList::Clone()
extern "C"  Object_t * SortedList_Clone_m885781019_0 (SortedList_t2145693711_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::RemoveAt(System.Int32)
extern "C"  void SortedList_RemoveAt_m_847090013_0 (SortedList_t2145693711_0 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList::IndexOfKey(System.Object)
extern "C"  int32_t SortedList_IndexOfKey_m1840737949_0 (SortedList_t2145693711_0 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList::ContainsKey(System.Object)
extern "C"  bool SortedList_ContainsKey_m1389662883_0 (SortedList_t2145693711_0 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList::GetByIndex(System.Int32)
extern "C"  Object_t * SortedList_GetByIndex_m322337214_0 (SortedList_t2145693711_0 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList::GetKey(System.Int32)
extern "C"  Object_t * SortedList_GetKey_m107993602_0 (SortedList_t2145693711_0 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::EnsureCapacity(System.Int32,System.Int32)
extern "C"  void SortedList_EnsureCapacity_m464504063_0 (SortedList_t2145693711_0 * __this, int32_t ___n, int32_t ___free, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::PutImpl(System.Object,System.Object,System.Boolean)
extern "C"  void SortedList_PutImpl_m890050679_0 (SortedList_t2145693711_0 * __this, Object_t * ___key, Object_t * ___value, bool ___overwrite, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList::GetImpl(System.Object)
extern "C"  Object_t * SortedList_GetImpl_m1166576832_0 (SortedList_t2145693711_0 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::InitTable(System.Int32,System.Boolean)
extern "C"  void SortedList_InitTable_m460350503_0 (SortedList_t2145693711_0 * __this, int32_t ___capacity, bool ___forceSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::CopyToArray(System.Array,System.Int32,System.Collections.SortedList/EnumeratorMode)
extern "C"  void SortedList_CopyToArray_m1525595304_0 (SortedList_t2145693711_0 * __this, Array_t * ___arr, int32_t ___i, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList::Find(System.Object)
extern "C"  int32_t SortedList_Find_m1529794918_0 (SortedList_t2145693711_0 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
