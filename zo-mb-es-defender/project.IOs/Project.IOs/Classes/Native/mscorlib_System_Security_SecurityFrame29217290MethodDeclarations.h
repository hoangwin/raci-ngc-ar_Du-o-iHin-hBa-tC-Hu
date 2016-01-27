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

// System.Security.RuntimeSecurityFrame
struct RuntimeSecurityFrame_t_309120876_0;
// System.Array
struct Array_t;
// System.Reflection.Assembly
struct Assembly_t_808956426_0;
// System.AppDomain
struct AppDomain_t_1033567408_0;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t2138871437_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_SecurityFrame29217290.h"

// System.Void System.Security.SecurityFrame::.ctor(System.Security.RuntimeSecurityFrame)
extern "C"  void SecurityFrame__ctor_m_556638688_0 (SecurityFrame_t29217290_0 * __this, RuntimeSecurityFrame_t_309120876_0 * ___frame, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Security.SecurityFrame::_GetSecurityStack(System.Int32)
extern "C"  Array_t * SecurityFrame__GetSecurityStack_m_1748038575_0 (Object_t * __this /* static, unused */, int32_t ___skip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityFrame::InitFromRuntimeFrame(System.Security.RuntimeSecurityFrame)
extern "C"  void SecurityFrame_InitFromRuntimeFrame_m45195821_0 (SecurityFrame_t29217290_0 * __this, RuntimeSecurityFrame_t_309120876_0 * ___frame, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Security.SecurityFrame::get_Assembly()
extern "C"  Assembly_t_808956426_0 * SecurityFrame_get_Assembly_m_1478400806_0 (SecurityFrame_t29217290_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.Security.SecurityFrame::get_Domain()
extern "C"  AppDomain_t_1033567408_0 * SecurityFrame_get_Domain_m_1075619724_0 (SecurityFrame_t29217290_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityFrame::ToString()
extern "C"  String_t* SecurityFrame_ToString_m1282306399_0 (SecurityFrame_t29217290_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Security.SecurityFrame::GetStack(System.Int32)
extern "C"  ArrayList_t2138871437_0 * SecurityFrame_GetStack_m300982985_0 (Object_t * __this /* static, unused */, int32_t ___skipFrames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
