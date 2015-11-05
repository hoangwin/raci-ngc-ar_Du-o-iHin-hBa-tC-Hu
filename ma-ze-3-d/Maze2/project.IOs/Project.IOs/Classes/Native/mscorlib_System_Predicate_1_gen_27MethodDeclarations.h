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

// System.Predicate`1<UnityEngine.Vector3>
struct Predicate_1_t2316;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t45;
// System.AsyncCallback
struct AsyncCallback_t46;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void System.Predicate`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m16211_gshared (Predicate_1_t2316 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m16211(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2316 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m16211_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector3>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m16212_gshared (Predicate_1_t2316 * __this, Vector3_t17  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m16212(__this, ___obj, method) (( bool (*) (Predicate_1_t2316 *, Vector3_t17 , const MethodInfo*))Predicate_1_Invoke_m16212_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Vector3>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m16213_gshared (Predicate_1_t2316 * __this, Vector3_t17  ___obj, AsyncCallback_t46 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m16213(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2316 *, Vector3_t17 , AsyncCallback_t46 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m16213_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector3>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m16214_gshared (Predicate_1_t2316 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m16214(__this, ___result, method) (( bool (*) (Predicate_1_t2316 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m16214_gshared)(__this, ___result, method)
