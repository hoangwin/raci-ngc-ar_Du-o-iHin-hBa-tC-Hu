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

// System.Threading.ExecutionContext
struct ExecutionContext_t24524378_0;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t_2018490193_0;
// System.Security.SecurityContext
struct SecurityContext_t_1172839764_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2060733842.h"

// System.Void System.Threading.ExecutionContext::.ctor()
extern "C"  void ExecutionContext__ctor_m247602348_0 (ExecutionContext_t24524378_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ExecutionContext::.ctor(System.Threading.ExecutionContext)
extern "C"  void ExecutionContext__ctor_m550470476_0 (ExecutionContext_t24524378_0 * __this, ExecutionContext_t24524378_0 * ___ec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ExecutionContext::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ExecutionContext__ctor_m573218565_0 (ExecutionContext_t24524378_0 * __this, SerializationInfo_t_2018490193_0 * ___info, StreamingContext_t2060733842_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.ExecutionContext System.Threading.ExecutionContext::Capture()
extern "C"  ExecutionContext_t24524378_0 * ExecutionContext_Capture_m20586159_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ExecutionContext::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ExecutionContext_GetObjectData_m1456913356_0 (ExecutionContext_t24524378_0 * __this, SerializationInfo_t_2018490193_0 * ___info, StreamingContext_t2060733842_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityContext System.Threading.ExecutionContext::get_SecurityContext()
extern "C"  SecurityContext_t_1172839764_0 * ExecutionContext_get_SecurityContext_m216088539_0 (ExecutionContext_t24524378_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ExecutionContext::set_SecurityContext(System.Security.SecurityContext)
extern "C"  void ExecutionContext_set_SecurityContext_m1228391060_0 (ExecutionContext_t24524378_0 * __this, SecurityContext_t_1172839764_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ExecutionContext::get_FlowSuppressed()
extern "C"  bool ExecutionContext_get_FlowSuppressed_m1728459637_0 (ExecutionContext_t24524378_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ExecutionContext::IsFlowSuppressed()
extern "C"  bool ExecutionContext_IsFlowSuppressed_m907608672_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
