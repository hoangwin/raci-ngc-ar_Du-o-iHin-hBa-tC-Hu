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

// System.Text.RegularExpressions.ReplacementEvaluator
struct ReplacementEvaluator_t1006;
// System.Text.RegularExpressions.Regex
struct Regex_t256;
// System.String
struct String_t;
// System.Text.RegularExpressions.Match
struct Match_t964;
// System.Text.StringBuilder
struct StringBuilder_t531;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.RegularExpressions.ReplacementEvaluator::.ctor(System.Text.RegularExpressions.Regex,System.String)
extern "C" void ReplacementEvaluator__ctor_m5135 (ReplacementEvaluator_t1006 * __this, Regex_t256 * ___regex, String_t* ___replacement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.ReplacementEvaluator::Evaluate(System.Text.RegularExpressions.Match)
extern "C" String_t* ReplacementEvaluator_Evaluate_m5136 (ReplacementEvaluator_t1006 * __this, Match_t964 * ___match, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::EvaluateAppend(System.Text.RegularExpressions.Match,System.Text.StringBuilder)
extern "C" void ReplacementEvaluator_EvaluateAppend_m5137 (ReplacementEvaluator_t1006 * __this, Match_t964 * ___match, StringBuilder_t531 * ___sb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.ReplacementEvaluator::get_NeedsGroupsOrCaptures()
extern "C" bool ReplacementEvaluator_get_NeedsGroupsOrCaptures_m5138 (ReplacementEvaluator_t1006 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::Ensure(System.Int32)
extern "C" void ReplacementEvaluator_Ensure_m5139 (ReplacementEvaluator_t1006 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::AddFromReplacement(System.Int32,System.Int32)
extern "C" void ReplacementEvaluator_AddFromReplacement_m5140 (ReplacementEvaluator_t1006 * __this, int32_t ___start, int32_t ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::AddInt(System.Int32)
extern "C" void ReplacementEvaluator_AddInt_m5141 (ReplacementEvaluator_t1006 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::Compile()
extern "C" void ReplacementEvaluator_Compile_m5142 (ReplacementEvaluator_t1006 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.ReplacementEvaluator::CompileTerm(System.Int32&)
extern "C" int32_t ReplacementEvaluator_CompileTerm_m5143 (ReplacementEvaluator_t1006 * __this, int32_t* ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
