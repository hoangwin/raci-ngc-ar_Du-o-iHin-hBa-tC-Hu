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

// System.Collections.Generic.List`1<System.Object>
struct List_1_t573;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2291;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t239;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t2645;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t597;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t1975;
// System.Object[]
struct ObjectU5BU5D_t242;
// System.Predicate`1<System.Object>
struct Predicate_1_t2009;
// System.Comparison`1<System.Object>
struct Comparison_1_t2014;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_3.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m11883_gshared (List_1_t573 * __this, const MethodInfo* method);
#define List_1__ctor_m11883(__this, method) (( void (*) (List_1_t573 *, const MethodInfo*))List_1__ctor_m11883_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m11885_gshared (List_1_t573 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m11885(__this, ___capacity, method) (( void (*) (List_1_t573 *, int32_t, const MethodInfo*))List_1__ctor_m11885_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m11887_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m11887(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m11887_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11889_gshared (List_1_t573 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11889(__this, method) (( Object_t* (*) (List_1_t573 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11889_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m11891_gshared (List_1_t573 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m11891(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t573 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m11891_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m11893_gshared (List_1_t573 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m11893(__this, method) (( Object_t * (*) (List_1_t573 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m11893_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m11895_gshared (List_1_t573 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m11895(__this, ___item, method) (( int32_t (*) (List_1_t573 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m11895_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m11897_gshared (List_1_t573 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m11897(__this, ___item, method) (( bool (*) (List_1_t573 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m11897_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m11899_gshared (List_1_t573 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m11899(__this, ___item, method) (( int32_t (*) (List_1_t573 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m11899_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m11901_gshared (List_1_t573 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m11901(__this, ___index, ___item, method) (( void (*) (List_1_t573 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m11901_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m11903_gshared (List_1_t573 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m11903(__this, ___item, method) (( void (*) (List_1_t573 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m11903_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11905_gshared (List_1_t573 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11905(__this, method) (( bool (*) (List_1_t573 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11905_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m11907_gshared (List_1_t573 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m11907(__this, method) (( bool (*) (List_1_t573 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m11907_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m11909_gshared (List_1_t573 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m11909(__this, method) (( Object_t * (*) (List_1_t573 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m11909_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m11911_gshared (List_1_t573 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m11911(__this, method) (( bool (*) (List_1_t573 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m11911_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m11913_gshared (List_1_t573 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m11913(__this, method) (( bool (*) (List_1_t573 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m11913_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m11915_gshared (List_1_t573 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m11915(__this, ___index, method) (( Object_t * (*) (List_1_t573 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m11915_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m11917_gshared (List_1_t573 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m11917(__this, ___index, ___value, method) (( void (*) (List_1_t573 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m11917_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m11919_gshared (List_1_t573 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m11919(__this, ___item, method) (( void (*) (List_1_t573 *, Object_t *, const MethodInfo*))List_1_Add_m11919_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m11921_gshared (List_1_t573 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m11921(__this, ___newCount, method) (( void (*) (List_1_t573 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m11921_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m11923_gshared (List_1_t573 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m11923(__this, ___collection, method) (( void (*) (List_1_t573 *, Object_t*, const MethodInfo*))List_1_AddCollection_m11923_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m11925_gshared (List_1_t573 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m11925(__this, ___enumerable, method) (( void (*) (List_1_t573 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m11925_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m11927_gshared (List_1_t573 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m11927(__this, ___collection, method) (( void (*) (List_1_t573 *, Object_t*, const MethodInfo*))List_1_AddRange_m11927_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1975 * List_1_AsReadOnly_m11929_gshared (List_1_t573 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m11929(__this, method) (( ReadOnlyCollection_1_t1975 * (*) (List_1_t573 *, const MethodInfo*))List_1_AsReadOnly_m11929_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m11931_gshared (List_1_t573 * __this, const MethodInfo* method);
#define List_1_Clear_m11931(__this, method) (( void (*) (List_1_t573 *, const MethodInfo*))List_1_Clear_m11931_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m11933_gshared (List_1_t573 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m11933(__this, ___item, method) (( bool (*) (List_1_t573 *, Object_t *, const MethodInfo*))List_1_Contains_m11933_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m11935_gshared (List_1_t573 * __this, ObjectU5BU5D_t242* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m11935(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t573 *, ObjectU5BU5D_t242*, int32_t, const MethodInfo*))List_1_CopyTo_m11935_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m11937_gshared (List_1_t573 * __this, Predicate_1_t2009 * ___match, const MethodInfo* method);
#define List_1_Find_m11937(__this, ___match, method) (( Object_t * (*) (List_1_t573 *, Predicate_1_t2009 *, const MethodInfo*))List_1_Find_m11937_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m11939_gshared (Object_t * __this /* static, unused */, Predicate_1_t2009 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m11939(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2009 *, const MethodInfo*))List_1_CheckMatch_m11939_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m11941_gshared (List_1_t573 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2009 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m11941(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t573 *, int32_t, int32_t, Predicate_1_t2009 *, const MethodInfo*))List_1_GetIndex_m11941_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t2006  List_1_GetEnumerator_m11943_gshared (List_1_t573 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m11943(__this, method) (( Enumerator_t2006  (*) (List_1_t573 *, const MethodInfo*))List_1_GetEnumerator_m11943_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m11945_gshared (List_1_t573 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m11945(__this, ___item, method) (( int32_t (*) (List_1_t573 *, Object_t *, const MethodInfo*))List_1_IndexOf_m11945_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m11947_gshared (List_1_t573 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m11947(__this, ___start, ___delta, method) (( void (*) (List_1_t573 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m11947_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m11949_gshared (List_1_t573 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m11949(__this, ___index, method) (( void (*) (List_1_t573 *, int32_t, const MethodInfo*))List_1_CheckIndex_m11949_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m11951_gshared (List_1_t573 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m11951(__this, ___index, ___item, method) (( void (*) (List_1_t573 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m11951_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m11953_gshared (List_1_t573 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m11953(__this, ___collection, method) (( void (*) (List_1_t573 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m11953_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m11955_gshared (List_1_t573 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m11955(__this, ___item, method) (( bool (*) (List_1_t573 *, Object_t *, const MethodInfo*))List_1_Remove_m11955_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m11957_gshared (List_1_t573 * __this, Predicate_1_t2009 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m11957(__this, ___match, method) (( int32_t (*) (List_1_t573 *, Predicate_1_t2009 *, const MethodInfo*))List_1_RemoveAll_m11957_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m11959_gshared (List_1_t573 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m11959(__this, ___index, method) (( void (*) (List_1_t573 *, int32_t, const MethodInfo*))List_1_RemoveAt_m11959_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m11961_gshared (List_1_t573 * __this, const MethodInfo* method);
#define List_1_Reverse_m11961(__this, method) (( void (*) (List_1_t573 *, const MethodInfo*))List_1_Reverse_m11961_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m11963_gshared (List_1_t573 * __this, const MethodInfo* method);
#define List_1_Sort_m11963(__this, method) (( void (*) (List_1_t573 *, const MethodInfo*))List_1_Sort_m11963_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m11965_gshared (List_1_t573 * __this, Comparison_1_t2014 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m11965(__this, ___comparison, method) (( void (*) (List_1_t573 *, Comparison_1_t2014 *, const MethodInfo*))List_1_Sort_m11965_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t242* List_1_ToArray_m11966_gshared (List_1_t573 * __this, const MethodInfo* method);
#define List_1_ToArray_m11966(__this, method) (( ObjectU5BU5D_t242* (*) (List_1_t573 *, const MethodInfo*))List_1_ToArray_m11966_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m11968_gshared (List_1_t573 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m11968(__this, method) (( void (*) (List_1_t573 *, const MethodInfo*))List_1_TrimExcess_m11968_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m11970_gshared (List_1_t573 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m11970(__this, method) (( int32_t (*) (List_1_t573 *, const MethodInfo*))List_1_get_Capacity_m11970_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m11972_gshared (List_1_t573 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m11972(__this, ___value, method) (( void (*) (List_1_t573 *, int32_t, const MethodInfo*))List_1_set_Capacity_m11972_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m11974_gshared (List_1_t573 * __this, const MethodInfo* method);
#define List_1_get_Count_m11974(__this, method) (( int32_t (*) (List_1_t573 *, const MethodInfo*))List_1_get_Count_m11974_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m11976_gshared (List_1_t573 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m11976(__this, ___index, method) (( Object_t * (*) (List_1_t573 *, int32_t, const MethodInfo*))List_1_get_Item_m11976_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m11978_gshared (List_1_t573 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m11978(__this, ___index, ___value, method) (( void (*) (List_1_t573 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m11978_gshared)(__this, ___index, ___value, method)
