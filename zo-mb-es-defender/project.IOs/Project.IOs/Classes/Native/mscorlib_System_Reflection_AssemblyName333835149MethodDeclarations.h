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

// System.Reflection.AssemblyName
struct AssemblyName_t333835149_0;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t_2018490193_0;
// System.String
struct String_t;
// System.Version
struct Version_t_1229179121_0;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2060733842.h"
#include "mscorlib_System_Reflection_AssemblyNameFlags717204988.h"

// System.Void System.Reflection.AssemblyName::.ctor()
extern "C"  void AssemblyName__ctor_m_1789220709_0 (AssemblyName_t333835149_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void AssemblyName__ctor_m609734316_0 (AssemblyName_t333835149_0 * __this, SerializationInfo_t_2018490193_0 * ___si, StreamingContext_t2060733842_0  ___sc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.AssemblyName::get_Name()
extern "C"  String_t* AssemblyName_get_Name_m1815759940_0 (AssemblyName_t333835149_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyNameFlags System.Reflection.AssemblyName::get_Flags()
extern "C"  int32_t AssemblyName_get_Flags_m1290091392_0 (AssemblyName_t333835149_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.AssemblyName::get_FullName()
extern "C"  String_t* AssemblyName_get_FullName_m1606421515_0 (AssemblyName_t333835149_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Reflection.AssemblyName::get_Version()
extern "C"  Version_t_1229179121_0 * AssemblyName_get_Version_m_799321648_0 (AssemblyName_t333835149_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::set_Version(System.Version)
extern "C"  void AssemblyName_set_Version_m1012722441_0 (AssemblyName_t333835149_0 * __this, Version_t_1229179121_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.AssemblyName::ToString()
extern "C"  String_t* AssemblyName_ToString_m354334942_0 (AssemblyName_t333835149_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.AssemblyName::get_IsPublicKeyValid()
extern "C"  bool AssemblyName_get_IsPublicKeyValid_m188320564_0 (AssemblyName_t333835149_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Reflection.AssemblyName::InternalGetPublicKeyToken()
extern "C"  ByteU5BU5D_t1362406281_0* AssemblyName_InternalGetPublicKeyToken_m_588941409_0 (AssemblyName_t333835149_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Reflection.AssemblyName::ComputePublicKeyToken()
extern "C"  ByteU5BU5D_t1362406281_0* AssemblyName_ComputePublicKeyToken_m_2040751433_0 (AssemblyName_t333835149_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::SetPublicKey(System.Byte[])
extern "C"  void AssemblyName_SetPublicKey_m1491402438_0 (AssemblyName_t333835149_0 * __this, ByteU5BU5D_t1362406281_0* ___publicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::SetPublicKeyToken(System.Byte[])
extern "C"  void AssemblyName_SetPublicKeyToken_m_1262932129_0 (AssemblyName_t333835149_0 * __this, ByteU5BU5D_t1362406281_0* ___publicKeyToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void AssemblyName_GetObjectData_m1221677827_0 (AssemblyName_t333835149_0 * __this, SerializationInfo_t_2018490193_0 * ___info, StreamingContext_t2060733842_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.AssemblyName::Clone()
extern "C"  Object_t * AssemblyName_Clone_m_904848947_0 (AssemblyName_t333835149_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::OnDeserialization(System.Object)
extern "C"  void AssemblyName_OnDeserialization_m_1611445837_0 (AssemblyName_t333835149_0 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
