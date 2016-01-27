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

// System.Security.Cryptography.X509Certificates.X509Store
struct X509Store_t682760040_0;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t846388512_0;
// Mono.Security.X509.X509Stores
struct X509Stores_t_1434815725_0;
// Mono.Security.X509.X509Store
struct X509Store_t_459338444_0;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Security_Cryptography_X509Certificat1297963703.h"
#include "System_System_Security_Cryptography_X509Certificat1062394869.h"
#include "System_System_Security_Cryptography_X509Certifica_1853087838.h"

// System.Void System.Security.Cryptography.X509Certificates.X509Store::.ctor(System.Security.Cryptography.X509Certificates.StoreName,System.Security.Cryptography.X509Certificates.StoreLocation)
extern "C"  void X509Store__ctor_m1573680316_0 (X509Store_t682760040_0 * __this, int32_t ___storeName, int32_t ___storeLocation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509Store::get_Certificates()
extern "C"  X509Certificate2Collection_t846388512_0 * X509Store_get_Certificates_m329642048_0 (X509Store_t682760040_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Stores System.Security.Cryptography.X509Certificates.X509Store::get_Factory()
extern "C"  X509Stores_t_1434815725_0 * X509Store_get_Factory_m428109475_0 (X509Store_t682760040_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Store System.Security.Cryptography.X509Certificates.X509Store::get_Store()
extern "C"  X509Store_t_459338444_0 * X509Store_get_Store_m_354446905_0 (X509Store_t682760040_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Store::Close()
extern "C"  void X509Store_Close_m_1882255930_0 (X509Store_t682760040_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Store::Open(System.Security.Cryptography.X509Certificates.OpenFlags)
extern "C"  void X509Store_Open_m_878481750_0 (X509Store_t682760040_0 * __this, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
