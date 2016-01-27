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

// System.Text.RegularExpressions.Syntax.CaptureAssertion
struct CaptureAssertion_t1078049174_0;
// System.Text.RegularExpressions.Syntax.Literal
struct Literal_t1574984201_0;
// System.Text.RegularExpressions.Syntax.CapturingGroup
struct CapturingGroup_t2140253312_0;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t568918079_0;
// System.Text.RegularExpressions.Syntax.ExpressionAssertion
struct ExpressionAssertion_t1734614282_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::.ctor(System.Text.RegularExpressions.Syntax.Literal)
extern "C"  void CaptureAssertion__ctor_m446102379_0 (CaptureAssertion_t1078049174_0 * __this, Literal_t1574984201_0 * ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::set_CapturingGroup(System.Text.RegularExpressions.Syntax.CapturingGroup)
extern "C"  void CaptureAssertion_set_CapturingGroup_m1057868585_0 (CaptureAssertion_t1078049174_0 * __this, CapturingGroup_t2140253312_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C"  void CaptureAssertion_Compile_m_1781214281_0 (CaptureAssertion_t1078049174_0 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.CaptureAssertion::IsComplex()
extern "C"  bool CaptureAssertion_IsComplex_m1433259302_0 (CaptureAssertion_t1078049174_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.ExpressionAssertion System.Text.RegularExpressions.Syntax.CaptureAssertion::get_Alternate()
extern "C"  ExpressionAssertion_t1734614282_0 * CaptureAssertion_get_Alternate_m_1565961556_0 (CaptureAssertion_t1078049174_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
