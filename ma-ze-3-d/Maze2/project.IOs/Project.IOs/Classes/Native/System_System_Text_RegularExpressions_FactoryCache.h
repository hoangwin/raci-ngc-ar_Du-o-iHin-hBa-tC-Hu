#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Hashtable
struct Hashtable_t175;
// System.Text.RegularExpressions.MRUList
struct MRUList_t983;

#include "mscorlib_System_Object.h"

// System.Text.RegularExpressions.FactoryCache
struct  FactoryCache_t975  : public Object_t
{
	// System.Int32 System.Text.RegularExpressions.FactoryCache::capacity
	int32_t ___capacity_0;
	// System.Collections.Hashtable System.Text.RegularExpressions.FactoryCache::factories
	Hashtable_t175 * ___factories_1;
	// System.Text.RegularExpressions.MRUList System.Text.RegularExpressions.FactoryCache::mru_list
	MRUList_t983 * ___mru_list_2;
};
