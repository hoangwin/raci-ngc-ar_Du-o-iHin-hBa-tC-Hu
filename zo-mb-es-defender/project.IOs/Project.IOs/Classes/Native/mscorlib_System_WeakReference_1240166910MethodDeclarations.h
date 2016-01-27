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

// System.WeakReference
struct WeakReference_t_1240166910_0;
// System.Object
struct Object_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t_2018490193_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2060733842.h"

// System.Void System.WeakReference::.ctor()
extern "C"  void WeakReference__ctor_m_454857990_0 (WeakReference_t_1240166910_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.WeakReference::.ctor(System.Object)
extern "C"  void WeakReference__ctor_m1761774950_0 (WeakReference_t_1240166910_0 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.WeakReference::.ctor(System.Object,System.Boolean)
extern "C"  void WeakReference__ctor_m_1764422583_0 (WeakReference_t_1240166910_0 * __this, Object_t * ___target, bool ___trackResurrection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.WeakReference::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WeakReference__ctor_m1392239139_0 (WeakReference_t_1240166910_0 * __this, SerializationInfo_t_2018490193_0 * ___info, StreamingContext_t2060733842_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.WeakReference::AllocateHandle(System.Object)
extern "C"  void WeakReference_AllocateHandle_m1783929473_0 (WeakReference_t_1240166910_0 * __this, Object_t * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.WeakReference::get_Target()
extern "C"  Object_t * WeakReference_get_Target_m1672141897_0 (WeakReference_t_1240166910_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.WeakReference::get_TrackResurrection()
extern "C"  bool WeakReference_get_TrackResurrection_m2095420877_0 (WeakReference_t_1240166910_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.WeakReference::Finalize()
extern "C"  void WeakReference_Finalize_m_976612754_0 (WeakReference_t_1240166910_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.WeakReference::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WeakReference_GetObjectData_m_257635250_0 (WeakReference_t_1240166910_0 * __this, SerializationInfo_t_2018490193_0 * ___info, StreamingContext_t2060733842_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
