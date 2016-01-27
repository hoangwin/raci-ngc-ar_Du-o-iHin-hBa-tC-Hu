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

// UnityEngine.Logger
struct Logger_t173381663_0;
// UnityEngine.ILogHandler
struct ILogHandler_t1940368228_0;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Object
struct Object_t_1540828846_0;
struct Object_t_1540828846_0_marshaled;
// System.Object[]
struct ObjectU5BU5D_t_591698798_0;
// System.Exception
struct Exception_t_116002698_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_LogType_1053229077.h"

// System.Void UnityEngine.Logger::.ctor(UnityEngine.ILogHandler)
extern "C"  void Logger__ctor_m_460832709_0 (Logger_t173381663_0 * __this, Object_t * ___logHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ILogHandler UnityEngine.Logger::get_logHandler()
extern "C"  Object_t * Logger_get_logHandler_m_104383787_0 (Logger_t173381663_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Logger::set_logHandler(UnityEngine.ILogHandler)
extern "C"  void Logger_set_logHandler_m_1443390664_0 (Logger_t173381663_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Logger::get_logEnabled()
extern "C"  bool Logger_get_logEnabled_m_487207819_0 (Logger_t173381663_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Logger::set_logEnabled(System.Boolean)
extern "C"  void Logger_set_logEnabled_m_442732830_0 (Logger_t173381663_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.LogType UnityEngine.Logger::get_filterLogType()
extern "C"  int32_t Logger_get_filterLogType_m_622528598_0 (Logger_t173381663_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Logger::set_filterLogType(UnityEngine.LogType)
extern "C"  void Logger_set_filterLogType_m1452353615_0 (Logger_t173381663_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Logger::IsLogTypeAllowed(UnityEngine.LogType)
extern "C"  bool Logger_IsLogTypeAllowed_m1750132386_0 (Logger_t173381663_0 * __this, int32_t ___logType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Logger::GetString(System.Object)
extern "C"  String_t* Logger_GetString_m_208380163_0 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Logger::Log(UnityEngine.LogType,System.Object)
extern "C"  void Logger_Log_m_707711728_0 (Logger_t173381663_0 * __this, int32_t ___logType, Object_t * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Logger::Log(UnityEngine.LogType,System.Object,UnityEngine.Object)
extern "C"  void Logger_Log_m_282903166_0 (Logger_t173381663_0 * __this, int32_t ___logType, Object_t * ___message, Object_t_1540828846_0 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Logger::LogFormat(UnityEngine.LogType,UnityEngine.Object,System.String,System.Object[])
extern "C"  void Logger_LogFormat_m193464629_0 (Logger_t173381663_0 * __this, int32_t ___logType, Object_t_1540828846_0 * ___context, String_t* ___format, ObjectU5BU5D_t_591698798_0* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Logger::LogException(System.Exception,UnityEngine.Object)
extern "C"  void Logger_LogException_m206035446_0 (Logger_t173381663_0 * __this, Exception_t_116002698_0 * ___exception, Object_t_1540828846_0 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
