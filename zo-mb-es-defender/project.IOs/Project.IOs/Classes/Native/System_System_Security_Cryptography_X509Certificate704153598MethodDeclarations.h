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

// System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension
struct X509BasicConstraintsExtension_t704153598_0;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t_2130661927_0;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Security_Cryptography_AsnDecodeStat_2089742725.h"

// System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::.ctor()
extern "C"  void X509BasicConstraintsExtension__ctor_m_277055140_0 (X509BasicConstraintsExtension_t704153598_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
extern "C"  void X509BasicConstraintsExtension__ctor_m_974548704_0 (X509BasicConstraintsExtension_t704153598_0 * __this, AsnEncodedData_t_2130661927_0 * ___encodedBasicConstraints, bool ___critical, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::.ctor(System.Boolean,System.Boolean,System.Int32,System.Boolean)
extern "C"  void X509BasicConstraintsExtension__ctor_m_546315850_0 (X509BasicConstraintsExtension_t704153598_0 * __this, bool ___certificateAuthority, bool ___hasPathLengthConstraint, int32_t ___pathLengthConstraint, bool ___critical, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::get_CertificateAuthority()
extern "C"  bool X509BasicConstraintsExtension_get_CertificateAuthority_m_2074944479_0 (X509BasicConstraintsExtension_t704153598_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::get_HasPathLengthConstraint()
extern "C"  bool X509BasicConstraintsExtension_get_HasPathLengthConstraint_m_506434537_0 (X509BasicConstraintsExtension_t704153598_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::get_PathLengthConstraint()
extern "C"  int32_t X509BasicConstraintsExtension_get_PathLengthConstraint_m_1290435953_0 (X509BasicConstraintsExtension_t704153598_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern "C"  void X509BasicConstraintsExtension_CopyFrom_m1321548708_0 (X509BasicConstraintsExtension_t704153598_0 * __this, AsnEncodedData_t_2130661927_0 * ___asnEncodedData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::Decode(System.Byte[])
extern "C"  int32_t X509BasicConstraintsExtension_Decode_m_1473030809_0 (X509BasicConstraintsExtension_t704153598_0 * __this, ByteU5BU5D_t1362406281_0* ___extension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::Encode()
extern "C"  ByteU5BU5D_t1362406281_0* X509BasicConstraintsExtension_Encode_m_789840220_0 (X509BasicConstraintsExtension_t704153598_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::ToString(System.Boolean)
extern "C"  String_t* X509BasicConstraintsExtension_ToString_m_513685896_0 (X509BasicConstraintsExtension_t704153598_0 * __this, bool ___multiLine, const MethodInfo* method) IL2CPP_METHOD_ATTR;