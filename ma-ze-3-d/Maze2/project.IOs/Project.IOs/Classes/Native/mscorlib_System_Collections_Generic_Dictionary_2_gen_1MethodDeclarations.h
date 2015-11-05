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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t40;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t2023;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t831;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>[]
struct KeyValuePair_2U5BU5D_t2650;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t239;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
struct IEnumerator_1_t2651;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1042;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t2042;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__4.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m836_gshared (Dictionary_2_t40 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m836(__this, method) (( void (*) (Dictionary_2_t40 *, const MethodInfo*))Dictionary_2__ctor_m836_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m12329_gshared (Dictionary_2_t40 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m12329(__this, ___comparer, method) (( void (*) (Dictionary_2_t40 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m12329_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m12330_gshared (Dictionary_2_t40 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m12330(__this, ___capacity, method) (( void (*) (Dictionary_2_t40 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m12330_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m12331_gshared (Dictionary_2_t40 * __this, SerializationInfo_t831 * ___info, StreamingContext_t832  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m12331(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t40 *, SerializationInfo_t831 *, StreamingContext_t832 , const MethodInfo*))Dictionary_2__ctor_m12331_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m12332_gshared (Dictionary_2_t40 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m12332(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t40 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m12332_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m12333_gshared (Dictionary_2_t40 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m12333(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t40 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m12333_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m12334_gshared (Dictionary_2_t40 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m12334(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t40 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m12334_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m12335_gshared (Dictionary_2_t40 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m12335(__this, ___key, method) (( bool (*) (Dictionary_2_t40 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m12335_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m12336_gshared (Dictionary_2_t40 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m12336(__this, ___key, method) (( void (*) (Dictionary_2_t40 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m12336_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12337_gshared (Dictionary_2_t40 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12337(__this, method) (( bool (*) (Dictionary_2_t40 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12337_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12338_gshared (Dictionary_2_t40 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12338(__this, method) (( Object_t * (*) (Dictionary_2_t40 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12338_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12339_gshared (Dictionary_2_t40 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12339(__this, method) (( bool (*) (Dictionary_2_t40 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12339_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12340_gshared (Dictionary_2_t40 * __this, KeyValuePair_2_t2040  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12340(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t40 *, KeyValuePair_2_t2040 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12340_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12341_gshared (Dictionary_2_t40 * __this, KeyValuePair_2_t2040  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12341(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t40 *, KeyValuePair_2_t2040 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12341_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12342_gshared (Dictionary_2_t40 * __this, KeyValuePair_2U5BU5D_t2650* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12342(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t40 *, KeyValuePair_2U5BU5D_t2650*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12342_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12343_gshared (Dictionary_2_t40 * __this, KeyValuePair_2_t2040  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12343(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t40 *, KeyValuePair_2_t2040 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12343_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m12344_gshared (Dictionary_2_t40 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m12344(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t40 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m12344_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12345_gshared (Dictionary_2_t40 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12345(__this, method) (( Object_t * (*) (Dictionary_2_t40 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12345_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12346_gshared (Dictionary_2_t40 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12346(__this, method) (( Object_t* (*) (Dictionary_2_t40 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12346_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12347_gshared (Dictionary_2_t40 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12347(__this, method) (( Object_t * (*) (Dictionary_2_t40 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12347_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m12348_gshared (Dictionary_2_t40 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m12348(__this, method) (( int32_t (*) (Dictionary_2_t40 *, const MethodInfo*))Dictionary_2_get_Count_m12348_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m12349_gshared (Dictionary_2_t40 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m12349(__this, ___key, method) (( int32_t (*) (Dictionary_2_t40 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m12349_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m12350_gshared (Dictionary_2_t40 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m12350(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t40 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_set_Item_m12350_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m12351_gshared (Dictionary_2_t40 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m12351(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t40 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m12351_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m12352_gshared (Dictionary_2_t40 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m12352(__this, ___size, method) (( void (*) (Dictionary_2_t40 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m12352_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m12353_gshared (Dictionary_2_t40 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m12353(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t40 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m12353_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2040  Dictionary_2_make_pair_m12354_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m12354(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2040  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_make_pair_m12354_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m12355_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m12355(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_value_m12355_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m12356_gshared (Dictionary_2_t40 * __this, KeyValuePair_2U5BU5D_t2650* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m12356(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t40 *, KeyValuePair_2U5BU5D_t2650*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m12356_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m12357_gshared (Dictionary_2_t40 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m12357(__this, method) (( void (*) (Dictionary_2_t40 *, const MethodInfo*))Dictionary_2_Resize_m12357_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m12358_gshared (Dictionary_2_t40 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m12358(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t40 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_Add_m12358_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m12359_gshared (Dictionary_2_t40 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m12359(__this, method) (( void (*) (Dictionary_2_t40 *, const MethodInfo*))Dictionary_2_Clear_m12359_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m12360_gshared (Dictionary_2_t40 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m12360(__this, ___key, method) (( bool (*) (Dictionary_2_t40 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m12360_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m12361_gshared (Dictionary_2_t40 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m12361(__this, ___value, method) (( bool (*) (Dictionary_2_t40 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m12361_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m12362_gshared (Dictionary_2_t40 * __this, SerializationInfo_t831 * ___info, StreamingContext_t832  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m12362(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t40 *, SerializationInfo_t831 *, StreamingContext_t832 , const MethodInfo*))Dictionary_2_GetObjectData_m12362_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m12363_gshared (Dictionary_2_t40 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m12363(__this, ___sender, method) (( void (*) (Dictionary_2_t40 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m12363_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m12364_gshared (Dictionary_2_t40 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m12364(__this, ___key, method) (( bool (*) (Dictionary_2_t40 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m12364_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m12365_gshared (Dictionary_2_t40 * __this, int32_t ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m12365(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t40 *, int32_t, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m12365_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Values()
extern "C" ValueCollection_t2042 * Dictionary_2_get_Values_m12366_gshared (Dictionary_2_t40 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m12366(__this, method) (( ValueCollection_t2042 * (*) (Dictionary_2_t40 *, const MethodInfo*))Dictionary_2_get_Values_m12366_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m12367_gshared (Dictionary_2_t40 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m12367(__this, ___key, method) (( int32_t (*) (Dictionary_2_t40 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m12367_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m12368_gshared (Dictionary_2_t40 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m12368(__this, ___value, method) (( int32_t (*) (Dictionary_2_t40 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m12368_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m12369_gshared (Dictionary_2_t40 * __this, KeyValuePair_2_t2040  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m12369(__this, ___pair, method) (( bool (*) (Dictionary_2_t40 *, KeyValuePair_2_t2040 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m12369_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetEnumerator()
extern "C" Enumerator_t2044  Dictionary_2_GetEnumerator_m12370_gshared (Dictionary_2_t40 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m12370(__this, method) (( Enumerator_t2044  (*) (Dictionary_2_t40 *, const MethodInfo*))Dictionary_2_GetEnumerator_m12370_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t280  Dictionary_2_U3CCopyToU3Em__0_m12371_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m12371(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t280  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m12371_gshared)(__this /* static, unused */, ___key, ___value, method)
