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

// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t2472;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1984;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t831;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>[]
struct KeyValuePair_2U5BU5D_t2713;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t239;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>
struct IEnumerator_1_t2714;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1042;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>
struct ValueCollection_t2477;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_16.h"
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__16.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor()
extern "C" void Dictionary_2__ctor_m18123_gshared (Dictionary_2_t2472 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m18123(__this, method) (( void (*) (Dictionary_2_t2472 *, const MethodInfo*))Dictionary_2__ctor_m18123_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m18125_gshared (Dictionary_2_t2472 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m18125(__this, ___comparer, method) (( void (*) (Dictionary_2_t2472 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m18125_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m18127_gshared (Dictionary_2_t2472 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m18127(__this, ___capacity, method) (( void (*) (Dictionary_2_t2472 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m18127_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m18129_gshared (Dictionary_2_t2472 * __this, SerializationInfo_t831 * ___info, StreamingContext_t832  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m18129(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2472 *, SerializationInfo_t831 *, StreamingContext_t832 , const MethodInfo*))Dictionary_2__ctor_m18129_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m18131_gshared (Dictionary_2_t2472 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m18131(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2472 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m18131_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m18133_gshared (Dictionary_2_t2472 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m18133(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2472 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m18133_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m18135_gshared (Dictionary_2_t2472 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m18135(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2472 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m18135_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m18137_gshared (Dictionary_2_t2472 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m18137(__this, ___key, method) (( bool (*) (Dictionary_2_t2472 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m18137_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m18139_gshared (Dictionary_2_t2472 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m18139(__this, ___key, method) (( void (*) (Dictionary_2_t2472 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m18139_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18141_gshared (Dictionary_2_t2472 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18141(__this, method) (( bool (*) (Dictionary_2_t2472 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18141_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18143_gshared (Dictionary_2_t2472 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18143(__this, method) (( Object_t * (*) (Dictionary_2_t2472 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18143_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18145_gshared (Dictionary_2_t2472 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18145(__this, method) (( bool (*) (Dictionary_2_t2472 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18145_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18147_gshared (Dictionary_2_t2472 * __this, KeyValuePair_2_t2474  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18147(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2472 *, KeyValuePair_2_t2474 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18147_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18149_gshared (Dictionary_2_t2472 * __this, KeyValuePair_2_t2474  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18149(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2472 *, KeyValuePair_2_t2474 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18149_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18151_gshared (Dictionary_2_t2472 * __this, KeyValuePair_2U5BU5D_t2713* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18151(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2472 *, KeyValuePair_2U5BU5D_t2713*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18151_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18153_gshared (Dictionary_2_t2472 * __this, KeyValuePair_2_t2474  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18153(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2472 *, KeyValuePair_2_t2474 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18153_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m18155_gshared (Dictionary_2_t2472 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m18155(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2472 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m18155_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18157_gshared (Dictionary_2_t2472 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18157(__this, method) (( Object_t * (*) (Dictionary_2_t2472 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18157_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18159_gshared (Dictionary_2_t2472 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18159(__this, method) (( Object_t* (*) (Dictionary_2_t2472 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18159_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18161_gshared (Dictionary_2_t2472 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18161(__this, method) (( Object_t * (*) (Dictionary_2_t2472 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18161_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m18163_gshared (Dictionary_2_t2472 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m18163(__this, method) (( int32_t (*) (Dictionary_2_t2472 *, const MethodInfo*))Dictionary_2_get_Count_m18163_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m18165_gshared (Dictionary_2_t2472 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m18165(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2472 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m18165_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m18167_gshared (Dictionary_2_t2472 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m18167(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2472 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m18167_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m18169_gshared (Dictionary_2_t2472 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m18169(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2472 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m18169_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m18171_gshared (Dictionary_2_t2472 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m18171(__this, ___size, method) (( void (*) (Dictionary_2_t2472 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m18171_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m18173_gshared (Dictionary_2_t2472 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m18173(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2472 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m18173_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2474  Dictionary_2_make_pair_m18175_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m18175(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2474  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m18175_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m18177_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m18177(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m18177_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m18179_gshared (Dictionary_2_t2472 * __this, KeyValuePair_2U5BU5D_t2713* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m18179(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2472 *, KeyValuePair_2U5BU5D_t2713*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m18179_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Resize()
extern "C" void Dictionary_2_Resize_m18181_gshared (Dictionary_2_t2472 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m18181(__this, method) (( void (*) (Dictionary_2_t2472 *, const MethodInfo*))Dictionary_2_Resize_m18181_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m18183_gshared (Dictionary_2_t2472 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m18183(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2472 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m18183_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Clear()
extern "C" void Dictionary_2_Clear_m18185_gshared (Dictionary_2_t2472 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m18185(__this, method) (( void (*) (Dictionary_2_t2472 *, const MethodInfo*))Dictionary_2_Clear_m18185_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m18187_gshared (Dictionary_2_t2472 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m18187(__this, ___key, method) (( bool (*) (Dictionary_2_t2472 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m18187_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m18189_gshared (Dictionary_2_t2472 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m18189(__this, ___value, method) (( bool (*) (Dictionary_2_t2472 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m18189_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m18191_gshared (Dictionary_2_t2472 * __this, SerializationInfo_t831 * ___info, StreamingContext_t832  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m18191(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2472 *, SerializationInfo_t831 *, StreamingContext_t832 , const MethodInfo*))Dictionary_2_GetObjectData_m18191_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m18193_gshared (Dictionary_2_t2472 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m18193(__this, ___sender, method) (( void (*) (Dictionary_2_t2472 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m18193_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m18195_gshared (Dictionary_2_t2472 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m18195(__this, ___key, method) (( bool (*) (Dictionary_2_t2472 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m18195_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m18197_gshared (Dictionary_2_t2472 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m18197(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2472 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m18197_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Values()
extern "C" ValueCollection_t2477 * Dictionary_2_get_Values_m18199_gshared (Dictionary_2_t2472 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m18199(__this, method) (( ValueCollection_t2477 * (*) (Dictionary_2_t2472 *, const MethodInfo*))Dictionary_2_get_Values_m18199_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m18201_gshared (Dictionary_2_t2472 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m18201(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2472 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m18201_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m18203_gshared (Dictionary_2_t2472 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m18203(__this, ___value, method) (( int32_t (*) (Dictionary_2_t2472 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m18203_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m18205_gshared (Dictionary_2_t2472 * __this, KeyValuePair_2_t2474  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m18205(__this, ___pair, method) (( bool (*) (Dictionary_2_t2472 *, KeyValuePair_2_t2474 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m18205_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::GetEnumerator()
extern "C" Enumerator_t2479  Dictionary_2_GetEnumerator_m18207_gshared (Dictionary_2_t2472 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m18207(__this, method) (( Enumerator_t2479  (*) (Dictionary_2_t2472 *, const MethodInfo*))Dictionary_2_GetEnumerator_m18207_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t280  Dictionary_2_U3CCopyToU3Em__0_m18209_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m18209(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t280  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m18209_gshared)(__this /* static, unused */, ___key, ___value, method)
