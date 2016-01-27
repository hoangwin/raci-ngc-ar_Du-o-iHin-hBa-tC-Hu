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

// System.Globalization.DaylightTime
struct DaylightTime_t_1320380667_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime_1242318096.h"
#include "mscorlib_System_TimeSpan_1119131324.h"

// System.Void System.Globalization.DaylightTime::.ctor(System.DateTime,System.DateTime,System.TimeSpan)
extern "C"  void DaylightTime__ctor_m807489965_0 (DaylightTime_t_1320380667_0 * __this, DateTime_t_1242318096_0  ___start, DateTime_t_1242318096_0  ___end, TimeSpan_t_1119131324_0  ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Globalization.DaylightTime::get_Start()
extern "C"  DateTime_t_1242318096_0  DaylightTime_get_Start_m_249548289_0 (DaylightTime_t_1320380667_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Globalization.DaylightTime::get_End()
extern "C"  DateTime_t_1242318096_0  DaylightTime_get_End_m_1541535092_0 (DaylightTime_t_1320380667_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Globalization.DaylightTime::get_Delta()
extern "C"  TimeSpan_t_1119131324_0  DaylightTime_get_Delta_m_1978135805_0 (DaylightTime_t_1320380667_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
