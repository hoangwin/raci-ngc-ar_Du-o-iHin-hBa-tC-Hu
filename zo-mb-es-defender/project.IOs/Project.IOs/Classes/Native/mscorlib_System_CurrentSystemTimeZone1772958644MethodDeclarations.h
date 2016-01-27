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

// System.CurrentSystemTimeZone
struct CurrentSystemTimeZone_t1772958644_0;
// System.Object
struct Object_t;
// System.Int64[]
struct Int64U5BU5D_t756757484_0;
// System.String[]
struct StringU5BU5D_t_1137506664_0;
// System.Globalization.DaylightTime
struct DaylightTime_t_1320380667_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan_1119131324.h"
#include "mscorlib_System_DateTime_1242318096.h"

// System.Void System.CurrentSystemTimeZone::.ctor()
extern "C"  void CurrentSystemTimeZone__ctor_m_225395312_0 (CurrentSystemTimeZone_t1772958644_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::.ctor(System.Int64)
extern "C"  void CurrentSystemTimeZone__ctor_m_1844190060_0 (CurrentSystemTimeZone_t1772958644_0 * __this, int64_t ___lnow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C"  void CurrentSystemTimeZone_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m489233422_0 (CurrentSystemTimeZone_t1772958644_0 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.CurrentSystemTimeZone::GetTimeZoneData(System.Int32,System.Int64[]&,System.String[]&)
extern "C"  bool CurrentSystemTimeZone_GetTimeZoneData_m2086117940_0 (Object_t * __this /* static, unused */, int32_t ___year, Int64U5BU5D_t756757484_0** ___data, StringU5BU5D_t_1137506664_0** ___names, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DaylightTime System.CurrentSystemTimeZone::GetDaylightChanges(System.Int32)
extern "C"  DaylightTime_t_1320380667_0 * CurrentSystemTimeZone_GetDaylightChanges_m_1517138884_0 (CurrentSystemTimeZone_t1772958644_0 * __this, int32_t ___year, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.CurrentSystemTimeZone::GetUtcOffset(System.DateTime)
extern "C"  TimeSpan_t_1119131324_0  CurrentSystemTimeZone_GetUtcOffset_m1858071188_0 (CurrentSystemTimeZone_t1772958644_0 * __this, DateTime_t_1242318096_0  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::OnDeserialization(System.Globalization.DaylightTime)
extern "C"  void CurrentSystemTimeZone_OnDeserialization_m1834214305_0 (CurrentSystemTimeZone_t1772958644_0 * __this, DaylightTime_t_1320380667_0 * ___dlt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DaylightTime System.CurrentSystemTimeZone::GetDaylightTimeFromData(System.Int64[])
extern "C"  DaylightTime_t_1320380667_0 * CurrentSystemTimeZone_GetDaylightTimeFromData_m_1689068373_0 (CurrentSystemTimeZone_t1772958644_0 * __this, Int64U5BU5D_t756757484_0* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
