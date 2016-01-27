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

// System.MissingMemberException
struct MissingMemberException_t1292808498_0;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t_2018490193_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2060733842.h"

// System.Void System.MissingMemberException::.ctor()
extern "C"  void MissingMemberException__ctor_m_17520228_0 (MissingMemberException_t1292808498_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MissingMemberException::.ctor(System.String)
extern "C"  void MissingMemberException__ctor_m_584835346_0 (MissingMemberException_t1292808498_0 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MissingMemberException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void MissingMemberException__ctor_m_1425425093_0 (MissingMemberException_t1292808498_0 * __this, SerializationInfo_t_2018490193_0 * ___info, StreamingContext_t2060733842_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MissingMemberException::.ctor(System.String,System.String)
extern "C"  void MissingMemberException__ctor_m_2130924018_0 (MissingMemberException_t1292808498_0 * __this, String_t* ___className, String_t* ___memberName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MissingMemberException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void MissingMemberException_GetObjectData_m_2090174672_0 (MissingMemberException_t1292808498_0 * __this, SerializationInfo_t_2018490193_0 * ___info, StreamingContext_t2060733842_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MissingMemberException::get_Message()
extern "C"  String_t* MissingMemberException_get_Message_m_1531234873_0 (MissingMemberException_t1292808498_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
