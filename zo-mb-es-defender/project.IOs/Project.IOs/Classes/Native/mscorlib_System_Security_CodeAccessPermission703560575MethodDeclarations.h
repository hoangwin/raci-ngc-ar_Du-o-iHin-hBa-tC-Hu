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

// System.Security.CodeAccessPermission
struct CodeAccessPermission_t703560575_0;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Security.SecurityElement
struct SecurityElement_t1503839097_0;
// System.Security.IPermission
struct IPermission_t2093524359_0;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.CodeAccessPermission::.ctor()
extern "C"  void CodeAccessPermission__ctor_m_2009708259_0 (CodeAccessPermission_t703560575_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.CodeAccessPermission::Equals(System.Object)
extern "C"  bool CodeAccessPermission_Equals_m1762790716_0 (CodeAccessPermission_t703560575_0 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.CodeAccessPermission::GetHashCode()
extern "C"  int32_t CodeAccessPermission_GetHashCode_m_999835160_0 (CodeAccessPermission_t703560575_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.CodeAccessPermission::ToString()
extern "C"  String_t* CodeAccessPermission_ToString_m_949936000_0 (CodeAccessPermission_t703560575_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.CodeAccessPermission::Element(System.Int32)
extern "C"  SecurityElement_t1503839097_0 * CodeAccessPermission_Element_m806857876_0 (CodeAccessPermission_t703560575_0 * __this, int32_t ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.CodeAccessPermission::ThrowInvalidPermission(System.Security.IPermission,System.Type)
extern "C"  void CodeAccessPermission_ThrowInvalidPermission_m76542563_0 (Object_t * __this /* static, unused */, Object_t * ___target, Type_t * ___expected, const MethodInfo* method) IL2CPP_METHOD_ATTR;
