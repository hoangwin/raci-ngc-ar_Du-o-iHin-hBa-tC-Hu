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

// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t_48356816_0;
// System.String
struct String_t;
// System.Reflection.Module[]
struct ModuleU5BU5D_t2103080014_0;
// System.Type[]
struct TypeU5BU5D_t1362412059_0;
// System.Exception
struct Exception_t_116002698_0;
// System.Reflection.AssemblyName
struct AssemblyName_t333835149_0;

#include "codegen/il2cpp-codegen.h"

// System.String System.Reflection.Emit.AssemblyBuilder::get_Location()
extern "C"  String_t* AssemblyBuilder_get_Location_m554656855_0 (AssemblyBuilder_t_48356816_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Emit.AssemblyBuilder::GetModulesInternal()
extern "C"  ModuleU5BU5D_t2103080014_0* AssemblyBuilder_GetModulesInternal_m_915122465_0 (AssemblyBuilder_t_48356816_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.AssemblyBuilder::GetTypes(System.Boolean)
extern "C"  TypeU5BU5D_t1362412059_0* AssemblyBuilder_GetTypes_m_1767012304_0 (AssemblyBuilder_t_48356816_0 * __this, bool ___exportedOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsCompilerContext()
extern "C"  bool AssemblyBuilder_get_IsCompilerContext_m_1430737291_0 (AssemblyBuilder_t_48356816_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.AssemblyBuilder::not_supported()
extern "C"  Exception_t_116002698_0 * AssemblyBuilder_not_supported_m383946865_0 (AssemblyBuilder_t_48356816_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Emit.AssemblyBuilder::UnprotectedGetName()
extern "C"  AssemblyName_t333835149_0 * AssemblyBuilder_UnprotectedGetName_m_1966326162_0 (AssemblyBuilder_t_48356816_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
