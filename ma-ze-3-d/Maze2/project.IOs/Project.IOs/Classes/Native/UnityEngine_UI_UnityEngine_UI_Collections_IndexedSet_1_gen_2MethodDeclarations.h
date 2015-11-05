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

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t2165;
// System.Collections.IEnumerator
struct IEnumerator_t239;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2291;
// System.Object[]
struct ObjectU5BU5D_t242;
// System.Predicate`1<System.Object>
struct Predicate_1_t2009;
// System.Comparison`1<System.Object>
struct Comparison_1_t2014;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m13990_gshared (IndexedSet_1_t2165 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m13990(__this, method) (( void (*) (IndexedSet_1_t2165 *, const MethodInfo*))IndexedSet_1__ctor_m13990_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m13992_gshared (IndexedSet_1_t2165 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m13992(__this, method) (( Object_t * (*) (IndexedSet_1_t2165 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m13992_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m13994_gshared (IndexedSet_1_t2165 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m13994(__this, ___item, method) (( void (*) (IndexedSet_1_t2165 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m13994_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m13996_gshared (IndexedSet_1_t2165 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m13996(__this, ___item, method) (( bool (*) (IndexedSet_1_t2165 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m13996_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m13998_gshared (IndexedSet_1_t2165 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m13998(__this, method) (( Object_t* (*) (IndexedSet_1_t2165 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m13998_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m14000_gshared (IndexedSet_1_t2165 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m14000(__this, method) (( void (*) (IndexedSet_1_t2165 *, const MethodInfo*))IndexedSet_1_Clear_m14000_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m14002_gshared (IndexedSet_1_t2165 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m14002(__this, ___item, method) (( bool (*) (IndexedSet_1_t2165 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m14002_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m14004_gshared (IndexedSet_1_t2165 * __this, ObjectU5BU5D_t242* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m14004(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t2165 *, ObjectU5BU5D_t242*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m14004_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m14006_gshared (IndexedSet_1_t2165 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m14006(__this, method) (( int32_t (*) (IndexedSet_1_t2165 *, const MethodInfo*))IndexedSet_1_get_Count_m14006_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m14008_gshared (IndexedSet_1_t2165 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m14008(__this, method) (( bool (*) (IndexedSet_1_t2165 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m14008_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m14010_gshared (IndexedSet_1_t2165 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m14010(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t2165 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m14010_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m14012_gshared (IndexedSet_1_t2165 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m14012(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t2165 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m14012_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m14014_gshared (IndexedSet_1_t2165 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m14014(__this, ___index, method) (( void (*) (IndexedSet_1_t2165 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m14014_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m14016_gshared (IndexedSet_1_t2165 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m14016(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t2165 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m14016_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m14018_gshared (IndexedSet_1_t2165 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m14018(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t2165 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m14018_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m14020_gshared (IndexedSet_1_t2165 * __this, Predicate_1_t2009 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m14020(__this, ___match, method) (( void (*) (IndexedSet_1_t2165 *, Predicate_1_t2009 *, const MethodInfo*))IndexedSet_1_RemoveAll_m14020_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m14021_gshared (IndexedSet_1_t2165 * __this, Comparison_1_t2014 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m14021(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t2165 *, Comparison_1_t2014 *, const MethodInfo*))IndexedSet_1_Sort_m14021_gshared)(__this, ___sortLayoutFunction, method)
