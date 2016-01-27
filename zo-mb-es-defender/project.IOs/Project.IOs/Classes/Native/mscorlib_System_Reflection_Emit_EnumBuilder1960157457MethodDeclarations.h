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

// System.Reflection.Emit.EnumBuilder
struct EnumBuilder_t1960157457_0;
// System.Reflection.Assembly
struct Assembly_t_808956426_0;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Reflection.Module
struct Module_t_1368739742_0;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t_341707618_0;
// System.Reflection.Binder
struct Binder_t1888259846_0;
// System.Type[]
struct TypeU5BU5D_t1362412059_0;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t_767527608_0;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t_239858358_0;
// System.Object[]
struct ObjectU5BU5D_t_591698798_0;
// System.Reflection.EventInfo
struct EventInfo_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t1276597122_0;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t1767044163_0;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Object
struct Object_t;
// System.Globalization.CultureInfo
struct CultureInfo_t1283181710_0;
// System.String[]
struct StringU5BU5D_t_1137506664_0;
// System.Exception
struct Exception_t_116002698_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_RuntimeTypeHandle303971567.h"
#include "mscorlib_System_Reflection_TypeAttributes_1070965557.h"
#include "mscorlib_System_Reflection_BindingFlags_1383767410.h"
#include "mscorlib_System_Reflection_CallingConventions_332049198.h"

// System.Reflection.Assembly System.Reflection.Emit.EnumBuilder::get_Assembly()
extern "C"  Assembly_t_808956426_0 * EnumBuilder_get_Assembly_m_9739293_0 (EnumBuilder_t1960157457_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.EnumBuilder::get_AssemblyQualifiedName()
extern "C"  String_t* EnumBuilder_get_AssemblyQualifiedName_m_632500452_0 (EnumBuilder_t1960157457_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::get_BaseType()
extern "C"  Type_t * EnumBuilder_get_BaseType_m63295819_0 (EnumBuilder_t1960157457_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::get_DeclaringType()
extern "C"  Type_t * EnumBuilder_get_DeclaringType_m1949466083_0 (EnumBuilder_t1960157457_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.EnumBuilder::get_FullName()
extern "C"  String_t* EnumBuilder_get_FullName_m_1476573385_0 (EnumBuilder_t1960157457_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.EnumBuilder::get_Module()
extern "C"  Module_t_1368739742_0 * EnumBuilder_get_Module_m431986379_0 (EnumBuilder_t1960157457_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.EnumBuilder::get_Name()
extern "C"  String_t* EnumBuilder_get_Name_m2088160658_0 (EnumBuilder_t1960157457_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.EnumBuilder::get_Namespace()
extern "C"  String_t* EnumBuilder_get_Namespace_m_1185734734_0 (EnumBuilder_t1960157457_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::get_ReflectedType()
extern "C"  Type_t * EnumBuilder_get_ReflectedType_m_1615858368_0 (EnumBuilder_t1960157457_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Reflection.Emit.EnumBuilder::get_TypeHandle()
extern "C"  RuntimeTypeHandle_t303971567_0  EnumBuilder_get_TypeHandle_m724362740_0 (EnumBuilder_t1960157457_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::get_UnderlyingSystemType()
extern "C"  Type_t * EnumBuilder_get_UnderlyingSystemType_m1699680520_0 (EnumBuilder_t1960157457_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.Reflection.Emit.EnumBuilder::GetAttributeFlagsImpl()
extern "C"  int32_t EnumBuilder_GetAttributeFlagsImpl_m_31720464_0 (EnumBuilder_t1960157457_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Reflection.Emit.EnumBuilder::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  ConstructorInfo_t_341707618_0 * EnumBuilder_GetConstructorImpl_m331611313_0 (EnumBuilder_t1960157457_0 * __this, int32_t ___bindingAttr, Binder_t1888259846_0 * ___binder, int32_t ___callConvention, TypeU5BU5D_t1362412059_0* ___types, ParameterModifierU5BU5D_t_767527608_0* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.EnumBuilder::GetConstructors(System.Reflection.BindingFlags)
extern "C"  ConstructorInfoU5BU5D_t_239858358_0* EnumBuilder_GetConstructors_m_1054267469_0 (EnumBuilder_t1960157457_0 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.EnumBuilder::GetCustomAttributes(System.Boolean)
extern "C"  ObjectU5BU5D_t_591698798_0* EnumBuilder_GetCustomAttributes_m432109445_0 (EnumBuilder_t1960157457_0 * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.EnumBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t_591698798_0* EnumBuilder_GetCustomAttributes_m2001415610_0 (EnumBuilder_t1960157457_0 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::GetElementType()
extern "C"  Type_t * EnumBuilder_GetElementType_m1228393631_0 (EnumBuilder_t1960157457_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.Reflection.Emit.EnumBuilder::GetEvent(System.String,System.Reflection.BindingFlags)
extern "C"  EventInfo_t * EnumBuilder_GetEvent_m_305545336_0 (EnumBuilder_t1960157457_0 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.Emit.EnumBuilder::GetField(System.String,System.Reflection.BindingFlags)
extern "C"  FieldInfo_t * EnumBuilder_GetField_m1324325036_0 (EnumBuilder_t1960157457_0 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.Reflection.Emit.EnumBuilder::GetFields(System.Reflection.BindingFlags)
extern "C"  FieldInfoU5BU5D_t1276597122_0* EnumBuilder_GetFields_m2003258635_0 (EnumBuilder_t1960157457_0 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.EnumBuilder::GetInterfaces()
extern "C"  TypeU5BU5D_t1362412059_0* EnumBuilder_GetInterfaces_m198423261_0 (EnumBuilder_t1960157457_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.EnumBuilder::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  MethodInfo_t * EnumBuilder_GetMethodImpl_m2091516387_0 (EnumBuilder_t1960157457_0 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1888259846_0 * ___binder, int32_t ___callConvention, TypeU5BU5D_t1362412059_0* ___types, ParameterModifierU5BU5D_t_767527608_0* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.EnumBuilder::GetMethods(System.Reflection.BindingFlags)
extern "C"  MethodInfoU5BU5D_t1767044163_0* EnumBuilder_GetMethods_m342174319_0 (EnumBuilder_t1960157457_0 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Reflection.Emit.EnumBuilder::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  PropertyInfo_t * EnumBuilder_GetPropertyImpl_m_1577663220_0 (EnumBuilder_t1960157457_0 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1888259846_0 * ___binder, Type_t * ___returnType, TypeU5BU5D_t1362412059_0* ___types, ParameterModifierU5BU5D_t_767527608_0* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::HasElementTypeImpl()
extern "C"  bool EnumBuilder_HasElementTypeImpl_m1414733955_0 (EnumBuilder_t1960157457_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.EnumBuilder::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern "C"  Object_t * EnumBuilder_InvokeMember_m633176706_0 (EnumBuilder_t1960157457_0 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t1888259846_0 * ___binder, Object_t * ___target, ObjectU5BU5D_t_591698798_0* ___args, ParameterModifierU5BU5D_t_767527608_0* ___modifiers, CultureInfo_t1283181710_0 * ___culture, StringU5BU5D_t_1137506664_0* ___namedParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsArrayImpl()
extern "C"  bool EnumBuilder_IsArrayImpl_m_1109262398_0 (EnumBuilder_t1960157457_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsByRefImpl()
extern "C"  bool EnumBuilder_IsByRefImpl_m_992527577_0 (EnumBuilder_t1960157457_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsPointerImpl()
extern "C"  bool EnumBuilder_IsPointerImpl_m_1526464394_0 (EnumBuilder_t1960157457_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsPrimitiveImpl()
extern "C"  bool EnumBuilder_IsPrimitiveImpl_m_809312794_0 (EnumBuilder_t1960157457_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsValueTypeImpl()
extern "C"  bool EnumBuilder_IsValueTypeImpl_m_659212658_0 (EnumBuilder_t1960157457_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsDefined(System.Type,System.Boolean)
extern "C"  bool EnumBuilder_IsDefined_m255842204_0 (EnumBuilder_t1960157457_0 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.EnumBuilder::CreateNotSupportedException()
extern "C"  Exception_t_116002698_0 * EnumBuilder_CreateNotSupportedException_m62763134_0 (EnumBuilder_t1960157457_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
