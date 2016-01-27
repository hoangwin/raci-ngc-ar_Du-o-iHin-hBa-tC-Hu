#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Globalization.CompareInfo
struct CompareInfo_t589814375_0;

#include "mscorlib_System_StringComparer_1941525187.h"

// System.CultureAwareComparer
struct  CultureAwareComparer_t_5101682_0  : public StringComparer_t_1941525187_0
{
	// System.Boolean System.CultureAwareComparer::_ignoreCase
	bool ____ignoreCase_4;
	// System.Globalization.CompareInfo System.CultureAwareComparer::_compareInfo
	CompareInfo_t589814375_0 * ____compareInfo_5;
};
