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

// System.Net.FtpWebRequest
struct FtpWebRequest_t1176230129_0;
// System.Uri
struct Uri_t407561573_0;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t_1468785580_0;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t1839237324_0;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Security_SslPolicyErrors_1184596891.h"

// System.Void System.Net.FtpWebRequest::.ctor(System.Uri)
extern "C"  void FtpWebRequest__ctor_m_1291415620_0 (FtpWebRequest_t1176230129_0 * __this, Uri_t407561573_0 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::.cctor()
extern "C"  void FtpWebRequest__cctor_m_1794264694_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebRequest::<callback>m__B(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern "C"  bool FtpWebRequest_U3CcallbackU3Em__B_m_141844242_0 (Object_t * __this /* static, unused */, Object_t * ___sender, X509Certificate_t_1468785580_0 * ___certificate, X509Chain_t1839237324_0 * ___chain, int32_t ___sslPolicyErrors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
