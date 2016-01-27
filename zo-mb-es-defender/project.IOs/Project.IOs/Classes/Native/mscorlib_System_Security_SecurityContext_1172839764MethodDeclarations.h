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
struct SecurityContext_t_1172839764_0;
// System.Threading.CompressedStack
struct CompressedStack_t2088994810_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.SecurityContext::.ctor()
extern "C"  void SecurityContext__ctor_m_123323438_0 (SecurityContext_t_1172839764_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityContext::.ctor(System.Security.SecurityContext)
extern "C"  void SecurityContext__ctor_m1936058452_0 (SecurityContext_t_1172839764_0 * __this, SecurityContext_t_1172839764_0 * ___sc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityContext System.Security.SecurityContext::Capture()
extern "C"  SecurityContext_t_1172839764_0 * SecurityContext_Capture_m_1759772305_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityContext::get_FlowSuppressed()
extern "C"  bool SecurityContext_get_FlowSuppressed_m420202521_0 (SecurityContext_t_1172839764_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CompressedStack System.Security.SecurityContext::get_CompressedStack()
extern "C"  CompressedStack_t2088994810_0 * SecurityContext_get_CompressedStack_m594879439_0 (SecurityContext_t_1172839764_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
