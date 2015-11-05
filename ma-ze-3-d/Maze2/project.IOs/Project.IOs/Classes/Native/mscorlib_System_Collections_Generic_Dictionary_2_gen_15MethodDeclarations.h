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

// System.Collections.Generic.Dictionary`2<System.Object,System.Single>
struct Dictionary_2_t1982;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1984;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t831;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>[]
struct KeyValuePair_2U5BU5D_t2641;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t239;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Single>>
struct IEnumerator_1_t2642;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1042;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Single>
struct ValueCollection_t1991;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__1.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor()
extern "C" void Dictionary_2__ctor_m11637_gshared (Dictionary_2_t1982 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m11637(__this, method) (( void (*) (Dictionary_2_t1982 *, const MethodInfo*))Dictionary_2__ctor_m11637_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m11639_gshared (Dictionary_2_t1982 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m11639(__this, ___comparer, method) (( void (*) (Dictionary_2_t1982 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11639_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m11641_gshared (Dictionary_2_t1982 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m11641(__this, ___capacity, method) (( void (*) (Dictionary_2_t1982 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m11641_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m11643_gshared (Dictionary_2_t1982 * __this, SerializationInfo_t831 * ___info, StreamingContext_t832  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m11643(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1982 *, SerializationInfo_t831 *, StreamingContext_t832 , const MethodInfo*))Dictionary_2__ctor_m11643_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m11645_gshared (Dictionary_2_t1982 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m11645(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1982 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m11645_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m11647_gshared (Dictionary_2_t1982 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m11647(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1982 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m11647_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m11649_gshared (Dictionary_2_t1982 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m11649(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1982 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m11649_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m11651_gshared (Dictionary_2_t1982 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m11651(__this, ___key, method) (( bool (*) (Dictionary_2_t1982 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m11651_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m11653_gshared (Dictionary_2_t1982 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m11653(__this, ___key, method) (( void (*) (Dictionary_2_t1982 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m11653_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11655_gshared (Dictionary_2_t1982 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11655(__this, method) (( bool (*) (Dictionary_2_t1982 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11655_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11657_gshared (Dictionary_2_t1982 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11657(__this, method) (( Object_t * (*) (Dictionary_2_t1982 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11657_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11659_gshared (Dictionary_2_t1982 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11659(__this, method) (( bool (*) (Dictionary_2_t1982 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11659_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11661_gshared (Dictionary_2_t1982 * __this, KeyValuePair_2_t1985  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11661(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1982 *, KeyValuePair_2_t1985 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11661_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11663_gshared (Dictionary_2_t1982 * __this, KeyValuePair_2_t1985  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11663(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1982 *, KeyValuePair_2_t1985 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11663_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11665_gshared (Dictionary_2_t1982 * __this, KeyValuePair_2U5BU5D_t2641* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11665(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1982 *, KeyValuePair_2U5BU5D_t2641*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11665_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11667_gshared (Dictionary_2_t1982 * __this, KeyValuePair_2_t1985  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11667(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1982 *, KeyValuePair_2_t1985 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11667_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m11669_gshared (Dictionary_2_t1982 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m11669(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1982 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m11669_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11671_gshared (Dictionary_2_t1982 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11671(__this, method) (( Object_t * (*) (Dictionary_2_t1982 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11671_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11673_gshared (Dictionary_2_t1982 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11673(__this, method) (( Object_t* (*) (Dictionary_2_t1982 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11673_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Single>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11675_gshared (Dictionary_2_t1982 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11675(__this, method) (( Object_t * (*) (Dictionary_2_t1982 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11675_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Single>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m11677_gshared (Dictionary_2_t1982 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m11677(__this, method) (( int32_t (*) (Dictionary_2_t1982 *, const MethodInfo*))Dictionary_2_get_Count_m11677_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Single>::get_Item(TKey)
extern "C" float Dictionary_2_get_Item_m11679_gshared (Dictionary_2_t1982 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m11679(__this, ___key, method) (( float (*) (Dictionary_2_t1982 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m11679_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m11681_gshared (Dictionary_2_t1982 * __this, Object_t * ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m11681(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1982 *, Object_t *, float, const MethodInfo*))Dictionary_2_set_Item_m11681_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m11683_gshared (Dictionary_2_t1982 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m11683(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1982 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m11683_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m11685_gshared (Dictionary_2_t1982 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m11685(__this, ___size, method) (( void (*) (Dictionary_2_t1982 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m11685_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m11687_gshared (Dictionary_2_t1982 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m11687(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1982 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m11687_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1985  Dictionary_2_make_pair_m11689_gshared (Object_t * __this /* static, unused */, Object_t * ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m11689(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1985  (*) (Object_t * /* static, unused */, Object_t *, float, const MethodInfo*))Dictionary_2_make_pair_m11689_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Single>::pick_value(TKey,TValue)
extern "C" float Dictionary_2_pick_value_m11691_gshared (Object_t * __this /* static, unused */, Object_t * ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m11691(__this /* static, unused */, ___key, ___value, method) (( float (*) (Object_t * /* static, unused */, Object_t *, float, const MethodInfo*))Dictionary_2_pick_value_m11691_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m11693_gshared (Dictionary_2_t1982 * __this, KeyValuePair_2U5BU5D_t2641* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m11693(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1982 *, KeyValuePair_2U5BU5D_t2641*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m11693_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Resize()
extern "C" void Dictionary_2_Resize_m11695_gshared (Dictionary_2_t1982 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m11695(__this, method) (( void (*) (Dictionary_2_t1982 *, const MethodInfo*))Dictionary_2_Resize_m11695_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m11697_gshared (Dictionary_2_t1982 * __this, Object_t * ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_Add_m11697(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1982 *, Object_t *, float, const MethodInfo*))Dictionary_2_Add_m11697_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Clear()
extern "C" void Dictionary_2_Clear_m11699_gshared (Dictionary_2_t1982 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m11699(__this, method) (( void (*) (Dictionary_2_t1982 *, const MethodInfo*))Dictionary_2_Clear_m11699_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m11701_gshared (Dictionary_2_t1982 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m11701(__this, ___key, method) (( bool (*) (Dictionary_2_t1982 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m11701_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m11703_gshared (Dictionary_2_t1982 * __this, float ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m11703(__this, ___value, method) (( bool (*) (Dictionary_2_t1982 *, float, const MethodInfo*))Dictionary_2_ContainsValue_m11703_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m11705_gshared (Dictionary_2_t1982 * __this, SerializationInfo_t831 * ___info, StreamingContext_t832  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m11705(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1982 *, SerializationInfo_t831 *, StreamingContext_t832 , const MethodInfo*))Dictionary_2_GetObjectData_m11705_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m11707_gshared (Dictionary_2_t1982 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m11707(__this, ___sender, method) (( void (*) (Dictionary_2_t1982 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m11707_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m11709_gshared (Dictionary_2_t1982 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m11709(__this, ___key, method) (( bool (*) (Dictionary_2_t1982 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m11709_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m11711_gshared (Dictionary_2_t1982 * __this, Object_t * ___key, float* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m11711(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1982 *, Object_t *, float*, const MethodInfo*))Dictionary_2_TryGetValue_m11711_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::get_Values()
extern "C" ValueCollection_t1991 * Dictionary_2_get_Values_m11713_gshared (Dictionary_2_t1982 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m11713(__this, method) (( ValueCollection_t1991 * (*) (Dictionary_2_t1982 *, const MethodInfo*))Dictionary_2_get_Values_m11713_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m11715_gshared (Dictionary_2_t1982 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m11715(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1982 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m11715_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ToTValue(System.Object)
extern "C" float Dictionary_2_ToTValue_m11717_gshared (Dictionary_2_t1982 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m11717(__this, ___value, method) (( float (*) (Dictionary_2_t1982 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m11717_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Single>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m11719_gshared (Dictionary_2_t1982 * __this, KeyValuePair_2_t1985  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m11719(__this, ___pair, method) (( bool (*) (Dictionary_2_t1982 *, KeyValuePair_2_t1985 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m11719_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Single>::GetEnumerator()
extern "C" Enumerator_t1993  Dictionary_2_GetEnumerator_m11720_gshared (Dictionary_2_t1982 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m11720(__this, method) (( Enumerator_t1993  (*) (Dictionary_2_t1982 *, const MethodInfo*))Dictionary_2_GetEnumerator_m11720_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Single>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t280  Dictionary_2_U3CCopyToU3Em__0_m11722_gshared (Object_t * __this /* static, unused */, Object_t * ___key, float ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m11722(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t280  (*) (Object_t * /* static, unused */, Object_t *, float, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m11722_gshared)(__this /* static, unused */, ___key, ___value, method)
