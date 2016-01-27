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

// System.Reflection.Binder
struct Binder_t1888259846_0;
// System.Object[]
struct ObjectU5BU5D_t_591698798_0;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t_2042175207_0;
// System.Globalization.CultureInfo
struct CultureInfo_t1283181710_0;
// System.Type
struct Type_t;
// System.Reflection.MethodBase
struct MethodBase_t999760250_0;
// System.Reflection.MethodBase[]
struct MethodBaseU5BU5D_t_419918606_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Reflection.Binder::.ctor()
extern "C"  void Binder__ctor_m1361613966_0 (Binder_t1888259846_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Binder::.cctor()
extern "C"  void Binder__cctor_m_558851489_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Binder System.Reflection.Binder::get_DefaultBinder()
extern "C"  Binder_t1888259846_0 * Binder_get_DefaultBinder_m965620943_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Binder::ConvertArgs(System.Reflection.Binder,System.Object[],System.Reflection.ParameterInfo[],System.Globalization.CultureInfo)
extern "C"  bool Binder_ConvertArgs_m_1295744015_0 (Object_t * __this /* static, unused */, Binder_t1888259846_0 * ___binder, ObjectU5BU5D_t_591698798_0* ___args, ParameterInfoU5BU5D_t_2042175207_0* ___pinfo, CultureInfo_t1283181710_0 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Binder::GetDerivedLevel(System.Type)
extern "C"  int32_t Binder_GetDerivedLevel_m1809808744_0 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.Binder::FindMostDerivedMatch(System.Reflection.MethodBase[])
extern "C"  MethodBase_t999760250_0 * Binder_FindMostDerivedMatch_m_1673135449_0 (Object_t * __this /* static, unused */, MethodBaseU5BU5D_t_419918606_0* ___match, const MethodInfo* method) IL2CPP_METHOD_ATTR;
