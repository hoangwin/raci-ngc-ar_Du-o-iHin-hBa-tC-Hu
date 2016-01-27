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

// UnityEngine.UnityException
struct UnityException_t_837308783_0;
// System.String
struct String_t;
// System.Exception
struct Exception_t_116002698_0;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t_2018490193_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2060733842.h"

// System.Void UnityEngine.UnityException::.ctor()
extern "C"  void UnityException__ctor_m_644550111_0 (UnityException_t_837308783_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UnityException::.ctor(System.String)
extern "C"  void UnityException__ctor_m1554762831_0 (UnityException_t_837308783_0 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UnityException::.ctor(System.String,System.Exception)
extern "C"  void UnityException__ctor_m_1459009169_0 (UnityException_t_837308783_0 * __this, String_t* ___message, Exception_t_116002698_0 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UnityException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void UnityException__ctor_m1146123324_0 (UnityException_t_837308783_0 * __this, SerializationInfo_t_2018490193_0 * ___info, StreamingContext_t2060733842_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
