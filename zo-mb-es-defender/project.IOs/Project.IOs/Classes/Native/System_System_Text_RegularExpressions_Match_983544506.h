#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.RegularExpressions.Regex
struct Regex_t1583948920_0;
// System.Text.RegularExpressions.IMachine
struct IMachine_t256775685_0;
// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_t_859638128_0;
// System.Text.RegularExpressions.Match
struct Match_t_983544506_0;

#include "System_System_Text_RegularExpressions_Group_1285815904.h"

// System.Text.RegularExpressions.Match
struct  Match_t_983544506_0  : public Group_t_1285815904_0
{
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.Match::regex
	Regex_t1583948920_0 * ___regex_6;
	// System.Text.RegularExpressions.IMachine System.Text.RegularExpressions.Match::machine
	Object_t * ___machine_7;
	// System.Int32 System.Text.RegularExpressions.Match::text_length
	int32_t ___text_length_8;
	// System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::groups
	GroupCollection_t_859638128_0 * ___groups_9;
};
struct Match_t_983544506_0_StaticFields{
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::empty
	Match_t_983544506_0 * ___empty_10;
};
