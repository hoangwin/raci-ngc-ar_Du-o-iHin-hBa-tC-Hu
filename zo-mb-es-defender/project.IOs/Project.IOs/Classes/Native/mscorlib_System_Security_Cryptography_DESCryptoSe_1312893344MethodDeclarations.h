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

// System.Security.Cryptography.DESCryptoServiceProvider
struct DESCryptoServiceProvider_t_1312893344_0;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t2084792895_0;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.DESCryptoServiceProvider::.ctor()
extern "C"  void DESCryptoServiceProvider__ctor_m_315358642_0 (DESCryptoServiceProvider_t_1312893344_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.DESCryptoServiceProvider::CreateDecryptor(System.Byte[],System.Byte[])
extern "C"  Object_t * DESCryptoServiceProvider_CreateDecryptor_m_1992219728_0 (DESCryptoServiceProvider_t_1312893344_0 * __this, ByteU5BU5D_t1362406281_0* ___rgbKey, ByteU5BU5D_t1362406281_0* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.DESCryptoServiceProvider::CreateEncryptor(System.Byte[],System.Byte[])
extern "C"  Object_t * DESCryptoServiceProvider_CreateEncryptor_m_501852040_0 (DESCryptoServiceProvider_t_1312893344_0 * __this, ByteU5BU5D_t1362406281_0* ___rgbKey, ByteU5BU5D_t1362406281_0* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESCryptoServiceProvider::GenerateIV()
extern "C"  void DESCryptoServiceProvider_GenerateIV_m_383407108_0 (DESCryptoServiceProvider_t_1312893344_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESCryptoServiceProvider::GenerateKey()
extern "C"  void DESCryptoServiceProvider_GenerateKey_m3794460_0 (DESCryptoServiceProvider_t_1312893344_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
