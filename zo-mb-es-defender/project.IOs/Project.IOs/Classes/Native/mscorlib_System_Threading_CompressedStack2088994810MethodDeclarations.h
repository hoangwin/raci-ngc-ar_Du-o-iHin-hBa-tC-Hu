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

// System.Threading.CompressedStack
struct CompressedStack_t2088994810_0;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t_2018490193_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2060733842.h"

// System.Void System.Threading.CompressedStack::.ctor(System.Int32)
extern "C"  void CompressedStack__ctor_m2080709323_0 (CompressedStack_t2088994810_0 * __this, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.CompressedStack::.ctor(System.Threading.CompressedStack)
extern "C"  void CompressedStack__ctor_m276924800_0 (CompressedStack_t2088994810_0 * __this, CompressedStack_t2088994810_0 * ___cs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CompressedStack System.Threading.CompressedStack::CreateCopy()
extern "C"  CompressedStack_t2088994810_0 * CompressedStack_CreateCopy_m_973239422_0 (CompressedStack_t2088994810_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CompressedStack System.Threading.CompressedStack::Capture()
extern "C"  CompressedStack_t2088994810_0 * CompressedStack_Capture_m179370023_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.CompressedStack::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void CompressedStack_GetObjectData_m_1907763110_0 (CompressedStack_t2088994810_0 * __this, SerializationInfo_t_2018490193_0 * ___info, StreamingContext_t2060733842_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.CompressedStack::IsEmpty()
extern "C"  bool CompressedStack_IsEmpty_m2144176681_0 (CompressedStack_t2088994810_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
