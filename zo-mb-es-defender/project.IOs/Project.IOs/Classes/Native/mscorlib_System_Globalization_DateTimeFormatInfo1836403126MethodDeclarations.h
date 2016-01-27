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

// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t1836403126_0;
// System.IFormatProvider
struct IFormatProvider_t_716687078_0;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t_1137506664_0;
// System.Globalization.Calendar
struct Calendar_t_713788190_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DayOfWeek_811381696.h"

// System.Void System.Globalization.DateTimeFormatInfo::.ctor(System.Boolean)
extern "C"  void DateTimeFormatInfo__ctor_m913756651_0 (DateTimeFormatInfo_t1836403126_0 * __this, bool ___read_only, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.DateTimeFormatInfo::.ctor()
extern "C"  void DateTimeFormatInfo__ctor_m_999115692_0 (DateTimeFormatInfo_t1836403126_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.DateTimeFormatInfo::.cctor()
extern "C"  void DateTimeFormatInfo__cctor_m_69589593_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::GetInstance(System.IFormatProvider)
extern "C"  DateTimeFormatInfo_t1836403126_0 * DateTimeFormatInfo_GetInstance_m_1161743486_0 (Object_t * __this /* static, unused */, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.DateTimeFormatInfo::get_IsReadOnly()
extern "C"  bool DateTimeFormatInfo_get_IsReadOnly_m_1147285211_0 (DateTimeFormatInfo_t1836403126_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::ReadOnly(System.Globalization.DateTimeFormatInfo)
extern "C"  DateTimeFormatInfo_t1836403126_0 * DateTimeFormatInfo_ReadOnly_m25186341_0 (Object_t * __this /* static, unused */, DateTimeFormatInfo_t1836403126_0 * ___dtfi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.DateTimeFormatInfo::Clone()
extern "C"  Object_t * DateTimeFormatInfo_Clone_m1101948106_0 (DateTimeFormatInfo_t1836403126_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.DateTimeFormatInfo::GetFormat(System.Type)
extern "C"  Object_t * DateTimeFormatInfo_GetFormat_m_618772117_0 (DateTimeFormatInfo_t1836403126_0 * __this, Type_t * ___formatType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::GetAbbreviatedMonthName(System.Int32)
extern "C"  String_t* DateTimeFormatInfo_GetAbbreviatedMonthName_m3766388_0 (DateTimeFormatInfo_t1836403126_0 * __this, int32_t ___month, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::GetEraName(System.Int32)
extern "C"  String_t* DateTimeFormatInfo_GetEraName_m1437894363_0 (DateTimeFormatInfo_t1836403126_0 * __this, int32_t ___era, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::GetMonthName(System.Int32)
extern "C"  String_t* DateTimeFormatInfo_GetMonthName_m176552057_0 (DateTimeFormatInfo_t1836403126_0 * __this, int32_t ___month, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::get_RawAbbreviatedDayNames()
extern "C"  StringU5BU5D_t_1137506664_0* DateTimeFormatInfo_get_RawAbbreviatedDayNames_m_296853649_0 (DateTimeFormatInfo_t1836403126_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::get_RawAbbreviatedMonthNames()
extern "C"  StringU5BU5D_t_1137506664_0* DateTimeFormatInfo_get_RawAbbreviatedMonthNames_m19087795_0 (DateTimeFormatInfo_t1836403126_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::get_RawDayNames()
extern "C"  StringU5BU5D_t_1137506664_0* DateTimeFormatInfo_get_RawDayNames_m_505869446_0 (DateTimeFormatInfo_t1836403126_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::get_RawMonthNames()
extern "C"  StringU5BU5D_t_1137506664_0* DateTimeFormatInfo_get_RawMonthNames_m485007902_0 (DateTimeFormatInfo_t1836403126_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_AMDesignator()
extern "C"  String_t* DateTimeFormatInfo_get_AMDesignator_m_453722020_0 (DateTimeFormatInfo_t1836403126_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_PMDesignator()
extern "C"  String_t* DateTimeFormatInfo_get_PMDesignator_m_1757452501_0 (DateTimeFormatInfo_t1836403126_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_DateSeparator()
extern "C"  String_t* DateTimeFormatInfo_get_DateSeparator_m1869791013_0 (DateTimeFormatInfo_t1836403126_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_TimeSeparator()
extern "C"  String_t* DateTimeFormatInfo_get_TimeSeparator_m_1829129642_0 (DateTimeFormatInfo_t1836403126_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_LongDatePattern()
extern "C"  String_t* DateTimeFormatInfo_get_LongDatePattern_m_1253789906_0 (DateTimeFormatInfo_t1836403126_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_ShortDatePattern()
extern "C"  String_t* DateTimeFormatInfo_get_ShortDatePattern_m994817156_0 (DateTimeFormatInfo_t1836403126_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_ShortTimePattern()
extern "C"  String_t* DateTimeFormatInfo_get_ShortTimePattern_m20923983_0 (DateTimeFormatInfo_t1836403126_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_LongTimePattern()
extern "C"  String_t* DateTimeFormatInfo_get_LongTimePattern_m_547673233_0 (DateTimeFormatInfo_t1836403126_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_MonthDayPattern()
extern "C"  String_t* DateTimeFormatInfo_get_MonthDayPattern_m_337088856_0 (DateTimeFormatInfo_t1836403126_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_YearMonthPattern()
extern "C"  String_t* DateTimeFormatInfo_get_YearMonthPattern_m957892307_0 (DateTimeFormatInfo_t1836403126_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_FullDateTimePattern()
extern "C"  String_t* DateTimeFormatInfo_get_FullDateTimePattern_m_1687459640_0 (DateTimeFormatInfo_t1836403126_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::get_CurrentInfo()
extern "C"  DateTimeFormatInfo_t1836403126_0 * DateTimeFormatInfo_get_CurrentInfo_m1648708929_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::get_InvariantInfo()
extern "C"  DateTimeFormatInfo_t1836403126_0 * DateTimeFormatInfo_get_InvariantInfo_m1865598692_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.Calendar System.Globalization.DateTimeFormatInfo::get_Calendar()
extern "C"  Calendar_t_713788190_0 * DateTimeFormatInfo_get_Calendar_m532085644_0 (DateTimeFormatInfo_t1836403126_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.DateTimeFormatInfo::set_Calendar(System.Globalization.Calendar)
extern "C"  void DateTimeFormatInfo_set_Calendar_m_375647939_0 (DateTimeFormatInfo_t1836403126_0 * __this, Calendar_t_713788190_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_RFC1123Pattern()
extern "C"  String_t* DateTimeFormatInfo_get_RFC1123Pattern_m1091572742_0 (DateTimeFormatInfo_t1836403126_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_RoundtripPattern()
extern "C"  String_t* DateTimeFormatInfo_get_RoundtripPattern_m562440017_0 (DateTimeFormatInfo_t1836403126_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_SortableDateTimePattern()
extern "C"  String_t* DateTimeFormatInfo_get_SortableDateTimePattern_m_1931259911_0 (DateTimeFormatInfo_t1836403126_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_UniversalSortableDateTimePattern()
extern "C"  String_t* DateTimeFormatInfo_get_UniversalSortableDateTimePattern_m_112889762_0 (DateTimeFormatInfo_t1836403126_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::GetAllDateTimePatternsInternal()
extern "C"  StringU5BU5D_t_1137506664_0* DateTimeFormatInfo_GetAllDateTimePatternsInternal_m1587126173_0 (DateTimeFormatInfo_t1836403126_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.DateTimeFormatInfo::FillAllDateTimePatterns()
extern "C"  void DateTimeFormatInfo_FillAllDateTimePatterns_m_941333834_0 (DateTimeFormatInfo_t1836403126_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::GetAllRawDateTimePatterns(System.Char)
extern "C"  StringU5BU5D_t_1137506664_0* DateTimeFormatInfo_GetAllRawDateTimePatterns_m_1529199123_0 (DateTimeFormatInfo_t1836403126_0 * __this, uint16_t ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::GetDayName(System.DayOfWeek)
extern "C"  String_t* DateTimeFormatInfo_GetDayName_m1592964076_0 (DateTimeFormatInfo_t1836403126_0 * __this, int32_t ___dayofweek, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::GetAbbreviatedDayName(System.DayOfWeek)
extern "C"  String_t* DateTimeFormatInfo_GetAbbreviatedDayName_m654293155_0 (DateTimeFormatInfo_t1836403126_0 * __this, int32_t ___dayofweek, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.DateTimeFormatInfo::FillInvariantPatterns()
extern "C"  void DateTimeFormatInfo_FillInvariantPatterns_m1432816864_0 (DateTimeFormatInfo_t1836403126_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::PopulateCombinedList(System.String[],System.String[])
extern "C"  StringU5BU5D_t_1137506664_0* DateTimeFormatInfo_PopulateCombinedList_m653754210_0 (DateTimeFormatInfo_t1836403126_0 * __this, StringU5BU5D_t_1137506664_0* ___dates, StringU5BU5D_t_1137506664_0* ___times, const MethodInfo* method) IL2CPP_METHOD_ATTR;
