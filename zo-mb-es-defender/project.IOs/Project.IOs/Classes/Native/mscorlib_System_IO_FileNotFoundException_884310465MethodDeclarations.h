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

// System.IO.FileNotFoundException
struct FileNotFoundException_t_884310465_0;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t_2018490193_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2060733842.h"

// System.Void System.IO.FileNotFoundException::.ctor()
extern "C"  void FileNotFoundException__ctor_m594134677_0 (FileNotFoundException_t_884310465_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileNotFoundException::.ctor(System.String,System.String)
extern "C"  void FileNotFoundException__ctor_m1531555541_0 (FileNotFoundException_t_884310465_0 * __this, String_t* ___message, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileNotFoundException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void FileNotFoundException__ctor_m40141846_0 (FileNotFoundException_t_884310465_0 * __this, SerializationInfo_t_2018490193_0 * ___info, StreamingContext_t2060733842_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileNotFoundException::get_Message()
extern "C"  String_t* FileNotFoundException_get_Message_m_1484506292_0 (FileNotFoundException_t_884310465_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileNotFoundException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void FileNotFoundException_GetObjectData_m_889276815_0 (FileNotFoundException_t_884310465_0 * __this, SerializationInfo_t_2018490193_0 * ___info, StreamingContext_t2060733842_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileNotFoundException::ToString()
extern "C"  String_t* FileNotFoundException_ToString_m614787994_0 (FileNotFoundException_t_884310465_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
