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

// System.Reflection.Emit.GenericTypeParameterBuilder
struct GenericTypeParameterBuilder_t1526930776_0;
// System.Type
struct Type_t;
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
// System.Exception
struct Exception_t_116002698_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_TypeAttributes_1070965557.h"
#include "mscorlib_System_Reflection_BindingFlags_1383767410.h"
#include "mscorlib_System_Reflection_CallingConventions_332049198.h"
#include "mscorlib_System_RuntimeTypeHandle303971567.h"

// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsSubclassOf(System.Type)
extern "C"  bool GenericTypeParameterBuilder_IsSubclassOf_m563999142_0 (GenericTypeParameterBuilder_t1526930776_0 * __this, Type_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.Reflection.Emit.GenericTypeParameterBuilder::GetAttributeFlagsImpl()
extern "C"  int32_t GenericTypeParameterBuilder_GetAttributeFlagsImpl_m_956785029_0 (GenericTypeParameterBuilder_t1526930776_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  ConstructorInfo_t_341707618_0 * GenericTypeParameterBuilder_GetConstructorImpl_m_1984938794_0 (GenericTypeParameterBuilder_t1526930776_0 * __this, int32_t ___bindingAttr, Binder_t1888259846_0 * ___binder, int32_t ___callConvention, TypeU5BU5D_t1362412059_0* ___types, ParameterModifierU5BU5D_t_767527608_0* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetConstructors(System.Reflection.BindingFlags)
extern "C"  ConstructorInfoU5BU5D_t_239858358_0* GenericTypeParameterBuilder_GetConstructors_m103067670_0 (GenericTypeParameterBuilder_t1526930776_0 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetEvent(System.String,System.Reflection.BindingFlags)
extern "C"  EventInfo_t * GenericTypeParameterBuilder_GetEvent_m_84399869_0 (GenericTypeParameterBuilder_t1526930776_0 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetField(System.String,System.Reflection.BindingFlags)
extern "C"  FieldInfo_t * GenericTypeParameterBuilder_GetField_m1135650395_0 (GenericTypeParameterBuilder_t1526930776_0 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetFields(System.Reflection.BindingFlags)
extern "C"  FieldInfoU5BU5D_t1276597122_0* GenericTypeParameterBuilder_GetFields_m1855948450_0 (GenericTypeParameterBuilder_t1526930776_0 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.GenericTypeParameterBuilder::GetInterfaces()
extern "C"  TypeU5BU5D_t1362412059_0* GenericTypeParameterBuilder_GetInterfaces_m922686350_0 (GenericTypeParameterBuilder_t1526930776_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetMethods(System.Reflection.BindingFlags)
extern "C"  MethodInfoU5BU5D_t1767044163_0* GenericTypeParameterBuilder_GetMethods_m1243855818_0 (GenericTypeParameterBuilder_t1526930776_0 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  MethodInfo_t * GenericTypeParameterBuilder_GetMethodImpl_m528545634_0 (GenericTypeParameterBuilder_t1526930776_0 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1888259846_0 * ___binder, int32_t ___callConvention, TypeU5BU5D_t1362412059_0* ___types, ParameterModifierU5BU5D_t_767527608_0* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  PropertyInfo_t * GenericTypeParameterBuilder_GetPropertyImpl_m_728544913_0 (GenericTypeParameterBuilder_t1526930776_0 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1888259846_0 * ___binder, Type_t * ___returnType, TypeU5BU5D_t1362412059_0* ___types, ParameterModifierU5BU5D_t_767527608_0* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::HasElementTypeImpl()
extern "C"  bool GenericTypeParameterBuilder_HasElementTypeImpl_m_1702694808_0 (GenericTypeParameterBuilder_t1526930776_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsAssignableFrom(System.Type)
extern "C"  bool GenericTypeParameterBuilder_IsAssignableFrom_m_420400912_0 (GenericTypeParameterBuilder_t1526930776_0 * __this, Type_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsInstanceOfType(System.Object)
extern "C"  bool GenericTypeParameterBuilder_IsInstanceOfType_m2048682904_0 (GenericTypeParameterBuilder_t1526930776_0 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsArrayImpl()
extern "C"  bool GenericTypeParameterBuilder_IsArrayImpl_m1786931395_0 (GenericTypeParameterBuilder_t1526930776_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsByRefImpl()
extern "C"  bool GenericTypeParameterBuilder_IsByRefImpl_m_955874168_0 (GenericTypeParameterBuilder_t1526930776_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsPointerImpl()
extern "C"  bool GenericTypeParameterBuilder_IsPointerImpl_m_29592679_0 (GenericTypeParameterBuilder_t1526930776_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsPrimitiveImpl()
extern "C"  bool GenericTypeParameterBuilder_IsPrimitiveImpl_m1198748291_0 (GenericTypeParameterBuilder_t1526930776_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsValueTypeImpl()
extern "C"  bool GenericTypeParameterBuilder_IsValueTypeImpl_m20800593_0 (GenericTypeParameterBuilder_t1526930776_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.GenericTypeParameterBuilder::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern "C"  Object_t * GenericTypeParameterBuilder_InvokeMember_m1055646245_0 (GenericTypeParameterBuilder_t1526930776_0 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t1888259846_0 * ___binder, Object_t * ___target, ObjectU5BU5D_t_591698798_0* ___args, ParameterModifierU5BU5D_t_767527608_0* ___modifiers, CultureInfo_t1283181710_0 * ___culture, StringU5BU5D_t_1137506664_0* ___namedParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::GetElementType()
extern "C"  Type_t * GenericTypeParameterBuilder_GetElementType_m_1592625844_0 (GenericTypeParameterBuilder_t1526930776_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_UnderlyingSystemType()
extern "C"  Type_t * GenericTypeParameterBuilder_get_UnderlyingSystemType_m200578513_0 (GenericTypeParameterBuilder_t1526930776_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Emit.GenericTypeParameterBuilder::get_Assembly()
extern "C"  Assembly_t_808956426_0 * GenericTypeParameterBuilder_get_Assembly_m2103587580_0 (GenericTypeParameterBuilder_t1526930776_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_AssemblyQualifiedName()
extern "C"  String_t* GenericTypeParameterBuilder_get_AssemblyQualifiedName_m902593295_0 (GenericTypeParameterBuilder_t1526930776_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_BaseType()
extern "C"  Type_t * GenericTypeParameterBuilder_get_BaseType_m101683868_0 (GenericTypeParameterBuilder_t1526930776_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_FullName()
extern "C"  String_t* GenericTypeParameterBuilder_get_FullName_m_786754860_0 (GenericTypeParameterBuilder_t1526930776_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsDefined(System.Type,System.Boolean)
extern "C"  bool GenericTypeParameterBuilder_IsDefined_m1413593919_0 (GenericTypeParameterBuilder_t1526930776_0 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.GenericTypeParameterBuilder::GetCustomAttributes(System.Boolean)
extern "C"  ObjectU5BU5D_t_591698798_0* GenericTypeParameterBuilder_GetCustomAttributes_m1330155190_0 (GenericTypeParameterBuilder_t1526930776_0 * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.GenericTypeParameterBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t_591698798_0* GenericTypeParameterBuilder_GetCustomAttributes_m_1028430671_0 (GenericTypeParameterBuilder_t1526930776_0 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_Name()
extern "C"  String_t* GenericTypeParameterBuilder_get_Name_m_1654804549_0 (GenericTypeParameterBuilder_t1526930776_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_Namespace()
extern "C"  String_t* GenericTypeParameterBuilder_get_Namespace_m1776615511_0 (GenericTypeParameterBuilder_t1526930776_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.GenericTypeParameterBuilder::get_Module()
extern "C"  Module_t_1368739742_0 * GenericTypeParameterBuilder_get_Module_m_1867120204_0 (GenericTypeParameterBuilder_t1526930776_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_DeclaringType()
extern "C"  Type_t * GenericTypeParameterBuilder_get_DeclaringType_m1652924692_0 (GenericTypeParameterBuilder_t1526930776_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_ReflectedType()
extern "C"  Type_t * GenericTypeParameterBuilder_get_ReflectedType_m562256091_0 (GenericTypeParameterBuilder_t1526930776_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Reflection.Emit.GenericTypeParameterBuilder::get_TypeHandle()
extern "C"  RuntimeTypeHandle_t303971567_0  GenericTypeParameterBuilder_get_TypeHandle_m_1001904939_0 (GenericTypeParameterBuilder_t1526930776_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.GenericTypeParameterBuilder::GetGenericArguments()
extern "C"  TypeU5BU5D_t1362412059_0* GenericTypeParameterBuilder_GetGenericArguments_m277381309_0 (GenericTypeParameterBuilder_t1526930776_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::GetGenericTypeDefinition()
extern "C"  Type_t * GenericTypeParameterBuilder_GetGenericTypeDefinition_m_1358679960_0 (GenericTypeParameterBuilder_t1526930776_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_ContainsGenericParameters()
extern "C"  bool GenericTypeParameterBuilder_get_ContainsGenericParameters_m1449092549_0 (GenericTypeParameterBuilder_t1526930776_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_IsGenericParameter()
extern "C"  bool GenericTypeParameterBuilder_get_IsGenericParameter_m1565478927_0 (GenericTypeParameterBuilder_t1526930776_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_IsGenericType()
extern "C"  bool GenericTypeParameterBuilder_get_IsGenericType_m1883522222_0 (GenericTypeParameterBuilder_t1526930776_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_IsGenericTypeDefinition()
extern "C"  bool GenericTypeParameterBuilder_get_IsGenericTypeDefinition_m_1504659017_0 (GenericTypeParameterBuilder_t1526930776_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.GenericTypeParameterBuilder::not_supported()
extern "C"  Exception_t_116002698_0 * GenericTypeParameterBuilder_not_supported_m_510058253_0 (GenericTypeParameterBuilder_t1526930776_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::ToString()
extern "C"  String_t* GenericTypeParameterBuilder_ToString_m_71541785_0 (GenericTypeParameterBuilder_t1526930776_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::Equals(System.Object)
extern "C"  bool GenericTypeParameterBuilder_Equals_m_1796039787_0 (GenericTypeParameterBuilder_t1526930776_0 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.GenericTypeParameterBuilder::GetHashCode()
extern "C"  int32_t GenericTypeParameterBuilder_GetHashCode_m867619899_0 (GenericTypeParameterBuilder_t1526930776_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::MakeGenericType(System.Type[])
extern "C"  Type_t * GenericTypeParameterBuilder_MakeGenericType_m_1339152674_0 (GenericTypeParameterBuilder_t1526930776_0 * __this, TypeU5BU5D_t1362412059_0* ___typeArguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
