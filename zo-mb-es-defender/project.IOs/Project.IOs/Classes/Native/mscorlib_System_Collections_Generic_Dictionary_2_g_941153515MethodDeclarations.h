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

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t_941153515_0;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t_1253536428_0;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t_2018490193_0;
// System.Collections.ICollection
struct ICollection_t140887709_0;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t_228115011_0;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t435631375_0;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t_1754748218_0;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t_2133791969_0;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t_595239165_0;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t_1754225085_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2060733842.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_368645013.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_En663292784.h"
#include "mscorlib_System_Collections_DictionaryEntry1834397196.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m584589095_0_gshared (Dictionary_2_t_941153515_0 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m584589095_0(__this, method) ((  void (*) (Dictionary_2_t_941153515_0 *, const MethodInfo*))Dictionary_2__ctor_m584589095_0_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m406310120_0_gshared (Dictionary_2_t_941153515_0 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m406310120_0(__this, ___comparer, method) ((  void (*) (Dictionary_2_t_941153515_0 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m406310120_0_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m206582704_0_gshared (Dictionary_2_t_941153515_0 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m206582704_0(__this, ___capacity, method) ((  void (*) (Dictionary_2_t_941153515_0 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m206582704_0_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m1206668798_0_gshared (Dictionary_2_t_941153515_0 * __this, SerializationInfo_t_2018490193_0 * ___info, StreamingContext_t2060733842_0  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m1206668798_0(__this, ___info, ___context, method) ((  void (*) (Dictionary_2_t_941153515_0 *, SerializationInfo_t_2018490193_0 *, StreamingContext_t2060733842_0 , const MethodInfo*))Dictionary_2__ctor_m1206668798_0_gshared)(__this, ___info, ___context, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C"  Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m673000885_0_gshared (Dictionary_2_t_941153515_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m673000885_0(__this, method) ((  Object_t * (*) (Dictionary_2_t_941153515_0 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m673000885_0_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m237963271_0_gshared (Dictionary_2_t_941153515_0 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m237963271_0(__this, ___key, method) ((  Object_t * (*) (Dictionary_2_t_941153515_0 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m237963271_0_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m_519445726_0_gshared (Dictionary_2_t_941153515_0 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m_519445726_0(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t_941153515_0 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m_519445726_0_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m984276885_0_gshared (Dictionary_2_t_941153515_0 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m984276885_0(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t_941153515_0 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m984276885_0_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C"  bool Dictionary_2_System_Collections_IDictionary_Contains_m_1426960527_0_gshared (Dictionary_2_t_941153515_0 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m_1426960527_0(__this, ___key, method) ((  bool (*) (Dictionary_2_t_941153515_0 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m_1426960527_0_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m2017099222_0_gshared (Dictionary_2_t_941153515_0 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m2017099222_0(__this, ___key, method) ((  void (*) (Dictionary_2_t_941153515_0 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m2017099222_0_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m960517203_0_gshared (Dictionary_2_t_941153515_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m960517203_0(__this, method) ((  bool (*) (Dictionary_2_t_941153515_0 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m960517203_0_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1900166091_0_gshared (Dictionary_2_t_941153515_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1900166091_0(__this, method) ((  Object_t * (*) (Dictionary_2_t_941153515_0 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1900166091_0_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m_200727099_0_gshared (Dictionary_2_t_941153515_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m_200727099_0(__this, method) ((  bool (*) (Dictionary_2_t_941153515_0 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m_200727099_0_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m990341268_0_gshared (Dictionary_2_t_941153515_0 * __this, KeyValuePair_2_t_368645013_0  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m990341268_0(__this, ___keyValuePair, method) ((  void (*) (Dictionary_2_t_941153515_0 *, KeyValuePair_2_t_368645013_0 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m990341268_0_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1058501024_0_gshared (Dictionary_2_t_941153515_0 * __this, KeyValuePair_2_t_368645013_0  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1058501024_0(__this, ___keyValuePair, method) ((  bool (*) (Dictionary_2_t_941153515_0 *, KeyValuePair_2_t_368645013_0 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1058501024_0_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m976354816_0_gshared (Dictionary_2_t_941153515_0 * __this, KeyValuePair_2U5BU5D_t_228115011_0* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m976354816_0(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t_941153515_0 *, KeyValuePair_2U5BU5D_t_228115011_0*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m976354816_0_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1705959559_0_gshared (Dictionary_2_t_941153515_0 * __this, KeyValuePair_2_t_368645013_0  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1705959559_0(__this, ___keyValuePair, method) ((  bool (*) (Dictionary_2_t_941153515_0 *, KeyValuePair_2_t_368645013_0 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1705959559_0_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m_716427365_0_gshared (Dictionary_2_t_941153515_0 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m_716427365_0(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t_941153515_0 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m_716427365_0_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m_1194855386_0_gshared (Dictionary_2_t_941153515_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m_1194855386_0(__this, method) ((  Object_t * (*) (Dictionary_2_t_941153515_0 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m_1194855386_0_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m_1369876819_0_gshared (Dictionary_2_t_941153515_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m_1369876819_0(__this, method) ((  Object_t* (*) (Dictionary_2_t_941153515_0 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m_1369876819_0_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m_1610034520_0_gshared (Dictionary_2_t_941153515_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m_1610034520_0(__this, method) ((  Object_t * (*) (Dictionary_2_t_941153515_0 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m_1610034520_0_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m_658853605_0_gshared (Dictionary_2_t_941153515_0 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m_658853605_0(__this, method) ((  int32_t (*) (Dictionary_2_t_941153515_0 *, const MethodInfo*))Dictionary_2_get_Count_m_658853605_0_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C"  Object_t * Dictionary_2_get_Item_m_1881057784_0_gshared (Dictionary_2_t_941153515_0 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m_1881057784_0(__this, ___key, method) ((  Object_t * (*) (Dictionary_2_t_941153515_0 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m_1881057784_0_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m458653679_0_gshared (Dictionary_2_t_941153515_0 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m458653679_0(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t_941153515_0 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m458653679_0_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m1045257495_0_gshared (Dictionary_2_t_941153515_0 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m1045257495_0(__this, ___capacity, ___hcp, method) ((  void (*) (Dictionary_2_t_941153515_0 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m1045257495_0_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m_2024944556_0_gshared (Dictionary_2_t_941153515_0 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m_2024944556_0(__this, ___size, method) ((  void (*) (Dictionary_2_t_941153515_0 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m_2024944556_0_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m_2147250546_0_gshared (Dictionary_2_t_941153515_0 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m_2147250546_0(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t_941153515_0 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m_2147250546_0_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t_368645013_0  Dictionary_2_make_pair_m_1663025172_0_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m_1663025172_0(__this /* static, unused */, ___key, ___value, method) ((  KeyValuePair_2_t_368645013_0  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m_1663025172_0_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_key(TKey,TValue)
extern "C"  Object_t * Dictionary_2_pick_key_m_1454137854_0_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m_1454137854_0(__this /* static, unused */, ___key, ___value, method) ((  Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m_1454137854_0_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C"  Object_t * Dictionary_2_pick_value_m1872663242_0_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m1872663242_0(__this /* static, unused */, ___key, ___value, method) ((  Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m1872663242_0_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m1495142643_0_gshared (Dictionary_2_t_941153515_0 * __this, KeyValuePair_2U5BU5D_t_228115011_0* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m1495142643_0(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t_941153515_0 *, KeyValuePair_2U5BU5D_t_228115011_0*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m1495142643_0_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C"  void Dictionary_2_Resize_m_1622703163_0_gshared (Dictionary_2_t_941153515_0 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m_1622703163_0(__this, method) ((  void (*) (Dictionary_2_t_941153515_0 *, const MethodInfo*))Dictionary_2_Resize_m_1622703163_0_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m1708621268_0_gshared (Dictionary_2_t_941153515_0 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m1708621268_0(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t_941153515_0 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_Add_m1708621268_0_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C"  void Dictionary_2_Clear_m_1969174140_0_gshared (Dictionary_2_t_941153515_0 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m_1969174140_0(__this, method) ((  void (*) (Dictionary_2_t_941153515_0 *, const MethodInfo*))Dictionary_2_Clear_m_1969174140_0_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m_741541144_0_gshared (Dictionary_2_t_941153515_0 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m_741541144_0(__this, ___key, method) ((  bool (*) (Dictionary_2_t_941153515_0 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m_741541144_0_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m_1918987648_0_gshared (Dictionary_2_t_941153515_0 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m_1918987648_0(__this, ___value, method) ((  bool (*) (Dictionary_2_t_941153515_0 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m_1918987648_0_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m_1430435889_0_gshared (Dictionary_2_t_941153515_0 * __this, SerializationInfo_t_2018490193_0 * ___info, StreamingContext_t2060733842_0  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m_1430435889_0(__this, ___info, ___context, method) ((  void (*) (Dictionary_2_t_941153515_0 *, SerializationInfo_t_2018490193_0 *, StreamingContext_t2060733842_0 , const MethodInfo*))Dictionary_2_GetObjectData_m_1430435889_0_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m_2134429513_0_gshared (Dictionary_2_t_941153515_0 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m_2134429513_0(__this, ___sender, method) ((  void (*) (Dictionary_2_t_941153515_0 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m_2134429513_0_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m1366616528_0_gshared (Dictionary_2_t_941153515_0 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m1366616528_0(__this, ___key, method) ((  bool (*) (Dictionary_2_t_941153515_0 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m1366616528_0_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m1120370623_0_gshared (Dictionary_2_t_941153515_0 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m1120370623_0(__this, ___key, ___value, method) ((  bool (*) (Dictionary_2_t_941153515_0 *, Object_t *, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m1120370623_0_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C"  KeyCollection_t_595239165_0 * Dictionary_2_get_Keys_m1635778172_0_gshared (Dictionary_2_t_941153515_0 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m1635778172_0(__this, method) ((  KeyCollection_t_595239165_0 * (*) (Dictionary_2_t_941153515_0 *, const MethodInfo*))Dictionary_2_get_Keys_m1635778172_0_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C"  ValueCollection_t_1754225085_0 * Dictionary_2_get_Values_m825860460_0_gshared (Dictionary_2_t_941153515_0 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m825860460_0(__this, method) ((  ValueCollection_t_1754225085_0 * (*) (Dictionary_2_t_941153515_0 *, const MethodInfo*))Dictionary_2_get_Values_m825860460_0_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C"  Object_t * Dictionary_2_ToTKey_m_85405779_0_gshared (Dictionary_2_t_941153515_0 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m_85405779_0(__this, ___key, method) ((  Object_t * (*) (Dictionary_2_t_941153515_0 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m_85405779_0_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C"  Object_t * Dictionary_2_ToTValue_m1381983709_0_gshared (Dictionary_2_t_941153515_0 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m1381983709_0(__this, ___value, method) ((  Object_t * (*) (Dictionary_2_t_941153515_0 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m1381983709_0_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m663697471_0_gshared (Dictionary_2_t_941153515_0 * __this, KeyValuePair_2_t_368645013_0  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m663697471_0(__this, ___pair, method) ((  bool (*) (Dictionary_2_t_941153515_0 *, KeyValuePair_2_t_368645013_0 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m663697471_0_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C"  Enumerator_t663292784_0  Dictionary_2_GetEnumerator_m1752238884_0_gshared (Dictionary_2_t_941153515_0 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m1752238884_0(__this, method) ((  Enumerator_t663292784_0  (*) (Dictionary_2_t_941153515_0 *, const MethodInfo*))Dictionary_2_GetEnumerator_m1752238884_0_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C"  DictionaryEntry_t1834397196_0  Dictionary_2_U3CCopyToU3Em__0_m2061238213_0_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m2061238213_0(__this /* static, unused */, ___key, ___value, method) ((  DictionaryEntry_t1834397196_0  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m2061238213_0_gshared)(__this /* static, unused */, ___key, ___value, method)
