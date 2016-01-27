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

// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t2085908125_0;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t_1468785580_0;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t1839237324_0;
// System.IAsyncResult
struct IAsyncResult_t_87838773_0;
// System.AsyncCallback
struct AsyncCallback_t2110631700_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr117299260.h"
#include "System_System_Net_Security_SslPolicyErrors_1184596891.h"

// System.Void System.Net.Security.RemoteCertificateValidationCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void RemoteCertificateValidationCallback__ctor_m_1348253201_0 (RemoteCertificateValidationCallback_t2085908125_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.RemoteCertificateValidationCallback::Invoke(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern "C"  bool RemoteCertificateValidationCallback_Invoke_m_1283901058_0 (RemoteCertificateValidationCallback_t2085908125_0 * __this, Object_t * ___sender, X509Certificate_t_1468785580_0 * ___certificate, X509Chain_t1839237324_0 * ___chain, int32_t ___sslPolicyErrors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool pinvoke_delegate_wrapper_RemoteCertificateValidationCallback_t2085908125_0(Il2CppObject* delegate, Object_t * ___sender, X509Certificate_t_1468785580_0 * ___certificate, X509Chain_t1839237324_0 * ___chain, int32_t ___sslPolicyErrors);
// System.IAsyncResult System.Net.Security.RemoteCertificateValidationCallback::BeginInvoke(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors,System.AsyncCallback,System.Object)
extern "C"  Object_t * RemoteCertificateValidationCallback_BeginInvoke_m_1802769825_0 (RemoteCertificateValidationCallback_t2085908125_0 * __this, Object_t * ___sender, X509Certificate_t_1468785580_0 * ___certificate, X509Chain_t1839237324_0 * ___chain, int32_t ___sslPolicyErrors, AsyncCallback_t2110631700_0 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.RemoteCertificateValidationCallback::EndInvoke(System.IAsyncResult)
extern "C"  bool RemoteCertificateValidationCallback_EndInvoke_m449921409_0 (RemoteCertificateValidationCallback_t2085908125_0 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
