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

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t2042;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t40;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t2652;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t239;
// System.Object
struct Object_t;
// System.Int32[]
struct Int32U5BU5D_t38;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_10.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m12384_gshared (ValueCollection_t2042 * __this, Dictionary_2_t40 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m12384(__this, ___dictionary, method) (( void (*) (ValueCollection_t2042 *, Dictionary_2_t40 *, const MethodInfo*))ValueCollection__ctor_m12384_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m12385_gshared (ValueCollection_t2042 * __this, int32_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m12385(__this, ___item, method) (( void (*) (ValueCollection_t2042 *, int32_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m12385_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m12386_gshared (ValueCollection_t2042 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m12386(__this, method) (( void (*) (ValueCollection_t2042 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m12386_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m12387_gshared (ValueCollection_t2042 * __this, int32_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m12387(__this, ___item, method) (( bool (*) (ValueCollection_t2042 *, int32_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m12387_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m12388_gshared (ValueCollection_t2042 * __this, int32_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m12388(__this, ___item, method) (( bool (*) (ValueCollection_t2042 *, int32_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m12388_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m12389_gshared (ValueCollection_t2042 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m12389(__this, method) (( Object_t* (*) (ValueCollection_t2042 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m12389_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m12390_gshared (ValueCollection_t2042 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m12390(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2042 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m12390_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m12391_gshared (ValueCollection_t2042 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m12391(__this, method) (( Object_t * (*) (ValueCollection_t2042 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m12391_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m12392_gshared (ValueCollection_t2042 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m12392(__this, method) (( bool (*) (ValueCollection_t2042 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m12392_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m12393_gshared (ValueCollection_t2042 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m12393(__this, method) (( bool (*) (ValueCollection_t2042 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m12393_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m12394_gshared (ValueCollection_t2042 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m12394(__this, method) (( Object_t * (*) (ValueCollection_t2042 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m12394_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m12395_gshared (ValueCollection_t2042 * __this, Int32U5BU5D_t38* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m12395(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2042 *, Int32U5BU5D_t38*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m12395_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::GetEnumerator()
extern "C" Enumerator_t2043  ValueCollection_GetEnumerator_m12396_gshared (ValueCollection_t2042 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m12396(__this, method) (( Enumerator_t2043  (*) (ValueCollection_t2042 *, const MethodInfo*))ValueCollection_GetEnumerator_m12396_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m12397_gshared (ValueCollection_t2042 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m12397(__this, method) (( int32_t (*) (ValueCollection_t2042 *, const MethodInfo*))ValueCollection_get_Count_m12397_gshared)(__this, method)
