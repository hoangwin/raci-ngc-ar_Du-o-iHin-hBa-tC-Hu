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


#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_MazeDirection.h"
#include "AssemblyU2DCSharp_IntVector2.h"
#include "UnityEngine_UnityEngine_Quaternion.h"

// System.Void MazeDirections::.cctor()
extern "C" void MazeDirections__cctor_m344 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MazeDirection MazeDirections::get_RandomValue()
extern "C" int32_t MazeDirections_get_RandomValue_m345 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MazeDirection MazeDirections::GetOpposite(MazeDirection)
extern "C" int32_t MazeDirections_GetOpposite_m346 (Object_t * __this /* static, unused */, int32_t ___direction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MazeDirection MazeDirections::GetNextClockwise(MazeDirection)
extern "C" int32_t MazeDirections_GetNextClockwise_m347 (Object_t * __this /* static, unused */, int32_t ___direction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MazeDirection MazeDirections::GetNextCounterclockwise(MazeDirection)
extern "C" int32_t MazeDirections_GetNextCounterclockwise_m348 (Object_t * __this /* static, unused */, int32_t ___direction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// IntVector2 MazeDirections::ToIntVector2(MazeDirection)
extern "C" IntVector2_t70  MazeDirections_ToIntVector2_m349 (Object_t * __this /* static, unused */, int32_t ___direction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion MazeDirections::ToRotation(MazeDirection)
extern "C" Quaternion_t18  MazeDirections_ToRotation_m350 (Object_t * __this /* static, unused */, int32_t ___direction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
