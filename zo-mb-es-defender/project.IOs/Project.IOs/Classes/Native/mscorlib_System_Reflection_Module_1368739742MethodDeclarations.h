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

// System.Reflection.Module
struct Module_t_1368739742_0;
// System.Reflection.Assembly
struct Assembly_t_808956426_0;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t_591698798_0;
// System.Type
struct Type_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t_2018490193_0;
// System.Type[]
struct TypeU5BU5D_t1362412059_0;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2060733842.h"

// System.Void System.Reflection.Module::.ctor()
extern "C"  void Module__ctor_m_441317286_0 (Module_t_1368739742_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Module::.cctor()
extern "C"  void Module__cctor_m_1596150085_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Module::get_Assembly()
extern "C"  Assembly_t_808956426_0 * Module_get_Assembly_m_604677314_0 (Module_t_1368739742_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Module::get_ScopeName()
extern "C"  String_t* Module_get_ScopeName_m207704721_0 (Module_t_1368739742_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Module::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t_591698798_0* Module_GetCustomAttributes_m_713679383_0 (Module_t_1368739742_0 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Module::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Module_GetObjectData_m_1188732306_0 (Module_t_1368739742_0 * __this, SerializationInfo_t_2018490193_0 * ___info, StreamingContext_t2060733842_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Module::InternalGetTypes()
extern "C"  TypeU5BU5D_t1362412059_0* Module_InternalGetTypes_m_8206662_0 (Module_t_1368739742_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Module::GetTypes()
extern "C"  TypeU5BU5D_t1362412059_0* Module_GetTypes_m736359871_0 (Module_t_1368739742_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Module::IsDefined(System.Type,System.Boolean)
extern "C"  bool Module_IsDefined_m_733541061_0 (Module_t_1368739742_0 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Module::IsResource()
extern "C"  bool Module_IsResource_m663979284_0 (Module_t_1368739742_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Module::ToString()
extern "C"  String_t* Module_ToString_m_1951127981_0 (Module_t_1368739742_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Module::filter_by_type_name(System.Type,System.Object)
extern "C"  bool Module_filter_by_type_name_m_2011209196_0 (Object_t * __this /* static, unused */, Type_t * ___m, Object_t * ___filterCriteria, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Module::filter_by_type_name_ignore_case(System.Type,System.Object)
extern "C"  bool Module_filter_by_type_name_ignore_case_m_720071560_0 (Object_t * __this /* static, unused */, Type_t * ___m, Object_t * ___filterCriteria, const MethodInfo* method) IL2CPP_METHOD_ATTR;
