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

// System.Runtime.Remoting.Messaging.ArgInfo
struct ArgInfo_t485288910_0;
// System.Reflection.MethodBase
struct MethodBase_t999760250_0;
// System.Object[]
struct ObjectU5BU5D_t_591698798_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Remoting_Messaging_ArgInfoT879154294.h"

// System.Void System.Runtime.Remoting.Messaging.ArgInfo::.ctor(System.Reflection.MethodBase,System.Runtime.Remoting.Messaging.ArgInfoType)
extern "C"  void ArgInfo__ctor_m_507036028_0 (ArgInfo_t485288910_0 * __this, MethodBase_t999760250_0 * ___method, uint8_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.ArgInfo::GetInOutArgs(System.Object[])
extern "C"  ObjectU5BU5D_t_591698798_0* ArgInfo_GetInOutArgs_m_1110835145_0 (ArgInfo_t485288910_0 * __this, ObjectU5BU5D_t_591698798_0* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
