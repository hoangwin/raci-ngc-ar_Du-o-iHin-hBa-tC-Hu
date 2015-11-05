#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.RegularExpressions.MRUList/Node
struct Node_t984;

#include "mscorlib_System_Object.h"

// System.Text.RegularExpressions.MRUList
struct  MRUList_t983  : public Object_t
{
	// System.Text.RegularExpressions.MRUList/Node System.Text.RegularExpressions.MRUList::head
	Node_t984 * ___head_0;
	// System.Text.RegularExpressions.MRUList/Node System.Text.RegularExpressions.MRUList::tail
	Node_t984 * ___tail_1;
};
