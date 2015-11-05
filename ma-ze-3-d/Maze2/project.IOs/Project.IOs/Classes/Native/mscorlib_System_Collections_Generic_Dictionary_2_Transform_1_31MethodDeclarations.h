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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.DictionaryEntry>
struct Transform_1_t2513;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t45;
// System.AsyncCallback
struct AsyncCallback_t46;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m18694_gshared (Transform_1_t2513 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m18694(__this, ___object, ___method, method) (( void (*) (Transform_1_t2513 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m18694_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t280  Transform_1_Invoke_m18695_gshared (Transform_1_t2513 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Transform_1_Invoke_m18695(__this, ___key, ___value, method) (( DictionaryEntry_t280  (*) (Transform_1_t2513 *, Object_t *, bool, const MethodInfo*))Transform_1_Invoke_m18695_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m18696_gshared (Transform_1_t2513 * __this, Object_t * ___key, bool ___value, AsyncCallback_t46 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m18696(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2513 *, Object_t *, bool, AsyncCallback_t46 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m18696_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t280  Transform_1_EndInvoke_m18697_gshared (Transform_1_t2513 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m18697(__this, ___result, method) (( DictionaryEntry_t280  (*) (Transform_1_t2513 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m18697_gshared)(__this, ___result, method)
