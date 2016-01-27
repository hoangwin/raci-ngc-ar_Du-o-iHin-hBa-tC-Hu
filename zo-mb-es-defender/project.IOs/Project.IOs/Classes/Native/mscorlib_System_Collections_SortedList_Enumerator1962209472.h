#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.SortedList
struct SortedList_t2145693711_0;
// System.Object
struct Object_t;
// System.String
struct String_t;

#include "mscorlib_System_Object_1786876978.h"
#include "mscorlib_System_Collections_SortedList_Enumerator_1241807897.h"

// System.Collections.SortedList/Enumerator
struct  Enumerator_t1962209472_0  : public Object_t
{
	// System.Collections.SortedList System.Collections.SortedList/Enumerator::host
	SortedList_t2145693711_0 * ___host_0;
	// System.Int32 System.Collections.SortedList/Enumerator::stamp
	int32_t ___stamp_1;
	// System.Int32 System.Collections.SortedList/Enumerator::pos
	int32_t ___pos_2;
	// System.Int32 System.Collections.SortedList/Enumerator::size
	int32_t ___size_3;
	// System.Collections.SortedList/EnumeratorMode System.Collections.SortedList/Enumerator::mode
	int32_t ___mode_4;
	// System.Object System.Collections.SortedList/Enumerator::currentKey
	Object_t * ___currentKey_5;
	// System.Object System.Collections.SortedList/Enumerator::currentValue
	Object_t * ___currentValue_6;
	// System.Boolean System.Collections.SortedList/Enumerator::invalid
	bool ___invalid_7;
};
struct Enumerator_t1962209472_0_StaticFields{
	// System.String System.Collections.SortedList/Enumerator::xstr
	String_t* ___xstr_8;
};
