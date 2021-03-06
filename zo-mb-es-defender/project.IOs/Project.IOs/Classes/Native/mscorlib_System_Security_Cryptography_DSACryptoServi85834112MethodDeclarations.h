﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Security.Cryptography.DSACryptoServiceProvider
struct DSACryptoServiceProvider_t85834112_0;
// System.Security.Cryptography.CspParameters
struct CspParameters_t_1419105373_0;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;
// System.Object
struct Object_t;
// System.EventArgs
struct EventArgs_t859366506_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_DSAParameter1760562389.h"

// System.Void System.Security.Cryptography.DSACryptoServiceProvider::.ctor()
extern "C"  void DSACryptoServiceProvider__ctor_m701823690_0 (DSACryptoServiceProvider_t85834112_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::.ctor(System.Int32)
extern "C"  void DSACryptoServiceProvider__ctor_m181065031_0 (DSACryptoServiceProvider_t85834112_0 * __this, int32_t ___dwKeySize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::.ctor(System.Int32,System.Security.Cryptography.CspParameters)
extern "C"  void DSACryptoServiceProvider__ctor_m_1920662804_0 (DSACryptoServiceProvider_t85834112_0 * __this, int32_t ___dwKeySize, CspParameters_t_1419105373_0 * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::.cctor()
extern "C"  void DSACryptoServiceProvider__cctor_m_116733011_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::Finalize()
extern "C"  void DSACryptoServiceProvider_Finalize_m1911772902_0 (DSACryptoServiceProvider_t85834112_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.DSACryptoServiceProvider::get_KeySize()
extern "C"  int32_t DSACryptoServiceProvider_get_KeySize_m_1036685029_0 (DSACryptoServiceProvider_t85834112_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::get_PublicOnly()
extern "C"  bool DSACryptoServiceProvider_get_PublicOnly_m998015514_0 (DSACryptoServiceProvider_t85834112_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSAParameters System.Security.Cryptography.DSACryptoServiceProvider::ExportParameters(System.Boolean)
extern "C"  DSAParameters_t1760562389_0  DSACryptoServiceProvider_ExportParameters_m_1791823277_0 (DSACryptoServiceProvider_t85834112_0 * __this, bool ___includePrivateParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::ImportParameters(System.Security.Cryptography.DSAParameters)
extern "C"  void DSACryptoServiceProvider_ImportParameters_m513997588_0 (DSACryptoServiceProvider_t85834112_0 * __this, DSAParameters_t1760562389_0  ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DSACryptoServiceProvider::CreateSignature(System.Byte[])
extern "C"  ByteU5BU5D_t1362406281_0* DSACryptoServiceProvider_CreateSignature_m469230785_0 (DSACryptoServiceProvider_t85834112_0 * __this, ByteU5BU5D_t1362406281_0* ___rgbHash, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::VerifySignature(System.Byte[],System.Byte[])
extern "C"  bool DSACryptoServiceProvider_VerifySignature_m1717508085_0 (DSACryptoServiceProvider_t85834112_0 * __this, ByteU5BU5D_t1362406281_0* ___rgbHash, ByteU5BU5D_t1362406281_0* ___rgbSignature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::Dispose(System.Boolean)
extern "C"  void DSACryptoServiceProvider_Dispose_m_895190770_0 (DSACryptoServiceProvider_t85834112_0 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::OnKeyGenerated(System.Object,System.EventArgs)
extern "C"  void DSACryptoServiceProvider_OnKeyGenerated_m1573093697_0 (DSACryptoServiceProvider_t85834112_0 * __this, Object_t * ___sender, EventArgs_t859366506_0 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
