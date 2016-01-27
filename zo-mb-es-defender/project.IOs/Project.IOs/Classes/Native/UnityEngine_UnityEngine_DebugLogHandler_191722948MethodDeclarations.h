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

// UnityEngine.DebugLogHandler
struct DebugLogHandler_t_191722948_0;
// System.String
struct String_t;
// UnityEngine.Object
struct Object_t_1540828846_0;
struct Object_t_1540828846_0_marshaled;
// System.Exception
struct Exception_t_116002698_0;
// System.Object[]
struct ObjectU5BU5D_t_591698798_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_LogType_1053229077.h"

// System.Void UnityEngine.DebugLogHandler::.ctor()
extern "C"  void DebugLogHandler__ctor_m_1160747790_0 (DebugLogHandler_t_191722948_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.DebugLogHandler::Internal_Log(UnityEngine.LogType,System.String,UnityEngine.Object)
extern "C"  void DebugLogHandler_Internal_Log_m_803426473_0 (Object_t * __this /* static, unused */, int32_t ___level, String_t* ___msg, Object_t_1540828846_0 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.DebugLogHandler::Internal_LogException(System.Exception,UnityEngine.Object)
extern "C"  void DebugLogHandler_Internal_LogException_m317712981_0 (Object_t * __this /* static, unused */, Exception_t_116002698_0 * ___exception, Object_t_1540828846_0 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.DebugLogHandler::LogFormat(UnityEngine.LogType,UnityEngine.Object,System.String,System.Object[])
extern "C"  void DebugLogHandler_LogFormat_m177245518_0 (DebugLogHandler_t_191722948_0 * __this, int32_t ___logType, Object_t_1540828846_0 * ___context, String_t* ___format, ObjectU5BU5D_t_591698798_0* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.DebugLogHandler::LogException(System.Exception,UnityEngine.Object)
extern "C"  void DebugLogHandler_LogException_m769094553_0 (DebugLogHandler_t_191722948_0 * __this, Exception_t_116002698_0 * ___exception, Object_t_1540828846_0 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
