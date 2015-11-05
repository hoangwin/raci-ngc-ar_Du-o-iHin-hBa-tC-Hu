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
struct Exception_t252;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t831;
// System.Text.StringBuilder
struct StringBuilder_t531;
// System.Reflection.MethodBase
struct MethodBase_t857;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Exception::.ctor()
extern "C" void Exception__ctor_m6394 (Exception_t252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::.ctor(System.String)
extern "C" void Exception__ctor_m4350 (Exception_t252 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Exception__ctor_m4394 (Exception_t252 * __this, SerializationInfo_t831 * ___info, StreamingContext_t832  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::.ctor(System.String,System.Exception)
extern "C" void Exception__ctor_m4393 (Exception_t252 * __this, String_t* ___message, Exception_t252 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Exception::get_InnerException()
extern "C" Exception_t252 * Exception_get_InnerException_m7287 (Exception_t252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::set_HResult(System.Int32)
extern "C" void Exception_set_HResult_m4392 (Exception_t252 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::get_ClassName()
extern "C" String_t* Exception_get_ClassName_m7288 (Exception_t252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::get_Message()
extern "C" String_t* Exception_get_Message_m7289 (Exception_t252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::get_Source()
extern "C" String_t* Exception_get_Source_m7290 (Exception_t252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::get_StackTrace()
extern "C" String_t* Exception_get_StackTrace_m7291 (Exception_t252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Exception_GetObjectData_m5494 (Exception_t252 * __this, SerializationInfo_t831 * ___info, StreamingContext_t832  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::ToString()
extern "C" String_t* Exception_ToString_m7292 (Exception_t252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::GetFullNameForStackTrace(System.Text.StringBuilder,System.Reflection.MethodBase)
extern "C" void Exception_GetFullNameForStackTrace_m7293 (Exception_t252 * __this, StringBuilder_t531 * ___sb, MethodBase_t857 * ___mi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Exception::GetType()
extern "C" Type_t * Exception_GetType_m7294 (Exception_t252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
