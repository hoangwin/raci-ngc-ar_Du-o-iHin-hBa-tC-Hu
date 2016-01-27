#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Text.RegularExpressions.Syntax.CharacterClass
struct CharacterClass_t_1512498275_0;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t568918079_0;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_Category_2141956919.h"
#include "System_System_Text_RegularExpressions_Interval_959174192.h"

// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::.ctor(System.Boolean,System.Boolean)
extern "C"  void CharacterClass__ctor_m_934725181_0 (CharacterClass_t_1512498275_0 * __this, bool ___negate, bool ___ignore, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::.ctor(System.Text.RegularExpressions.Category,System.Boolean)
extern "C"  void CharacterClass__ctor_m1318163925_0 (CharacterClass_t_1512498275_0 * __this, uint16_t ___cat, bool ___negate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::.cctor()
extern "C"  void CharacterClass__cctor_m516182374_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::AddCategory(System.Text.RegularExpressions.Category,System.Boolean)
extern "C"  void CharacterClass_AddCategory_m_1168357838_0 (CharacterClass_t_1512498275_0 * __this, uint16_t ___cat, bool ___negate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::AddCharacter(System.Char)
extern "C"  void CharacterClass_AddCharacter_m1104626442_0 (CharacterClass_t_1512498275_0 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::AddRange(System.Char,System.Char)
extern "C"  void CharacterClass_AddRange_m_1762990359_0 (CharacterClass_t_1512498275_0 * __this, uint16_t ___lo, uint16_t ___hi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C"  void CharacterClass_Compile_m_736949874_0 (CharacterClass_t_1512498275_0 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::GetWidth(System.Int32&,System.Int32&)
extern "C"  void CharacterClass_GetWidth_m29975543_0 (CharacterClass_t_1512498275_0 * __this, int32_t* ___min, int32_t* ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.CharacterClass::IsComplex()
extern "C"  bool CharacterClass_IsComplex_m_625147695_0 (CharacterClass_t_1512498275_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Text.RegularExpressions.Syntax.CharacterClass::GetIntervalCost(System.Text.RegularExpressions.Interval)
extern "C"  double CharacterClass_GetIntervalCost_m_1588712080_0 (Object_t * __this /* static, unused */, Interval_t_959174192_0  ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
