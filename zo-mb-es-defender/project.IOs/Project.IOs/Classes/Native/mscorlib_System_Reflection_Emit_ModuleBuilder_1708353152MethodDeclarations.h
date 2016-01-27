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

// System.Reflection.Emit.ModuleBuilder
struct ModuleBuilder_t_1708353152_0;
// System.Object
struct Object_t;
// System.Type[]
struct TypeU5BU5D_t1362412059_0;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.Emit.TokenGenerator
struct TokenGenerator_t_1918340405_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Reflection.Emit.ModuleBuilder::.cctor()
extern "C"  void ModuleBuilder__cctor_m_1309201271_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ModuleBuilder::get_next_table_index(System.Object,System.Int32,System.Boolean)
extern "C"  int32_t ModuleBuilder_get_next_table_index_m1552645388_0 (ModuleBuilder_t_1708353152_0 * __this, Object_t * ___obj, int32_t ___table, bool ___inc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.ModuleBuilder::GetTypes()
extern "C"  TypeU5BU5D_t1362412059_0* ModuleBuilder_GetTypes_m93550753_0 (ModuleBuilder_t_1708353152_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ModuleBuilder::getToken(System.Reflection.Emit.ModuleBuilder,System.Object)
extern "C"  int32_t ModuleBuilder_getToken_m972612049_0 (Object_t * __this /* static, unused */, ModuleBuilder_t_1708353152_0 * ___mb, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ModuleBuilder::GetToken(System.Reflection.MemberInfo)
extern "C"  int32_t ModuleBuilder_GetToken_m_104298559_0 (ModuleBuilder_t_1708353152_0 * __this, MemberInfo_t * ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ModuleBuilder::RegisterToken(System.Object,System.Int32)
extern "C"  void ModuleBuilder_RegisterToken_m1388342515_0 (ModuleBuilder_t_1708353152_0 * __this, Object_t * ___obj, int32_t ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.TokenGenerator System.Reflection.Emit.ModuleBuilder::GetTokenGenerator()
extern "C"  Object_t * ModuleBuilder_GetTokenGenerator_m_288901746_0 (ModuleBuilder_t_1708353152_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
