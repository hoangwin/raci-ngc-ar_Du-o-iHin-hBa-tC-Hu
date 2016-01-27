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

// System.Collections.Specialized.NameObjectCollectionBase
struct NameObjectCollectionBase_t870370766_0;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t_2018490193_0;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t_566336751_0;
// System.Collections.IEnumerator
struct IEnumerator_t435631375_0;
// System.String
struct String_t;
// System.Collections.Specialized.NameObjectCollectionBase/_Item
struct _Item_t_1265035787_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2060733842.h"

// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor()
extern "C"  void NameObjectCollectionBase__ctor_m_1861213348_0 (NameObjectCollectionBase_t870370766_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void NameObjectCollectionBase__ctor_m241668161_0 (NameObjectCollectionBase_t870370766_0 * __this, SerializationInfo_t_2018490193_0 * ___info, StreamingContext_t2060733842_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool NameObjectCollectionBase_System_Collections_ICollection_get_IsSynchronized_m_23776444_0 (NameObjectCollectionBase_t870370766_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.NameObjectCollectionBase::System.Collections.ICollection.get_SyncRoot()
extern "C"  Object_t * NameObjectCollectionBase_System_Collections_ICollection_get_SyncRoot_m1491738_0 (NameObjectCollectionBase_t870370766_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void NameObjectCollectionBase_System_Collections_ICollection_CopyTo_m810189168_0 (NameObjectCollectionBase_t870370766_0 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::Init()
extern "C"  void NameObjectCollectionBase_Init_m1271766820_0 (NameObjectCollectionBase_t870370766_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Collections.Specialized.NameObjectCollectionBase::get_Keys()
extern "C"  KeysCollection_t_566336751_0 * NameObjectCollectionBase_get_Keys_m446053925_0 (NameObjectCollectionBase_t870370766_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Specialized.NameObjectCollectionBase::GetEnumerator()
extern "C"  Object_t * NameObjectCollectionBase_GetEnumerator_m646294968_0 (NameObjectCollectionBase_t870370766_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void NameObjectCollectionBase_GetObjectData_m699981132_0 (NameObjectCollectionBase_t870370766_0 * __this, SerializationInfo_t_2018490193_0 * ___info, StreamingContext_t2060733842_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.NameObjectCollectionBase::get_Count()
extern "C"  int32_t NameObjectCollectionBase_get_Count_m_1941373604_0 (NameObjectCollectionBase_t870370766_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::OnDeserialization(System.Object)
extern "C"  void NameObjectCollectionBase_OnDeserialization_m_815986854_0 (NameObjectCollectionBase_t870370766_0 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::get_IsReadOnly()
extern "C"  bool NameObjectCollectionBase_get_IsReadOnly_m_1007616385_0 (NameObjectCollectionBase_t870370766_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseAdd(System.String,System.Object)
extern "C"  void NameObjectCollectionBase_BaseAdd_m964300824_0 (NameObjectCollectionBase_t870370766_0 * __this, String_t* ___name, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.NameObjectCollectionBase::BaseGet(System.Int32)
extern "C"  Object_t * NameObjectCollectionBase_BaseGet_m667273025_0 (NameObjectCollectionBase_t870370766_0 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.NameObjectCollectionBase::BaseGet(System.String)
extern "C"  Object_t * NameObjectCollectionBase_BaseGet_m_522940362_0 (NameObjectCollectionBase_t870370766_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameObjectCollectionBase::BaseGetKey(System.Int32)
extern "C"  String_t* NameObjectCollectionBase_BaseGetKey_m1766059806_0 (NameObjectCollectionBase_t870370766_0 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameObjectCollectionBase/_Item System.Collections.Specialized.NameObjectCollectionBase::FindFirstMatchedItem(System.String)
extern "C"  _Item_t_1265035787_0 * NameObjectCollectionBase_FindFirstMatchedItem_m_1834318640_0 (NameObjectCollectionBase_t870370766_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
