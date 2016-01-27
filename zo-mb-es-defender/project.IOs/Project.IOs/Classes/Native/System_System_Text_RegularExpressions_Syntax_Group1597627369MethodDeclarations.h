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

// System.Text.RegularExpressions.Syntax.Group
struct Group_t1597627369_0;
// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t1204894790_0;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t568918079_0;
// System.Text.RegularExpressions.Syntax.AnchorInfo
struct AnchorInfo_t_1177130051_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.RegularExpressions.Syntax.Group::.ctor()
extern "C"  void Group__ctor_m_1335398021_0 (Group_t1597627369_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Group::AppendExpression(System.Text.RegularExpressions.Syntax.Expression)
extern "C"  void Group_AppendExpression_m_1031082125_0 (Group_t1597627369_0 * __this, Expression_t1204894790_0 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Group::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C"  void Group_Compile_m_580357058_0 (Group_t1597627369_0 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Group::GetWidth(System.Int32&,System.Int32&)
extern "C"  void Group_GetWidth_m_1211847205_0 (Group_t1597627369_0 * __this, int32_t* ___min, int32_t* ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Group::GetAnchorInfo(System.Boolean)
extern "C"  AnchorInfo_t_1177130051_0 * Group_GetAnchorInfo_m2066989791_0 (Group_t1597627369_0 * __this, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
