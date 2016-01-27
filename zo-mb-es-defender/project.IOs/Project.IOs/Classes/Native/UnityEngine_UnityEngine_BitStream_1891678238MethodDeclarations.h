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

// UnityEngine.BitStream
struct BitStream_t_1891678238_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Quaternion_1951689871.h"
#include "UnityEngine_UnityEngine_Vector3303158795.h"
#include "UnityEngine_UnityEngine_NetworkViewID119664869.h"
#include "UnityEngine_UnityEngine_NetworkPlayer658241662.h"

// System.Void UnityEngine.BitStream::.ctor()
extern "C"  void BitStream__ctor_m_347067360_0 (BitStream_t_1891678238_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serializeb(System.Int32&)
extern "C"  void BitStream_Serializeb_m_1566239699_0 (BitStream_t_1891678238_0 * __this, int32_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serializec(System.Char&)
extern "C"  void BitStream_Serializec_m_1876159906_0 (BitStream_t_1891678238_0 * __this, uint16_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serializes(System.Int16&)
extern "C"  void BitStream_Serializes_m1379945554_0 (BitStream_t_1891678238_0 * __this, int16_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serializei(System.Int32&)
extern "C"  void BitStream_Serializei_m1463666006_0 (BitStream_t_1891678238_0 * __this, int32_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serializef(System.Single&,System.Single)
extern "C"  void BitStream_Serializef_m745934178_0 (BitStream_t_1891678238_0 * __this, float* ___value, float ___maximumDelta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serializeq(UnityEngine.Quaternion&,System.Single)
extern "C"  void BitStream_Serializeq_m4825889_0 (BitStream_t_1891678238_0 * __this, Quaternion_t52999491_0 * ___value, float ___maximumDelta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::INTERNAL_CALL_Serializeq(UnityEngine.BitStream,UnityEngine.Quaternion&,System.Single)
extern "C"  void BitStream_INTERNAL_CALL_Serializeq_m_1349715270_0 (Object_t * __this /* static, unused */, BitStream_t_1891678238_0 * ___self, Quaternion_t52999491_0 * ___value, float ___maximumDelta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serializev(UnityEngine.Vector3&,System.Single)
extern "C"  void BitStream_Serializev_m2025246298_0 (BitStream_t_1891678238_0 * __this, Vector3_t303158795_0 * ___value, float ___maximumDelta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::INTERNAL_CALL_Serializev(UnityEngine.BitStream,UnityEngine.Vector3&,System.Single)
extern "C"  void BitStream_INTERNAL_CALL_Serializev_m928884041_0 (Object_t * __this /* static, unused */, BitStream_t_1891678238_0 * ___self, Vector3_t303158795_0 * ___value, float ___maximumDelta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serializen(UnityEngine.NetworkViewID&)
extern "C"  void BitStream_Serializen_m1340978949_0 (BitStream_t_1891678238_0 * __this, NetworkViewID_t119664869_0 * ___viewID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::INTERNAL_CALL_Serializen(UnityEngine.BitStream,UnityEngine.NetworkViewID&)
extern "C"  void BitStream_INTERNAL_CALL_Serializen_m1742444286_0 (Object_t * __this /* static, unused */, BitStream_t_1891678238_0 * ___self, NetworkViewID_t119664869_0 * ___viewID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(System.Boolean&)
extern "C"  void BitStream_Serialize_m390089021_0 (BitStream_t_1891678238_0 * __this, bool* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(System.Char&)
extern "C"  void BitStream_Serialize_m_1552855311_0 (BitStream_t_1891678238_0 * __this, uint16_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(System.Int16&)
extern "C"  void BitStream_Serialize_m1625036513_0 (BitStream_t_1891678238_0 * __this, int16_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(System.Int32&)
extern "C"  void BitStream_Serialize_m_982887449_0 (BitStream_t_1891678238_0 * __this, int32_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(System.Single&)
extern "C"  void BitStream_Serialize_m2064522995_0 (BitStream_t_1891678238_0 * __this, float* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(System.Single&,System.Single)
extern "C"  void BitStream_Serialize_m622035106_0 (BitStream_t_1891678238_0 * __this, float* ___value, float ___maxDelta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(UnityEngine.Quaternion&)
extern "C"  void BitStream_Serialize_m_1532272871_0 (BitStream_t_1891678238_0 * __this, Quaternion_t52999491_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(UnityEngine.Quaternion&,System.Single)
extern "C"  void BitStream_Serialize_m_730023482_0 (BitStream_t_1891678238_0 * __this, Quaternion_t52999491_0 * ___value, float ___maxDelta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(UnityEngine.Vector3&)
extern "C"  void BitStream_Serialize_m753399111_0 (BitStream_t_1891678238_0 * __this, Vector3_t303158795_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(UnityEngine.Vector3&,System.Single)
extern "C"  void BitStream_Serialize_m1992343662_0 (BitStream_t_1891678238_0 * __this, Vector3_t303158795_0 * ___value, float ___maxDelta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(UnityEngine.NetworkPlayer&)
extern "C"  void BitStream_Serialize_m_1449974326_0 (BitStream_t_1891678238_0 * __this, NetworkPlayer_t658241662_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(UnityEngine.NetworkViewID&)
extern "C"  void BitStream_Serialize_m_1468938537_0 (BitStream_t_1891678238_0 * __this, NetworkViewID_t119664869_0 * ___viewID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.BitStream::get_isReading()
extern "C"  bool BitStream_get_isReading_m1625418235_0 (BitStream_t_1891678238_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.BitStream::get_isWriting()
extern "C"  bool BitStream_get_isWriting_m_775143847_0 (BitStream_t_1891678238_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BitStream::Serialize(System.String&)
extern "C"  void BitStream_Serialize_m1778986188_0 (BitStream_t_1891678238_0 * __this, String_t** ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
