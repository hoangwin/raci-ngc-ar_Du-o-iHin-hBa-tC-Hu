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

// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t2035941040_0;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;
// System.Security.Cryptography.X509Certificates.X509ExtensionCollection
struct X509ExtensionCollection_t_838069572_0;
// System.Security.Cryptography.X509Certificates.X500DistinguishedName
struct X500DistinguishedName_t_1039284231_0;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t_1233528832_0;
// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t1913708757_0;
// System.String
struct String_t;
// System.Security.Cryptography.Oid
struct Oid_t_1768012067_0;
// Mono.Security.ASN1
struct ASN1_t_79756206_0;
// System.Text.StringBuilder
struct StringBuilder_t1359700700_0;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1541895718_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime_1242318096.h"
#include "System_System_Security_Cryptography_X509Certifica_1849882868.h"
#include "mscorlib_System_Security_Cryptography_X509Certific1495990748.h"

// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.ctor(System.Byte[])
extern "C"  void X509Certificate2__ctor_m_227204523_0 (X509Certificate2_t2035941040_0 * __this, ByteU5BU5D_t1362406281_0* ___rawData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.cctor()
extern "C"  void X509Certificate2__cctor_m_824272519_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ExtensionCollection System.Security.Cryptography.X509Certificates.X509Certificate2::get_Extensions()
extern "C"  X509ExtensionCollection_t_838069572_0 * X509Certificate2_get_Extensions_m_920589734_0 (X509Certificate2_t2035941040_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X500DistinguishedName System.Security.Cryptography.X509Certificates.X509Certificate2::get_IssuerName()
extern "C"  X500DistinguishedName_t_1039284231_0 * X509Certificate2_get_IssuerName_m_1999133475_0 (X509Certificate2_t2035941040_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate2::get_NotAfter()
extern "C"  DateTime_t_1242318096_0  X509Certificate2_get_NotAfter_m_864795669_0 (X509Certificate2_t2035941040_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate2::get_NotBefore()
extern "C"  DateTime_t_1242318096_0  X509Certificate2_get_NotBefore_m_1322911534_0 (X509Certificate2_t2035941040_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.X509Certificate2::get_PrivateKey()
extern "C"  AsymmetricAlgorithm_t_1233528832_0 * X509Certificate2_get_PrivateKey_m_1398759088_0 (X509Certificate2_t2035941040_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.PublicKey System.Security.Cryptography.X509Certificates.X509Certificate2::get_PublicKey()
extern "C"  PublicKey_t1913708757_0 * X509Certificate2_get_PublicKey_m2119837179_0 (X509Certificate2_t2035941040_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::get_SerialNumber()
extern "C"  String_t* X509Certificate2_get_SerialNumber_m1521011849_0 (X509Certificate2_t2035941040_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.X509Certificate2::get_SignatureAlgorithm()
extern "C"  Oid_t_1768012067_0 * X509Certificate2_get_SignatureAlgorithm_m_1225069284_0 (X509Certificate2_t2035941040_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X500DistinguishedName System.Security.Cryptography.X509Certificates.X509Certificate2::get_SubjectName()
extern "C"  X500DistinguishedName_t_1039284231_0 * X509Certificate2_get_SubjectName_m_1336872426_0 (X509Certificate2_t2035941040_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::get_Thumbprint()
extern "C"  String_t* X509Certificate2_get_Thumbprint_m_50941367_0 (X509Certificate2_t2035941040_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509Certificate2::get_Version()
extern "C"  int32_t X509Certificate2_get_Version_m1927399907_0 (X509Certificate2_t2035941040_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::GetNameInfo(System.Security.Cryptography.X509Certificates.X509NameType,System.Boolean)
extern "C"  String_t* X509Certificate2_GetNameInfo_m402390219_0 (X509Certificate2_t2035941040_0 * __this, int32_t ___nameType, bool ___forIssuer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 System.Security.Cryptography.X509Certificates.X509Certificate2::Find(System.Byte[],Mono.Security.ASN1)
extern "C"  ASN1_t_79756206_0 * X509Certificate2_Find_m833446211_0 (X509Certificate2_t2035941040_0 * __this, ByteU5BU5D_t1362406281_0* ___oid, ASN1_t_79756206_0 * ___dn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::GetValueAsString(Mono.Security.ASN1)
extern "C"  String_t* X509Certificate2_GetValueAsString_m1286925493_0 (X509Certificate2_t2035941040_0 * __this, ASN1_t_79756206_0 * ___pair, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::ImportPkcs12(System.Byte[],System.String)
extern "C"  void X509Certificate2_ImportPkcs12_m_301090294_0 (X509Certificate2_t2035941040_0 * __this, ByteU5BU5D_t1362406281_0* ___rawData, String_t* ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::Import(System.Byte[],System.String,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags)
extern "C"  void X509Certificate2_Import_m_481578754_0 (X509Certificate2_t2035941040_0 * __this, ByteU5BU5D_t1362406281_0* ___rawData, String_t* ___password, int32_t ___keyStorageFlags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::Reset()
extern "C"  void X509Certificate2_Reset_m414840175_0 (X509Certificate2_t2035941040_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::ToString()
extern "C"  String_t* X509Certificate2_ToString_m_1025312079_0 (X509Certificate2_t2035941040_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::ToString(System.Boolean)
extern "C"  String_t* X509Certificate2_ToString_m_134234014_0 (X509Certificate2_t2035941040_0 * __this, bool ___verbose, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::AppendBuffer(System.Text.StringBuilder,System.Byte[])
extern "C"  void X509Certificate2_AppendBuffer_m_777724997_0 (Object_t * __this /* static, unused */, StringBuilder_t1359700700_0 * ___sb, ByteU5BU5D_t1362406281_0* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate2::Verify()
extern "C"  bool X509Certificate2_Verify_m1574874641_0 (X509Certificate2_t2035941040_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate System.Security.Cryptography.X509Certificates.X509Certificate2::get_MonoCertificate()
extern "C"  X509Certificate_t1541895718_0 * X509Certificate2_get_MonoCertificate_m_1572999414_0 (X509Certificate2_t2035941040_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
