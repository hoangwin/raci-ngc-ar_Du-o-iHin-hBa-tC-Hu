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

// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Security_Cryptography_X509Certificat2144185098.h"
#include "System_System_Security_Cryptography_X509Certificat1985547477.h"

// System.Void System.Security.Cryptography.X509Certificates.X509ChainStatus::.ctor(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
extern "C"  void X509ChainStatus__ctor_m_666607335_0 (X509ChainStatus_t2144185098_0 * __this, int32_t ___flag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509ChainStatus::get_Status()
extern "C"  int32_t X509ChainStatus_get_Status_m_1043799285_0 (X509ChainStatus_t2144185098_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainStatus::set_Status(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
extern "C"  void X509ChainStatus_set_Status_m_6313552_0 (X509ChainStatus_t2144185098_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainStatus::set_StatusInformation(System.String)
extern "C"  void X509ChainStatus_set_StatusInformation_m_1391766281_0 (X509ChainStatus_t2144185098_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509ChainStatus::GetInformation(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
extern "C"  String_t* X509ChainStatus_GetInformation_m_1326346414_0 (Object_t * __this /* static, unused */, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void X509ChainStatus_t2144185098_0_marshal(const X509ChainStatus_t2144185098_0& unmarshaled, X509ChainStatus_t2144185098_0_marshaled& marshaled);
extern "C" void X509ChainStatus_t2144185098_0_marshal_back(const X509ChainStatus_t2144185098_0_marshaled& marshaled, X509ChainStatus_t2144185098_0& unmarshaled);
extern "C" void X509ChainStatus_t2144185098_0_marshal_cleanup(X509ChainStatus_t2144185098_0_marshaled& marshaled);
