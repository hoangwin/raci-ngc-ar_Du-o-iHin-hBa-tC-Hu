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

// System.SystemException
struct SystemException_t_251658317_0;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t_2018490193_0;
// System.Exception
struct Exception_t_116002698_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2060733842.h"

// System.Void System.SystemException::.ctor()
extern "C"  void SystemException__ctor_m_807170619_0 (SystemException_t_251658317_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.SystemException::.ctor(System.String)
extern "C"  void SystemException__ctor_m_293576269_0 (SystemException_t_251658317_0 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.SystemException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void SystemException__ctor_m_1606718628_0 (SystemException_t_251658317_0 * __this, SerializationInfo_t_2018490193_0 * ___info, StreamingContext_t2060733842_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.SystemException::.ctor(System.String,System.Exception)
extern "C"  void SystemException__ctor_m_938880877_0 (SystemException_t_251658317_0 * __this, String_t* ___message, Exception_t_116002698_0 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
