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

// System.Reflection.Assembly
struct Assembly_t_808956426_0;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Object[]
struct ObjectU5BU5D_t_591698798_0;
// System.Reflection.Module
struct Module_t_1368739742_0;
// System.Type[]
struct TypeU5BU5D_t1362412059_0;
// System.Reflection.AssemblyName
struct AssemblyName_t333835149_0;
// System.Reflection.Module[]
struct ModuleU5BU5D_t2103080014_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr117299260.h"

// System.Void System.Reflection.Assembly::.ctor()
extern "C"  void Assembly__ctor_m1050192922_0 (Assembly_t_808956426_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_code_base(System.Boolean)
extern "C"  String_t* Assembly_get_code_base_m_657090236_0 (Assembly_t_808956426_0 * __this, bool ___escaped, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_fullname()
extern "C"  String_t* Assembly_get_fullname_m_1145148226_0 (Assembly_t_808956426_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_location()
extern "C"  String_t* Assembly_get_location_m_1318634799_0 (Assembly_t_808956426_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::GetCodeBase(System.Boolean)
extern "C"  String_t* Assembly_GetCodeBase_m_1559757576_0 (Assembly_t_808956426_0 * __this, bool ___escaped, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_FullName()
extern "C"  String_t* Assembly_get_FullName_m1064037566_0 (Assembly_t_808956426_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_Location()
extern "C"  String_t* Assembly_get_Location_m_313953487_0 (Assembly_t_808956426_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Assembly::IsDefined(System.Type,System.Boolean)
extern "C"  bool Assembly_IsDefined_m_1453069905_0 (Assembly_t_808956426_0 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Assembly::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t_591698798_0* Assembly_GetCustomAttributes_m95309865_0 (Assembly_t_808956426_0 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Reflection.Assembly::GetManifestResourceInternal(System.String,System.Int32&,System.Reflection.Module&)
extern "C"  IntPtr_t Assembly_GetManifestResourceInternal_m_1713239480_0 (Assembly_t_808956426_0 * __this, String_t* ___name, int32_t* ___size, Module_t_1368739742_0 ** ___module, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Assembly::GetTypes(System.Boolean)
extern "C"  TypeU5BU5D_t1362412059_0* Assembly_GetTypes_m1317253146_0 (Assembly_t_808956426_0 * __this, bool ___exportedOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Assembly::GetTypes()
extern "C"  TypeU5BU5D_t1362412059_0* Assembly_GetTypes_m382057419_0 (Assembly_t_808956426_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Assembly::GetType(System.String,System.Boolean)
extern "C"  Type_t * Assembly_GetType_m_1489936141_0 (Assembly_t_808956426_0 * __this, String_t* ___name, bool ___throwOnError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Assembly::GetType(System.String)
extern "C"  Type_t * Assembly_GetType_m_1916717710_0 (Assembly_t_808956426_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Assembly::InternalGetType(System.Reflection.Module,System.String,System.Boolean,System.Boolean)
extern "C"  Type_t * Assembly_InternalGetType_m1990879055_0 (Assembly_t_808956426_0 * __this, Module_t_1368739742_0 * ___module, String_t* ___name, bool ___throwOnError, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Assembly::GetType(System.String,System.Boolean,System.Boolean)
extern "C"  Type_t * Assembly_GetType_m_1529372584_0 (Assembly_t_808956426_0 * __this, String_t* ___name, bool ___throwOnError, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Assembly::FillName(System.Reflection.Assembly,System.Reflection.AssemblyName)
extern "C"  void Assembly_FillName_m1934025015_0 (Object_t * __this /* static, unused */, Assembly_t_808956426_0 * ___ass, AssemblyName_t333835149_0 * ___aname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Assembly::GetName(System.Boolean)
extern "C"  AssemblyName_t333835149_0 * Assembly_GetName_m_310401678_0 (Assembly_t_808956426_0 * __this, bool ___copiedName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Assembly::GetName()
extern "C"  AssemblyName_t333835149_0 * Assembly_GetName_m790410837_0 (Assembly_t_808956426_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Assembly::UnprotectedGetName()
extern "C"  AssemblyName_t333835149_0 * Assembly_UnprotectedGetName_m_1280359888_0 (Assembly_t_808956426_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::ToString()
extern "C"  String_t* Assembly_ToString_m_324308537_0 (Assembly_t_808956426_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::Load(System.String)
extern "C"  Assembly_t_808956426_0 * Assembly_Load_m902205655_0 (Object_t * __this /* static, unused */, String_t* ___assemblyString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Assembly::GetModule(System.String)
extern "C"  Module_t_1368739742_0 * Assembly_GetModule_m2064378601_0 (Assembly_t_808956426_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Assembly::GetModulesInternal()
extern "C"  ModuleU5BU5D_t2103080014_0* Assembly_GetModulesInternal_m666827793_0 (Assembly_t_808956426_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Assembly::GetModules(System.Boolean)
extern "C"  ModuleU5BU5D_t2103080014_0* Assembly_GetModules_m_2052896343_0 (Assembly_t_808956426_0 * __this, bool ___getResourceModules, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::GetExecutingAssembly()
extern "C"  Assembly_t_808956426_0 * Assembly_GetExecutingAssembly_m776016337_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
