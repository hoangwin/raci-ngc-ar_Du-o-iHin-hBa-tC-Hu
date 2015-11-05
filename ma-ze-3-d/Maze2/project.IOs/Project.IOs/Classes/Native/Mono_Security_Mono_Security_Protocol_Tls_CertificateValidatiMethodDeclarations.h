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

// Mono.Security.Protocol.Tls.CertificateValidationCallback
struct CertificateValidationCallback_t1189;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t931;
// System.Int32[]
struct Int32U5BU5D_t38;
// System.IAsyncResult
struct IAsyncResult_t45;
// System.AsyncCallback
struct AsyncCallback_t46;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Int32.h"

// System.Void Mono.Security.Protocol.Tls.CertificateValidationCallback::.ctor(System.Object,System.IntPtr)
extern "C" void CertificateValidationCallback__ctor_m6378 (CertificateValidationCallback_t1189 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.CertificateValidationCallback::Invoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern "C" bool CertificateValidationCallback_Invoke_m6379 (CertificateValidationCallback_t1189 * __this, X509Certificate_t931 * ___certificate, Int32U5BU5D_t38* ___certificateErrors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool pinvoke_delegate_wrapper_CertificateValidationCallback_t1189(Il2CppObject* delegate, X509Certificate_t931 * ___certificate, Int32U5BU5D_t38* ___certificateErrors);
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateValidationCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[],System.AsyncCallback,System.Object)
extern "C" Object_t * CertificateValidationCallback_BeginInvoke_m6380 (CertificateValidationCallback_t1189 * __this, X509Certificate_t931 * ___certificate, Int32U5BU5D_t38* ___certificateErrors, AsyncCallback_t46 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.CertificateValidationCallback::EndInvoke(System.IAsyncResult)
extern "C" bool CertificateValidationCallback_EndInvoke_m6381 (CertificateValidationCallback_t1189 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
