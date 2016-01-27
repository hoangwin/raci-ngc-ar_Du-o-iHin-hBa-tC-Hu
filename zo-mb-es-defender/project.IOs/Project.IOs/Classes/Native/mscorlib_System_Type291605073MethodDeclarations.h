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
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.Binder
struct Binder_t1888259846_0;
// System.Type[]
struct TypeU5BU5D_t1362412059_0;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t_767527608_0;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t_341707618_0;
// System.Object[]
struct ObjectU5BU5D_t_591698798_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_TypeAttributes_1070965557.h"
#include "mscorlib_System_Reflection_MemberTypes77520759.h"
#include "mscorlib_System_RuntimeTypeHandle303971567.h"
#include "mscorlib_System_IntPtr117299260.h"
#include "mscorlib_System_TypeCode_853989544.h"
#include "mscorlib_System_Reflection_BindingFlags_1383767410.h"
#include "mscorlib_System_Reflection_CallingConventions_332049198.h"

// System.Void System.Type::.ctor()
extern "C"  void Type__ctor_m882675131_0 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Type::.cctor()
extern "C"  void Type__cctor_m_1193000356_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::FilterName_impl(System.Reflection.MemberInfo,System.Object)
extern "C"  bool Type_FilterName_impl_m_1488667235_0 (Object_t * __this /* static, unused */, MemberInfo_t * ___m, Object_t * ___filterCriteria, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::FilterNameIgnoreCase_impl(System.Reflection.MemberInfo,System.Object)
extern "C"  bool Type_FilterNameIgnoreCase_impl_m296452813_0 (Object_t * __this /* static, unused */, MemberInfo_t * ___m, Object_t * ___filterCriteria, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::FilterAttribute_impl(System.Reflection.MemberInfo,System.Object)
extern "C"  bool Type_FilterAttribute_impl_m_1502630910_0 (Object_t * __this /* static, unused */, MemberInfo_t * ___m, Object_t * ___filterCriteria, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.Type::get_Attributes()
extern "C"  int32_t Type_get_Attributes_m967681955_0 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::get_DeclaringType()
extern "C"  Type_t * Type_get_DeclaringType_m128188791_0 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_HasElementType()
extern "C"  bool Type_get_HasElementType_m_975049400_0 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsAbstract()
extern "C"  bool Type_get_IsAbstract_m_1762907294_0 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsArray()
extern "C"  bool Type_get_IsArray_m811277129_0 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsByRef()
extern "C"  bool Type_get_IsByRef_m_771501796_0 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsClass()
extern "C"  bool Type_get_IsClass_m_1326303350_0 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsContextful()
extern "C"  bool Type_get_IsContextful_m1542685486_0 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsEnum()
extern "C"  bool Type_get_IsEnum_m313908919_0 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsExplicitLayout()
extern "C"  bool Type_get_IsExplicitLayout_m1489853866_0 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsInterface()
extern "C"  bool Type_get_IsInterface_m_711149831_0 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsMarshalByRef()
extern "C"  bool Type_get_IsMarshalByRef_m863073076_0 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsPointer()
extern "C"  bool Type_get_IsPointer_m_462624969_0 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsPrimitive()
extern "C"  bool Type_get_IsPrimitive_m1522841565_0 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsSealed()
extern "C"  bool Type_get_IsSealed_m_1913981460_0 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsSerializable()
extern "C"  bool Type_get_IsSerializable_m_247313327_0 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsValueType()
extern "C"  bool Type_get_IsValueType_m1733572463_0 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberTypes System.Type::get_MemberType()
extern "C"  int32_t Type_get_MemberType_m744159024_0 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::get_ReflectedType()
extern "C"  Type_t * Type_get_ReflectedType_m587395740_0 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Type::get_TypeHandle()
extern "C"  RuntimeTypeHandle_t303971567_0  Type_get_TypeHandle_m_1923815916_0 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::Equals(System.Object)
extern "C"  bool Type_Equals_m1272005660_0 (Type_t * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::Equals(System.Type)
extern "C"  bool Type_Equals_m1326467719_0 (Type_t * __this, Type_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::EqualsInternal(System.Type)
extern "C"  bool Type_EqualsInternal_m266086934_0 (Type_t * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::internal_from_handle(System.IntPtr)
extern "C"  Type_t * Type_internal_from_handle_m_972640692_0 (Object_t * __this /* static, unused */, IntPtr_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::internal_from_name(System.String,System.Boolean,System.Boolean)
extern "C"  Type_t * Type_internal_from_name_m1506974323_0 (Object_t * __this /* static, unused */, String_t* ___name, bool ___throwOnError, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetType(System.String)
extern "C"  Type_t * Type_GetType_m773255995_0 (Object_t * __this /* static, unused */, String_t* ___typeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetType(System.String,System.Boolean)
extern "C"  Type_t * Type_GetType_m402049910_0 (Object_t * __this /* static, unused */, String_t* ___typeName, bool ___throwOnError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TypeCode System.Type::GetTypeCodeInternal(System.Type)
extern "C"  int32_t Type_GetTypeCodeInternal_m834669909_0 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TypeCode System.Type::GetTypeCode(System.Type)
extern "C"  int32_t Type_GetTypeCode_m1044483454_0 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C"  Type_t * Type_GetTypeFromHandle_m432505302_0 (Object_t * __this /* static, unused */, RuntimeTypeHandle_t303971567_0  ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Type::GetTypeHandle(System.Object)
extern "C"  RuntimeTypeHandle_t303971567_0  Type_GetTypeHandle_m_1889924453_0 (Object_t * __this /* static, unused */, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::type_is_subtype_of(System.Type,System.Type,System.Boolean)
extern "C"  bool Type_type_is_subtype_of_m312896768_0 (Object_t * __this /* static, unused */, Type_t * ___a, Type_t * ___b, bool ___check_interfaces, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::type_is_assignable_from(System.Type,System.Type)
extern "C"  bool Type_type_is_assignable_from_m1620694099_0 (Object_t * __this /* static, unused */, Type_t * ___a, Type_t * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::IsSubclassOf(System.Type)
extern "C"  bool Type_IsSubclassOf_m_1844067815_0 (Type_t * __this, Type_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::IsAssignableFrom(System.Type)
extern "C"  bool Type_IsAssignableFrom_m907986231_0 (Type_t * __this, Type_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::IsInstanceOfType(System.Object)
extern "C"  bool Type_IsInstanceOfType_m_1492754481_0 (Type_t * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Type::GetHashCode()
extern "C"  int32_t Type_GetHashCode_m1150382148_0 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String)
extern "C"  MethodInfo_t * Type_GetMethod_m1197504218_0 (Type_t * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags)
extern "C"  MethodInfo_t * Type_GetMethod_m475234662_0 (Type_t * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  MethodInfo_t * Type_GetMethod_m1930231379_0 (Type_t * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1888259846_0 * ___binder, TypeU5BU5D_t1362412059_0* ___types, ParameterModifierU5BU5D_t_767527608_0* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  MethodInfo_t * Type_GetMethod_m_644057789_0 (Type_t * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1888259846_0 * ___binder, int32_t ___callConvention, TypeU5BU5D_t1362412059_0* ___types, ParameterModifierU5BU5D_t_767527608_0* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String,System.Reflection.BindingFlags)
extern "C"  PropertyInfo_t * Type_GetProperty_m1510204374_0 (Type_t * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String,System.Type)
extern "C"  PropertyInfo_t * Type_GetProperty_m_270948509_0 (Type_t * __this, String_t* ___name, Type_t * ___returnType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String,System.Type,System.Type[])
extern "C"  PropertyInfo_t * Type_GetProperty_m_1782658846_0 (Type_t * __this, String_t* ___name, Type_t * ___returnType, TypeU5BU5D_t1362412059_0* ___types, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  PropertyInfo_t * Type_GetProperty_m_2122966626_0 (Type_t * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1888259846_0 * ___binder, Type_t * ___returnType, TypeU5BU5D_t1362412059_0* ___types, ParameterModifierU5BU5D_t_767527608_0* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::IsArrayImpl(System.Type)
extern "C"  bool Type_IsArrayImpl_m_1221758741_0 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::IsValueTypeImpl()
extern "C"  bool Type_IsValueTypeImpl_m1300813382_0 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::IsContextfulImpl()
extern "C"  bool Type_IsContextfulImpl_m1952300657_0 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::IsMarshalByRefImpl()
extern "C"  bool Type_IsMarshalByRefImpl_m673713323_0 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Type[])
extern "C"  ConstructorInfo_t_341707618_0 * Type_GetConstructor_m132234455_0 (Type_t * __this, TypeU5BU5D_t1362412059_0* ___types, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  ConstructorInfo_t_341707618_0 * Type_GetConstructor_m663514781_0 (Type_t * __this, int32_t ___bindingAttr, Binder_t1888259846_0 * ___binder, TypeU5BU5D_t1362412059_0* ___types, ParameterModifierU5BU5D_t_767527608_0* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  ConstructorInfo_t_341707618_0 * Type_GetConstructor_m835344477_0 (Type_t * __this, int32_t ___bindingAttr, Binder_t1888259846_0 * ___binder, int32_t ___callConvention, TypeU5BU5D_t1362412059_0* ___types, ParameterModifierU5BU5D_t_767527608_0* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Type::ToString()
extern "C"  String_t* Type_ToString_m_1698529302_0 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsSystemType()
extern "C"  bool Type_get_IsSystemType_m_2018136479_0 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Type::GetGenericArguments()
extern "C"  TypeU5BU5D_t1362412059_0* Type_GetGenericArguments_m_1916402960_0 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_ContainsGenericParameters()
extern "C"  bool Type_get_ContainsGenericParameters_m505913180_0 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsGenericTypeDefinition()
extern "C"  bool Type_get_IsGenericTypeDefinition_m_2147066258_0 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetGenericTypeDefinition_impl()
extern "C"  Type_t * Type_GetGenericTypeDefinition_impl_m_2088221700_0 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetGenericTypeDefinition()
extern "C"  Type_t * Type_GetGenericTypeDefinition_m_1636436543_0 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsGenericType()
extern "C"  bool Type_get_IsGenericType_m_898125723_0 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::MakeGenericType(System.Type,System.Type[])
extern "C"  Type_t * Type_MakeGenericType_m973683242_0 (Object_t * __this /* static, unused */, Type_t * ___gt, TypeU5BU5D_t1362412059_0* ___types, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::MakeGenericType(System.Type[])
extern "C"  Type_t * Type_MakeGenericType_m_1529092263_0 (Type_t * __this, TypeU5BU5D_t1362412059_0* ___typeArguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsGenericParameter()
extern "C"  bool Type_get_IsGenericParameter_m161434704_0 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsNested()
extern "C"  bool Type_get_IsNested_m_623570563_0 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Type::GetPseudoCustomAttributes()
extern "C"  ObjectU5BU5D_t_591698798_0* Type_GetPseudoCustomAttributes_m869578_0 (Type_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
