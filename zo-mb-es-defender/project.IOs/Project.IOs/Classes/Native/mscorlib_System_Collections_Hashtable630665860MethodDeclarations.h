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

// System.Collections.Hashtable
struct Hashtable_t630665860_0;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t519728657_0;
// System.Collections.IComparer
struct IComparer_t_1964796564_0;
// System.Collections.IDictionary
struct IDictionary_t_2050639113_0;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t_2018490193_0;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t_1946333868_0;
// System.Collections.IEnumerator
struct IEnumerator_t435631375_0;
// System.Object
struct Object_t;
// System.Collections.ICollection
struct ICollection_t140887709_0;
// System.Array
struct Array_t;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t_2133791969_0;
// System.Collections.Hashtable/Slot[]
struct SlotU5BU5D_t580430399_0;
// System.Int32[]
struct Int32U5BU5D_t1496069209_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2060733842.h"
#include "mscorlib_System_Collections_Hashtable_EnumeratorMo1181017932.h"

// System.Void System.Collections.Hashtable::.ctor()
extern "C"  void Hashtable__ctor_m1884964176_0 (Hashtable_t630665860_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Single,System.Collections.IHashCodeProvider,System.Collections.IComparer)
extern "C"  void Hashtable__ctor_m846339375_0 (Hashtable_t630665860_0 * __this, int32_t ___capacity, float ___loadFactor, Object_t * ___hcp, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Single)
extern "C"  void Hashtable__ctor_m1360482358_0 (Hashtable_t630665860_0 * __this, int32_t ___capacity, float ___loadFactor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Int32)
extern "C"  void Hashtable__ctor_m_1592606739_0 (Hashtable_t630665860_0 * __this, int32_t ___capacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Collections.Hashtable)
extern "C"  void Hashtable__ctor_m392789568_0 (Hashtable_t630665860_0 * __this, Hashtable_t630665860_0 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Collections.IHashCodeProvider,System.Collections.IComparer)
extern "C"  void Hashtable__ctor_m_188888498_0 (Hashtable_t630665860_0 * __this, int32_t ___capacity, Object_t * ___hcp, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Collections.IDictionary,System.Single,System.Collections.IHashCodeProvider,System.Collections.IComparer)
extern "C"  void Hashtable__ctor_m_1400287449_0 (Hashtable_t630665860_0 * __this, Object_t * ___d, float ___loadFactor, Object_t * ___hcp, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Collections.IDictionary,System.Collections.IHashCodeProvider,System.Collections.IComparer)
extern "C"  void Hashtable__ctor_m_552477586_0 (Hashtable_t630665860_0 * __this, Object_t * ___d, Object_t * ___hcp, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Collections.IHashCodeProvider,System.Collections.IComparer)
extern "C"  void Hashtable__ctor_m_1957485485_0 (Hashtable_t630665860_0 * __this, Object_t * ___hcp, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Hashtable__ctor_m_14743741_0 (Hashtable_t630665860_0 * __this, SerializationInfo_t_2018490193_0 * ___info, StreamingContext_t2060733842_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Collections.IEqualityComparer)
extern "C"  void Hashtable__ctor_m622168569_0 (Hashtable_t630665860_0 * __this, int32_t ___capacity, Object_t * ___equalityComparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Single,System.Collections.IEqualityComparer)
extern "C"  void Hashtable__ctor_m741952536_0 (Hashtable_t630665860_0 * __this, int32_t ___capacity, float ___loadFactor, Object_t * ___equalityComparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.cctor()
extern "C"  void Hashtable__cctor_m_1342307621_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Hashtable::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * Hashtable_System_Collections_IEnumerable_GetEnumerator_m424477805_0 (Hashtable_t630665860_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::set_comparer(System.Collections.IComparer)
extern "C"  void Hashtable_set_comparer_m_1114921472_0 (Hashtable_t630665860_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::set_hcp(System.Collections.IHashCodeProvider)
extern "C"  void Hashtable_set_hcp_m61069857_0 (Hashtable_t630665860_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable::get_Count()
extern "C"  int32_t Hashtable_get_Count_m830088216_0 (Hashtable_t630665860_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable::get_IsSynchronized()
extern "C"  bool Hashtable_get_IsSynchronized_m836780937_0 (Hashtable_t630665860_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable::get_SyncRoot()
extern "C"  Object_t * Hashtable_get_SyncRoot_m_557894039_0 (Hashtable_t630665860_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Hashtable::get_Keys()
extern "C"  Object_t * Hashtable_get_Keys_m_21468175_0 (Hashtable_t630665860_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Hashtable::get_Values()
extern "C"  Object_t * Hashtable_get_Values_m1305953313_0 (Hashtable_t630665860_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable::get_Item(System.Object)
extern "C"  Object_t * Hashtable_get_Item_m_2053410033_0 (Hashtable_t630665860_0 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object)
extern "C"  void Hashtable_set_Item_m2131404282_0 (Hashtable_t630665860_0 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::CopyTo(System.Array,System.Int32)
extern "C"  void Hashtable_CopyTo_m_1516051491_0 (Hashtable_t630665860_0 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::Add(System.Object,System.Object)
extern "C"  void Hashtable_Add_m_355298775_0 (Hashtable_t630665860_0 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::Clear()
extern "C"  void Hashtable_Clear_m_622896483_0 (Hashtable_t630665860_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable::Contains(System.Object)
extern "C"  bool Hashtable_Contains_m_1073781683_0 (Hashtable_t630665860_0 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.Hashtable::GetEnumerator()
extern "C"  Object_t * Hashtable_GetEnumerator_m_963537212_0 (Hashtable_t630665860_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::Remove(System.Object)
extern "C"  void Hashtable_Remove_m607079606_0 (Hashtable_t630665860_0 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable::ContainsKey(System.Object)
extern "C"  bool Hashtable_ContainsKey_m_1578390632_0 (Hashtable_t630665860_0 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable::Clone()
extern "C"  Object_t * Hashtable_Clone_m165405752_0 (Hashtable_t630665860_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Hashtable_GetObjectData_m_1348836468_0 (Hashtable_t630665860_0 * __this, SerializationInfo_t_2018490193_0 * ___info, StreamingContext_t2060733842_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::OnDeserialization(System.Object)
extern "C"  void Hashtable_OnDeserialization_m_102117398_0 (Hashtable_t630665860_0 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Collections.Hashtable::Synchronized(System.Collections.Hashtable)
extern "C"  Hashtable_t630665860_0 * Hashtable_Synchronized_m225390213_0 (Object_t * __this /* static, unused */, Hashtable_t630665860_0 * ___table, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable::GetHash(System.Object)
extern "C"  int32_t Hashtable_GetHash_m_770481668_0 (Hashtable_t630665860_0 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable::KeyEquals(System.Object,System.Object)
extern "C"  bool Hashtable_KeyEquals_m1433874944_0 (Hashtable_t630665860_0 * __this, Object_t * ___item, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::AdjustThreshold()
extern "C"  void Hashtable_AdjustThreshold_m1839559810_0 (Hashtable_t630665860_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::SetTable(System.Collections.Hashtable/Slot[],System.Int32[])
extern "C"  void Hashtable_SetTable_m539410518_0 (Hashtable_t630665860_0 * __this, SlotU5BU5D_t580430399_0* ___table, Int32U5BU5D_t1496069209_0* ___hashes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable::Find(System.Object)
extern "C"  int32_t Hashtable_Find_m_790457171_0 (Hashtable_t630665860_0 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::Rehash()
extern "C"  void Hashtable_Rehash_m_1417296783_0 (Hashtable_t630665860_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::PutImpl(System.Object,System.Object,System.Boolean)
extern "C"  void Hashtable_PutImpl_m_976531682_0 (Hashtable_t630665860_0 * __this, Object_t * ___key, Object_t * ___value, bool ___overwrite, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::CopyToArray(System.Array,System.Int32,System.Collections.Hashtable/EnumeratorMode)
extern "C"  void Hashtable_CopyToArray_m1529158630_0 (Hashtable_t630665860_0 * __this, Array_t * ___arr, int32_t ___i, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable::TestPrime(System.Int32)
extern "C"  bool Hashtable_TestPrime_m96697534_0 (Object_t * __this /* static, unused */, int32_t ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable::CalcPrime(System.Int32)
extern "C"  int32_t Hashtable_CalcPrime_m1835281409_0 (Object_t * __this /* static, unused */, int32_t ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable::ToPrime(System.Int32)
extern "C"  int32_t Hashtable_ToPrime_m_17301681_0 (Object_t * __this /* static, unused */, int32_t ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
