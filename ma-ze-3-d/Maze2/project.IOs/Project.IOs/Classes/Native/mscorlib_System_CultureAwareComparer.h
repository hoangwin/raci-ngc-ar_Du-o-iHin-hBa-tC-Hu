#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Globalization.CompareInfo
struct CompareInfo_t1238;

#include "mscorlib_System_StringComparer.h"

// System.CultureAwareComparer
struct  CultureAwareComparer_t1865  : public StringComparer_t846
{
	// System.Boolean System.CultureAwareComparer::_ignoreCase
	bool ____ignoreCase_4;
	// System.Globalization.CompareInfo System.CultureAwareComparer::_compareInfo
	CompareInfo_t1238 * ____compareInfo_5;
};
