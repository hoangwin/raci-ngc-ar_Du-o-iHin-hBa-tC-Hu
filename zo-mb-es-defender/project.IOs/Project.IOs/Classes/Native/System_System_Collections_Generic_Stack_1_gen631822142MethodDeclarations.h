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

// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t631822142_0;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t_1135881078_0;
// System.Collections.IEnumerator
struct IEnumerator_t435631375_0;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Collections_Generic_Stack_1_Enumera_1355166805.h"

// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
extern "C"  void Stack_1__ctor_m1041657164_0_gshared (Stack_1_t631822142_0 * __this, const MethodInfo* method);
#define Stack_1__ctor_m1041657164_0(__this, method) ((  void (*) (Stack_1_t631822142_0 *, const MethodInfo*))Stack_1__ctor_m1041657164_0_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool Stack_1_System_Collections_ICollection_get_IsSynchronized_m2076161108_0_gshared (Stack_1_t631822142_0 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_IsSynchronized_m2076161108_0(__this, method) ((  bool (*) (Stack_1_t631822142_0 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_IsSynchronized_m2076161108_0_gshared)(__this, method)
// System.Object System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Object_t * Stack_1_System_Collections_ICollection_get_SyncRoot_m_1143337942_0_gshared (Stack_1_t631822142_0 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_SyncRoot_m_1143337942_0(__this, method) ((  Object_t * (*) (Stack_1_t631822142_0 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_SyncRoot_m_1143337942_0_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Stack_1_System_Collections_ICollection_CopyTo_m2104527616_0_gshared (Stack_1_t631822142_0 * __this, Array_t * ___dest, int32_t ___idx, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_CopyTo_m2104527616_0(__this, ___dest, ___idx, method) ((  void (*) (Stack_1_t631822142_0 *, Array_t *, int32_t, const MethodInfo*))Stack_1_System_Collections_ICollection_CopyTo_m2104527616_0_gshared)(__this, ___dest, ___idx, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Stack`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C"  Object_t* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m680979874_0_gshared (Stack_1_t631822142_0 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m680979874_0(__this, method) ((  Object_t* (*) (Stack_1_t631822142_0 *, const MethodInfo*))Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m680979874_0_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Stack`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * Stack_1_System_Collections_IEnumerable_GetEnumerator_m_419774821_0_gshared (Stack_1_t631822142_0 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_IEnumerable_GetEnumerator_m_419774821_0(__this, method) ((  Object_t * (*) (Stack_1_t631822142_0 *, const MethodInfo*))Stack_1_System_Collections_IEnumerable_GetEnumerator_m_419774821_0_gshared)(__this, method)
// T System.Collections.Generic.Stack`1<System.Object>::Peek()
extern "C"  Object_t * Stack_1_Peek_m1548778538_0_gshared (Stack_1_t631822142_0 * __this, const MethodInfo* method);
#define Stack_1_Peek_m1548778538_0(__this, method) ((  Object_t * (*) (Stack_1_t631822142_0 *, const MethodInfo*))Stack_1_Peek_m1548778538_0_gshared)(__this, method)
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
extern "C"  Object_t * Stack_1_Pop_m535185982_0_gshared (Stack_1_t631822142_0 * __this, const MethodInfo* method);
#define Stack_1_Pop_m535185982_0(__this, method) ((  Object_t * (*) (Stack_1_t631822142_0 *, const MethodInfo*))Stack_1_Pop_m535185982_0_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
extern "C"  void Stack_1_Push_m2122392216_0_gshared (Stack_1_t631822142_0 * __this, Object_t * ___t, const MethodInfo* method);
#define Stack_1_Push_m2122392216_0(__this, ___t, method) ((  void (*) (Stack_1_t631822142_0 *, Object_t *, const MethodInfo*))Stack_1_Push_m2122392216_0_gshared)(__this, ___t, method)
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
extern "C"  int32_t Stack_1_get_Count_m_193200052_0_gshared (Stack_1_t631822142_0 * __this, const MethodInfo* method);
#define Stack_1_get_Count_m_193200052_0(__this, method) ((  int32_t (*) (Stack_1_t631822142_0 *, const MethodInfo*))Stack_1_get_Count_m_193200052_0_gshared)(__this, method)
// System.Collections.Generic.Stack`1/Enumerator<T> System.Collections.Generic.Stack`1<System.Object>::GetEnumerator()
extern "C"  Enumerator_t_1355166805_0  Stack_1_GetEnumerator_m287848754_0_gshared (Stack_1_t631822142_0 * __this, const MethodInfo* method);
#define Stack_1_GetEnumerator_m287848754_0(__this, method) ((  Enumerator_t_1355166805_0  (*) (Stack_1_t631822142_0 *, const MethodInfo*))Stack_1_GetEnumerator_m287848754_0_gshared)(__this, method)
