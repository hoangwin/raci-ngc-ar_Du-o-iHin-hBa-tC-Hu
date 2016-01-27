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

// UnityEngine.ILogger
struct ILogger_t864794742_0;
// System.Object
struct Object_t;
// UnityEngine.Object
struct Object_t_1540828846_0;
struct Object_t_1540828846_0_marshaled;
// System.Exception
struct Exception_t_116002698_0;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Debug::.cctor()
extern "C"  void Debug__cctor_m_1313325209_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ILogger UnityEngine.Debug::get_logger()
extern "C"  Object_t * Debug_get_logger_m_121159258_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C"  void Debug_Log_m920475918_0 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C"  void Debug_LogError_m1329577232_0 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
extern "C"  void Debug_LogError_m1789571002_0 (Object_t * __this /* static, unused */, Object_t * ___message, Object_t_1540828846_0 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogException(System.Exception)
extern "C"  void Debug_LogException_m1861430175_0 (Object_t * __this /* static, unused */, Exception_t_116002698_0 * ___exception, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogException(System.Exception,UnityEngine.Object)
extern "C"  void Debug_LogException_m1448184863_0 (Object_t * __this /* static, unused */, Exception_t_116002698_0 * ___exception, Object_t_1540828846_0 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C"  void Debug_LogWarning_m_1791389328_0 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
extern "C"  void Debug_LogWarning_m_1463393368_0 (Object_t * __this /* static, unused */, Object_t * ___message, Object_t_1540828846_0 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
