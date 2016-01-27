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

// System.Exception
struct Exception_t_116002698_0;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t_2018490193_0;
// System.Text.StringBuilder
struct StringBuilder_t1359700700_0;
// System.Reflection.MethodBase
struct MethodBase_t999760250_0;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2060733842.h"

// System.Void System.Exception::.ctor()
extern "C"  void Exception__ctor_m_408856726_0 (Exception_t_116002698_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::.ctor(System.String)
extern "C"  void Exception__ctor_m485833136_0 (Exception_t_116002698_0 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Exception__ctor_m_457969281_0 (Exception_t_116002698_0 * __this, SerializationInfo_t_2018490193_0 * ___info, StreamingContext_t2060733842_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::.ctor(System.String,System.Exception)
extern "C"  void Exception__ctor_m_1841958056_0 (Exception_t_116002698_0 * __this, String_t* ___message, Exception_t_116002698_0 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Exception::get_InnerException()
extern "C"  Exception_t_116002698_0 * Exception_get_InnerException_m_572406061_0 (Exception_t_116002698_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::set_HResult(System.Int32)
extern "C"  void Exception_set_HResult_m_1917968651_0 (Exception_t_116002698_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::get_ClassName()
extern "C"  String_t* Exception_get_ClassName_m_2105955179_0 (Exception_t_116002698_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::get_Message()
extern "C"  String_t* Exception_get_Message_m173095527_0 (Exception_t_116002698_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::get_Source()
extern "C"  String_t* Exception_get_Source_m1610892645_0 (Exception_t_116002698_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::get_StackTrace()
extern "C"  String_t* Exception_get_StackTrace_m_1781380209_0 (Exception_t_116002698_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Exception_GetObjectData_m_1641139666_0 (Exception_t_116002698_0 * __this, SerializationInfo_t_2018490193_0 * ___info, StreamingContext_t2060733842_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::ToString()
extern "C"  String_t* Exception_ToString_m627574695_0 (Exception_t_116002698_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::GetFullNameForStackTrace(System.Text.StringBuilder,System.Reflection.MethodBase)
extern "C"  void Exception_GetFullNameForStackTrace_m1429773294_0 (Exception_t_116002698_0 * __this, StringBuilder_t1359700700_0 * ___sb, MethodBase_t999760250_0 * ___mi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Exception::GetType()
extern "C"  Type_t * Exception_GetType_m_396477464_0 (Exception_t_116002698_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
