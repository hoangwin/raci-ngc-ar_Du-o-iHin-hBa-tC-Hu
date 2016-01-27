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

// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t1839237324_0;
// System.Security.Cryptography.X509Certificates.X509ChainPolicy
struct X509ChainPolicy_t_1641763762_0;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t2035941040_0;
// System.Security.Cryptography.X509Certificates.X509Store
struct X509Store_t682760040_0;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t846388512_0;
// System.Security.Cryptography.X509Certificates.X509ChainElement
struct X509ChainElement_t1851841192_0;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t_1233528832_0;
// System.String
struct String_t;
// Mono.Security.X509.X509Crl
struct X509Crl_t1075555078_0;
// Mono.Security.X509.X509Extension
struct X509Extension_t_1087971856_0;
// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t691101242_0;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Security_Cryptography_X509Certificat1985547477.h"

// System.Void System.Security.Cryptography.X509Certificates.X509Chain::.ctor()
extern "C"  void X509Chain__ctor_m_2051148598_0 (X509Chain_t1839237324_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::.ctor(System.Boolean)
extern "C"  void X509Chain__ctor_m_874624393_0 (X509Chain_t1839237324_0 * __this, bool ___useMachineContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::.cctor()
extern "C"  void X509Chain__cctor_m826131835_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainPolicy System.Security.Cryptography.X509Certificates.X509Chain::get_ChainPolicy()
extern "C"  X509ChainPolicy_t_1641763762_0 * X509Chain_get_ChainPolicy_m732957765_0 (X509Chain_t1839237324_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::Build(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C"  bool X509Chain_Build_m1140429528_0 (X509Chain_t1839237324_0 * __this, X509Certificate2_t2035941040_0 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::Reset()
extern "C"  void X509Chain_Reset_m_1216451591_0 (X509Chain_t1839237324_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Store System.Security.Cryptography.X509Certificates.X509Chain::get_Roots()
extern "C"  X509Store_t682760040_0 * X509Chain_get_Roots_m_190642581_0 (X509Chain_t1839237324_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Store System.Security.Cryptography.X509Certificates.X509Chain::get_CertificateAuthorities()
extern "C"  X509Store_t682760040_0 * X509Chain_get_CertificateAuthorities_m_969303512_0 (X509Chain_t1839237324_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509Chain::get_CertificateCollection()
extern "C"  X509Certificate2Collection_t846388512_0 * X509Chain_get_CertificateCollection_m324631835_0 (X509Chain_t1839237324_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509Chain::BuildChainFrom(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C"  int32_t X509Chain_BuildChainFrom_m_159941633_0 (X509Chain_t1839237324_0 * __this, X509Certificate2_t2035941040_0 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2 System.Security.Cryptography.X509Certificates.X509Chain::SelectBestFromCollection(System.Security.Cryptography.X509Certificates.X509Certificate2,System.Security.Cryptography.X509Certificates.X509Certificate2Collection)
extern "C"  X509Certificate2_t2035941040_0 * X509Chain_SelectBestFromCollection_m_1582776339_0 (X509Chain_t1839237324_0 * __this, X509Certificate2_t2035941040_0 * ___child, X509Certificate2Collection_t846388512_0 * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2 System.Security.Cryptography.X509Certificates.X509Chain::FindParent(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C"  X509Certificate2_t2035941040_0 * X509Chain_FindParent_m404663796_0 (X509Chain_t1839237324_0 * __this, X509Certificate2_t2035941040_0 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::IsChainComplete(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C"  bool X509Chain_IsChainComplete_m_901309710_0 (X509Chain_t1839237324_0 * __this, X509Certificate2_t2035941040_0 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::IsSelfIssued(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C"  bool X509Chain_IsSelfIssued_m2009755967_0 (X509Chain_t1839237324_0 * __this, X509Certificate2_t2035941040_0 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::ValidateChain(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
extern "C"  void X509Chain_ValidateChain_m1002648716_0 (X509Chain_t1839237324_0 * __this, int32_t ___flag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::Process(System.Int32)
extern "C"  void X509Chain_Process_m_1786183046_0 (X509Chain_t1839237324_0 * __this, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::PrepareForNextCertificate(System.Int32)
extern "C"  void X509Chain_PrepareForNextCertificate_m1967807089_0 (X509Chain_t1839237324_0 * __this, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::WrapUp()
extern "C"  void X509Chain_WrapUp_m1072032285_0 (X509Chain_t1839237324_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::ProcessCertificateExtensions(System.Security.Cryptography.X509Certificates.X509ChainElement)
extern "C"  void X509Chain_ProcessCertificateExtensions_m_103628876_0 (X509Chain_t1839237324_0 * __this, X509ChainElement_t1851841192_0 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::IsSignedWith(System.Security.Cryptography.X509Certificates.X509Certificate2,System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  bool X509Chain_IsSignedWith_m292245392_0 (X509Chain_t1839237324_0 * __this, X509Certificate2_t2035941040_0 * ___signed, AsymmetricAlgorithm_t_1233528832_0 * ___pubkey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Chain::GetSubjectKeyIdentifier(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C"  String_t* X509Chain_GetSubjectKeyIdentifier_m_62040069_0 (X509Chain_t1839237324_0 * __this, X509Certificate2_t2035941040_0 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Chain::GetAuthorityKeyIdentifier(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C"  String_t* X509Chain_GetAuthorityKeyIdentifier_m_1687559618_0 (X509Chain_t1839237324_0 * __this, X509Certificate2_t2035941040_0 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Chain::GetAuthorityKeyIdentifier(Mono.Security.X509.X509Crl)
extern "C"  String_t* X509Chain_GetAuthorityKeyIdentifier_m_582299424_0 (X509Chain_t1839237324_0 * __this, X509Crl_t1075555078_0 * ___crl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Chain::GetAuthorityKeyIdentifier(Mono.Security.X509.X509Extension)
extern "C"  String_t* X509Chain_GetAuthorityKeyIdentifier_m_48682930_0 (X509Chain_t1839237324_0 * __this, X509Extension_t_1087971856_0 * ___ext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::CheckRevocationOnChain(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
extern "C"  void X509Chain_CheckRevocationOnChain_m_1853065945_0 (X509Chain_t1839237324_0 * __this, int32_t ___flag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509Chain::CheckRevocation(System.Security.Cryptography.X509Certificates.X509Certificate2,System.Int32,System.Boolean)
extern "C"  int32_t X509Chain_CheckRevocation_m_1814653810_0 (X509Chain_t1839237324_0 * __this, X509Certificate2_t2035941040_0 * ___certificate, int32_t ___ca, bool ___online, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509Chain::CheckRevocation(System.Security.Cryptography.X509Certificates.X509Certificate2,System.Security.Cryptography.X509Certificates.X509Certificate2,System.Boolean)
extern "C"  int32_t X509Chain_CheckRevocation_m_2064228525_0 (X509Chain_t1839237324_0 * __this, X509Certificate2_t2035941040_0 * ___certificate, X509Certificate2_t2035941040_0 * ___ca_cert, bool ___online, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl System.Security.Cryptography.X509Certificates.X509Chain::FindCrl(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C"  X509Crl_t1075555078_0 * X509Chain_FindCrl_m544748869_0 (X509Chain_t1839237324_0 * __this, X509Certificate2_t2035941040_0 * ___caCertificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::ProcessCrlExtensions(Mono.Security.X509.X509Crl)
extern "C"  bool X509Chain_ProcessCrlExtensions_m1682068042_0 (X509Chain_t1839237324_0 * __this, X509Crl_t1075555078_0 * ___crl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::ProcessCrlEntryExtensions(Mono.Security.X509.X509Crl/X509CrlEntry)
extern "C"  bool X509Chain_ProcessCrlEntryExtensions_m919945006_0 (X509Chain_t1839237324_0 * __this, X509CrlEntry_t691101242_0 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
