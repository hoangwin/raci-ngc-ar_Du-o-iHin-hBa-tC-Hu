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

// System.Reflection.MonoProperty
struct MonoProperty_t;
// System.Type[]
struct TypeU5BU5D_t1362412059_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_MonoPropertyInfo_795956408.h"
#include "mscorlib_System_Reflection_PInfo_830258674.h"

// System.Void System.Reflection.MonoPropertyInfo::get_property_info(System.Reflection.MonoProperty,System.Reflection.MonoPropertyInfo&,System.Reflection.PInfo)
extern "C"  void MonoPropertyInfo_get_property_info_m556498347_0 (Object_t * __this /* static, unused */, MonoProperty_t * ___prop, MonoPropertyInfo_t_795956408_0 * ___info, int32_t ___req_info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.MonoPropertyInfo::GetTypeModifiers(System.Reflection.MonoProperty,System.Boolean)
extern "C"  TypeU5BU5D_t1362412059_0* MonoPropertyInfo_GetTypeModifiers_m184537257_0 (Object_t * __this /* static, unused */, MonoProperty_t * ___prop, bool ___optional, const MethodInfo* method) IL2CPP_METHOD_ATTR;
