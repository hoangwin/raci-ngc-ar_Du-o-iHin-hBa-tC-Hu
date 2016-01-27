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
// System.Type
struct Type_t;
// System.IFormatProvider
struct IFormatProvider_t_716687078_0;
// System.String
struct String_t;
// System.Exception
struct Exception_t_116002698_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime_1242318096.h"
#include "mscorlib_System_Decimal1989943944.h"
#include "mscorlib_System_Globalization_NumberStyles_1173098347.h"

// System.Object System.Double::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C"  Object_t * Double_System_IConvertible_ToType_m_258701100_0 (double* __this, Type_t * ___targetType, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Double::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C"  bool Double_System_IConvertible_ToBoolean_m_43160762_0 (double* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Double::System.IConvertible.ToByte(System.IFormatProvider)
extern "C"  uint8_t Double_System_IConvertible_ToByte_m_1290682346_0 (double* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Double::System.IConvertible.ToChar(System.IFormatProvider)
extern "C"  uint16_t Double_System_IConvertible_ToChar_m398636054_0 (double* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Double::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C"  DateTime_t_1242318096_0  Double_System_IConvertible_ToDateTime_m_631475466_0 (double* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Double::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C"  Decimal_t1989943944_0  Double_System_IConvertible_ToDecimal_m697501012_0 (double* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Double::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C"  double Double_System_IConvertible_ToDouble_m_1820984234_0 (double* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Double::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C"  int16_t Double_System_IConvertible_ToInt16_m_94326970_0 (double* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Double::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C"  int32_t Double_System_IConvertible_ToInt32_m549769450_0 (double* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Double::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C"  int64_t Double_System_IConvertible_ToInt64_m_496541680_0 (double* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Double::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C"  int8_t Double_System_IConvertible_ToSByte_m1653690240_0 (double* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Double::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C"  float Double_System_IConvertible_ToSingle_m446336726_0 (double* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Double::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C"  uint16_t Double_System_IConvertible_ToUInt16_m286326038_0 (double* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Double::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C"  uint32_t Double_System_IConvertible_ToUInt32_m624993430_0 (double* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Double::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C"  uint64_t Double_System_IConvertible_ToUInt64_m1318285078_0 (double* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Double::CompareTo(System.Object)
extern "C"  int32_t Double_CompareTo_m_288398588_0 (double* __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Double::Equals(System.Object)
extern "C"  bool Double_Equals_m_1502579653_0 (double* __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Double::CompareTo(System.Double)
extern "C"  int32_t Double_CompareTo_m_326927066_0 (double* __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Double::Equals(System.Double)
extern "C"  bool Double_Equals_m920556135_0 (double* __this, double ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Double::GetHashCode()
extern "C"  int32_t Double_GetHashCode_m_891235267_0 (double* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Double::IsInfinity(System.Double)
extern "C"  bool Double_IsInfinity_m1190290474_0 (Object_t * __this /* static, unused */, double ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Double::IsNaN(System.Double)
extern "C"  bool Double_IsNaN_m_2005473085_0 (Object_t * __this /* static, unused */, double ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Double::IsNegativeInfinity(System.Double)
extern "C"  bool Double_IsNegativeInfinity_m1111913183_0 (Object_t * __this /* static, unused */, double ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Double::IsPositiveInfinity(System.Double)
extern "C"  bool Double_IsPositiveInfinity_m_769622865_0 (Object_t * __this /* static, unused */, double ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Double::Parse(System.String)
extern "C"  double Double_Parse_m1560474910_0 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Double::Parse(System.String,System.IFormatProvider)
extern "C"  double Double_Parse_m_2013202118_0 (Object_t * __this /* static, unused */, String_t* ___s, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Double::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
extern "C"  double Double_Parse_m_1950377785_0 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Double::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Boolean,System.Double&,System.Exception&)
extern "C"  bool Double_Parse_m1617409931_0 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, bool ___tryParse, double* ___result, Exception_t_116002698_0 ** ___exc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Double::TryParseStringConstant(System.String,System.String,System.Int32,System.Int32)
extern "C"  bool Double_TryParseStringConstant_m_1709561593_0 (Object_t * __this /* static, unused */, String_t* ___format, String_t* ___s, int32_t ___start, int32_t ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Double::ParseImpl(System.Byte*,System.Double&)
extern "C"  bool Double_ParseImpl_m_1461344294_0 (Object_t * __this /* static, unused */, uint8_t* ___byte_ptr, double* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Double::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Double&)
extern "C"  bool Double_TryParse_m815528105_0 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, double* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Double::TryParse(System.String,System.Double&)
extern "C"  bool Double_TryParse_m_1042948302_0 (Object_t * __this /* static, unused */, String_t* ___s, double* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Double::ToString()
extern "C"  String_t* Double_ToString_m1864290157_0 (double* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Double::ToString(System.IFormatProvider)
extern "C"  String_t* Double_ToString_m1085043609_0 (double* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Double::ToString(System.String)
extern "C"  String_t* Double_ToString_m_2084923377_0 (double* __this, String_t* ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Double::ToString(System.String,System.IFormatProvider)
extern "C"  String_t* Double_ToString_m1474956491_0 (double* __this, String_t* ___format, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
