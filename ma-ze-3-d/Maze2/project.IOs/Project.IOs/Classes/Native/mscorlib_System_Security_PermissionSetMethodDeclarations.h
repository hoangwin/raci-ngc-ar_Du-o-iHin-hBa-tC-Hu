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

// System.Security.PermissionSet
struct PermissionSet_t1472;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t820;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.PermissionSet::.ctor()
extern "C" void PermissionSet__ctor_m10333 (PermissionSet_t1472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::.ctor(System.String)
extern "C" void PermissionSet__ctor_m10334 (PermissionSet_t1472 * __this, String_t* ___xml, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::set_DeclarativeSecurity(System.Boolean)
extern "C" void PermissionSet_set_DeclarativeSecurity_m10335 (PermissionSet_t1472 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.PermissionSet::CreateFromBinaryFormat(System.Byte[])
extern "C" PermissionSet_t1472 * PermissionSet_CreateFromBinaryFormat_m10336 (Object_t * __this /* static, unused */, ByteU5BU5D_t820* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
