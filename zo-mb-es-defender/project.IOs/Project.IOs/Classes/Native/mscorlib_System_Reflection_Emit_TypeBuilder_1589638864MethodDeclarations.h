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

// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t_1589638864_0;
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
// System.Object[]
struct ObjectU5BU5D_t_591698798_0;
// System.Reflection.Emit.ConstructorBuilder
struct ConstructorBuilder_t1528385402_0;
// System.Type[][]
struct TypeU5BU5DU5BU5D_t275827409_0;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t_239858358_0;
// System.Reflection.EventInfo
struct EventInfo_t;
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
// System.Globalization.CultureInfo
struct CultureInfo_t1283181710_0;
// System.String[]
struct StringU5BU5D_t_1137506664_0;
// System.Exception
struct Exception_t_116002698_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_TypeAttributes_1070965557.h"
#include "mscorlib_System_Reflection_BindingFlags_1383767410.h"
#include "mscorlib_System_Reflection_CallingConventions_332049198.h"
#include "mscorlib_System_Reflection_MethodAttributes_1474330254.h"
#include "mscorlib_System_RuntimeTypeHandle303971567.h"

// System.Reflection.TypeAttributes System.Reflection.Emit.TypeBuilder::GetAttributeFlagsImpl()
extern "C"  int32_t TypeBuilder_GetAttributeFlagsImpl_m_1701517597_0 (TypeBuilder_t_1589638864_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.TypeBuilder::setup_internal_class(System.Reflection.Emit.TypeBuilder)
extern "C"  void TypeBuilder_setup_internal_class_m235812026_0 (TypeBuilder_t_1589638864_0 * __this, TypeBuilder_t_1589638864_0 * ___tb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.TypeBuilder::create_generic_class()
extern "C"  void TypeBuilder_create_generic_class_m986834171_0 (TypeBuilder_t_1589638864_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Emit.TypeBuilder::get_Assembly()
extern "C"  Assembly_t_808956426_0 * TypeBuilder_get_Assembly_m492491492_0 (TypeBuilder_t_1589638864_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_AssemblyQualifiedName()
extern "C"  String_t* TypeBuilder_get_AssemblyQualifiedName_m2097258567_0 (TypeBuilder_t_1589638864_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_BaseType()
extern "C"  Type_t * TypeBuilder_get_BaseType_m_206295116_0 (TypeBuilder_t_1589638864_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_DeclaringType()
extern "C"  Type_t * TypeBuilder_get_DeclaringType_m_1058368596_0 (TypeBuilder_t_1589638864_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_UnderlyingSystemType()
extern "C"  Type_t * TypeBuilder_get_UnderlyingSystemType_m392404521_0 (TypeBuilder_t_1589638864_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_FullName()
extern "C"  String_t* TypeBuilder_get_FullName_m1626507516_0 (TypeBuilder_t_1589638864_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.TypeBuilder::get_Module()
extern "C"  Module_t_1368739742_0 * TypeBuilder_get_Module_m1668298460_0 (TypeBuilder_t_1589638864_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_Name()
extern "C"  String_t* TypeBuilder_get_Name_m170882803_0 (TypeBuilder_t_1589638864_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_Namespace()
extern "C"  String_t* TypeBuilder_get_Namespace_m_732183697_0 (TypeBuilder_t_1589638864_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_ReflectedType()
extern "C"  Type_t * TypeBuilder_get_ReflectedType_m_1790886237_0 (TypeBuilder_t_1589638864_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Reflection.Emit.TypeBuilder::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  ConstructorInfo_t_341707618_0 * TypeBuilder_GetConstructorImpl_m_102798610_0 (TypeBuilder_t_1589638864_0 * __this, int32_t ___bindingAttr, Binder_t1888259846_0 * ___binder, int32_t ___callConvention, TypeU5BU5D_t1362412059_0* ___types, ParameterModifierU5BU5D_t_767527608_0* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsDefined(System.Type,System.Boolean)
extern "C"  bool TypeBuilder_IsDefined_m_1108715641_0 (TypeBuilder_t_1589638864_0 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.TypeBuilder::GetCustomAttributes(System.Boolean)
extern "C"  ObjectU5BU5D_t_591698798_0* TypeBuilder_GetCustomAttributes_m1637538574_0 (TypeBuilder_t_1589638864_0 * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.TypeBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t_591698798_0* TypeBuilder_GetCustomAttributes_m_1592334935_0 (TypeBuilder_t_1589638864_0 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ConstructorBuilder System.Reflection.Emit.TypeBuilder::DefineConstructor(System.Reflection.MethodAttributes,System.Reflection.CallingConventions,System.Type[])
extern "C"  ConstructorBuilder_t1528385402_0 * TypeBuilder_DefineConstructor_m_863718787_0 (TypeBuilder_t_1589638864_0 * __this, int32_t ___attributes, int32_t ___callingConvention, TypeU5BU5D_t1362412059_0* ___parameterTypes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ConstructorBuilder System.Reflection.Emit.TypeBuilder::DefineConstructor(System.Reflection.MethodAttributes,System.Reflection.CallingConventions,System.Type[],System.Type[][],System.Type[][])
extern "C"  ConstructorBuilder_t1528385402_0 * TypeBuilder_DefineConstructor_m_1322486147_0 (TypeBuilder_t_1589638864_0 * __this, int32_t ___attributes, int32_t ___callingConvention, TypeU5BU5D_t1362412059_0* ___parameterTypes, TypeU5BU5DU5BU5D_t275827409_0* ___requiredCustomModifiers, TypeU5BU5DU5BU5D_t275827409_0* ___optionalCustomModifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ConstructorBuilder System.Reflection.Emit.TypeBuilder::DefineDefaultConstructor(System.Reflection.MethodAttributes)
extern "C"  ConstructorBuilder_t1528385402_0 * TypeBuilder_DefineDefaultConstructor_m_2069138597_0 (TypeBuilder_t_1589638864_0 * __this, int32_t ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::create_runtime_class(System.Reflection.Emit.TypeBuilder)
extern "C"  Type_t * TypeBuilder_create_runtime_class_m_1575437036_0 (TypeBuilder_t_1589638864_0 * __this, TypeBuilder_t_1589638864_0 * ___tb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::is_nested_in(System.Type)
extern "C"  bool TypeBuilder_is_nested_in_m_737069261_0 (TypeBuilder_t_1589638864_0 * __this, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::has_ctor_method()
extern "C"  bool TypeBuilder_has_ctor_method_m_845264829_0 (TypeBuilder_t_1589638864_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::CreateType()
extern "C"  Type_t * TypeBuilder_CreateType_m_168911172_0 (TypeBuilder_t_1589638864_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.TypeBuilder::GetConstructors(System.Reflection.BindingFlags)
extern "C"  ConstructorInfoU5BU5D_t_239858358_0* TypeBuilder_GetConstructors_m774120094_0 (TypeBuilder_t_1589638864_0 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.TypeBuilder::GetConstructorsInternal(System.Reflection.BindingFlags)
extern "C"  ConstructorInfoU5BU5D_t_239858358_0* TypeBuilder_GetConstructorsInternal_m_1868775065_0 (TypeBuilder_t_1589638864_0 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::GetElementType()
extern "C"  Type_t * TypeBuilder_GetElementType_m_587518924_0 (TypeBuilder_t_1589638864_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.Reflection.Emit.TypeBuilder::GetEvent(System.String,System.Reflection.BindingFlags)
extern "C"  EventInfo_t * TypeBuilder_GetEvent_m_418619221_0 (TypeBuilder_t_1589638864_0 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.Emit.TypeBuilder::GetField(System.String,System.Reflection.BindingFlags)
extern "C"  FieldInfo_t * TypeBuilder_GetField_m2112455315_0 (TypeBuilder_t_1589638864_0 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.Reflection.Emit.TypeBuilder::GetFields(System.Reflection.BindingFlags)
extern "C"  FieldInfoU5BU5D_t1276597122_0* TypeBuilder_GetFields_m_419565958_0 (TypeBuilder_t_1589638864_0 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.TypeBuilder::GetInterfaces()
extern "C"  TypeU5BU5D_t1362412059_0* TypeBuilder_GetInterfaces_m1818658502_0 (TypeBuilder_t_1589638864_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.TypeBuilder::GetMethodsByName(System.String,System.Reflection.BindingFlags,System.Boolean,System.Type)
extern "C"  MethodInfoU5BU5D_t1767044163_0* TypeBuilder_GetMethodsByName_m229541072_0 (TypeBuilder_t_1589638864_0 * __this, String_t* ___name, int32_t ___bindingAttr, bool ___ignoreCase, Type_t * ___reflected_type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.TypeBuilder::GetMethods(System.Reflection.BindingFlags)
extern "C"  MethodInfoU5BU5D_t1767044163_0* TypeBuilder_GetMethods_m_98104558_0 (TypeBuilder_t_1589638864_0 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.TypeBuilder::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  MethodInfo_t * TypeBuilder_GetMethodImpl_m1443640538_0 (TypeBuilder_t_1589638864_0 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1888259846_0 * ___binder, int32_t ___callConvention, TypeU5BU5D_t1362412059_0* ___types, ParameterModifierU5BU5D_t_767527608_0* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Reflection.Emit.TypeBuilder::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  PropertyInfo_t * TypeBuilder_GetPropertyImpl_m1854119335_0 (TypeBuilder_t_1589638864_0 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1888259846_0 * ___binder, Type_t * ___returnType, TypeU5BU5D_t1362412059_0* ___types, ParameterModifierU5BU5D_t_767527608_0* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::HasElementTypeImpl()
extern "C"  bool TypeBuilder_HasElementTypeImpl_m_1134446640_0 (TypeBuilder_t_1589638864_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.TypeBuilder::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern "C"  Object_t * TypeBuilder_InvokeMember_m1992906893_0 (TypeBuilder_t_1589638864_0 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t1888259846_0 * ___binder, Object_t * ___target, ObjectU5BU5D_t_591698798_0* ___args, ParameterModifierU5BU5D_t_767527608_0* ___modifiers, CultureInfo_t1283181710_0 * ___culture, StringU5BU5D_t_1137506664_0* ___namedParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsArrayImpl()
extern "C"  bool TypeBuilder_IsArrayImpl_m1932432187_0 (TypeBuilder_t_1589638864_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsByRefImpl()
extern "C"  bool TypeBuilder_IsByRefImpl_m_578829168_0 (TypeBuilder_t_1589638864_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsPointerImpl()
extern "C"  bool TypeBuilder_IsPointerImpl_m_1248261711_0 (TypeBuilder_t_1589638864_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsPrimitiveImpl()
extern "C"  bool TypeBuilder_IsPrimitiveImpl_m_979277861_0 (TypeBuilder_t_1589638864_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsValueTypeImpl()
extern "C"  bool TypeBuilder_IsValueTypeImpl_m1499671481_0 (TypeBuilder_t_1589638864_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::MakeGenericType(System.Type[])
extern "C"  Type_t * TypeBuilder_MakeGenericType_m_12944650_0 (TypeBuilder_t_1589638864_0 * __this, TypeU5BU5D_t1362412059_0* ___typeArguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Reflection.Emit.TypeBuilder::get_TypeHandle()
extern "C"  RuntimeTypeHandle_t303971567_0  TypeBuilder_get_TypeHandle_m922348781_0 (TypeBuilder_t_1589638864_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.TypeBuilder::SetParent(System.Type)
extern "C"  void TypeBuilder_SetParent_m387557893_0 (TypeBuilder_t_1589638864_0 * __this, Type_t * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.TypeBuilder::get_next_table_index(System.Object,System.Int32,System.Boolean)
extern "C"  int32_t TypeBuilder_get_next_table_index_m1415870184_0 (TypeBuilder_t_1589638864_0 * __this, Object_t * ___obj, int32_t ___table, bool ___inc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsCompilerContext()
extern "C"  bool TypeBuilder_get_IsCompilerContext_m_671563377_0 (TypeBuilder_t_1589638864_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_is_created()
extern "C"  bool TypeBuilder_get_is_created_m736553860_0 (TypeBuilder_t_1589638864_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.TypeBuilder::not_supported()
extern "C"  Exception_t_116002698_0 * TypeBuilder_not_supported_m_1116793653_0 (TypeBuilder_t_1589638864_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.TypeBuilder::check_not_created()
extern "C"  void TypeBuilder_check_not_created_m_1509434557_0 (TypeBuilder_t_1589638864_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.TypeBuilder::check_created()
extern "C"  void TypeBuilder_check_created_m_1365699419_0 (TypeBuilder_t_1589638864_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::ToString()
extern "C"  String_t* TypeBuilder_ToString_m1952363535_0 (TypeBuilder_t_1589638864_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsAssignableFrom(System.Type)
extern "C"  bool TypeBuilder_IsAssignableFrom_m212977480_0 (TypeBuilder_t_1589638864_0 * __this, Type_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsSubclassOf(System.Type)
extern "C"  bool TypeBuilder_IsSubclassOf_m428846622_0 (TypeBuilder_t_1589638864_0 * __this, Type_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsAssignableTo(System.Type)
extern "C"  bool TypeBuilder_IsAssignableTo_m_1084305467_0 (TypeBuilder_t_1589638864_0 * __this, Type_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.TypeBuilder::GetGenericArguments()
extern "C"  TypeU5BU5D_t1362412059_0* TypeBuilder_GetGenericArguments_m_1053186827_0 (TypeBuilder_t_1589638864_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::GetGenericTypeDefinition()
extern "C"  Type_t * TypeBuilder_GetGenericTypeDefinition_m_481966480_0 (TypeBuilder_t_1589638864_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_ContainsGenericParameters()
extern "C"  bool TypeBuilder_get_ContainsGenericParameters_m493137229_0 (TypeBuilder_t_1589638864_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericParameter()
extern "C"  bool TypeBuilder_get_IsGenericParameter_m_1690339001_0 (TypeBuilder_t_1589638864_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericTypeDefinition()
extern "C"  bool TypeBuilder_get_IsGenericTypeDefinition_m1652226431_0 (TypeBuilder_t_1589638864_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericType()
extern "C"  bool TypeBuilder_get_IsGenericType_m1475565622_0 (TypeBuilder_t_1589638864_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
