#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnityEngine.GameObject>>
struct Dictionary_2_t39;

#include "mscorlib_System_ValueType.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Collections.Generic.List`1<UnityEngine.GameObject>>
struct  Enumerator_t2038 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Collections.Generic.List`1<UnityEngine.GameObject>>::dictionary
	Dictionary_2_t39 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Collections.Generic.List`1<UnityEngine.GameObject>>::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Collections.Generic.List`1<UnityEngine.GameObject>>::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Collections.Generic.List`1<UnityEngine.GameObject>>::current
	KeyValuePair_2_t2036  ___current_3;
};
