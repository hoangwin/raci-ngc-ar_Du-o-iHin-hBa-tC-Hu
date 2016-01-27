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

// System.Text.RegularExpressions.Syntax.Parser
struct Parser_t519096345_0;
// System.String
struct String_t;
// System.Text.RegularExpressions.Syntax.RegularExpression
struct RegularExpression_t_2050089030_0;
// System.Collections.Hashtable
struct Hashtable_t630665860_0;
// System.Text.RegularExpressions.Syntax.Group
struct Group_t1597627369_0;
// System.Text.RegularExpressions.Syntax.Assertion
struct Assertion_t1507073188_0;
// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t1204894790_0;
// System.Text.RegularExpressions.Syntax.ExpressionAssertion
struct ExpressionAssertion_t1734614282_0;
// System.Collections.ArrayList
struct ArrayList_t2138871437_0;
// System.ArgumentException
struct ArgumentException_t1622003085_0;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_RegexOptions1402506658.h"
#include "System_System_Text_RegularExpressions_Category_2141956919.h"

// System.Void System.Text.RegularExpressions.Syntax.Parser::.ctor()
extern "C"  void Parser__ctor_m1719025083_0 (Parser_t519096345_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseDecimal(System.String,System.Int32&)
extern "C"  int32_t Parser_ParseDecimal_m_167556530_0 (Object_t * __this /* static, unused */, String_t* ___str, int32_t* ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseOctal(System.String,System.Int32&)
extern "C"  int32_t Parser_ParseOctal_m27031258_0 (Object_t * __this /* static, unused */, String_t* ___str, int32_t* ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseHex(System.String,System.Int32&,System.Int32)
extern "C"  int32_t Parser_ParseHex_m_196693075_0 (Object_t * __this /* static, unused */, String_t* ___str, int32_t* ___ptr, int32_t ___digits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseNumber(System.String,System.Int32&,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t Parser_ParseNumber_m1329136463_0 (Object_t * __this /* static, unused */, String_t* ___str, int32_t* ___ptr, int32_t ___b, int32_t ___min, int32_t ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Syntax.Parser::ParseName(System.String,System.Int32&)
extern "C"  String_t* Parser_ParseName_m_290049955_0 (Object_t * __this /* static, unused */, String_t* ___str, int32_t* ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.RegularExpression System.Text.RegularExpressions.Syntax.Parser::ParseRegularExpression(System.String,System.Text.RegularExpressions.RegexOptions)
extern "C"  RegularExpression_t_2050089030_0 * Parser_ParseRegularExpression_m_1904389983_0 (Parser_t519096345_0 * __this, String_t* ___pattern, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::GetMapping(System.Collections.Hashtable)
extern "C"  int32_t Parser_GetMapping_m_1415900525_0 (Parser_t519096345_0 * __this, Hashtable_t630665860_0 * ___mapping, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Parser::ParseGroup(System.Text.RegularExpressions.Syntax.Group,System.Text.RegularExpressions.RegexOptions,System.Text.RegularExpressions.Syntax.Assertion)
extern "C"  void Parser_ParseGroup_m1951444306_0 (Parser_t519096345_0 * __this, Group_t1597627369_0 * ___group, int32_t ___options, Assertion_t1507073188_0 * ___assertion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Parser::ParseGroupingConstruct(System.Text.RegularExpressions.RegexOptions&)
extern "C"  Expression_t1204894790_0 * Parser_ParseGroupingConstruct_m_1103304519_0 (Parser_t519096345_0 * __this, int32_t* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::ParseAssertionType(System.Text.RegularExpressions.Syntax.ExpressionAssertion)
extern "C"  bool Parser_ParseAssertionType_m_978297506_0 (Parser_t519096345_0 * __this, ExpressionAssertion_t1734614282_0 * ___assertion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Parser::ParseOptions(System.Text.RegularExpressions.RegexOptions&,System.Boolean)
extern "C"  void Parser_ParseOptions_m_1182902725_0 (Parser_t519096345_0 * __this, int32_t* ___options, bool ___negate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Parser::ParseCharacterClass(System.Text.RegularExpressions.RegexOptions)
extern "C"  Expression_t1204894790_0 * Parser_ParseCharacterClass_m746361886_0 (Parser_t519096345_0 * __this, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::ParseRepetitionBounds(System.Int32&,System.Int32&,System.Text.RegularExpressions.RegexOptions)
extern "C"  bool Parser_ParseRepetitionBounds_m1147768566_0 (Parser_t519096345_0 * __this, int32_t* ___min, int32_t* ___max, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Category System.Text.RegularExpressions.Syntax.Parser::ParseUnicodeCategory()
extern "C"  uint16_t Parser_ParseUnicodeCategory_m1589482983_0 (Parser_t519096345_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Parser::ParseSpecial(System.Text.RegularExpressions.RegexOptions)
extern "C"  Expression_t1204894790_0 * Parser_ParseSpecial_m294145572_0 (Parser_t519096345_0 * __this, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseEscape()
extern "C"  int32_t Parser_ParseEscape_m_1778020479_0 (Parser_t519096345_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Syntax.Parser::ParseName()
extern "C"  String_t* Parser_ParseName_m_533986390_0 (Parser_t519096345_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsNameChar(System.Char)
extern "C"  bool Parser_IsNameChar_m86667109_0 (Object_t * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseNumber(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t Parser_ParseNumber_m_613906096_0 (Parser_t519096345_0 * __this, int32_t ___b, int32_t ___min, int32_t ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseDigit(System.Char,System.Int32,System.Int32)
extern "C"  int32_t Parser_ParseDigit_m214846592_0 (Object_t * __this /* static, unused */, uint16_t ___c, int32_t ___b, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Parser::ConsumeWhitespace(System.Boolean)
extern "C"  void Parser_ConsumeWhitespace_m_516909685_0 (Parser_t519096345_0 * __this, bool ___ignore, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Parser::ResolveReferences()
extern "C"  void Parser_ResolveReferences_m_1088914257_0 (Parser_t519096345_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Parser::HandleExplicitNumericGroups(System.Collections.ArrayList)
extern "C"  void Parser_HandleExplicitNumericGroups_m_1788318693_0 (Parser_t519096345_0 * __this, ArrayList_t2138871437_0 * ___explicit_numeric_groups, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsIgnoreCase(System.Text.RegularExpressions.RegexOptions)
extern "C"  bool Parser_IsIgnoreCase_m_139368299_0 (Object_t * __this /* static, unused */, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsMultiline(System.Text.RegularExpressions.RegexOptions)
extern "C"  bool Parser_IsMultiline_m_489533284_0 (Object_t * __this /* static, unused */, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsExplicitCapture(System.Text.RegularExpressions.RegexOptions)
extern "C"  bool Parser_IsExplicitCapture_m_73769781_0 (Object_t * __this /* static, unused */, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsSingleline(System.Text.RegularExpressions.RegexOptions)
extern "C"  bool Parser_IsSingleline_m_152440007_0 (Object_t * __this /* static, unused */, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsIgnorePatternWhitespace(System.Text.RegularExpressions.RegexOptions)
extern "C"  bool Parser_IsIgnorePatternWhitespace_m_1739176470_0 (Object_t * __this /* static, unused */, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsECMAScript(System.Text.RegularExpressions.RegexOptions)
extern "C"  bool Parser_IsECMAScript_m926812226_0 (Object_t * __this /* static, unused */, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ArgumentException System.Text.RegularExpressions.Syntax.Parser::NewParseException(System.String)
extern "C"  ArgumentException_t1622003085_0 * Parser_NewParseException_m_385147997_0 (Parser_t519096345_0 * __this, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
