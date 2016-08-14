﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Text.RegularExpressions.Syntax.Assertion
struct Assertion_t1507073188_0;
// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t1204894790_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.RegularExpressions.Syntax.Assertion::.ctor()
extern "C"  void Assertion__ctor_m1169129098_0 (Assertion_t1507073188_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Assertion::get_TrueExpression()
extern "C"  Expression_t1204894790_0 * Assertion_get_TrueExpression_m_713381696_0 (Assertion_t1507073188_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Assertion::set_TrueExpression(System.Text.RegularExpressions.Syntax.Expression)
extern "C"  void Assertion_set_TrueExpression_m_425035545_0 (Assertion_t1507073188_0 * __this, Expression_t1204894790_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Assertion::get_FalseExpression()
extern "C"  Expression_t1204894790_0 * Assertion_get_FalseExpression_m_1216415925_0 (Assertion_t1507073188_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Assertion::set_FalseExpression(System.Text.RegularExpressions.Syntax.Expression)
extern "C"  void Assertion_set_FalseExpression_m1781616372_0 (Assertion_t1507073188_0 * __this, Expression_t1204894790_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Assertion::GetWidth(System.Int32&,System.Int32&)
extern "C"  void Assertion_GetWidth_m1759407754_0 (Assertion_t1507073188_0 * __this, int32_t* ___min, int32_t* ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;