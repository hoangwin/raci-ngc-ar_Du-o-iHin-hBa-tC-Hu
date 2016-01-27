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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t_2132627410_0;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t842411023_0;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t_2018490193_0;
// System.Collections.ICollection
struct ICollection_t140887709_0;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t1042544558_0;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t435631375_0;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t1384845893_0;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t_2133791969_0;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_t831383614_0;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t_972016548_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2060733842.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_642788174.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E2067711129.h"
#include "mscorlib_System_Collections_DictionaryEntry1834397196.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m1868603968_0_gshared (Dictionary_2_t_2132627410_0 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m1868603968_0(__this, method) ((  void (*) (Dictionary_2_t_2132627410_0 *, const MethodInfo*))Dictionary_2__ctor_m1868603968_0_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m_2010211169_0_gshared (Dictionary_2_t_2132627410_0 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m_2010211169_0(__this, ___comparer, method) ((  void (*) (Dictionary_2_t_2132627410_0 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m_2010211169_0_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m_1183003535_0_gshared (Dictionary_2_t_2132627410_0 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m_1183003535_0(__this, ___capacity, method) ((  void (*) (Dictionary_2_t_2132627410_0 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m_1183003535_0_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m965168575_0_gshared (Dictionary_2_t_2132627410_0 * __this, SerializationInfo_t_2018490193_0 * ___info, StreamingContext_t2060733842_0  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m965168575_0(__this, ___info, ___context, method) ((  void (*) (Dictionary_2_t_2132627410_0 *, SerializationInfo_t_2018490193_0 *, StreamingContext_t2060733842_0 , const MethodInfo*))Dictionary_2__ctor_m965168575_0_gshared)(__this, ___info, ___context, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C"  Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m_49141070_0_gshared (Dictionary_2_t_2132627410_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m_49141070_0(__this, method) ((  Object_t * (*) (Dictionary_2_t_2132627410_0 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m_49141070_0_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m_1349554594_0_gshared (Dictionary_2_t_2132627410_0 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m_1349554594_0(__this, ___key, method) ((  Object_t * (*) (Dictionary_2_t_2132627410_0 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m_1349554594_0_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m941667911_0_gshared (Dictionary_2_t_2132627410_0 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m941667911_0(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t_2132627410_0 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m941667911_0_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m_1105397966_0_gshared (Dictionary_2_t_2132627410_0 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m_1105397966_0(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t_2132627410_0 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m_1105397966_0_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C"  bool Dictionary_2_System_Collections_IDictionary_Contains_m_357019246_0_gshared (Dictionary_2_t_2132627410_0 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m_357019246_0(__this, ___key, method) ((  bool (*) (Dictionary_2_t_2132627410_0 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m_357019246_0_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m_1095427829_0_gshared (Dictionary_2_t_2132627410_0 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m_1095427829_0(__this, ___key, method) ((  void (*) (Dictionary_2_t_2132627410_0 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m_1095427829_0_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m304009368_0_gshared (Dictionary_2_t_2132627410_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m304009368_0(__this, method) ((  bool (*) (Dictionary_2_t_2132627410_0 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m304009368_0_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m_1807837946_0_gshared (Dictionary_2_t_2132627410_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m_1807837946_0(__this, method) ((  Object_t * (*) (Dictionary_2_t_2132627410_0 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m_1807837946_0_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1111602362_0_gshared (Dictionary_2_t_2132627410_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1111602362_0(__this, method) ((  bool (*) (Dictionary_2_t_2132627410_0 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1111602362_0_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1043757703_0_gshared (Dictionary_2_t_2132627410_0 * __this, KeyValuePair_2_t_642788174_0  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1043757703_0(__this, ___keyValuePair, method) ((  void (*) (Dictionary_2_t_2132627410_0 *, KeyValuePair_2_t_642788174_0 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1043757703_0_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1927335261_0_gshared (Dictionary_2_t_2132627410_0 * __this, KeyValuePair_2_t_642788174_0  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1927335261_0(__this, ___keyValuePair, method) ((  bool (*) (Dictionary_2_t_2132627410_0 *, KeyValuePair_2_t_642788174_0 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1927335261_0_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m_616325661_0_gshared (Dictionary_2_t_2132627410_0 * __this, KeyValuePair_2U5BU5D_t1042544558_0* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m_616325661_0(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t_2132627410_0 *, KeyValuePair_2U5BU5D_t1042544558_0*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m_616325661_0_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m181279132_0_gshared (Dictionary_2_t_2132627410_0 * __this, KeyValuePair_2_t_642788174_0  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m181279132_0(__this, ___keyValuePair, method) ((  bool (*) (Dictionary_2_t_2132627410_0 *, KeyValuePair_2_t_642788174_0 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m181279132_0_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m1985034736_0_gshared (Dictionary_2_t_2132627410_0 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m1985034736_0(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t_2132627410_0 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m1985034736_0_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m_464418475_0_gshared (Dictionary_2_t_2132627410_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m_464418475_0(__this, method) ((  Object_t * (*) (Dictionary_2_t_2132627410_0 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m_464418475_0_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m631947640_0_gshared (Dictionary_2_t_2132627410_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m631947640_0(__this, method) ((  Object_t* (*) (Dictionary_2_t_2132627410_0 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m631947640_0_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1284065099_0_gshared (Dictionary_2_t_2132627410_0 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1284065099_0(__this, method) ((  Object_t * (*) (Dictionary_2_t_2132627410_0 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1284065099_0_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m_2126819876_0_gshared (Dictionary_2_t_2132627410_0 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m_2126819876_0(__this, method) ((  int32_t (*) (Dictionary_2_t_2132627410_0 *, const MethodInfo*))Dictionary_2_get_Count_m_2126819876_0_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C"  Object_t * Dictionary_2_get_Item_m_17677093_0_gshared (Dictionary_2_t_2132627410_0 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m_17677093_0(__this, ___key, method) ((  Object_t * (*) (Dictionary_2_t_2132627410_0 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m_17677093_0_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m81001562_0_gshared (Dictionary_2_t_2132627410_0 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m81001562_0(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t_2132627410_0 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m81001562_0_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m_628893484_0_gshared (Dictionary_2_t_2132627410_0 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m_628893484_0(__this, ___capacity, ___hcp, method) ((  void (*) (Dictionary_2_t_2132627410_0 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m_628893484_0_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m_484137119_0_gshared (Dictionary_2_t_2132627410_0 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m_484137119_0(__this, ___size, method) ((  void (*) (Dictionary_2_t_2132627410_0 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m_484137119_0_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m1541945891_0_gshared (Dictionary_2_t_2132627410_0 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m1541945891_0(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t_2132627410_0 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m1541945891_0_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t_642788174_0  Dictionary_2_make_pair_m90480045_0_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m90480045_0(__this /* static, unused */, ___key, ___value, method) ((  KeyValuePair_2_t_642788174_0  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m90480045_0_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_key(TKey,TValue)
extern "C"  int32_t Dictionary_2_pick_key_m761174441_0_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m761174441_0(__this /* static, unused */, ___key, ___value, method) ((  int32_t (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m761174441_0_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C"  Object_t * Dictionary_2_pick_value_m353965321_0_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m353965321_0(__this /* static, unused */, ___key, ___value, method) ((  Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m353965321_0_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m1956977846_0_gshared (Dictionary_2_t_2132627410_0 * __this, KeyValuePair_2U5BU5D_t1042544558_0* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m1956977846_0(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t_2132627410_0 *, KeyValuePair_2U5BU5D_t1042544558_0*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m1956977846_0_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C"  void Dictionary_2_Resize_m_1762827686_0_gshared (Dictionary_2_t_2132627410_0 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m_1762827686_0(__this, method) ((  void (*) (Dictionary_2_t_2132627410_0 *, const MethodInfo*))Dictionary_2_Resize_m_1762827686_0_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m_1455324595_0_gshared (Dictionary_2_t_2132627410_0 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m_1455324595_0(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t_2132627410_0 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m_1455324595_0_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C"  void Dictionary_2_Clear_m899854001_0_gshared (Dictionary_2_t_2132627410_0 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m899854001_0(__this, method) ((  void (*) (Dictionary_2_t_2132627410_0 *, const MethodInfo*))Dictionary_2_Clear_m899854001_0_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m255952723_0_gshared (Dictionary_2_t_2132627410_0 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m255952723_0(__this, ___key, method) ((  bool (*) (Dictionary_2_t_2132627410_0 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m255952723_0_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m392092147_0_gshared (Dictionary_2_t_2132627410_0 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m392092147_0(__this, ___value, method) ((  bool (*) (Dictionary_2_t_2132627410_0 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m392092147_0_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m233109612_0_gshared (Dictionary_2_t_2132627410_0 * __this, SerializationInfo_t_2018490193_0 * ___info, StreamingContext_t2060733842_0  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m233109612_0(__this, ___info, ___context, method) ((  void (*) (Dictionary_2_t_2132627410_0 *, SerializationInfo_t_2018490193_0 *, StreamingContext_t2060733842_0 , const MethodInfo*))Dictionary_2_GetObjectData_m233109612_0_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m2092139626_0_gshared (Dictionary_2_t_2132627410_0 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m2092139626_0(__this, ___sender, method) ((  void (*) (Dictionary_2_t_2132627410_0 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m2092139626_0_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m602713029_0_gshared (Dictionary_2_t_2132627410_0 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m602713029_0(__this, ___key, method) ((  bool (*) (Dictionary_2_t_2132627410_0 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m602713029_0_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m_1186768826_0_gshared (Dictionary_2_t_2132627410_0 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m_1186768826_0(__this, ___key, ___value, method) ((  bool (*) (Dictionary_2_t_2132627410_0 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m_1186768826_0_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Keys()
extern "C"  KeyCollection_t831383614_0 * Dictionary_2_get_Keys_m1900997095_0_gshared (Dictionary_2_t_2132627410_0 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m1900997095_0(__this, method) ((  KeyCollection_t831383614_0 * (*) (Dictionary_2_t_2132627410_0 *, const MethodInfo*))Dictionary_2_get_Keys_m1900997095_0_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C"  ValueCollection_t_972016548_0 * Dictionary_2_get_Values_m372946023_0_gshared (Dictionary_2_t_2132627410_0 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m372946023_0(__this, method) ((  ValueCollection_t_972016548_0 * (*) (Dictionary_2_t_2132627410_0 *, const MethodInfo*))Dictionary_2_get_Values_m372946023_0_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C"  int32_t Dictionary_2_ToTKey_m_1394392216_0_gshared (Dictionary_2_t_2132627410_0 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m_1394392216_0(__this, ___key, method) ((  int32_t (*) (Dictionary_2_t_2132627410_0 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m_1394392216_0_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C"  Object_t * Dictionary_2_ToTValue_m14471464_0_gshared (Dictionary_2_t_2132627410_0 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m14471464_0(__this, ___value, method) ((  Object_t * (*) (Dictionary_2_t_2132627410_0 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m14471464_0_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m790970878_0_gshared (Dictionary_2_t_2132627410_0 * __this, KeyValuePair_2_t_642788174_0  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m790970878_0(__this, ___pair, method) ((  bool (*) (Dictionary_2_t_2132627410_0 *, KeyValuePair_2_t_642788174_0 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m790970878_0_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C"  Enumerator_t2067711129_0  Dictionary_2_GetEnumerator_m706253773_0_gshared (Dictionary_2_t_2132627410_0 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m706253773_0(__this, method) ((  Enumerator_t2067711129_0  (*) (Dictionary_2_t_2132627410_0 *, const MethodInfo*))Dictionary_2_GetEnumerator_m706253773_0_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C"  DictionaryEntry_t1834397196_0  Dictionary_2_U3CCopyToU3Em__0_m741309042_0_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m741309042_0(__this /* static, unused */, ___key, ___value, method) ((  DictionaryEntry_t1834397196_0  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m741309042_0_gshared)(__this /* static, unused */, ___key, ___value, method)
