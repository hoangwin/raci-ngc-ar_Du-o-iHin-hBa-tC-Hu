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

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2076;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1984;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t831;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t2654;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t239;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t2655;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1042;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t2080;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__5.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m12717_gshared (Dictionary_2_t2076 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m12717(__this, method) (( void (*) (Dictionary_2_t2076 *, const MethodInfo*))Dictionary_2__ctor_m12717_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m12719_gshared (Dictionary_2_t2076 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m12719(__this, ___comparer, method) (( void (*) (Dictionary_2_t2076 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m12719_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m12720_gshared (Dictionary_2_t2076 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m12720(__this, ___capacity, method) (( void (*) (Dictionary_2_t2076 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m12720_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m12722_gshared (Dictionary_2_t2076 * __this, SerializationInfo_t831 * ___info, StreamingContext_t832  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m12722(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2076 *, SerializationInfo_t831 *, StreamingContext_t832 , const MethodInfo*))Dictionary_2__ctor_m12722_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m12724_gshared (Dictionary_2_t2076 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m12724(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2076 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m12724_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m12726_gshared (Dictionary_2_t2076 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m12726(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2076 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m12726_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m12728_gshared (Dictionary_2_t2076 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m12728(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2076 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m12728_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m12730_gshared (Dictionary_2_t2076 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m12730(__this, ___key, method) (( bool (*) (Dictionary_2_t2076 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m12730_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m12732_gshared (Dictionary_2_t2076 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m12732(__this, ___key, method) (( void (*) (Dictionary_2_t2076 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m12732_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12734_gshared (Dictionary_2_t2076 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12734(__this, method) (( bool (*) (Dictionary_2_t2076 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12734_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12736_gshared (Dictionary_2_t2076 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12736(__this, method) (( Object_t * (*) (Dictionary_2_t2076 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12736_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12738_gshared (Dictionary_2_t2076 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12738(__this, method) (( bool (*) (Dictionary_2_t2076 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12738_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12740_gshared (Dictionary_2_t2076 * __this, KeyValuePair_2_t2078  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12740(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2076 *, KeyValuePair_2_t2078 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12740_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12742_gshared (Dictionary_2_t2076 * __this, KeyValuePair_2_t2078  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12742(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2076 *, KeyValuePair_2_t2078 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12742_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12744_gshared (Dictionary_2_t2076 * __this, KeyValuePair_2U5BU5D_t2654* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12744(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2076 *, KeyValuePair_2U5BU5D_t2654*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12744_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12746_gshared (Dictionary_2_t2076 * __this, KeyValuePair_2_t2078  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12746(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2076 *, KeyValuePair_2_t2078 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12746_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m12748_gshared (Dictionary_2_t2076 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m12748(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2076 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m12748_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12750_gshared (Dictionary_2_t2076 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12750(__this, method) (( Object_t * (*) (Dictionary_2_t2076 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12750_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12752_gshared (Dictionary_2_t2076 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12752(__this, method) (( Object_t* (*) (Dictionary_2_t2076 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12752_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12754_gshared (Dictionary_2_t2076 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12754(__this, method) (( Object_t * (*) (Dictionary_2_t2076 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12754_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m12756_gshared (Dictionary_2_t2076 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m12756(__this, method) (( int32_t (*) (Dictionary_2_t2076 *, const MethodInfo*))Dictionary_2_get_Count_m12756_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m12758_gshared (Dictionary_2_t2076 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m12758(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2076 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m12758_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m12760_gshared (Dictionary_2_t2076 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m12760(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2076 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m12760_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m12762_gshared (Dictionary_2_t2076 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m12762(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2076 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m12762_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m12764_gshared (Dictionary_2_t2076 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m12764(__this, ___size, method) (( void (*) (Dictionary_2_t2076 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m12764_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m12766_gshared (Dictionary_2_t2076 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m12766(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2076 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m12766_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2078  Dictionary_2_make_pair_m12768_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m12768(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2078  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m12768_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m12770_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m12770(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m12770_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m12772_gshared (Dictionary_2_t2076 * __this, KeyValuePair_2U5BU5D_t2654* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m12772(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2076 *, KeyValuePair_2U5BU5D_t2654*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m12772_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m12774_gshared (Dictionary_2_t2076 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m12774(__this, method) (( void (*) (Dictionary_2_t2076 *, const MethodInfo*))Dictionary_2_Resize_m12774_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m12776_gshared (Dictionary_2_t2076 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m12776(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2076 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m12776_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m12778_gshared (Dictionary_2_t2076 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m12778(__this, method) (( void (*) (Dictionary_2_t2076 *, const MethodInfo*))Dictionary_2_Clear_m12778_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m12780_gshared (Dictionary_2_t2076 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m12780(__this, ___key, method) (( bool (*) (Dictionary_2_t2076 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m12780_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m12782_gshared (Dictionary_2_t2076 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m12782(__this, ___value, method) (( bool (*) (Dictionary_2_t2076 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m12782_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m12784_gshared (Dictionary_2_t2076 * __this, SerializationInfo_t831 * ___info, StreamingContext_t832  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m12784(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2076 *, SerializationInfo_t831 *, StreamingContext_t832 , const MethodInfo*))Dictionary_2_GetObjectData_m12784_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m12786_gshared (Dictionary_2_t2076 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m12786(__this, ___sender, method) (( void (*) (Dictionary_2_t2076 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m12786_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m12788_gshared (Dictionary_2_t2076 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m12788(__this, ___key, method) (( bool (*) (Dictionary_2_t2076 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m12788_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m12790_gshared (Dictionary_2_t2076 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m12790(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2076 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m12790_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t2080 * Dictionary_2_get_Values_m12792_gshared (Dictionary_2_t2076 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m12792(__this, method) (( ValueCollection_t2080 * (*) (Dictionary_2_t2076 *, const MethodInfo*))Dictionary_2_get_Values_m12792_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m12794_gshared (Dictionary_2_t2076 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m12794(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2076 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m12794_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m12796_gshared (Dictionary_2_t2076 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m12796(__this, ___value, method) (( int32_t (*) (Dictionary_2_t2076 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m12796_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m12798_gshared (Dictionary_2_t2076 * __this, KeyValuePair_2_t2078  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m12798(__this, ___pair, method) (( bool (*) (Dictionary_2_t2076 *, KeyValuePair_2_t2078 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m12798_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t2082  Dictionary_2_GetEnumerator_m12800_gshared (Dictionary_2_t2076 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m12800(__this, method) (( Enumerator_t2082  (*) (Dictionary_2_t2076 *, const MethodInfo*))Dictionary_2_GetEnumerator_m12800_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t280  Dictionary_2_U3CCopyToU3Em__0_m12802_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m12802(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t280  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m12802_gshared)(__this /* static, unused */, ___key, ___value, method)
