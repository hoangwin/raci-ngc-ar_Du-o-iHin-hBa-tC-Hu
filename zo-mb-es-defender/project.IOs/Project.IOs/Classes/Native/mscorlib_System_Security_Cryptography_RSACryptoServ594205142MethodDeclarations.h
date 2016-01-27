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

// System.Security.Cryptography.RSACryptoServiceProvider
struct RSACryptoServiceProvider_t594205142_0;
// System.Security.Cryptography.CspParameters
struct CspParameters_t_1419105373_0;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;
// System.Object
struct Object_t;
// System.EventArgs
struct EventArgs_t859366506_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_RSAParamete_1794859837.h"

// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.ctor()
extern "C"  void RSACryptoServiceProvider__ctor_m1532797528_0 (RSACryptoServiceProvider_t594205142_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.ctor(System.Security.Cryptography.CspParameters)
extern "C"  void RSACryptoServiceProvider__ctor_m_206158867_0 (RSACryptoServiceProvider_t594205142_0 * __this, CspParameters_t_1419105373_0 * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.ctor(System.Int32)
extern "C"  void RSACryptoServiceProvider__ctor_m_1578546887_0 (RSACryptoServiceProvider_t594205142_0 * __this, int32_t ___dwKeySize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.cctor()
extern "C"  void RSACryptoServiceProvider__cctor_m714287159_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::Common(System.Int32,System.Security.Cryptography.CspParameters)
extern "C"  void RSACryptoServiceProvider_Common_m_1713402483_0 (RSACryptoServiceProvider_t594205142_0 * __this, int32_t ___dwKeySize, CspParameters_t_1419105373_0 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::Finalize()
extern "C"  void RSACryptoServiceProvider_Finalize_m_881397352_0 (RSACryptoServiceProvider_t594205142_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.RSACryptoServiceProvider::get_KeySize()
extern "C"  int32_t RSACryptoServiceProvider_get_KeySize_m2049115605_0 (RSACryptoServiceProvider_t594205142_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::get_PublicOnly()
extern "C"  bool RSACryptoServiceProvider_get_PublicOnly_m_1622842956_0 (RSACryptoServiceProvider_t594205142_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSACryptoServiceProvider::DecryptValue(System.Byte[])
extern "C"  ByteU5BU5D_t1362406281_0* RSACryptoServiceProvider_DecryptValue_m228589949_0 (RSACryptoServiceProvider_t594205142_0 * __this, ByteU5BU5D_t1362406281_0* ___rgb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSACryptoServiceProvider::EncryptValue(System.Byte[])
extern "C"  ByteU5BU5D_t1362406281_0* RSACryptoServiceProvider_EncryptValue_m802714447_0 (RSACryptoServiceProvider_t594205142_0 * __this, ByteU5BU5D_t1362406281_0* ___rgb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSAParameters System.Security.Cryptography.RSACryptoServiceProvider::ExportParameters(System.Boolean)
extern "C"  RSAParameters_t_1794859837_0  RSACryptoServiceProvider_ExportParameters_m1450871963_0 (RSACryptoServiceProvider_t594205142_0 * __this, bool ___includePrivateParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::ImportParameters(System.Security.Cryptography.RSAParameters)
extern "C"  void RSACryptoServiceProvider_ImportParameters_m1863060500_0 (RSACryptoServiceProvider_t594205142_0 * __this, RSAParameters_t_1794859837_0  ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::Dispose(System.Boolean)
extern "C"  void RSACryptoServiceProvider_Dispose_m_849022332_0 (RSACryptoServiceProvider_t594205142_0 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::OnKeyGenerated(System.Object,System.EventArgs)
extern "C"  void RSACryptoServiceProvider_OnKeyGenerated_m_613914605_0 (RSACryptoServiceProvider_t594205142_0 * __this, Object_t * ___sender, EventArgs_t859366506_0 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
