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

// System.Security.Cryptography.AesManaged
struct AesManaged_t668198204_0;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t2084792895_0;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.AesManaged::.ctor()
extern "C"  void AesManaged__ctor_m_1972524458_0 (AesManaged_t668198204_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesManaged::GenerateIV()
extern "C"  void AesManaged_GenerateIV_m199727220_0 (AesManaged_t668198204_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesManaged::GenerateKey()
extern "C"  void AesManaged_GenerateKey_m_1369775964_0 (AesManaged_t668198204_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.AesManaged::CreateDecryptor(System.Byte[],System.Byte[])
extern "C"  Object_t * AesManaged_CreateDecryptor_m1136566004_0 (AesManaged_t668198204_0 * __this, ByteU5BU5D_t1362406281_0* ___rgbKey, ByteU5BU5D_t1362406281_0* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.AesManaged::CreateEncryptor(System.Byte[],System.Byte[])
extern "C"  Object_t * AesManaged_CreateEncryptor_m1729287824_0 (AesManaged_t668198204_0 * __this, ByteU5BU5D_t1362406281_0* ___rgbKey, ByteU5BU5D_t1362406281_0* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.AesManaged::get_IV()
extern "C"  ByteU5BU5D_t1362406281_0* AesManaged_get_IV_m560133634_0 (AesManaged_t668198204_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesManaged::set_IV(System.Byte[])
extern "C"  void AesManaged_set_IV_m_1815563101_0 (AesManaged_t668198204_0 * __this, ByteU5BU5D_t1362406281_0* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.AesManaged::get_Key()
extern "C"  ByteU5BU5D_t1362406281_0* AesManaged_get_Key_m1100519798_0 (AesManaged_t668198204_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesManaged::set_Key(System.Byte[])
extern "C"  void AesManaged_set_Key_m_1410409705_0 (AesManaged_t668198204_0 * __this, ByteU5BU5D_t1362406281_0* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.AesManaged::get_KeySize()
extern "C"  int32_t AesManaged_get_KeySize_m_1521066169_0 (AesManaged_t668198204_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesManaged::set_KeySize(System.Int32)
extern "C"  void AesManaged_set_KeySize_m_836865274_0 (AesManaged_t668198204_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.AesManaged::CreateDecryptor()
extern "C"  Object_t * AesManaged_CreateDecryptor_m76892358_0 (AesManaged_t668198204_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.AesManaged::CreateEncryptor()
extern "C"  Object_t * AesManaged_CreateEncryptor_m_2033917770_0 (AesManaged_t668198204_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesManaged::Dispose(System.Boolean)
extern "C"  void AesManaged_Dispose_m2144430298_0 (AesManaged_t668198204_0 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
