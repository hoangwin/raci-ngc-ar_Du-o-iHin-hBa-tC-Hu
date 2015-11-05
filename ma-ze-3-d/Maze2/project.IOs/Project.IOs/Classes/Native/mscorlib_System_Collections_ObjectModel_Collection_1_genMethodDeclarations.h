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

// System.Collections.ObjectModel.Collection`1<System.Object>
struct Collection_1_t2008;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t239;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t242;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2291;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t2007;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::.ctor()
extern "C" void Collection_1__ctor_m12016_gshared (Collection_1_t2008 * __this, const MethodInfo* method);
#define Collection_1__ctor_m12016(__this, method) (( void (*) (Collection_1_t2008 *, const MethodInfo*))Collection_1__ctor_m12016_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12017_gshared (Collection_1_t2008 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12017(__this, method) (( bool (*) (Collection_1_t2008 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12017_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m12018_gshared (Collection_1_t2008 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m12018(__this, ___array, ___index, method) (( void (*) (Collection_1_t2008 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m12018_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m12019_gshared (Collection_1_t2008 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m12019(__this, method) (( Object_t * (*) (Collection_1_t2008 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m12019_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m12020_gshared (Collection_1_t2008 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m12020(__this, ___value, method) (( int32_t (*) (Collection_1_t2008 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m12020_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m12021_gshared (Collection_1_t2008 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m12021(__this, ___value, method) (( bool (*) (Collection_1_t2008 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m12021_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m12022_gshared (Collection_1_t2008 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m12022(__this, ___value, method) (( int32_t (*) (Collection_1_t2008 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m12022_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m12023_gshared (Collection_1_t2008 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m12023(__this, ___index, ___value, method) (( void (*) (Collection_1_t2008 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m12023_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m12024_gshared (Collection_1_t2008 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m12024(__this, ___value, method) (( void (*) (Collection_1_t2008 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m12024_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m12025_gshared (Collection_1_t2008 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m12025(__this, method) (( bool (*) (Collection_1_t2008 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m12025_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m12026_gshared (Collection_1_t2008 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m12026(__this, method) (( Object_t * (*) (Collection_1_t2008 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m12026_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m12027_gshared (Collection_1_t2008 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m12027(__this, method) (( bool (*) (Collection_1_t2008 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m12027_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m12028_gshared (Collection_1_t2008 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m12028(__this, method) (( bool (*) (Collection_1_t2008 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m12028_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m12029_gshared (Collection_1_t2008 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m12029(__this, ___index, method) (( Object_t * (*) (Collection_1_t2008 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m12029_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m12030_gshared (Collection_1_t2008 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m12030(__this, ___index, ___value, method) (( void (*) (Collection_1_t2008 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m12030_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Add(T)
extern "C" void Collection_1_Add_m12031_gshared (Collection_1_t2008 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Add_m12031(__this, ___item, method) (( void (*) (Collection_1_t2008 *, Object_t *, const MethodInfo*))Collection_1_Add_m12031_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Clear()
extern "C" void Collection_1_Clear_m12032_gshared (Collection_1_t2008 * __this, const MethodInfo* method);
#define Collection_1_Clear_m12032(__this, method) (( void (*) (Collection_1_t2008 *, const MethodInfo*))Collection_1_Clear_m12032_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::ClearItems()
extern "C" void Collection_1_ClearItems_m12033_gshared (Collection_1_t2008 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m12033(__this, method) (( void (*) (Collection_1_t2008 *, const MethodInfo*))Collection_1_ClearItems_m12033_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Contains(T)
extern "C" bool Collection_1_Contains_m12034_gshared (Collection_1_t2008 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Contains_m12034(__this, ___item, method) (( bool (*) (Collection_1_t2008 *, Object_t *, const MethodInfo*))Collection_1_Contains_m12034_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m12035_gshared (Collection_1_t2008 * __this, ObjectU5BU5D_t242* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m12035(__this, ___array, ___index, method) (( void (*) (Collection_1_t2008 *, ObjectU5BU5D_t242*, int32_t, const MethodInfo*))Collection_1_CopyTo_m12035_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m12036_gshared (Collection_1_t2008 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m12036(__this, method) (( Object_t* (*) (Collection_1_t2008 *, const MethodInfo*))Collection_1_GetEnumerator_m12036_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m12037_gshared (Collection_1_t2008 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m12037(__this, ___item, method) (( int32_t (*) (Collection_1_t2008 *, Object_t *, const MethodInfo*))Collection_1_IndexOf_m12037_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m12038_gshared (Collection_1_t2008 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Insert_m12038(__this, ___index, ___item, method) (( void (*) (Collection_1_t2008 *, int32_t, Object_t *, const MethodInfo*))Collection_1_Insert_m12038_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m12039_gshared (Collection_1_t2008 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m12039(__this, ___index, ___item, method) (( void (*) (Collection_1_t2008 *, int32_t, Object_t *, const MethodInfo*))Collection_1_InsertItem_m12039_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Remove(T)
extern "C" bool Collection_1_Remove_m12040_gshared (Collection_1_t2008 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Remove_m12040(__this, ___item, method) (( bool (*) (Collection_1_t2008 *, Object_t *, const MethodInfo*))Collection_1_Remove_m12040_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m12041_gshared (Collection_1_t2008 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m12041(__this, ___index, method) (( void (*) (Collection_1_t2008 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m12041_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m12042_gshared (Collection_1_t2008 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m12042(__this, ___index, method) (( void (*) (Collection_1_t2008 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m12042_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::get_Count()
extern "C" int32_t Collection_1_get_Count_m12043_gshared (Collection_1_t2008 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m12043(__this, method) (( int32_t (*) (Collection_1_t2008 *, const MethodInfo*))Collection_1_get_Count_m12043_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * Collection_1_get_Item_m12044_gshared (Collection_1_t2008 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m12044(__this, ___index, method) (( Object_t * (*) (Collection_1_t2008 *, int32_t, const MethodInfo*))Collection_1_get_Item_m12044_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m12045_gshared (Collection_1_t2008 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_set_Item_m12045(__this, ___index, ___value, method) (( void (*) (Collection_1_t2008 *, int32_t, Object_t *, const MethodInfo*))Collection_1_set_Item_m12045_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m12046_gshared (Collection_1_t2008 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_SetItem_m12046(__this, ___index, ___item, method) (( void (*) (Collection_1_t2008 *, int32_t, Object_t *, const MethodInfo*))Collection_1_SetItem_m12046_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m12047_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m12047(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m12047_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::ConvertItem(System.Object)
extern "C" Object_t * Collection_1_ConvertItem_m12048_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m12048(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m12048_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m12049_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m12049(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m12049_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m12050_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m12050(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m12050_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m12051_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m12051(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m12051_gshared)(__this /* static, unused */, ___list, method)
