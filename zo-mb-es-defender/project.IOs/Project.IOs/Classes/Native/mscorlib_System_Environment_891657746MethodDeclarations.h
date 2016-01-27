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

// System.String
struct String_t;
// System.OperatingSystem
struct OperatingSystem_t_965642923_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_PlatformID_1961022893.h"
#include "mscorlib_System_Environment_SpecialFolder1199390618.h"

// System.Boolean System.Environment::get_SocketSecurityEnabled()
extern "C"  bool Environment_get_SocketSecurityEnabled_m1758378561_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::get_NewLine()
extern "C"  String_t* Environment_get_NewLine_m266316410_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.PlatformID System.Environment::get_Platform()
extern "C"  int32_t Environment_get_Platform_m_1420756270_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::GetOSVersionString()
extern "C"  String_t* Environment_GetOSVersionString_m_445982450_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.OperatingSystem System.Environment::get_OSVersion()
extern "C"  OperatingSystem_t_965642923_0 * Environment_get_OSVersion_m1247315981_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::internalGetEnvironmentVariable(System.String)
extern "C"  String_t* Environment_internalGetEnvironmentVariable_m793691779_0 (Object_t * __this /* static, unused */, String_t* ___variable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::GetEnvironmentVariable(System.String)
extern "C"  String_t* Environment_GetEnvironmentVariable_m_2049350_0 (Object_t * __this /* static, unused */, String_t* ___variable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::GetWindowsFolderPath(System.Int32)
extern "C"  String_t* Environment_GetWindowsFolderPath_m1236279486_0 (Object_t * __this /* static, unused */, int32_t ___folder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::GetFolderPath(System.Environment/SpecialFolder)
extern "C"  String_t* Environment_GetFolderPath_m1849163024_0 (Object_t * __this /* static, unused */, int32_t ___folder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::ReadXdgUserDir(System.String,System.String,System.String,System.String)
extern "C"  String_t* Environment_ReadXdgUserDir_m_868630346_0 (Object_t * __this /* static, unused */, String_t* ___config_dir, String_t* ___home_dir, String_t* ___key, String_t* ___fallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::InternalGetFolderPath(System.Environment/SpecialFolder)
extern "C"  String_t* Environment_InternalGetFolderPath_m_1345302137_0 (Object_t * __this /* static, unused */, int32_t ___folder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Environment::get_IsRunningOnWindows()
extern "C"  bool Environment_get_IsRunningOnWindows_m_1304237722_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::GetMachineConfigPath()
extern "C"  String_t* Environment_GetMachineConfigPath_m1118347127_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::internalGetHome()
extern "C"  String_t* Environment_internalGetHome_m264525465_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
