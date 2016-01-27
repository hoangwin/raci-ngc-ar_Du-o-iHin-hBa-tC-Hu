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

// UnityEngine.Experimental.Director.Playable
struct Playable_t_1380704979_0;
// UnityEngine.Experimental.Director.Playable[]
struct PlayableU5BU5D_t303508607_0;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.List`1<UnityEngine.Experimental.Director.Playable>
struct List_1_t1531685671_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Experimental_Director_Pla_1237867136.h"
#include "UnityEngine_UnityEngine_Experimental_Director_Fram1014926530.h"

// System.Void UnityEngine.Experimental.Director.Playable::.ctor()
extern "C"  void Playable__ctor_m334077411_0 (Playable_t_1380704979_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::.ctor(System.Boolean)
extern "C"  void Playable__ctor_m_1729427368_0 (Playable_t_1380704979_0 * __this, bool ___callCPPConstructor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::Dispose(System.Boolean)
extern "C"  void Playable_Dispose_m_59140369_0 (Playable_t_1380704979_0 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.Playable::GetUniqueIDInternal()
extern "C"  int32_t Playable_GetUniqueIDInternal_m1526969134_0 (Playable_t_1380704979_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::Connect(UnityEngine.Experimental.Director.Playable,UnityEngine.Experimental.Director.Playable)
extern "C"  bool Playable_Connect_m753792329_0 (Object_t * __this /* static, unused */, Playable_t_1380704979_0 * ___source, Playable_t_1380704979_0 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::Connect(UnityEngine.Experimental.Director.Playable,UnityEngine.Experimental.Director.Playable,System.Int32,System.Int32)
extern "C"  bool Playable_Connect_m1305428597_0 (Object_t * __this /* static, unused */, Playable_t_1380704979_0 * ___source, Playable_t_1380704979_0 * ___target, int32_t ___sourceOutputPort, int32_t ___targetInputPort, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::Disconnect(UnityEngine.Experimental.Director.Playable,System.Int32)
extern "C"  void Playable_Disconnect_m_1805787057_0 (Object_t * __this /* static, unused */, Playable_t_1380704979_0 * ___target, int32_t ___inputPort, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::ReleaseEnginePlayable()
extern "C"  void Playable_ReleaseEnginePlayable_m596806620_0 (Playable_t_1380704979_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::InstantiateEnginePlayable()
extern "C"  void Playable_InstantiateEnginePlayable_m_925097927_0 (Playable_t_1380704979_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.Playable::GenerateUniqueId()
extern "C"  int32_t Playable_GenerateUniqueId_m2146046688_0 (Playable_t_1380704979_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::SetInputWeightInternal(System.Int32,System.Single)
extern "C"  bool Playable_SetInputWeightInternal_m_750631438_0 (Playable_t_1380704979_0 * __this, int32_t ___inputIndex, float ___weight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Experimental.Director.Playable::GetInputWeightInternal(System.Int32)
extern "C"  float Playable_GetInputWeightInternal_m_1368718113_0 (Playable_t_1380704979_0 * __this, int32_t ___inputIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.Experimental.Director.Playable::get_time()
extern "C"  double Playable_get_time_m188535056_0 (Playable_t_1380704979_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::set_time(System.Double)
extern "C"  void Playable_set_time_m1337741429_0 (Playable_t_1380704979_0 * __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Experimental.Director.PlayState UnityEngine.Experimental.Director.Playable::get_state()
extern "C"  int32_t Playable_get_state_m_1399027316_0 (Playable_t_1380704979_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::set_state(UnityEngine.Experimental.Director.PlayState)
extern "C"  void Playable_set_state_m628503053_0 (Playable_t_1380704979_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::ConnectInternal(UnityEngine.Experimental.Director.Playable,UnityEngine.Experimental.Director.Playable,System.Int32,System.Int32)
extern "C"  bool Playable_ConnectInternal_m2078195592_0 (Object_t * __this /* static, unused */, Playable_t_1380704979_0 * ___source, Playable_t_1380704979_0 * ___target, int32_t ___sourceOutputPort, int32_t ___targetInputPort, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::DisconnectInternal(UnityEngine.Experimental.Director.Playable,System.Int32)
extern "C"  void Playable_DisconnectInternal_m2025479886_0 (Object_t * __this /* static, unused */, Playable_t_1380704979_0 * ___target, int32_t ___inputPort, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Experimental.Director.Playable UnityEngine.Experimental.Director.Playable::GetInput(System.Int32)
extern "C"  Playable_t_1380704979_0 * Playable_GetInput_m_1951622824_0 (Playable_t_1380704979_0 * __this, int32_t ___inputPort, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Experimental.Director.Playable[] UnityEngine.Experimental.Director.Playable::GetInputs()
extern "C"  PlayableU5BU5D_t303508607_0* Playable_GetInputs_m_1593316012_0 (Playable_t_1380704979_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.Playable::get_inputCount()
extern "C"  int32_t Playable_get_inputCount_m1751152777_0 (Playable_t_1380704979_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.Playable::get_outputCount()
extern "C"  int32_t Playable_get_outputCount_m_5576826_0 (Playable_t_1380704979_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::ClearInputs()
extern "C"  void Playable_ClearInputs_m1878099875_0 (Playable_t_1380704979_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Experimental.Director.Playable UnityEngine.Experimental.Director.Playable::GetOutput(System.Int32)
extern "C"  Playable_t_1380704979_0 * Playable_GetOutput_m1530310341_0 (Playable_t_1380704979_0 * __this, int32_t ___outputPort, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Experimental.Director.Playable[] UnityEngine.Experimental.Director.Playable::GetOutputs()
extern "C"  PlayableU5BU5D_t303508607_0* Playable_GetOutputs_m_1318483331_0 (Playable_t_1380704979_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::GetInputsInternal(System.Object)
extern "C"  void Playable_GetInputsInternal_m1857583697_0 (Playable_t_1380704979_0 * __this, Object_t * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::GetOutputsInternal(System.Object)
extern "C"  void Playable_GetOutputsInternal_m1702084778_0 (Playable_t_1380704979_0 * __this, Object_t * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::Finalize()
extern "C"  void Playable_Finalize_m_1156858671_0 (Playable_t_1380704979_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::Dispose()
extern "C"  void Playable_Dispose_m1155839892_0 (Playable_t_1380704979_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::Equals(System.Object)
extern "C"  bool Playable_Equals_m_514044780_0 (Playable_t_1380704979_0 * __this, Object_t * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.Playable::GetHashCode()
extern "C"  int32_t Playable_GetHashCode_m291506040_0 (Playable_t_1380704979_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::CompareIntPtr(UnityEngine.Experimental.Director.Playable,UnityEngine.Experimental.Director.Playable)
extern "C"  bool Playable_CompareIntPtr_m285944849_0 (Object_t * __this /* static, unused */, Playable_t_1380704979_0 * ___lhs, Playable_t_1380704979_0 * ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::IsNativePlayableAlive(UnityEngine.Experimental.Director.Playable)
extern "C"  bool Playable_IsNativePlayableAlive_m_1488680302_0 (Object_t * __this /* static, unused */, Playable_t_1380704979_0 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::CheckPlayableValidity(UnityEngine.Experimental.Director.Playable,System.String)
extern "C"  bool Playable_CheckPlayableValidity_m598517912_0 (Object_t * __this /* static, unused */, Playable_t_1380704979_0 * ___playable, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::CheckInputBounds(System.Int32)
extern "C"  bool Playable_CheckInputBounds_m1458023351_0 (Playable_t_1380704979_0 * __this, int32_t ___inputIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::CheckInputBounds(System.Int32,System.Boolean)
extern "C"  bool Playable_CheckInputBounds_m1095657528_0 (Playable_t_1380704979_0 * __this, int32_t ___inputIndex, bool ___acceptAny, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Experimental.Director.Playable::GetInputWeight(System.Int32)
extern "C"  float Playable_GetInputWeight_m745267058_0 (Playable_t_1380704979_0 * __this, int32_t ___inputIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::SetInputWeight(System.Int32,System.Single)
extern "C"  bool Playable_SetInputWeight_m_870892277_0 (Playable_t_1380704979_0 * __this, int32_t ___inputIndex, float ___weight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::GetInputs(System.Collections.Generic.List`1<UnityEngine.Experimental.Director.Playable>)
extern "C"  void Playable_GetInputs_m1724028003_0 (Playable_t_1380704979_0 * __this, List_1_t1531685671_0 * ___inputList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::GetOutputs(System.Collections.Generic.List`1<UnityEngine.Experimental.Director.Playable>)
extern "C"  void Playable_GetOutputs_m_1048229196_0 (Playable_t_1380704979_0 * __this, List_1_t1531685671_0 * ___outputList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::PrepareFrame(UnityEngine.Experimental.Director.FrameData)
extern "C"  void Playable_PrepareFrame_m669220321_0 (Playable_t_1380704979_0 * __this, FrameData_t1014926530_0  ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::ProcessFrame(UnityEngine.Experimental.Director.FrameData,System.Object)
extern "C"  void Playable_ProcessFrame_m_878264163_0 (Playable_t_1380704979_0 * __this, FrameData_t1014926530_0  ___info, Object_t * ___playerData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::OnSetTime(System.Single)
extern "C"  void Playable_OnSetTime_m_1140581820_0 (Playable_t_1380704979_0 * __this, float ___localTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::OnSetPlayState(UnityEngine.Experimental.Director.PlayState)
extern "C"  void Playable_OnSetPlayState_m_1116913733_0 (Playable_t_1380704979_0 * __this, int32_t ___newState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::op_Equality(UnityEngine.Experimental.Director.Playable,UnityEngine.Experimental.Director.Playable)
extern "C"  bool Playable_op_Equality_m171174999_0 (Object_t * __this /* static, unused */, Playable_t_1380704979_0 * ___x, Playable_t_1380704979_0 * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::op_Inequality(UnityEngine.Experimental.Director.Playable,UnityEngine.Experimental.Director.Playable)
extern "C"  bool Playable_op_Inequality_m_2115798138_0 (Object_t * __this /* static, unused */, Playable_t_1380704979_0 * ___x, Playable_t_1380704979_0 * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::op_Implicit(UnityEngine.Experimental.Director.Playable)
extern "C"  bool Playable_op_Implicit_m_1180190711_0 (Object_t * __this /* static, unused */, Playable_t_1380704979_0 * ___exists, const MethodInfo* method) IL2CPP_METHOD_ATTR;
