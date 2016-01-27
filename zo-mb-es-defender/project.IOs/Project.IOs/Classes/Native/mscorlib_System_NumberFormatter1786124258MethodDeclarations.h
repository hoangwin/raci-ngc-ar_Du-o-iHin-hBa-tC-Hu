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

// System.NumberFormatter
struct NumberFormatter_t1786124258_0;
// System.Threading.Thread
struct Thread_t_14363353_0;
// System.String
struct String_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t404474286_0;
// System.IFormatProvider
struct IFormatProvider_t_716687078_0;
// System.Globalization.CultureInfo
struct CultureInfo_t1283181710_0;
// System.Text.StringBuilder
struct StringBuilder_t1359700700_0;
// System.Int32[]
struct Int32U5BU5D_t1496069209_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Decimal1989943944.h"

// System.Void System.NumberFormatter::.ctor(System.Threading.Thread)
extern "C"  void NumberFormatter__ctor_m_515390523_0 (NumberFormatter_t1786124258_0 * __this, Thread_t_14363353_0 * ___current, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::.cctor()
extern "C"  void NumberFormatter__cctor_m1641464619_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::GetFormatterTables(System.UInt64*&,System.Int32*&,System.Char*&,System.Char*&,System.Int64*&,System.Int32*&)
extern "C"  void NumberFormatter_GetFormatterTables_m_1089883284_0 (Object_t * __this /* static, unused */, uint64_t** ___MantissaBitsTable, int32_t** ___TensExponentTable, uint16_t** ___DigitLowerTable, uint16_t** ___DigitUpperTable, int64_t** ___TenPowersList, int32_t** ___DecHexDigits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.NumberFormatter::GetTenPowerOf(System.Int32)
extern "C"  int64_t NumberFormatter_GetTenPowerOf_m755691503_0 (Object_t * __this /* static, unused */, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::InitDecHexDigits(System.UInt32)
extern "C"  void NumberFormatter_InitDecHexDigits_m2036076025_0 (NumberFormatter_t1786124258_0 * __this, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::InitDecHexDigits(System.UInt64)
extern "C"  void NumberFormatter_InitDecHexDigits_m1612588520_0 (NumberFormatter_t1786124258_0 * __this, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::InitDecHexDigits(System.UInt32,System.UInt64)
extern "C"  void NumberFormatter_InitDecHexDigits_m2103281536_0 (NumberFormatter_t1786124258_0 * __this, uint32_t ___hi, uint64_t ___lo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.NumberFormatter::FastToDecHex(System.Int32)
extern "C"  uint32_t NumberFormatter_FastToDecHex_m_1956213390_0 (Object_t * __this /* static, unused */, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.NumberFormatter::ToDecHex(System.Int32)
extern "C"  uint32_t NumberFormatter_ToDecHex_m1474793296_0 (Object_t * __this /* static, unused */, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::FastDecHexLen(System.Int32)
extern "C"  int32_t NumberFormatter_FastDecHexLen_m_968994621_0 (Object_t * __this /* static, unused */, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::DecHexLen(System.UInt32)
extern "C"  int32_t NumberFormatter_DecHexLen_m572249244_0 (Object_t * __this /* static, unused */, uint32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::DecHexLen()
extern "C"  int32_t NumberFormatter_DecHexLen_m1209357602_0 (NumberFormatter_t1786124258_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::ScaleOrder(System.Int64)
extern "C"  int32_t NumberFormatter_ScaleOrder_m1915154678_0 (Object_t * __this /* static, unused */, int64_t ___hi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::InitialFloatingPrecision()
extern "C"  int32_t NumberFormatter_InitialFloatingPrecision_m_585404206_0 (NumberFormatter_t1786124258_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::ParsePrecision(System.String)
extern "C"  int32_t NumberFormatter_ParsePrecision_m_1902366633_0 (Object_t * __this /* static, unused */, String_t* ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String)
extern "C"  void NumberFormatter_Init_m1515770916_0 (NumberFormatter_t1786124258_0 * __this, String_t* ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::InitHex(System.UInt64)
extern "C"  void NumberFormatter_InitHex_m131205536_0 (NumberFormatter_t1786124258_0 * __this, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.Int32,System.Int32)
extern "C"  void NumberFormatter_Init_m_1640208302_0 (NumberFormatter_t1786124258_0 * __this, String_t* ___format, int32_t ___value, int32_t ___defPrecision, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.UInt32,System.Int32)
extern "C"  void NumberFormatter_Init_m1022036773_0 (NumberFormatter_t1786124258_0 * __this, String_t* ___format, uint32_t ___value, int32_t ___defPrecision, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.Int64)
extern "C"  void NumberFormatter_Init_m_1842057106_0 (NumberFormatter_t1786124258_0 * __this, String_t* ___format, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.UInt64)
extern "C"  void NumberFormatter_Init_m_1760382777_0 (NumberFormatter_t1786124258_0 * __this, String_t* ___format, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.Double,System.Int32)
extern "C"  void NumberFormatter_Init_m379773259_0 (NumberFormatter_t1786124258_0 * __this, String_t* ___format, double ___value, int32_t ___defPrecision, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.Decimal)
extern "C"  void NumberFormatter_Init_m1460144098_0 (NumberFormatter_t1786124258_0 * __this, String_t* ___format, Decimal_t1989943944_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::ResetCharBuf(System.Int32)
extern "C"  void NumberFormatter_ResetCharBuf_m_471450307_0 (NumberFormatter_t1786124258_0 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Resize(System.Int32)
extern "C"  void NumberFormatter_Resize_m_606967169_0 (NumberFormatter_t1786124258_0 * __this, int32_t ___len, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Append(System.Char)
extern "C"  void NumberFormatter_Append_m_1026845839_0 (NumberFormatter_t1786124258_0 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Append(System.Char,System.Int32)
extern "C"  void NumberFormatter_Append_m_1394016888_0 (NumberFormatter_t1786124258_0 * __this, uint16_t ___c, int32_t ___cnt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Append(System.String)
extern "C"  void NumberFormatter_Append_m402181386_0 (NumberFormatter_t1786124258_0 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.NumberFormatInfo System.NumberFormatter::GetNumberFormatInstance(System.IFormatProvider)
extern "C"  NumberFormatInfo_t404474286_0 * NumberFormatter_GetNumberFormatInstance_m23478576_0 (NumberFormatter_t1786124258_0 * __this, Object_t * ___fp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::set_CurrentCulture(System.Globalization.CultureInfo)
extern "C"  void NumberFormatter_set_CurrentCulture_m_1517242354_0 (NumberFormatter_t1786124258_0 * __this, CultureInfo_t1283181710_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::get_IntegerDigits()
extern "C"  int32_t NumberFormatter_get_IntegerDigits_m_322556155_0 (NumberFormatter_t1786124258_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::get_DecimalDigits()
extern "C"  int32_t NumberFormatter_get_DecimalDigits_m_1651640240_0 (NumberFormatter_t1786124258_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::get_IsFloatingSource()
extern "C"  bool NumberFormatter_get_IsFloatingSource_m_1464010094_0 (NumberFormatter_t1786124258_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::get_IsZero()
extern "C"  bool NumberFormatter_get_IsZero_m1325357749_0 (NumberFormatter_t1786124258_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::get_IsZeroInteger()
extern "C"  bool NumberFormatter_get_IsZeroInteger_m478041835_0 (NumberFormatter_t1786124258_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::RoundPos(System.Int32)
extern "C"  void NumberFormatter_RoundPos_m1838788799_0 (NumberFormatter_t1786124258_0 * __this, int32_t ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::RoundDecimal(System.Int32)
extern "C"  bool NumberFormatter_RoundDecimal_m176606570_0 (NumberFormatter_t1786124258_0 * __this, int32_t ___decimals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::RoundBits(System.Int32)
extern "C"  bool NumberFormatter_RoundBits_m1545255255_0 (NumberFormatter_t1786124258_0 * __this, int32_t ___shift, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::RemoveTrailingZeros()
extern "C"  void NumberFormatter_RemoveTrailingZeros_m_544845303_0 (NumberFormatter_t1786124258_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AddOneToDecHex()
extern "C"  void NumberFormatter_AddOneToDecHex_m_1797608319_0 (NumberFormatter_t1786124258_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.NumberFormatter::AddOneToDecHex(System.UInt32)
extern "C"  uint32_t NumberFormatter_AddOneToDecHex_m_2048350366_0 (Object_t * __this /* static, unused */, uint32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::CountTrailingZeros()
extern "C"  int32_t NumberFormatter_CountTrailingZeros_m_1896102662_0 (NumberFormatter_t1786124258_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::CountTrailingZeros(System.UInt32)
extern "C"  int32_t NumberFormatter_CountTrailingZeros_m1989458300_0 (Object_t * __this /* static, unused */, uint32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.NumberFormatter System.NumberFormatter::GetInstance()
extern "C"  NumberFormatter_t1786124258_0 * NumberFormatter_GetInstance_m_1873706836_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Release()
extern "C"  void NumberFormatter_Release_m_952587075_0 (NumberFormatter_t1786124258_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::SetThreadCurrentCulture(System.Globalization.CultureInfo)
extern "C"  void NumberFormatter_SetThreadCurrentCulture_m44057051_0 (Object_t * __this /* static, unused */, CultureInfo_t1283181710_0 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.SByte,System.IFormatProvider)
extern "C"  String_t* NumberFormatter_NumberToString_m_1207856940_0 (Object_t * __this /* static, unused */, String_t* ___format, int8_t ___value, Object_t * ___fp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Byte,System.IFormatProvider)
extern "C"  String_t* NumberFormatter_NumberToString_m_610291833_0 (Object_t * __this /* static, unused */, String_t* ___format, uint8_t ___value, Object_t * ___fp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.UInt16,System.IFormatProvider)
extern "C"  String_t* NumberFormatter_NumberToString_m395121580_0 (Object_t * __this /* static, unused */, String_t* ___format, uint16_t ___value, Object_t * ___fp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Int16,System.IFormatProvider)
extern "C"  String_t* NumberFormatter_NumberToString_m126384393_0 (Object_t * __this /* static, unused */, String_t* ___format, int16_t ___value, Object_t * ___fp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.UInt32,System.IFormatProvider)
extern "C"  String_t* NumberFormatter_NumberToString_m_1418855814_0 (Object_t * __this /* static, unused */, String_t* ___format, uint32_t ___value, Object_t * ___fp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Int32,System.IFormatProvider)
extern "C"  String_t* NumberFormatter_NumberToString_m_1404225889_0 (Object_t * __this /* static, unused */, String_t* ___format, int32_t ___value, Object_t * ___fp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.UInt64,System.IFormatProvider)
extern "C"  String_t* NumberFormatter_NumberToString_m1457904777_0 (Object_t * __this /* static, unused */, String_t* ___format, uint64_t ___value, Object_t * ___fp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Int64,System.IFormatProvider)
extern "C"  String_t* NumberFormatter_NumberToString_m_436200552_0 (Object_t * __this /* static, unused */, String_t* ___format, int64_t ___value, Object_t * ___fp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Single,System.IFormatProvider)
extern "C"  String_t* NumberFormatter_NumberToString_m_824238413_0 (Object_t * __this /* static, unused */, String_t* ___format, float ___value, Object_t * ___fp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Double,System.IFormatProvider)
extern "C"  String_t* NumberFormatter_NumberToString_m178266682_0 (Object_t * __this /* static, unused */, String_t* ___format, double ___value, Object_t * ___fp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Decimal,System.IFormatProvider)
extern "C"  String_t* NumberFormatter_NumberToString_m_865847204_0 (Object_t * __this /* static, unused */, String_t* ___format, Decimal_t1989943944_0  ___value, Object_t * ___fp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.UInt32,System.IFormatProvider)
extern "C"  String_t* NumberFormatter_NumberToString_m_43532474_0 (Object_t * __this /* static, unused */, uint32_t ___value, Object_t * ___fp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.Int32,System.IFormatProvider)
extern "C"  String_t* NumberFormatter_NumberToString_m668979517_0 (Object_t * __this /* static, unused */, int32_t ___value, Object_t * ___fp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.UInt64,System.IFormatProvider)
extern "C"  String_t* NumberFormatter_NumberToString_m_2076606965_0 (Object_t * __this /* static, unused */, uint64_t ___value, Object_t * ___fp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.Int64,System.IFormatProvider)
extern "C"  String_t* NumberFormatter_NumberToString_m_1643949020_0 (Object_t * __this /* static, unused */, int64_t ___value, Object_t * ___fp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.Single,System.IFormatProvider)
extern "C"  String_t* NumberFormatter_NumberToString_m_439757451_0 (Object_t * __this /* static, unused */, float ___value, Object_t * ___fp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.Double,System.IFormatProvider)
extern "C"  String_t* NumberFormatter_NumberToString_m_1674298118_0 (Object_t * __this /* static, unused */, double ___value, Object_t * ___fp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FastIntegerToString(System.Int32,System.IFormatProvider)
extern "C"  String_t* NumberFormatter_FastIntegerToString_m_1503512676_0 (NumberFormatter_t1786124258_0 * __this, int32_t ___value, Object_t * ___fp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::IntegerToString(System.String,System.IFormatProvider)
extern "C"  String_t* NumberFormatter_IntegerToString_m_1605986237_0 (NumberFormatter_t1786124258_0 * __this, String_t* ___format, Object_t * ___fp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Globalization.NumberFormatInfo)
extern "C"  String_t* NumberFormatter_NumberToString_m1620260148_0 (NumberFormatter_t1786124258_0 * __this, String_t* ___format, NumberFormatInfo_t404474286_0 * ___nfi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatCurrency(System.Int32,System.Globalization.NumberFormatInfo)
extern "C"  String_t* NumberFormatter_FormatCurrency_m_593997254_0 (NumberFormatter_t1786124258_0 * __this, int32_t ___precision, NumberFormatInfo_t404474286_0 * ___nfi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatDecimal(System.Int32,System.Globalization.NumberFormatInfo)
extern "C"  String_t* NumberFormatter_FormatDecimal_m1435371940_0 (NumberFormatter_t1786124258_0 * __this, int32_t ___precision, NumberFormatInfo_t404474286_0 * ___nfi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatHexadecimal(System.Int32)
extern "C"  String_t* NumberFormatter_FormatHexadecimal_m1317851390_0 (NumberFormatter_t1786124258_0 * __this, int32_t ___precision, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatFixedPoint(System.Int32,System.Globalization.NumberFormatInfo)
extern "C"  String_t* NumberFormatter_FormatFixedPoint_m1067655543_0 (NumberFormatter_t1786124258_0 * __this, int32_t ___precision, NumberFormatInfo_t404474286_0 * ___nfi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatRoundtrip(System.Double,System.Globalization.NumberFormatInfo)
extern "C"  String_t* NumberFormatter_FormatRoundtrip_m1185970495_0 (NumberFormatter_t1786124258_0 * __this, double ___origval, NumberFormatInfo_t404474286_0 * ___nfi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatRoundtrip(System.Single,System.Globalization.NumberFormatInfo)
extern "C"  String_t* NumberFormatter_FormatRoundtrip_m449314798_0 (NumberFormatter_t1786124258_0 * __this, float ___origval, NumberFormatInfo_t404474286_0 * ___nfi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatGeneral(System.Int32,System.Globalization.NumberFormatInfo)
extern "C"  String_t* NumberFormatter_FormatGeneral_m_538788301_0 (NumberFormatter_t1786124258_0 * __this, int32_t ___precision, NumberFormatInfo_t404474286_0 * ___nfi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatNumber(System.Int32,System.Globalization.NumberFormatInfo)
extern "C"  String_t* NumberFormatter_FormatNumber_m1755017476_0 (NumberFormatter_t1786124258_0 * __this, int32_t ___precision, NumberFormatInfo_t404474286_0 * ___nfi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatPercent(System.Int32,System.Globalization.NumberFormatInfo)
extern "C"  String_t* NumberFormatter_FormatPercent_m776769918_0 (NumberFormatter_t1786124258_0 * __this, int32_t ___precision, NumberFormatInfo_t404474286_0 * ___nfi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatExponential(System.Int32,System.Globalization.NumberFormatInfo)
extern "C"  String_t* NumberFormatter_FormatExponential_m_254180728_0 (NumberFormatter_t1786124258_0 * __this, int32_t ___precision, NumberFormatInfo_t404474286_0 * ___nfi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatExponential(System.Int32,System.Globalization.NumberFormatInfo,System.Int32)
extern "C"  String_t* NumberFormatter_FormatExponential_m_319681989_0 (NumberFormatter_t1786124258_0 * __this, int32_t ___precision, NumberFormatInfo_t404474286_0 * ___nfi, int32_t ___expDigits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatCustom(System.String,System.Globalization.NumberFormatInfo)
extern "C"  String_t* NumberFormatter_FormatCustom_m_1006144423_0 (NumberFormatter_t1786124258_0 * __this, String_t* ___format, NumberFormatInfo_t404474286_0 * ___nfi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::ZeroTrimEnd(System.Text.StringBuilder,System.Boolean)
extern "C"  void NumberFormatter_ZeroTrimEnd_m1918702516_0 (Object_t * __this /* static, unused */, StringBuilder_t1359700700_0 * ___sb, bool ___canEmpty, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::IsZeroOnly(System.Text.StringBuilder)
extern "C"  bool NumberFormatter_IsZeroOnly_m_799172186_0 (Object_t * __this /* static, unused */, StringBuilder_t1359700700_0 * ___sb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendNonNegativeNumber(System.Text.StringBuilder,System.Int32)
extern "C"  void NumberFormatter_AppendNonNegativeNumber_m629862866_0 (Object_t * __this /* static, unused */, StringBuilder_t1359700700_0 * ___sb, int32_t ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendIntegerString(System.Int32,System.Text.StringBuilder)
extern "C"  void NumberFormatter_AppendIntegerString_m868842252_0 (NumberFormatter_t1786124258_0 * __this, int32_t ___minLength, StringBuilder_t1359700700_0 * ___sb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendIntegerString(System.Int32)
extern "C"  void NumberFormatter_AppendIntegerString_m_507692580_0 (NumberFormatter_t1786124258_0 * __this, int32_t ___minLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendDecimalString(System.Int32,System.Text.StringBuilder)
extern "C"  void NumberFormatter_AppendDecimalString_m_762636483_0 (NumberFormatter_t1786124258_0 * __this, int32_t ___precision, StringBuilder_t1359700700_0 * ___sb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendDecimalString(System.Int32)
extern "C"  void NumberFormatter_AppendDecimalString_m112008349_0 (NumberFormatter_t1786124258_0 * __this, int32_t ___precision, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendIntegerStringWithGroupSeparator(System.Int32[],System.String)
extern "C"  void NumberFormatter_AppendIntegerStringWithGroupSeparator_m1401773574_0 (NumberFormatter_t1786124258_0 * __this, Int32U5BU5D_t1496069209_0* ___groups, String_t* ___groupSeparator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendExponent(System.Globalization.NumberFormatInfo,System.Int32,System.Int32)
extern "C"  void NumberFormatter_AppendExponent_m1974436055_0 (NumberFormatter_t1786124258_0 * __this, NumberFormatInfo_t404474286_0 * ___nfi, int32_t ___exponent, int32_t ___minDigits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendOneDigit(System.Int32)
extern "C"  void NumberFormatter_AppendOneDigit_m_1631262468_0 (NumberFormatter_t1786124258_0 * __this, int32_t ___start, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::FastAppendDigits(System.Int32,System.Boolean)
extern "C"  void NumberFormatter_FastAppendDigits_m_1970161568_0 (NumberFormatter_t1786124258_0 * __this, int32_t ___val, bool ___force, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendDigits(System.Int32,System.Int32)
extern "C"  void NumberFormatter_AppendDigits_m_22602190_0 (NumberFormatter_t1786124258_0 * __this, int32_t ___start, int32_t ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendDigits(System.Int32,System.Int32,System.Text.StringBuilder)
extern "C"  void NumberFormatter_AppendDigits_m1308372770_0 (NumberFormatter_t1786124258_0 * __this, int32_t ___start, int32_t ___end, StringBuilder_t1359700700_0 * ___sb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Multiply10(System.Int32)
extern "C"  void NumberFormatter_Multiply10_m51670316_0 (NumberFormatter_t1786124258_0 * __this, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Divide10(System.Int32)
extern "C"  void NumberFormatter_Divide10_m_1984079665_0 (NumberFormatter_t1786124258_0 * __this, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.NumberFormatter System.NumberFormatter::GetClone()
extern "C"  NumberFormatter_t1786124258_0 * NumberFormatter_GetClone_m1172338062_0 (NumberFormatter_t1786124258_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
