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

// System.OperatingSystem
struct OperatingSystem_t_965642923_0;
// System.Version
struct Version_t_1229179121_0;
// System.Object
struct Object_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t_2018490193_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_PlatformID_1961022893.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2060733842.h"

// System.Void System.OperatingSystem::.ctor(System.PlatformID,System.Version)
extern "C"  void OperatingSystem__ctor_m988315539_0 (OperatingSystem_t_965642923_0 * __this, int32_t ___platform, Version_t_1229179121_0 * ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.PlatformID System.OperatingSystem::get_Platform()
extern "C"  int32_t OperatingSystem_get_Platform_m_2034624017_0 (OperatingSystem_t_965642923_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.OperatingSystem::Clone()
extern "C"  Object_t * OperatingSystem_Clone_m1943707477_0 (OperatingSystem_t_965642923_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.OperatingSystem::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void OperatingSystem_GetObjectData_m_2018770421_0 (OperatingSystem_t_965642923_0 * __this, SerializationInfo_t_2018490193_0 * ___info, StreamingContext_t2060733842_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.OperatingSystem::ToString()
extern "C"  String_t* OperatingSystem_ToString_m_1929845418_0 (OperatingSystem_t_965642923_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
