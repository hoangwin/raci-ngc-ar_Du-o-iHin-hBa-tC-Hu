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

// System.Predicate`1<UnityEngine.Vector4>
struct Predicate_1_t2357;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t45;
// System.AsyncCallback
struct AsyncCallback_t46;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector4.h"

// System.Void System.Predicate`1<UnityEngine.Vector4>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m16789_gshared (Predicate_1_t2357 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m16789(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2357 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m16789_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector4>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m16790_gshared (Predicate_1_t2357 * __this, Vector4_t493  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m16790(__this, ___obj, method) (( bool (*) (Predicate_1_t2357 *, Vector4_t493 , const MethodInfo*))Predicate_1_Invoke_m16790_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Vector4>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m16791_gshared (Predicate_1_t2357 * __this, Vector4_t493  ___obj, AsyncCallback_t46 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m16791(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2357 *, Vector4_t493 , AsyncCallback_t46 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m16791_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector4>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m16792_gshared (Predicate_1_t2357 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m16792(__this, ___result, method) (( bool (*) (Predicate_1_t2357 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m16792_gshared)(__this, ___result, method)
