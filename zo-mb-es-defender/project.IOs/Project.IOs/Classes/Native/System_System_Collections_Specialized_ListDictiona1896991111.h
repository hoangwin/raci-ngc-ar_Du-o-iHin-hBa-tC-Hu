#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Specialized.ListDictionary/DictionaryNode
struct DictionaryNode_t_602235648_0;
// System.Collections.IComparer
struct IComparer_t_1964796564_0;

#include "mscorlib_System_Object_1786876978.h"

// System.Collections.Specialized.ListDictionary
struct  ListDictionary_t1896991111_0  : public Object_t
{
	// System.Int32 System.Collections.Specialized.ListDictionary::count
	int32_t ___count_0;
	// System.Int32 System.Collections.Specialized.ListDictionary::version
	int32_t ___version_1;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary::head
	DictionaryNode_t_602235648_0 * ___head_2;
	// System.Collections.IComparer System.Collections.Specialized.ListDictionary::comparer
	Object_t * ___comparer_3;
};
