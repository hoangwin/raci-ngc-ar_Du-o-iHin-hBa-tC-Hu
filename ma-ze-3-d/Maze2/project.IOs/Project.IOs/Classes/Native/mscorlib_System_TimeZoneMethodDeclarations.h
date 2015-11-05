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

// System.TimeZone
struct TimeZone_t1870;
// System.Globalization.DaylightTime
struct DaylightTime_t1393;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"
#include "mscorlib_System_TimeSpan.h"

// System.Void System.TimeZone::.ctor()
extern "C" void TimeZone__ctor_m11489 (TimeZone_t1870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeZone::.cctor()
extern "C" void TimeZone__cctor_m11490 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeZone System.TimeZone::get_CurrentTimeZone()
extern "C" TimeZone_t1870 * TimeZone_get_CurrentTimeZone_m11491 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZone::IsDaylightSavingTime(System.DateTime)
extern "C" bool TimeZone_IsDaylightSavingTime_m11492 (TimeZone_t1870 * __this, DateTime_t716  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZone::IsDaylightSavingTime(System.DateTime,System.Globalization.DaylightTime)
extern "C" bool TimeZone_IsDaylightSavingTime_m11493 (Object_t * __this /* static, unused */, DateTime_t716  ___time, DaylightTime_t1393 * ___daylightTimes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.TimeZone::ToLocalTime(System.DateTime)
extern "C" DateTime_t716  TimeZone_ToLocalTime_m11494 (TimeZone_t1870 * __this, DateTime_t716  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.TimeZone::ToUniversalTime(System.DateTime)
extern "C" DateTime_t716  TimeZone_ToUniversalTime_m11495 (TimeZone_t1870 * __this, DateTime_t716  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeZone::GetLocalTimeDiff(System.DateTime)
extern "C" TimeSpan_t947  TimeZone_GetLocalTimeDiff_m11496 (TimeZone_t1870 * __this, DateTime_t716  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeZone::GetLocalTimeDiff(System.DateTime,System.TimeSpan)
extern "C" TimeSpan_t947  TimeZone_GetLocalTimeDiff_m11497 (TimeZone_t1870 * __this, DateTime_t716  ___time, TimeSpan_t947  ___utc_offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
