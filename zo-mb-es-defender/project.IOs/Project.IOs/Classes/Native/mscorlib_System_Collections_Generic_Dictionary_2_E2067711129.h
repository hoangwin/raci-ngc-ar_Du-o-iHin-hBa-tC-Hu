#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t_2132627410_0;

#include "mscorlib_System_ValueType_290515646.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_642788174.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct  Enumerator_t2067711129_0 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t_2132627410_0 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t_642788174_0  ___current_3;
};
