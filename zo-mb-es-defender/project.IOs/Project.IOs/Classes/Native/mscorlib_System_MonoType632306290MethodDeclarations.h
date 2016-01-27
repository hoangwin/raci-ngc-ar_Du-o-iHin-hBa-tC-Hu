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

// System.Type
struct Type_t;
// System.MonoType
struct MonoType_t;
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
// System.Reflection.EventInfo
struct EventInfo_t;
// System.String
struct String_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t1276597122_0;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t1767044163_0;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t2001786283_0;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t_591698798_0;
// System.Globalization.CultureInfo
struct CultureInfo_t1283181710_0;
// System.String[]
struct StringU5BU5D_t_1137506664_0;
// System.Reflection.Assembly
struct Assembly_t_808956426_0;
// System.Reflection.Module
struct Module_t_1368739742_0;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t_2018490193_0;
// System.Reflection.MethodBase
struct MethodBase_t999760250_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_TypeAttributes_1070965557.h"
#include "mscorlib_System_Reflection_BindingFlags_1383767410.h"
#include "mscorlib_System_Reflection_CallingConventions_332049198.h"
#include "mscorlib_System_Reflection_MemberTypes77520759.h"
#include "mscorlib_System_RuntimeTypeHandle303971567.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2060733842.h"

// System.Reflection.TypeAttributes System.MonoType::get_attributes(System.Type)
extern "C"  int32_t MonoType_get_attributes_m1493788675_0 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.MonoType::GetDefaultConstructor()
extern "C"  ConstructorInfo_t_341707618_0 * MonoType_GetDefaultConstructor_m925465120_0 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.MonoType::GetAttributeFlagsImpl()
extern "C"  int32_t MonoType_GetAttributeFlagsImpl_m250699879_0 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.MonoType::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  ConstructorInfo_t_341707618_0 * MonoType_GetConstructorImpl_m1703214172_0 (MonoType_t * __this, int32_t ___bindingAttr, Binder_t1888259846_0 * ___binder, int32_t ___callConvention, TypeU5BU5D_t1362412059_0* ___types, ParameterModifierU5BU5D_t_767527608_0* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.MonoType::GetConstructors_internal(System.Reflection.BindingFlags,System.Type)
extern "C"  ConstructorInfoU5BU5D_t_239858358_0* MonoType_GetConstructors_internal_m_1585347573_0 (MonoType_t * __this, int32_t ___bindingAttr, Type_t * ___reflected_type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.MonoType::GetConstructors(System.Reflection.BindingFlags)
extern "C"  ConstructorInfoU5BU5D_t_239858358_0* MonoType_GetConstructors_m_892569260_0 (MonoType_t * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.MonoType::InternalGetEvent(System.String,System.Reflection.BindingFlags)
extern "C"  EventInfo_t * MonoType_InternalGetEvent_m532443236_0 (MonoType_t * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.MonoType::GetEvent(System.String,System.Reflection.BindingFlags)
extern "C"  EventInfo_t * MonoType_GetEvent_m_134625293_0 (MonoType_t * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.MonoType::GetField(System.String,System.Reflection.BindingFlags)
extern "C"  FieldInfo_t * MonoType_GetField_m341239795_0 (MonoType_t * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.MonoType::GetFields_internal(System.Reflection.BindingFlags,System.Type)
extern "C"  FieldInfoU5BU5D_t1276597122_0* MonoType_GetFields_internal_m2022019979_0 (MonoType_t * __this, int32_t ___bindingAttr, Type_t * ___reflected_type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.MonoType::GetFields(System.Reflection.BindingFlags)
extern "C"  FieldInfoU5BU5D_t1276597122_0* MonoType_GetFields_m2030623572_0 (MonoType_t * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.MonoType::GetInterfaces()
extern "C"  TypeU5BU5D_t1362412059_0* MonoType_GetInterfaces_m1917126622_0 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.MonoType::GetMethodsByName(System.String,System.Reflection.BindingFlags,System.Boolean,System.Type)
extern "C"  MethodInfoU5BU5D_t1767044163_0* MonoType_GetMethodsByName_m1854415088_0 (MonoType_t * __this, String_t* ___name, int32_t ___bindingAttr, bool ___ignoreCase, Type_t * ___reflected_type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.MonoType::GetMethods(System.Reflection.BindingFlags)
extern "C"  MethodInfoU5BU5D_t1767044163_0* MonoType_GetMethods_m353342170_0 (MonoType_t * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.MonoType::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  MethodInfo_t * MonoType_GetMethodImpl_m593754598_0 (MonoType_t * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1888259846_0 * ___binder, int32_t ___callConvention, TypeU5BU5D_t1362412059_0* ___types, ParameterModifierU5BU5D_t_767527608_0* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo[] System.MonoType::GetPropertiesByName(System.String,System.Reflection.BindingFlags,System.Boolean,System.Type)
extern "C"  PropertyInfoU5BU5D_t2001786283_0* MonoType_GetPropertiesByName_m1524828075_0 (MonoType_t * __this, String_t* ___name, int32_t ___bindingAttr, bool ___icase, Type_t * ___reflected_type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.MonoType::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  PropertyInfo_t * MonoType_GetPropertyImpl_m_1936139813_0 (MonoType_t * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1888259846_0 * ___binder, Type_t * ___returnType, TypeU5BU5D_t1362412059_0* ___types, ParameterModifierU5BU5D_t_767527608_0* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::HasElementTypeImpl()
extern "C"  bool MonoType_HasElementTypeImpl_m1040892148_0 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsArrayImpl()
extern "C"  bool MonoType_IsArrayImpl_m126199703_0 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsByRefImpl()
extern "C"  bool MonoType_IsByRefImpl_m_1701228028_0 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsPointerImpl()
extern "C"  bool MonoType_IsPointerImpl_m648213545_0 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsPrimitiveImpl()
extern "C"  bool MonoType_IsPrimitiveImpl_m_1451247289_0 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsSubclassOf(System.Type)
extern "C"  bool MonoType_IsSubclassOf_m_2083801058_0 (MonoType_t * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.MonoType::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern "C"  Object_t * MonoType_InvokeMember_m_1347820127_0 (MonoType_t * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t1888259846_0 * ___binder, Object_t * ___target, ObjectU5BU5D_t_591698798_0* ___args, ParameterModifierU5BU5D_t_767527608_0* ___modifiers, CultureInfo_t1283181710_0 * ___culture, StringU5BU5D_t_1137506664_0* ___namedParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::GetElementType()
extern "C"  Type_t * MonoType_GetElementType_m_2008879944_0 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::get_UnderlyingSystemType()
extern "C"  Type_t * MonoType_get_UnderlyingSystemType_m412136521_0 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.MonoType::get_Assembly()
extern "C"  Assembly_t_808956426_0 * MonoType_get_Assembly_m548508498_0 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::get_AssemblyQualifiedName()
extern "C"  String_t* MonoType_get_AssemblyQualifiedName_m_1969851169_0 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::getFullName(System.Boolean,System.Boolean)
extern "C"  String_t* MonoType_getFullName_m1434947639_0 (MonoType_t * __this, bool ___full_name, bool ___assembly_qualified, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::get_BaseType()
extern "C"  Type_t * MonoType_get_BaseType_m_825748896_0 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::get_FullName()
extern "C"  String_t* MonoType_get_FullName_m_245837522_0 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsDefined(System.Type,System.Boolean)
extern "C"  bool MonoType_IsDefined_m_1091496661_0 (MonoType_t * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoType::GetCustomAttributes(System.Boolean)
extern "C"  ObjectU5BU5D_t_591698798_0* MonoType_GetCustomAttributes_m110499900_0 (MonoType_t * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoType::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t_591698798_0* MonoType_GetCustomAttributes_m_1614028567_0 (MonoType_t * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberTypes System.MonoType::get_MemberType()
extern "C"  int32_t MonoType_get_MemberType_m_675314701_0 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::get_Name()
extern "C"  String_t* MonoType_get_Name_m865859211_0 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::get_Namespace()
extern "C"  String_t* MonoType_get_Namespace_m_1184320977_0 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.MonoType::get_Module()
extern "C"  Module_t_1368739742_0 * MonoType_get_Module_m_525725902_0 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::get_DeclaringType()
extern "C"  Type_t * MonoType_get_DeclaringType_m_1027808008_0 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::get_ReflectedType()
extern "C"  Type_t * MonoType_get_ReflectedType_m_1313252513_0 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.MonoType::get_TypeHandle()
extern "C"  RuntimeTypeHandle_t303971567_0  MonoType_get_TypeHandle_m_544352839_0 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MonoType::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void MonoType_GetObjectData_m_1406290144_0 (MonoType_t * __this, SerializationInfo_t_2018490193_0 * ___info, StreamingContext_t2060733842_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::ToString()
extern "C"  String_t* MonoType_ToString_m473949831_0 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.MonoType::GetGenericArguments()
extern "C"  TypeU5BU5D_t1362412059_0* MonoType_GetGenericArguments_m_1586768815_0 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::get_ContainsGenericParameters()
extern "C"  bool MonoType_get_ContainsGenericParameters_m_1065234643_0 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::get_IsGenericParameter()
extern "C"  bool MonoType_get_IsGenericParameter_m1335676395_0 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::GetGenericTypeDefinition()
extern "C"  Type_t * MonoType_GetGenericTypeDefinition_m_1931191136_0 (MonoType_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.MonoType::CheckMethodSecurity(System.Reflection.MethodBase)
extern "C"  MethodBase_t999760250_0 * MonoType_CheckMethodSecurity_m_178061106_0 (MonoType_t * __this, MethodBase_t999760250_0 * ___mb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MonoType::ReorderParamArrayArguments(System.Object[]&,System.Reflection.MethodBase)
extern "C"  void MonoType_ReorderParamArrayArguments_m979187413_0 (MonoType_t * __this, ObjectU5BU5D_t_591698798_0** ___args, MethodBase_t999760250_0 * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
