#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.BitArray
struct BitArray_t1864860960_0;
// System.Text.RegularExpressions.IntervalCollection
struct IntervalCollection_t_1856662896_0;

#include "System_System_Text_RegularExpressions_Syntax_Expre1204894790.h"
#include "System_System_Text_RegularExpressions_Interval_959174192.h"

// System.Text.RegularExpressions.Syntax.CharacterClass
struct  CharacterClass_t_1512498275_0  : public Expression_t1204894790_0
{
	// System.Boolean System.Text.RegularExpressions.Syntax.CharacterClass::negate
	bool ___negate_1;
	// System.Boolean System.Text.RegularExpressions.Syntax.CharacterClass::ignore
	bool ___ignore_2;
	// System.Collections.BitArray System.Text.RegularExpressions.Syntax.CharacterClass::pos_cats
	BitArray_t1864860960_0 * ___pos_cats_3;
	// System.Collections.BitArray System.Text.RegularExpressions.Syntax.CharacterClass::neg_cats
	BitArray_t1864860960_0 * ___neg_cats_4;
	// System.Text.RegularExpressions.IntervalCollection System.Text.RegularExpressions.Syntax.CharacterClass::intervals
	IntervalCollection_t_1856662896_0 * ___intervals_5;
};
struct CharacterClass_t_1512498275_0_StaticFields{
	// System.Text.RegularExpressions.Interval System.Text.RegularExpressions.Syntax.CharacterClass::upper_case_characters
	Interval_t_959174192_0  ___upper_case_characters_0;
};
