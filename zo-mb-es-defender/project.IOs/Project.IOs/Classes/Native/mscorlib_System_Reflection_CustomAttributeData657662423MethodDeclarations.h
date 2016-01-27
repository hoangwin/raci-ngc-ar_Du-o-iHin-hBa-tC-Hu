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

// System.Reflection.CustomAttributeData
struct CustomAttributeData_t657662423_0;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t_341707618_0;
// System.Object[]
struct ObjectU5BU5D_t_591698798_0;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument>
struct IList_1_t_338458061_0;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument>
struct IList_1_t_2028708248_0;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeData>
struct IList_1_t_845804302_0;
// System.Reflection.Assembly
struct Assembly_t_808956426_0;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.Module
struct Module_t_1368739742_0;
// System.Reflection.ParameterInfo
struct ParameterInfo_t_1690497637_0;
// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Reflection.CustomAttributeData::.ctor(System.Reflection.ConstructorInfo,System.Object[],System.Object[])
extern "C"  void CustomAttributeData__ctor_m1358286409_0 (CustomAttributeData_t657662423_0 * __this, ConstructorInfo_t_341707618_0 * ___ctorInfo, ObjectU5BU5D_t_591698798_0* ___ctorArgs, ObjectU5BU5D_t_591698798_0* ___namedArgs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Reflection.CustomAttributeData::get_Constructor()
extern "C"  ConstructorInfo_t_341707618_0 * CustomAttributeData_get_Constructor_m_1765896697_0 (CustomAttributeData_t657662423_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument> System.Reflection.CustomAttributeData::get_ConstructorArguments()
extern "C"  Object_t* CustomAttributeData_get_ConstructorArguments_m1625171154_0 (CustomAttributeData_t657662423_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument> System.Reflection.CustomAttributeData::get_NamedArguments()
extern "C"  Object_t* CustomAttributeData_get_NamedArguments_m708818174_0 (CustomAttributeData_t657662423_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeData> System.Reflection.CustomAttributeData::GetCustomAttributes(System.Reflection.Assembly)
extern "C"  Object_t* CustomAttributeData_GetCustomAttributes_m_170354936_0 (Object_t * __this /* static, unused */, Assembly_t_808956426_0 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeData> System.Reflection.CustomAttributeData::GetCustomAttributes(System.Reflection.MemberInfo)
extern "C"  Object_t* CustomAttributeData_GetCustomAttributes_m_1873636558_0 (Object_t * __this /* static, unused */, MemberInfo_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeData> System.Reflection.CustomAttributeData::GetCustomAttributes(System.Reflection.Module)
extern "C"  Object_t* CustomAttributeData_GetCustomAttributes_m119332220_0 (Object_t * __this /* static, unused */, Module_t_1368739742_0 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeData> System.Reflection.CustomAttributeData::GetCustomAttributes(System.Reflection.ParameterInfo)
extern "C"  Object_t* CustomAttributeData_GetCustomAttributes_m_1036547341_0 (Object_t * __this /* static, unused */, ParameterInfo_t_1690497637_0 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.CustomAttributeData::ToString()
extern "C"  String_t* CustomAttributeData_ToString_m1673522836_0 (CustomAttributeData_t657662423_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.CustomAttributeData::Equals(System.Object)
extern "C"  bool CustomAttributeData_Equals_m909425978_0 (CustomAttributeData_t657662423_0 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.CustomAttributeData::GetHashCode()
extern "C"  int32_t CustomAttributeData_GetHashCode_m_305227866_0 (CustomAttributeData_t657662423_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
