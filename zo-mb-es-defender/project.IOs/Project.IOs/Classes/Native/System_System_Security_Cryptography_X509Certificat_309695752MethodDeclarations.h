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

// System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension
struct X509SubjectKeyIdentifierExtension_t_309695752_0;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t_2130661927_0;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t1913708757_0;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Security_Cryptography_X509Certifica_1237943804.h"
#include "System_System_Security_Cryptography_AsnDecodeStat_2089742725.h"

// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor()
extern "C"  void X509SubjectKeyIdentifierExtension__ctor_m_1335854590_0 (X509SubjectKeyIdentifierExtension_t_309695752_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
extern "C"  void X509SubjectKeyIdentifierExtension__ctor_m_1882605250_0 (X509SubjectKeyIdentifierExtension_t_309695752_0 * __this, AsnEncodedData_t_2130661927_0 * ___encodedSubjectKeyIdentifier, bool ___critical, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Byte[],System.Boolean)
extern "C"  void X509SubjectKeyIdentifierExtension__ctor_m_344616036_0 (X509SubjectKeyIdentifierExtension_t_309695752_0 * __this, ByteU5BU5D_t1362406281_0* ___subjectKeyIdentifier, bool ___critical, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.String,System.Boolean)
extern "C"  void X509SubjectKeyIdentifierExtension__ctor_m1109455121_0 (X509SubjectKeyIdentifierExtension_t_309695752_0 * __this, String_t* ___subjectKeyIdentifier, bool ___critical, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.X509Certificates.PublicKey,System.Boolean)
extern "C"  void X509SubjectKeyIdentifierExtension__ctor_m_407828816_0 (X509SubjectKeyIdentifierExtension_t_309695752_0 * __this, PublicKey_t1913708757_0 * ___key, bool ___critical, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.X509Certificates.PublicKey,System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm,System.Boolean)
extern "C"  void X509SubjectKeyIdentifierExtension__ctor_m_566294422_0 (X509SubjectKeyIdentifierExtension_t_309695752_0 * __this, PublicKey_t1913708757_0 * ___key, int32_t ___algorithm, bool ___critical, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::get_SubjectKeyIdentifier()
extern "C"  String_t* X509SubjectKeyIdentifierExtension_get_SubjectKeyIdentifier_m1477640894_0 (X509SubjectKeyIdentifierExtension_t_309695752_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern "C"  void X509SubjectKeyIdentifierExtension_CopyFrom_m136762226_0 (X509SubjectKeyIdentifierExtension_t_309695752_0 * __this, AsnEncodedData_t_2130661927_0 * ___encodedData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHexChar(System.Char)
extern "C"  uint8_t X509SubjectKeyIdentifierExtension_FromHexChar_m_69837904_0 (Object_t * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHexChars(System.Char,System.Char)
extern "C"  uint8_t X509SubjectKeyIdentifierExtension_FromHexChars_m_1779816876_0 (Object_t * __this /* static, unused */, uint16_t ___c1, uint16_t ___c2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHex(System.String)
extern "C"  ByteU5BU5D_t1362406281_0* X509SubjectKeyIdentifierExtension_FromHex_m_1022922283_0 (Object_t * __this /* static, unused */, String_t* ___hex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::Decode(System.Byte[])
extern "C"  int32_t X509SubjectKeyIdentifierExtension_Decode_m_192148089_0 (X509SubjectKeyIdentifierExtension_t_309695752_0 * __this, ByteU5BU5D_t1362406281_0* ___extension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::Encode()
extern "C"  ByteU5BU5D_t1362406281_0* X509SubjectKeyIdentifierExtension_Encode_m_57689254_0 (X509SubjectKeyIdentifierExtension_t_309695752_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::ToString(System.Boolean)
extern "C"  String_t* X509SubjectKeyIdentifierExtension_ToString_m_221491906_0 (X509SubjectKeyIdentifierExtension_t_309695752_0 * __this, bool ___multiLine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
