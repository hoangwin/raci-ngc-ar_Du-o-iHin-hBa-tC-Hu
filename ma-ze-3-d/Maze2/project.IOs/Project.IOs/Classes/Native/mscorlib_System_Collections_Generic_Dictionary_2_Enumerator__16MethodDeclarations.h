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

// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t2472;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__16.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_16.h"
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m18248_gshared (Enumerator_t2479 * __this, Dictionary_2_t2472 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m18248(__this, ___dictionary, method) (( void (*) (Enumerator_t2479 *, Dictionary_2_t2472 *, const MethodInfo*))Enumerator__ctor_m18248_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m18249_gshared (Enumerator_t2479 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m18249(__this, method) (( Object_t * (*) (Enumerator_t2479 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m18249_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m18250_gshared (Enumerator_t2479 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m18250(__this, method) (( void (*) (Enumerator_t2479 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m18250_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t280  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18251_gshared (Enumerator_t2479 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18251(__this, method) (( DictionaryEntry_t280  (*) (Enumerator_t2479 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18251_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18252_gshared (Enumerator_t2479 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18252(__this, method) (( Object_t * (*) (Enumerator_t2479 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18252_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18253_gshared (Enumerator_t2479 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18253(__this, method) (( Object_t * (*) (Enumerator_t2479 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18253_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::MoveNext()
extern "C" bool Enumerator_MoveNext_m18254_gshared (Enumerator_t2479 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m18254(__this, method) (( bool (*) (Enumerator_t2479 *, const MethodInfo*))Enumerator_MoveNext_m18254_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Current()
extern "C" KeyValuePair_2_t2474  Enumerator_get_Current_m18255_gshared (Enumerator_t2479 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m18255(__this, method) (( KeyValuePair_2_t2474  (*) (Enumerator_t2479 *, const MethodInfo*))Enumerator_get_Current_m18255_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m18256_gshared (Enumerator_t2479 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m18256(__this, method) (( Object_t * (*) (Enumerator_t2479 *, const MethodInfo*))Enumerator_get_CurrentKey_m18256_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m18257_gshared (Enumerator_t2479 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m18257(__this, method) (( int32_t (*) (Enumerator_t2479 *, const MethodInfo*))Enumerator_get_CurrentValue_m18257_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::Reset()
extern "C" void Enumerator_Reset_m18258_gshared (Enumerator_t2479 * __this, const MethodInfo* method);
#define Enumerator_Reset_m18258(__this, method) (( void (*) (Enumerator_t2479 *, const MethodInfo*))Enumerator_Reset_m18258_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::VerifyState()
extern "C" void Enumerator_VerifyState_m18259_gshared (Enumerator_t2479 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m18259(__this, method) (( void (*) (Enumerator_t2479 *, const MethodInfo*))Enumerator_VerifyState_m18259_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m18260_gshared (Enumerator_t2479 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m18260(__this, method) (( void (*) (Enumerator_t2479 *, const MethodInfo*))Enumerator_VerifyCurrent_m18260_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::Dispose()
extern "C" void Enumerator_Dispose_m18261_gshared (Enumerator_t2479 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m18261(__this, method) (( void (*) (Enumerator_t2479 *, const MethodInfo*))Enumerator_Dispose_m18261_gshared)(__this, method)
