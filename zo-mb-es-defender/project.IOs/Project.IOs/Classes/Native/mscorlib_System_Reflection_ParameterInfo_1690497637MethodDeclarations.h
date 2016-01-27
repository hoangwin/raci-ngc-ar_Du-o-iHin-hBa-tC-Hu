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

// System.Reflection.ParameterInfo
struct ParameterInfo_t_1690497637_0;
// System.Reflection.Emit.ParameterBuilder
struct ParameterBuilder_t686322339_0;
// System.Type
struct Type_t;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t_591698798_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_ParameterAttributes_553130620.h"

// System.Void System.Reflection.ParameterInfo::.ctor()
extern "C"  void ParameterInfo__ctor_m1986388557_0 (ParameterInfo_t_1690497637_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.ParameterInfo::.ctor(System.Reflection.Emit.ParameterBuilder,System.Type,System.Reflection.MemberInfo,System.Int32)
extern "C"  void ParameterInfo__ctor_m_2145810234_0 (ParameterInfo_t_1690497637_0 * __this, ParameterBuilder_t686322339_0 * ___pb, Type_t * ___type, MemberInfo_t * ___member, int32_t ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.ParameterInfo::.ctor(System.Reflection.ParameterInfo,System.Reflection.MemberInfo)
extern "C"  void ParameterInfo__ctor_m_1089972456_0 (ParameterInfo_t_1690497637_0 * __this, ParameterInfo_t_1690497637_0 * ___pinfo, MemberInfo_t * ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.ParameterInfo::ToString()
extern "C"  String_t* ParameterInfo_ToString_m1722229694_0 (ParameterInfo_t_1690497637_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.ParameterInfo::get_ParameterType()
extern "C"  Type_t * ParameterInfo_get_ParameterType_m1441012169_0 (ParameterInfo_t_1690497637_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::get_Attributes()
extern "C"  int32_t ParameterInfo_get_Attributes_m407887446_0 (ParameterInfo_t_1690497637_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.ParameterInfo::get_IsIn()
extern "C"  bool ParameterInfo_get_IsIn_m1357865245_0 (ParameterInfo_t_1690497637_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.ParameterInfo::get_IsOptional()
extern "C"  bool ParameterInfo_get_IsOptional_m_1417676348_0 (ParameterInfo_t_1690497637_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.ParameterInfo::get_IsOut()
extern "C"  bool ParameterInfo_get_IsOut_m_1197292234_0 (ParameterInfo_t_1690497637_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.ParameterInfo::get_IsRetval()
extern "C"  bool ParameterInfo_get_IsRetval_m1881464570_0 (ParameterInfo_t_1690497637_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberInfo System.Reflection.ParameterInfo::get_Member()
extern "C"  MemberInfo_t * ParameterInfo_get_Member_m_183675077_0 (ParameterInfo_t_1690497637_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.ParameterInfo::get_Name()
extern "C"  String_t* ParameterInfo_get_Name_m149251884_0 (ParameterInfo_t_1690497637_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.ParameterInfo::get_Position()
extern "C"  int32_t ParameterInfo_get_Position_m2135360011_0 (ParameterInfo_t_1690497637_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.ParameterInfo::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t_591698798_0* ParameterInfo_GetCustomAttributes_m_1309894816_0 (ParameterInfo_t_1690497637_0 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.ParameterInfo::IsDefined(System.Type,System.Boolean)
extern "C"  bool ParameterInfo_IsDefined_m_1882042152_0 (ParameterInfo_t_1690497637_0 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.ParameterInfo::GetPseudoCustomAttributes()
extern "C"  ObjectU5BU5D_t_591698798_0* ParameterInfo_GetPseudoCustomAttributes_m_1342607902_0 (ParameterInfo_t_1690497637_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
