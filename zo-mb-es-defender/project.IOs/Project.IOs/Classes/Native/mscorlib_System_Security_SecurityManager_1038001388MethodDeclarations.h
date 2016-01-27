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
struct PermissionSet_t_1274095008_0;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr117299260.h"

// System.Void System.Security.SecurityManager::.cctor()
extern "C"  void SecurityManager__cctor_m_365691895_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::get_SecurityEnabled()
extern "C"  bool SecurityManager_get_SecurityEnabled_m51574294_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.SecurityManager::Decode(System.IntPtr,System.Int32)
extern "C"  PermissionSet_t_1274095008_0 * SecurityManager_Decode_m_510952812_0 (Object_t * __this /* static, unused */, IntPtr_t ___permissions, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.SecurityManager::Decode(System.Byte[])
extern "C"  PermissionSet_t_1274095008_0 * SecurityManager_Decode_m470212436_0 (Object_t * __this /* static, unused */, ByteU5BU5D_t1362406281_0* ___encodedPermissions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
