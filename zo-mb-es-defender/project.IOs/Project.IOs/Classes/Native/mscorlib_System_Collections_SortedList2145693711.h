#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.SortedList/Slot[]
struct SlotU5BU5D_t_1199206922_0;
// System.Collections.IComparer
struct IComparer_t_1964796564_0;

#include "mscorlib_System_Object_1786876978.h"

// System.Collections.SortedList
struct  SortedList_t2145693711_0  : public Object_t
{
	// System.Int32 System.Collections.SortedList::inUse
	int32_t ___inUse_1;
	// System.Int32 System.Collections.SortedList::modificationCount
	int32_t ___modificationCount_2;
	// System.Collections.SortedList/Slot[] System.Collections.SortedList::table
	SlotU5BU5D_t_1199206922_0* ___table_3;
	// System.Collections.IComparer System.Collections.SortedList::comparer
	Object_t * ___comparer_4;
	// System.Int32 System.Collections.SortedList::defaultCapacity
	int32_t ___defaultCapacity_5;
};
struct SortedList_t2145693711_0_StaticFields{
	// System.Int32 System.Collections.SortedList::INITIAL_SIZE
	int32_t ___INITIAL_SIZE_0;
};
