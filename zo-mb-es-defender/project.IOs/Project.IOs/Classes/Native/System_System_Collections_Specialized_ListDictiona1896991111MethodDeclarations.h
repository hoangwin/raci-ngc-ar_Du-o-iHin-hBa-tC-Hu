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

// System.Collections.Specialized.ListDictionary
struct ListDictionary_t1896991111_0;
// System.Collections.IComparer
struct IComparer_t_1964796564_0;
// System.Collections.IEnumerator
struct IEnumerator_t435631375_0;
// System.Collections.Specialized.ListDictionary/DictionaryNode
struct DictionaryNode_t_602235648_0;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.ICollection
struct ICollection_t140887709_0;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t_2133791969_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.Specialized.ListDictionary::.ctor()
extern "C"  void ListDictionary__ctor_m_721059063_0 (ListDictionary_t1896991111_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::.ctor(System.Collections.IComparer)
extern "C"  void ListDictionary__ctor_m319558045_0 (ListDictionary_t1896991111_0 * __this, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Specialized.ListDictionary::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * ListDictionary_System_Collections_IEnumerable_GetEnumerator_m_2050231052_0 (ListDictionary_t1896991111_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary::FindEntry(System.Object)
extern "C"  DictionaryNode_t_602235648_0 * ListDictionary_FindEntry_m1690278153_0 (ListDictionary_t1896991111_0 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary::FindEntry(System.Object,System.Collections.Specialized.ListDictionary/DictionaryNode&)
extern "C"  DictionaryNode_t_602235648_0 * ListDictionary_FindEntry_m432748847_0 (ListDictionary_t1896991111_0 * __this, Object_t * ___key, DictionaryNode_t_602235648_0 ** ___prev, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::AddImpl(System.Object,System.Object,System.Collections.Specialized.ListDictionary/DictionaryNode)
extern "C"  void ListDictionary_AddImpl_m_1690335204_0 (ListDictionary_t1896991111_0 * __this, Object_t * ___key, Object_t * ___value, DictionaryNode_t_602235648_0 * ___prev, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.ListDictionary::get_Count()
extern "C"  int32_t ListDictionary_get_Count_m_1897431739_0 (ListDictionary_t1896991111_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.ListDictionary::get_IsSynchronized()
extern "C"  bool ListDictionary_get_IsSynchronized_m_1333250188_0 (ListDictionary_t1896991111_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.ListDictionary::get_SyncRoot()
extern "C"  Object_t * ListDictionary_get_SyncRoot_m1212356752_0 (ListDictionary_t1896991111_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::CopyTo(System.Array,System.Int32)
extern "C"  void ListDictionary_CopyTo_m1124479600_0 (ListDictionary_t1896991111_0 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.ListDictionary::get_Item(System.Object)
extern "C"  Object_t * ListDictionary_get_Item_m_327808496_0 (ListDictionary_t1896991111_0 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::set_Item(System.Object,System.Object)
extern "C"  void ListDictionary_set_Item_m972551921_0 (ListDictionary_t1896991111_0 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Specialized.ListDictionary::get_Keys()
extern "C"  Object_t * ListDictionary_get_Keys_m_950047082_0 (ListDictionary_t1896991111_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::Add(System.Object,System.Object)
extern "C"  void ListDictionary_Add_m_18704634_0 (ListDictionary_t1896991111_0 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::Clear()
extern "C"  void ListDictionary_Clear_m_648788262_0 (ListDictionary_t1896991111_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.ListDictionary::Contains(System.Object)
extern "C"  bool ListDictionary_Contains_m_2027706566_0 (ListDictionary_t1896991111_0 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.Specialized.ListDictionary::GetEnumerator()
extern "C"  Object_t * ListDictionary_GetEnumerator_m1511032609_0 (ListDictionary_t1896991111_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::Remove(System.Object)
extern "C"  void ListDictionary_Remove_m_2000273235_0 (ListDictionary_t1896991111_0 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
