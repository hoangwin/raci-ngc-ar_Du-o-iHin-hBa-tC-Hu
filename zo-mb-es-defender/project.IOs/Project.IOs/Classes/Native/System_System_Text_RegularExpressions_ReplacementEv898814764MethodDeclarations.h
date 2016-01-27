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
struct ReplacementEvaluator_t898814764_0;
// System.Text.RegularExpressions.Regex
struct Regex_t1583948920_0;
// System.String
struct String_t;
// System.Text.RegularExpressions.Match
struct Match_t_983544506_0;
// System.Text.StringBuilder
struct StringBuilder_t1359700700_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.RegularExpressions.ReplacementEvaluator::.ctor(System.Text.RegularExpressions.Regex,System.String)
extern "C"  void ReplacementEvaluator__ctor_m_548066912_0 (ReplacementEvaluator_t898814764_0 * __this, Regex_t1583948920_0 * ___regex, String_t* ___replacement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.ReplacementEvaluator::Evaluate(System.Text.RegularExpressions.Match)
extern "C"  String_t* ReplacementEvaluator_Evaluate_m197194936_0 (ReplacementEvaluator_t898814764_0 * __this, Match_t_983544506_0 * ___match, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::EvaluateAppend(System.Text.RegularExpressions.Match,System.Text.StringBuilder)
extern "C"  void ReplacementEvaluator_EvaluateAppend_m_129355607_0 (ReplacementEvaluator_t898814764_0 * __this, Match_t_983544506_0 * ___match, StringBuilder_t1359700700_0 * ___sb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.ReplacementEvaluator::get_NeedsGroupsOrCaptures()
extern "C"  bool ReplacementEvaluator_get_NeedsGroupsOrCaptures_m_762908514_0 (ReplacementEvaluator_t898814764_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::Ensure(System.Int32)
extern "C"  void ReplacementEvaluator_Ensure_m2025598273_0 (ReplacementEvaluator_t898814764_0 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::AddFromReplacement(System.Int32,System.Int32)
extern "C"  void ReplacementEvaluator_AddFromReplacement_m_403390881_0 (ReplacementEvaluator_t898814764_0 * __this, int32_t ___start, int32_t ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::AddInt(System.Int32)
extern "C"  void ReplacementEvaluator_AddInt_m_2145136191_0 (ReplacementEvaluator_t898814764_0 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::Compile()
extern "C"  void ReplacementEvaluator_Compile_m1875719451_0 (ReplacementEvaluator_t898814764_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.ReplacementEvaluator::CompileTerm(System.Int32&)
extern "C"  int32_t ReplacementEvaluator_CompileTerm_m1895109616_0 (ReplacementEvaluator_t898814764_0 * __this, int32_t* ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
