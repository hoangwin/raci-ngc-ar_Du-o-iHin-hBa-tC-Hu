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

// Mono.Security.X509.X509Stores
struct X509Stores_t1051;
// System.String
struct String_t;
// Mono.Security.X509.X509Store
struct X509Store_t957;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.X509.X509Stores::.ctor(System.String)
extern "C" void X509Stores__ctor_m5855 (X509Stores_t1051 * __this, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::get_TrustedRoot()
extern "C" X509Store_t957 * X509Stores_get_TrustedRoot_m5856 (X509Stores_t1051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::Open(System.String,System.Boolean)
extern "C" X509Store_t957 * X509Stores_Open_m5462 (X509Stores_t1051 * __this, String_t* ___storeName, bool ___create, const MethodInfo* method) IL2CPP_METHOD_ATTR;
