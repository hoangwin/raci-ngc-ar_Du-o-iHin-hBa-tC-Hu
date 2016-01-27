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

// System.IO.FileSystemInfo
struct FileSystemInfo_t_102069842_0;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t_2018490193_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2060733842.h"

// System.Void System.IO.FileSystemInfo::.ctor()
extern "C"  void FileSystemInfo__ctor_m_339031898_0 (FileSystemInfo_t_102069842_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemInfo::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void FileSystemInfo__ctor_m1536026477_0 (FileSystemInfo_t_102069842_0 * __this, SerializationInfo_t_2018490193_0 * ___info, StreamingContext_t2060733842_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemInfo::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void FileSystemInfo_GetObjectData_m1755848054_0 (FileSystemInfo_t_102069842_0 * __this, SerializationInfo_t_2018490193_0 * ___info, StreamingContext_t2060733842_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileSystemInfo::get_FullName()
extern "C"  String_t* FileSystemInfo_get_FullName_m591376646_0 (FileSystemInfo_t_102069842_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemInfo::Refresh(System.Boolean)
extern "C"  void FileSystemInfo_Refresh_m_1877878176_0 (FileSystemInfo_t_102069842_0 * __this, bool ___force, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemInfo::InternalRefresh()
extern "C"  void FileSystemInfo_InternalRefresh_m_1627351742_0 (FileSystemInfo_t_102069842_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemInfo::CheckPath(System.String)
extern "C"  void FileSystemInfo_CheckPath_m731604327_0 (FileSystemInfo_t_102069842_0 * __this, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
