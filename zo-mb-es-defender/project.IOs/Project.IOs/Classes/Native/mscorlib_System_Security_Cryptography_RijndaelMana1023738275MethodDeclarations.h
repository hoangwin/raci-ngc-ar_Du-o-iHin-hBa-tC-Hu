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

// System.Security.Cryptography.RijndaelManaged
struct RijndaelManaged_t1023738275_0;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t2084792895_0;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.RijndaelManaged::.ctor()
extern "C"  void RijndaelManaged__ctor_m1723326849_0 (RijndaelManaged_t1023738275_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelManaged::GenerateIV()
extern "C"  void RijndaelManaged_GenerateIV_m805619657_0 (RijndaelManaged_t1023738275_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelManaged::GenerateKey()
extern "C"  void RijndaelManaged_GenerateKey_m_928719363_0 (RijndaelManaged_t1023738275_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.RijndaelManaged::CreateDecryptor(System.Byte[],System.Byte[])
extern "C"  Object_t * RijndaelManaged_CreateDecryptor_m_1041558653_0 (RijndaelManaged_t1023738275_0 * __this, ByteU5BU5D_t1362406281_0* ___rgbKey, ByteU5BU5D_t1362406281_0* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.RijndaelManaged::CreateEncryptor(System.Byte[],System.Byte[])
extern "C"  Object_t * RijndaelManaged_CreateEncryptor_m315737265_0 (RijndaelManaged_t1023738275_0 * __this, ByteU5BU5D_t1362406281_0* ___rgbKey, ByteU5BU5D_t1362406281_0* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
