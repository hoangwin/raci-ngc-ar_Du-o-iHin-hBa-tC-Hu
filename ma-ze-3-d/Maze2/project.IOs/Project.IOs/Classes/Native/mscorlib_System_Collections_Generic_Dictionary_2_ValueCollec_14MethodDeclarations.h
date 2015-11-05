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

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t2210;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2206;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2291;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t239;
// System.Object[]
struct ObjectU5BU5D_t242;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_15.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m14590_gshared (ValueCollection_t2210 * __this, Dictionary_2_t2206 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m14590(__this, ___dictionary, method) (( void (*) (ValueCollection_t2210 *, Dictionary_2_t2206 *, const MethodInfo*))ValueCollection__ctor_m14590_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m14591_gshared (ValueCollection_t2210 * __this, Object_t * ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m14591(__this, ___item, method) (( void (*) (ValueCollection_t2210 *, Object_t *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m14591_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m14592_gshared (ValueCollection_t2210 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m14592(__this, method) (( void (*) (ValueCollection_t2210 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m14592_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m14593_gshared (ValueCollection_t2210 * __this, Object_t * ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m14593(__this, ___item, method) (( bool (*) (ValueCollection_t2210 *, Object_t *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m14593_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m14594_gshared (ValueCollection_t2210 * __this, Object_t * ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m14594(__this, ___item, method) (( bool (*) (ValueCollection_t2210 *, Object_t *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m14594_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m14595_gshared (ValueCollection_t2210 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m14595(__this, method) (( Object_t* (*) (ValueCollection_t2210 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m14595_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m14596_gshared (ValueCollection_t2210 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m14596(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2210 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m14596_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m14597_gshared (ValueCollection_t2210 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m14597(__this, method) (( Object_t * (*) (ValueCollection_t2210 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m14597_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m14598_gshared (ValueCollection_t2210 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m14598(__this, method) (( bool (*) (ValueCollection_t2210 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m14598_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m14599_gshared (ValueCollection_t2210 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m14599(__this, method) (( bool (*) (ValueCollection_t2210 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m14599_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m14600_gshared (ValueCollection_t2210 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m14600(__this, method) (( Object_t * (*) (ValueCollection_t2210 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m14600_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m14601_gshared (ValueCollection_t2210 * __this, ObjectU5BU5D_t242* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m14601(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2210 *, ObjectU5BU5D_t242*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m14601_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t2211  ValueCollection_GetEnumerator_m14602_gshared (ValueCollection_t2210 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m14602(__this, method) (( Enumerator_t2211  (*) (ValueCollection_t2210 *, const MethodInfo*))ValueCollection_GetEnumerator_m14602_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m14603_gshared (ValueCollection_t2210 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m14603(__this, method) (( int32_t (*) (ValueCollection_t2210 *, const MethodInfo*))ValueCollection_get_Count_m14603_gshared)(__this, method)
