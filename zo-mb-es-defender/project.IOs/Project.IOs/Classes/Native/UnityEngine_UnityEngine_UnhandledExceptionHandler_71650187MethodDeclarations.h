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

// System.Object
struct Object_t;
// System.UnhandledExceptionEventArgs
struct UnhandledExceptionEventArgs_t_778315730_0;
// System.String
struct String_t;
// System.Exception
struct Exception_t_116002698_0;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UnhandledExceptionHandler::RegisterUECatcher()
extern "C"  void UnhandledExceptionHandler_RegisterUECatcher_m72343880_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UnhandledExceptionHandler::HandleUnhandledException(System.Object,System.UnhandledExceptionEventArgs)
extern "C"  void UnhandledExceptionHandler_HandleUnhandledException_m1413629867_0 (Object_t * __this /* static, unused */, Object_t * ___sender, UnhandledExceptionEventArgs_t_778315730_0 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UnhandledExceptionHandler::PrintException(System.String,System.Exception)
extern "C"  void UnhandledExceptionHandler_PrintException_m1321283931_0 (Object_t * __this /* static, unused */, String_t* ___title, Exception_t_116002698_0 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UnhandledExceptionHandler::NativeUnhandledExceptionHandler()
extern "C"  void UnhandledExceptionHandler_NativeUnhandledExceptionHandler_m_292499740_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
