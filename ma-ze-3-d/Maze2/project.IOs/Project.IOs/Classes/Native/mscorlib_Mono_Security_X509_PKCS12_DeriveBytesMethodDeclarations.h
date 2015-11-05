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

// Mono.Security.X509.PKCS12/DeriveBytes
struct DeriveBytes_t1330;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t820;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.X509.PKCS12/DeriveBytes::.ctor()
extern "C" void DeriveBytes__ctor_m7673 (DeriveBytes_t1330 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::.cctor()
extern "C" void DeriveBytes__cctor_m7674 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::set_HashName(System.String)
extern "C" void DeriveBytes_set_HashName_m7675 (DeriveBytes_t1330 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::set_IterationCount(System.Int32)
extern "C" void DeriveBytes_set_IterationCount_m7676 (DeriveBytes_t1330 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::set_Password(System.Byte[])
extern "C" void DeriveBytes_set_Password_m7677 (DeriveBytes_t1330 * __this, ByteU5BU5D_t820* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::set_Salt(System.Byte[])
extern "C" void DeriveBytes_set_Salt_m7678 (DeriveBytes_t1330 * __this, ByteU5BU5D_t820* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::Adjust(System.Byte[],System.Int32,System.Byte[])
extern "C" void DeriveBytes_Adjust_m7679 (DeriveBytes_t1330 * __this, ByteU5BU5D_t820* ___a, int32_t ___aOff, ByteU5BU5D_t820* ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::Derive(System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t820* DeriveBytes_Derive_m7680 (DeriveBytes_t1330 * __this, ByteU5BU5D_t820* ___diversifier, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::DeriveKey(System.Int32)
extern "C" ByteU5BU5D_t820* DeriveBytes_DeriveKey_m7681 (DeriveBytes_t1330 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::DeriveIV(System.Int32)
extern "C" ByteU5BU5D_t820* DeriveBytes_DeriveIV_m7682 (DeriveBytes_t1330 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::DeriveMAC(System.Int32)
extern "C" ByteU5BU5D_t820* DeriveBytes_DeriveMAC_m7683 (DeriveBytes_t1330 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
