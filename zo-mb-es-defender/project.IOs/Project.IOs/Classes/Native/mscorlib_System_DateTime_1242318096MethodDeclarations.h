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

// System.IFormatProvider
struct IFormatProvider_t_716687078_0;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Exception
struct Exception_t_116002698_0;
// System.String[]
struct StringU5BU5D_t_1137506664_0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t1836403126_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime_1242318096.h"
#include "mscorlib_System_TimeSpan_1119131324.h"
#include "mscorlib_System_DateTimeKind2054652534.h"
#include "mscorlib_System_Decimal1989943944.h"
#include "mscorlib_System_DateTime_Which_484950638.h"
#include "mscorlib_System_DayOfWeek_811381696.h"
#include "mscorlib_System_Globalization_DateTimeStyles1512385935.h"
#include "mscorlib_System_DateTimeOffset_141843879.h"

// System.Void System.DateTime::.ctor(System.Int64)
extern "C"  void DateTime__ctor_m_1708718166_0 (DateTime_t_1242318096_0 * __this, int64_t ___ticks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32)
extern "C"  void DateTime__ctor_m1112320635_0 (DateTime_t_1242318096_0 * __this, int32_t ___year, int32_t ___month, int32_t ___day, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void DateTime__ctor_m_1141044202_0 (DateTime_t_1242318096_0 * __this, int32_t ___year, int32_t ___month, int32_t ___day, int32_t ___hour, int32_t ___minute, int32_t ___second, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void DateTime__ctor_m_1437228357_0 (DateTime_t_1242318096_0 * __this, int32_t ___year, int32_t ___month, int32_t ___day, int32_t ___hour, int32_t ___minute, int32_t ___second, int32_t ___millisecond, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::.ctor(System.Boolean,System.TimeSpan)
extern "C"  void DateTime__ctor_m_690287713_0 (DateTime_t_1242318096_0 * __this, bool ___check, TimeSpan_t_1119131324_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::.ctor(System.Int64,System.DateTimeKind)
extern "C"  void DateTime__ctor_m1100326092_0 (DateTime_t_1242318096_0 * __this, int64_t ___ticks, int32_t ___kind, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.DateTimeKind)
extern "C"  void DateTime__ctor_m_1024349044_0 (DateTime_t_1242318096_0 * __this, int32_t ___year, int32_t ___month, int32_t ___day, int32_t ___hour, int32_t ___minute, int32_t ___second, int32_t ___kind, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::.cctor()
extern "C"  void DateTime__cctor_m_2121785251_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C"  bool DateTime_System_IConvertible_ToBoolean_m_2109632222_0 (DateTime_t_1242318096_0 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.DateTime::System.IConvertible.ToByte(System.IFormatProvider)
extern "C"  uint8_t DateTime_System_IConvertible_ToByte_m_1624523798_0 (DateTime_t_1242318096_0 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.DateTime::System.IConvertible.ToChar(System.IFormatProvider)
extern "C"  uint16_t DateTime_System_IConvertible_ToChar_m_1805438102_0 (DateTime_t_1242318096_0 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C"  DateTime_t_1242318096_0  DateTime_System_IConvertible_ToDateTime_m943300266_0 (DateTime_t_1242318096_0 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.DateTime::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C"  Decimal_t1989943944_0  DateTime_System_IConvertible_ToDecimal_m736194296_0 (DateTime_t_1242318096_0 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.DateTime::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C"  double DateTime_System_IConvertible_ToDouble_m1431748426_0 (DateTime_t_1242318096_0 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.DateTime::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C"  int16_t DateTime_System_IConvertible_ToInt16_m825738946_0 (DateTime_t_1242318096_0 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C"  int32_t DateTime_System_IConvertible_ToInt32_m_1505576242_0 (DateTime_t_1242318096_0 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.DateTime::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C"  int64_t DateTime_System_IConvertible_ToInt64_m_1521160684_0 (DateTime_t_1242318096_0 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.DateTime::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C"  int8_t DateTime_System_IConvertible_ToSByte_m_1719889212_0 (DateTime_t_1242318096_0 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.DateTime::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C"  float DateTime_System_IConvertible_ToSingle_m_367198230_0 (DateTime_t_1242318096_0 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.DateTime::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C"  Object_t * DateTime_System_IConvertible_ToType_m_473131704_0 (DateTime_t_1242318096_0 * __this, Type_t * ___targetType, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.DateTime::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C"  uint16_t DateTime_System_IConvertible_ToUInt16_m_2094801718_0 (DateTime_t_1242318096_0 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.DateTime::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C"  uint32_t DateTime_System_IConvertible_ToUInt32_m1363211018_0 (DateTime_t_1242318096_0 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.DateTime::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C"  uint64_t DateTime_System_IConvertible_ToUInt64_m_1506009814_0 (DateTime_t_1242318096_0 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::AbsoluteDays(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t DateTime_AbsoluteDays_m_1233273223_0 (Object_t * __this /* static, unused */, int32_t ___year, int32_t ___month, int32_t ___day, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::FromTicks(System.DateTime/Which)
extern "C"  int32_t DateTime_FromTicks_m75527956_0 (DateTime_t_1242318096_0 * __this, int32_t ___what, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Month()
extern "C"  int32_t DateTime_get_Month_m1464831817_0 (DateTime_t_1242318096_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Day()
extern "C"  int32_t DateTime_get_Day_m2066530041_0 (DateTime_t_1242318096_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DayOfWeek System.DateTime::get_DayOfWeek()
extern "C"  int32_t DateTime_get_DayOfWeek_m_1949537357_0 (DateTime_t_1242318096_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Hour()
extern "C"  int32_t DateTime_get_Hour_m_1369251519_0 (DateTime_t_1242318096_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Minute()
extern "C"  int32_t DateTime_get_Minute_m803043551_0 (DateTime_t_1242318096_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Second()
extern "C"  int32_t DateTime_get_Second_m853575361_0 (DateTime_t_1242318096_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.DateTime::GetTimeMonotonic()
extern "C"  int64_t DateTime_GetTimeMonotonic_m_159928840_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.DateTime::GetNow()
extern "C"  int64_t DateTime_GetNow_m1004310079_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::get_Now()
extern "C"  DateTime_t_1242318096_0  DateTime_get_Now_m24136300_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.DateTime::get_Ticks()
extern "C"  int64_t DateTime_get_Ticks_m310281298_0 (DateTime_t_1242318096_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::get_Today()
extern "C"  DateTime_t_1242318096_0  DateTime_get_Today_m1321851425_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::get_UtcNow()
extern "C"  DateTime_t_1242318096_0  DateTime_get_UtcNow_m1309841468_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Year()
extern "C"  int32_t DateTime_get_Year_m1985210972_0 (DateTime_t_1242318096_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTimeKind System.DateTime::get_Kind()
extern "C"  int32_t DateTime_get_Kind_m1331920314_0 (DateTime_t_1242318096_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::Add(System.TimeSpan)
extern "C"  DateTime_t_1242318096_0  DateTime_Add_m_57478174_0 (DateTime_t_1242318096_0 * __this, TimeSpan_t_1119131324_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::AddTicks(System.Int64)
extern "C"  DateTime_t_1242318096_0  DateTime_AddTicks_m_1237220436_0 (DateTime_t_1242318096_0 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::AddMilliseconds(System.Double)
extern "C"  DateTime_t_1242318096_0  DateTime_AddMilliseconds_m1813199744_0 (DateTime_t_1242318096_0 * __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::AddSeconds(System.Double)
extern "C"  DateTime_t_1242318096_0  DateTime_AddSeconds_m722082155_0 (DateTime_t_1242318096_0 * __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::Compare(System.DateTime,System.DateTime)
extern "C"  int32_t DateTime_Compare_m1637090411_0 (Object_t * __this /* static, unused */, DateTime_t_1242318096_0  ___t1, DateTime_t_1242318096_0  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::CompareTo(System.Object)
extern "C"  int32_t DateTime_CompareTo_m_922793400_0 (DateTime_t_1242318096_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::CompareTo(System.DateTime)
extern "C"  int32_t DateTime_CompareTo_m1511117942_0 (DateTime_t_1242318096_0 * __this, DateTime_t_1242318096_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::Equals(System.DateTime)
extern "C"  bool DateTime_Equals_m1104060551_0 (DateTime_t_1242318096_0 * __this, DateTime_t_1242318096_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::FromBinary(System.Int64)
extern "C"  DateTime_t_1242318096_0  DateTime_FromBinary_m_1622409386_0 (Object_t * __this /* static, unused */, int64_t ___dateData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::SpecifyKind(System.DateTime,System.DateTimeKind)
extern "C"  DateTime_t_1242318096_0  DateTime_SpecifyKind_m1282445794_0 (Object_t * __this /* static, unused */, DateTime_t_1242318096_0  ___value, int32_t ___kind, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::DaysInMonth(System.Int32,System.Int32)
extern "C"  int32_t DateTime_DaysInMonth_m_2019602060_0 (Object_t * __this /* static, unused */, int32_t ___year, int32_t ___month, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::Equals(System.Object)
extern "C"  bool DateTime_Equals_m_1732082593_0 (DateTime_t_1242318096_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::CheckDateTimeKind(System.DateTimeKind)
extern "C"  void DateTime_CheckDateTimeKind_m329345155_0 (DateTime_t_1242318096_0 * __this, int32_t ___kind, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::GetHashCode()
extern "C"  int32_t DateTime_GetHashCode_m974799321_0 (DateTime_t_1242318096_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::IsLeapYear(System.Int32)
extern "C"  bool DateTime_IsLeapYear_m_1388252526_0 (Object_t * __this /* static, unused */, int32_t ___year, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::Parse(System.String,System.IFormatProvider)
extern "C"  DateTime_t_1242318096_0  DateTime_Parse_m894006266_0 (Object_t * __this /* static, unused */, String_t* ___s, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::Parse(System.String,System.IFormatProvider,System.Globalization.DateTimeStyles)
extern "C"  DateTime_t_1242318096_0  DateTime_Parse_m1628430317_0 (Object_t * __this /* static, unused */, String_t* ___s, Object_t * ___provider, int32_t ___styles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::CoreParse(System.String,System.IFormatProvider,System.Globalization.DateTimeStyles,System.DateTime&,System.DateTimeOffset&,System.Boolean,System.Exception&)
extern "C"  bool DateTime_CoreParse_m2014268103_0 (Object_t * __this /* static, unused */, String_t* ___s, Object_t * ___provider, int32_t ___styles, DateTime_t_1242318096_0 * ___result, DateTimeOffset_t_141843879_0 * ___dto, bool ___setExceptionOnError, Exception_t_116002698_0 ** ___exception, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.DateTime::YearMonthDayFormats(System.Globalization.DateTimeFormatInfo,System.Boolean,System.Exception&)
extern "C"  StringU5BU5D_t_1137506664_0* DateTime_YearMonthDayFormats_m_90360241_0 (Object_t * __this /* static, unused */, DateTimeFormatInfo_t1836403126_0 * ___dfi, bool ___setExceptionOnError, Exception_t_116002698_0 ** ___exc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::_ParseNumber(System.String,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean,System.Int32&)
extern "C"  int32_t DateTime__ParseNumber_m_1750395167_0 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___valuePos, int32_t ___min_digits, int32_t ___digits, bool ___leadingzero, bool ___sloppy_parsing, int32_t* ___num_parsed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::_ParseEnum(System.String,System.Int32,System.String[],System.String[],System.Boolean,System.Int32&)
extern "C"  int32_t DateTime__ParseEnum_m1687953250_0 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___sPos, StringU5BU5D_t_1137506664_0* ___values, StringU5BU5D_t_1137506664_0* ___invValues, bool ___exact, int32_t* ___num_parsed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::_ParseString(System.String,System.Int32,System.Int32,System.String,System.Int32&)
extern "C"  bool DateTime__ParseString_m_1671279946_0 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___sPos, int32_t ___maxlength, String_t* ___value, int32_t* ___num_parsed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::_ParseAmPm(System.String,System.Int32,System.Int32,System.Globalization.DateTimeFormatInfo,System.Boolean,System.Int32&,System.Int32&)
extern "C"  bool DateTime__ParseAmPm_m1540123584_0 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___valuePos, int32_t ___num, DateTimeFormatInfo_t1836403126_0 * ___dfi, bool ___exact, int32_t* ___num_parsed, int32_t* ___ampm, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::_ParseTimeSeparator(System.String,System.Int32,System.Globalization.DateTimeFormatInfo,System.Boolean,System.Int32&)
extern "C"  bool DateTime__ParseTimeSeparator_m1796113879_0 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___sPos, DateTimeFormatInfo_t1836403126_0 * ___dfi, bool ___exact, int32_t* ___num_parsed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::_ParseDateSeparator(System.String,System.Int32,System.Globalization.DateTimeFormatInfo,System.Boolean,System.Int32&)
extern "C"  bool DateTime__ParseDateSeparator_m_1237545988_0 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___sPos, DateTimeFormatInfo_t1836403126_0 * ___dfi, bool ___exact, int32_t* ___num_parsed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::IsLetter(System.String,System.Int32)
extern "C"  bool DateTime_IsLetter_m_2029585387_0 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::_DoParse(System.String,System.String,System.String,System.Boolean,System.DateTime&,System.DateTimeOffset&,System.Globalization.DateTimeFormatInfo,System.Globalization.DateTimeStyles,System.Boolean,System.Boolean&,System.Boolean&)
extern "C"  bool DateTime__DoParse_m_1719963559_0 (Object_t * __this /* static, unused */, String_t* ___s, String_t* ___firstPart, String_t* ___secondPart, bool ___exact, DateTime_t_1242318096_0 * ___result, DateTimeOffset_t_141843879_0 * ___dto, DateTimeFormatInfo_t1836403126_0 * ___dfi, int32_t ___style, bool ___firstPartIsDate, bool* ___incompleteFormat, bool* ___longYear, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::ParseExact(System.String,System.String,System.IFormatProvider,System.Globalization.DateTimeStyles)
extern "C"  DateTime_t_1242318096_0  DateTime_ParseExact_m1833429974_0 (Object_t * __this /* static, unused */, String_t* ___s, String_t* ___format, Object_t * ___provider, int32_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::ParseExact(System.String,System.String[],System.IFormatProvider,System.Globalization.DateTimeStyles)
extern "C"  DateTime_t_1242318096_0  DateTime_ParseExact_m_2124412982_0 (Object_t * __this /* static, unused */, String_t* ___s, StringU5BU5D_t_1137506664_0* ___formats, Object_t * ___provider, int32_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::CheckStyle(System.Globalization.DateTimeStyles)
extern "C"  void DateTime_CheckStyle_m642182680_0 (Object_t * __this /* static, unused */, int32_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::ParseExact(System.String,System.String[],System.Globalization.DateTimeFormatInfo,System.Globalization.DateTimeStyles,System.DateTime&,System.Boolean,System.Boolean&,System.Boolean,System.Exception&)
extern "C"  bool DateTime_ParseExact_m_913315164_0 (Object_t * __this /* static, unused */, String_t* ___s, StringU5BU5D_t_1137506664_0* ___formats, DateTimeFormatInfo_t1836403126_0 * ___dfi, int32_t ___style, DateTime_t_1242318096_0 * ___ret, bool ___exact, bool* ___longYear, bool ___setExceptionOnError, Exception_t_116002698_0 ** ___exception, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::Subtract(System.TimeSpan)
extern "C"  DateTime_t_1242318096_0  DateTime_Subtract_m698282245_0 (DateTime_t_1242318096_0 * __this, TimeSpan_t_1119131324_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTime::ToString()
extern "C"  String_t* DateTime_ToString_m1117481977_0 (DateTime_t_1242318096_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTime::ToString(System.IFormatProvider)
extern "C"  String_t* DateTime_ToString_m_1186240851_0 (DateTime_t_1242318096_0 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTime::ToString(System.String,System.IFormatProvider)
extern "C"  String_t* DateTime_ToString_m_2018303649_0 (DateTime_t_1242318096_0 * __this, String_t* ___format, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::ToLocalTime()
extern "C"  DateTime_t_1242318096_0  DateTime_ToLocalTime_m1957689902_0 (DateTime_t_1242318096_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::ToUniversalTime()
extern "C"  DateTime_t_1242318096_0  DateTime_ToUniversalTime_m1815024752_0 (DateTime_t_1242318096_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::op_Addition(System.DateTime,System.TimeSpan)
extern "C"  DateTime_t_1242318096_0  DateTime_op_Addition_m1268923147_0 (Object_t * __this /* static, unused */, DateTime_t_1242318096_0  ___d, TimeSpan_t_1119131324_0  ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_Equality(System.DateTime,System.DateTime)
extern "C"  bool DateTime_op_Equality_m1867073872_0 (Object_t * __this /* static, unused */, DateTime_t_1242318096_0  ___d1, DateTime_t_1242318096_0  ___d2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_GreaterThan(System.DateTime,System.DateTime)
extern "C"  bool DateTime_op_GreaterThan_m_1564767257_0 (Object_t * __this /* static, unused */, DateTime_t_1242318096_0  ___t1, DateTime_t_1242318096_0  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_GreaterThanOrEqual(System.DateTime,System.DateTime)
extern "C"  bool DateTime_op_GreaterThanOrEqual_m_476003448_0 (Object_t * __this /* static, unused */, DateTime_t_1242318096_0  ___t1, DateTime_t_1242318096_0  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_Inequality(System.DateTime,System.DateTime)
extern "C"  bool DateTime_op_Inequality_m1607380213_0 (Object_t * __this /* static, unused */, DateTime_t_1242318096_0  ___d1, DateTime_t_1242318096_0  ___d2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_LessThan(System.DateTime,System.DateTime)
extern "C"  bool DateTime_op_LessThan_m_350347426_0 (Object_t * __this /* static, unused */, DateTime_t_1242318096_0  ___t1, DateTime_t_1242318096_0  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_LessThanOrEqual(System.DateTime,System.DateTime)
extern "C"  bool DateTime_op_LessThanOrEqual_m_2103326227_0 (Object_t * __this /* static, unused */, DateTime_t_1242318096_0  ___t1, DateTime_t_1242318096_0  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::op_Subtraction(System.DateTime,System.TimeSpan)
extern "C"  DateTime_t_1242318096_0  DateTime_op_Subtraction_m813614715_0 (Object_t * __this /* static, unused */, DateTime_t_1242318096_0  ___d, TimeSpan_t_1119131324_0  ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
