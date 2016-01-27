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
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan_1119131324.h"

// System.Void System.TimeSpan::.ctor(System.Int64)
extern "C"  void TimeSpan__ctor_m96381766_0 (TimeSpan_t_1119131324_0 * __this, int64_t ___ticks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeSpan::.ctor(System.Int32,System.Int32,System.Int32)
extern "C"  void TimeSpan__ctor_m1888018443_0 (TimeSpan_t_1119131324_0 * __this, int32_t ___hours, int32_t ___minutes, int32_t ___seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeSpan::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void TimeSpan__ctor_m1560702407_0 (TimeSpan_t_1119131324_0 * __this, int32_t ___days, int32_t ___hours, int32_t ___minutes, int32_t ___seconds, int32_t ___milliseconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeSpan::.cctor()
extern "C"  void TimeSpan__cctor_m_1550472199_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.TimeSpan::CalculateTicks(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int64_t TimeSpan_CalculateTicks_m_1588469372_0 (Object_t * __this /* static, unused */, int32_t ___days, int32_t ___hours, int32_t ___minutes, int32_t ___seconds, int32_t ___milliseconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::get_Days()
extern "C"  int32_t TimeSpan_get_Days_m1002111510_0 (TimeSpan_t_1119131324_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::get_Hours()
extern "C"  int32_t TimeSpan_get_Hours_m_490339158_0 (TimeSpan_t_1119131324_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::get_Milliseconds()
extern "C"  int32_t TimeSpan_get_Milliseconds_m_265230157_0 (TimeSpan_t_1119131324_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::get_Minutes()
extern "C"  int32_t TimeSpan_get_Minutes_m_1719936760_0 (TimeSpan_t_1119131324_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::get_Seconds()
extern "C"  int32_t TimeSpan_get_Seconds_m_1186534744_0 (TimeSpan_t_1119131324_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.TimeSpan::get_Ticks()
extern "C"  int64_t TimeSpan_get_Ticks_m_2009609050_0 (TimeSpan_t_1119131324_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalDays()
extern "C"  double TimeSpan_get_TotalDays_m_798191813_0 (TimeSpan_t_1119131324_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalHours()
extern "C"  double TimeSpan_get_TotalHours_m_1993801017_0 (TimeSpan_t_1119131324_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalMilliseconds()
extern "C"  double TimeSpan_get_TotalMilliseconds_m51604504_0 (TimeSpan_t_1119131324_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalMinutes()
extern "C"  double TimeSpan_get_TotalMinutes_m1645177229_0 (TimeSpan_t_1119131324_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalSeconds()
extern "C"  double TimeSpan_get_TotalSeconds_m1295026915_0 (TimeSpan_t_1119131324_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::Add(System.TimeSpan)
extern "C"  TimeSpan_t_1119131324_0  TimeSpan_Add_m_1066674142_0 (TimeSpan_t_1119131324_0 * __this, TimeSpan_t_1119131324_0  ___ts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::Compare(System.TimeSpan,System.TimeSpan)
extern "C"  int32_t TimeSpan_Compare_m127140955_0 (Object_t * __this /* static, unused */, TimeSpan_t_1119131324_0  ___t1, TimeSpan_t_1119131324_0  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::CompareTo(System.Object)
extern "C"  int32_t TimeSpan_CompareTo_m_1403838632_0 (TimeSpan_t_1119131324_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::CompareTo(System.TimeSpan)
extern "C"  int32_t TimeSpan_CompareTo_m_111865530_0 (TimeSpan_t_1119131324_0 * __this, TimeSpan_t_1119131324_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::Equals(System.TimeSpan)
extern "C"  bool TimeSpan_Equals_m2029123271_0 (TimeSpan_t_1119131324_0 * __this, TimeSpan_t_1119131324_0  ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::Duration()
extern "C"  TimeSpan_t_1119131324_0  TimeSpan_Duration_m_89285651_0 (TimeSpan_t_1119131324_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::Equals(System.Object)
extern "C"  bool TimeSpan_Equals_m_192024545_0 (TimeSpan_t_1119131324_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::FromDays(System.Double)
extern "C"  TimeSpan_t_1119131324_0  TimeSpan_FromDays_m_1435913898_0 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::FromHours(System.Double)
extern "C"  TimeSpan_t_1119131324_0  TimeSpan_FromHours_m_1773418918_0 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::FromMinutes(System.Double)
extern "C"  TimeSpan_t_1119131324_0  TimeSpan_FromMinutes_m1997633268_0 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::FromSeconds(System.Double)
extern "C"  TimeSpan_t_1119131324_0  TimeSpan_FromSeconds_m_1433761096_0 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::FromMilliseconds(System.Double)
extern "C"  TimeSpan_t_1119131324_0  TimeSpan_FromMilliseconds_m664523225_0 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::From(System.Double,System.Int64)
extern "C"  TimeSpan_t_1119131324_0  TimeSpan_From_m1249538749_0 (Object_t * __this /* static, unused */, double ___value, int64_t ___tickMultiplicator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::GetHashCode()
extern "C"  int32_t TimeSpan_GetHashCode_m550404245_0 (TimeSpan_t_1119131324_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::Negate()
extern "C"  TimeSpan_t_1119131324_0  TimeSpan_Negate_m_96504061_0 (TimeSpan_t_1119131324_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::Subtract(System.TimeSpan)
extern "C"  TimeSpan_t_1119131324_0  TimeSpan_Subtract_m_697175611_0 (TimeSpan_t_1119131324_0 * __this, TimeSpan_t_1119131324_0  ___ts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.TimeSpan::ToString()
extern "C"  String_t* TimeSpan_ToString_m_1347684395_0 (TimeSpan_t_1119131324_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::op_Addition(System.TimeSpan,System.TimeSpan)
extern "C"  TimeSpan_t_1119131324_0  TimeSpan_op_Addition_m_873165493_0 (Object_t * __this /* static, unused */, TimeSpan_t_1119131324_0  ___t1, TimeSpan_t_1119131324_0  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_Equality(System.TimeSpan,System.TimeSpan)
extern "C"  bool TimeSpan_op_Equality_m_729830992_0 (Object_t * __this /* static, unused */, TimeSpan_t_1119131324_0  ___t1, TimeSpan_t_1119131324_0  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_GreaterThan(System.TimeSpan,System.TimeSpan)
extern "C"  bool TimeSpan_op_GreaterThan_m_2092724105_0 (Object_t * __this /* static, unused */, TimeSpan_t_1119131324_0  ___t1, TimeSpan_t_1119131324_0  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_GreaterThanOrEqual(System.TimeSpan,System.TimeSpan)
extern "C"  bool TimeSpan_op_GreaterThanOrEqual_m_297916776_0 (Object_t * __this /* static, unused */, TimeSpan_t_1119131324_0  ___t1, TimeSpan_t_1119131324_0  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_Inequality(System.TimeSpan,System.TimeSpan)
extern "C"  bool TimeSpan_op_Inequality_m257547441_0 (Object_t * __this /* static, unused */, TimeSpan_t_1119131324_0  ___t1, TimeSpan_t_1119131324_0  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_LessThan(System.TimeSpan,System.TimeSpan)
extern "C"  bool TimeSpan_op_LessThan_m_831648510_0 (Object_t * __this /* static, unused */, TimeSpan_t_1119131324_0  ___t1, TimeSpan_t_1119131324_0  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_LessThanOrEqual(System.TimeSpan,System.TimeSpan)
extern "C"  bool TimeSpan_op_LessThanOrEqual_m_1036356407_0 (Object_t * __this /* static, unused */, TimeSpan_t_1119131324_0  ___t1, TimeSpan_t_1119131324_0  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::op_Subtraction(System.TimeSpan,System.TimeSpan)
extern "C"  TimeSpan_t_1119131324_0  TimeSpan_op_Subtraction_m_139271445_0 (Object_t * __this /* static, unused */, TimeSpan_t_1119131324_0  ___t1, TimeSpan_t_1119131324_0  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
