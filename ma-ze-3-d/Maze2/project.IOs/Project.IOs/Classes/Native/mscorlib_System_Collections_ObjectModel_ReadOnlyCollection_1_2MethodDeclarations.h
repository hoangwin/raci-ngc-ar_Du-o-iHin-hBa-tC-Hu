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

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t1975;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t2007;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t239;
// System.Object[]
struct ObjectU5BU5D_t242;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2291;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::.ctor(System.Collections.Generic.IList`1<T>)
extern "C" void ReadOnlyCollection_1__ctor_m11986_gshared (ReadOnlyCollection_1_t1975 * __this, Object_t* ___list, const MethodInfo* method);
#define ReadOnlyCollection_1__ctor_m11986(__this, ___list, method) (( void (*) (ReadOnlyCollection_1_t1975 *, Object_t*, const MethodInfo*))ReadOnlyCollection_1__ctor_m11986_gshared)(__this, ___list, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m11987_gshared (ReadOnlyCollection_1_t1975 * __this, Object_t * ___item, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m11987(__this, ___item, method) (( void (*) (ReadOnlyCollection_1_t1975 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m11987_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.ICollection<T>.Clear()
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m11988_gshared (ReadOnlyCollection_1_t1975 * __this, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m11988(__this, method) (( void (*) (ReadOnlyCollection_1_t1975 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m11988_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m11989_gshared (ReadOnlyCollection_1_t1975 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m11989(__this, ___index, ___item, method) (( void (*) (ReadOnlyCollection_1_t1975 *, int32_t, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m11989_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.ICollection<T>.Remove(T)
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m11990_gshared (ReadOnlyCollection_1_t1975 * __this, Object_t * ___item, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m11990(__this, ___item, method) (( bool (*) (ReadOnlyCollection_1_t1975 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m11990_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m11991_gshared (ReadOnlyCollection_1_t1975 * __this, int32_t ___index, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m11991(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t1975 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m11991_gshared)(__this, ___index, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m11992_gshared (ReadOnlyCollection_1_t1975 * __this, int32_t ___index, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m11992(__this, ___index, method) (( Object_t * (*) (ReadOnlyCollection_1_t1975 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m11992_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m11993_gshared (ReadOnlyCollection_1_t1975 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m11993(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t1975 *, int32_t, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m11993_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11994_gshared (ReadOnlyCollection_1_t1975 * __this, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11994(__this, method) (( bool (*) (ReadOnlyCollection_1_t1975 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11994_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m11995_gshared (ReadOnlyCollection_1_t1975 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m11995(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t1975 *, Array_t *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m11995_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m11996_gshared (ReadOnlyCollection_1_t1975 * __this, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m11996(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t1975 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m11996_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_Add_m11997_gshared (ReadOnlyCollection_1_t1975 * __this, Object_t * ___value, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_Add_m11997(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t1975 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Add_m11997_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Clear()
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Clear_m11998_gshared (ReadOnlyCollection_1_t1975 * __this, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_Clear_m11998(__this, method) (( void (*) (ReadOnlyCollection_1_t1975 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Clear_m11998_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_Contains_m11999_gshared (ReadOnlyCollection_1_t1975 * __this, Object_t * ___value, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_Contains_m11999(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t1975 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Contains_m11999_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m12000_gshared (ReadOnlyCollection_1_t1975 * __this, Object_t * ___value, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_IndexOf_m12000(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t1975 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_IndexOf_m12000_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Insert_m12001_gshared (ReadOnlyCollection_1_t1975 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_Insert_m12001(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t1975 *, int32_t, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Insert_m12001_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Remove_m12002_gshared (ReadOnlyCollection_1_t1975 * __this, Object_t * ___value, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_Remove_m12002(__this, ___value, method) (( void (*) (ReadOnlyCollection_1_t1975 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_Remove_m12002_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.RemoveAt(System.Int32)
extern "C" void ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m12003_gshared (ReadOnlyCollection_1_t1975 * __this, int32_t ___index, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m12003(__this, ___index, method) (( void (*) (ReadOnlyCollection_1_t1975 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m12003_gshared)(__this, ___index, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m12004_gshared (ReadOnlyCollection_1_t1975 * __this, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m12004(__this, method) (( bool (*) (ReadOnlyCollection_1_t1975 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m12004_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m12005_gshared (ReadOnlyCollection_1_t1975 * __this, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m12005(__this, method) (( Object_t * (*) (ReadOnlyCollection_1_t1975 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m12005_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m12006_gshared (ReadOnlyCollection_1_t1975 * __this, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m12006(__this, method) (( bool (*) (ReadOnlyCollection_1_t1975 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m12006_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m12007_gshared (ReadOnlyCollection_1_t1975 * __this, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m12007(__this, method) (( bool (*) (ReadOnlyCollection_1_t1975 *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m12007_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IList_get_Item_m12008_gshared (ReadOnlyCollection_1_t1975 * __this, int32_t ___index, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_get_Item_m12008(__this, ___index, method) (( Object_t * (*) (ReadOnlyCollection_1_t1975 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_get_Item_m12008_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void ReadOnlyCollection_1_System_Collections_IList_set_Item_m12009_gshared (ReadOnlyCollection_1_t1975 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define ReadOnlyCollection_1_System_Collections_IList_set_Item_m12009(__this, ___index, ___value, method) (( void (*) (ReadOnlyCollection_1_t1975 *, int32_t, Object_t *, const MethodInfo*))ReadOnlyCollection_1_System_Collections_IList_set_Item_m12009_gshared)(__this, ___index, ___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::Contains(T)
extern "C" bool ReadOnlyCollection_1_Contains_m12010_gshared (ReadOnlyCollection_1_t1975 * __this, Object_t * ___value, const MethodInfo* method);
#define ReadOnlyCollection_1_Contains_m12010(__this, ___value, method) (( bool (*) (ReadOnlyCollection_1_t1975 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_Contains_m12010_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void ReadOnlyCollection_1_CopyTo_m12011_gshared (ReadOnlyCollection_1_t1975 * __this, ObjectU5BU5D_t242* ___array, int32_t ___index, const MethodInfo* method);
#define ReadOnlyCollection_1_CopyTo_m12011(__this, ___array, ___index, method) (( void (*) (ReadOnlyCollection_1_t1975 *, ObjectU5BU5D_t242*, int32_t, const MethodInfo*))ReadOnlyCollection_1_CopyTo_m12011_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::GetEnumerator()
extern "C" Object_t* ReadOnlyCollection_1_GetEnumerator_m12012_gshared (ReadOnlyCollection_1_t1975 * __this, const MethodInfo* method);
#define ReadOnlyCollection_1_GetEnumerator_m12012(__this, method) (( Object_t* (*) (ReadOnlyCollection_1_t1975 *, const MethodInfo*))ReadOnlyCollection_1_GetEnumerator_m12012_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::IndexOf(T)
extern "C" int32_t ReadOnlyCollection_1_IndexOf_m12013_gshared (ReadOnlyCollection_1_t1975 * __this, Object_t * ___value, const MethodInfo* method);
#define ReadOnlyCollection_1_IndexOf_m12013(__this, ___value, method) (( int32_t (*) (ReadOnlyCollection_1_t1975 *, Object_t *, const MethodInfo*))ReadOnlyCollection_1_IndexOf_m12013_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::get_Count()
extern "C" int32_t ReadOnlyCollection_1_get_Count_m12014_gshared (ReadOnlyCollection_1_t1975 * __this, const MethodInfo* method);
#define ReadOnlyCollection_1_get_Count_m12014(__this, method) (( int32_t (*) (ReadOnlyCollection_1_t1975 *, const MethodInfo*))ReadOnlyCollection_1_get_Count_m12014_gshared)(__this, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * ReadOnlyCollection_1_get_Item_m12015_gshared (ReadOnlyCollection_1_t1975 * __this, int32_t ___index, const MethodInfo* method);
#define ReadOnlyCollection_1_get_Item_m12015(__this, ___index, method) (( Object_t * (*) (ReadOnlyCollection_1_t1975 *, int32_t, const MethodInfo*))ReadOnlyCollection_1_get_Item_m12015_gshared)(__this, ___index, method)
