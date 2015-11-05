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

// System.Security.SecurityContext
struct SecurityContext_t1749;
// System.Threading.CompressedStack
struct CompressedStack_t1750;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.SecurityContext::.ctor()
extern "C" void SecurityContext__ctor_m10337 (SecurityContext_t1749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityContext::.ctor(System.Security.SecurityContext)
extern "C" void SecurityContext__ctor_m10338 (SecurityContext_t1749 * __this, SecurityContext_t1749 * ___sc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityContext System.Security.SecurityContext::Capture()
extern "C" SecurityContext_t1749 * SecurityContext_Capture_m10339 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityContext::get_FlowSuppressed()
extern "C" bool SecurityContext_get_FlowSuppressed_m10340 (SecurityContext_t1749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CompressedStack System.Security.SecurityContext::get_CompressedStack()
extern "C" CompressedStack_t1750 * SecurityContext_get_CompressedStack_m10341 (SecurityContext_t1749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
