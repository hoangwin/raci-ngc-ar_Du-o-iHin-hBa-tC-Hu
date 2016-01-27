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
// System.Int32[]
struct Int32U5BU5D_t1496069209_0;
// System.String
struct String_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t404474286_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Decimal1989943944.h"
#include "mscorlib_System_DateTime_1242318096.h"
#include "mscorlib_System_Globalization_NumberStyles_1173098347.h"

// System.Void System.Decimal::.ctor(System.Int32,System.Int32,System.Int32,System.Boolean,System.Byte)
extern "C"  void Decimal__ctor_m1770144563_0 (Decimal_t1989943944_0 * __this, int32_t ___lo, int32_t ___mid, int32_t ___hi, bool ___isNegative, uint8_t ___scale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.Int32)
extern "C"  void Decimal__ctor_m1010012873_0 (Decimal_t1989943944_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.UInt32)
extern "C"  void Decimal__ctor_m1376049078_0 (Decimal_t1989943944_0 * __this, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.Int64)
extern "C"  void Decimal__ctor_m1991243832_0 (Decimal_t1989943944_0 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.UInt64)
extern "C"  void Decimal__ctor_m569480123_0 (Decimal_t1989943944_0 * __this, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.Single)
extern "C"  void Decimal__ctor_m2078022985_0 (Decimal_t1989943944_0 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.Double)
extern "C"  void Decimal__ctor_m_418272410_0 (Decimal_t1989943944_0 * __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.cctor()
extern "C"  void Decimal__cctor_m_1694236881_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Decimal::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C"  Object_t * Decimal_System_IConvertible_ToType_m_466439572_0 (Decimal_t1989943944_0 * __this, Type_t * ___targetType, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C"  bool Decimal_System_IConvertible_ToBoolean_m746732936_0 (Decimal_t1989943944_0 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Decimal::System.IConvertible.ToByte(System.IFormatProvider)
extern "C"  uint8_t Decimal_System_IConvertible_ToByte_m_862806456_0 (Decimal_t1989943944_0 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Decimal::System.IConvertible.ToChar(System.IFormatProvider)
extern "C"  uint16_t Decimal_System_IConvertible_ToChar_m_1869876096_0 (Decimal_t1989943944_0 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Decimal::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C"  DateTime_t_1242318096_0  Decimal_System_IConvertible_ToDateTime_m_47207046_0 (Decimal_t1989943944_0 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C"  Decimal_t1989943944_0  Decimal_System_IConvertible_ToDecimal_m1541432424_0 (Decimal_t1989943944_0 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Decimal::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C"  double Decimal_System_IConvertible_ToDouble_m266191986_0 (Decimal_t1989943944_0 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Decimal::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C"  int16_t Decimal_System_IConvertible_ToInt16_m_1135928504_0 (Decimal_t1989943944_0 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C"  int32_t Decimal_System_IConvertible_ToInt32_m_1343667768_0 (Decimal_t1989943944_0 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Decimal::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C"  int64_t Decimal_System_IConvertible_ToInt64_m_1790604024_0 (Decimal_t1989943944_0 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Decimal::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C"  int8_t Decimal_System_IConvertible_ToSByte_m_549826296_0 (Decimal_t1989943944_0 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Decimal::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C"  float Decimal_System_IConvertible_ToSingle_m1736019752_0 (Decimal_t1989943944_0 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Decimal::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C"  uint16_t Decimal_System_IConvertible_ToUInt16_m1621568250_0 (Decimal_t1989943944_0 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Decimal::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C"  uint32_t Decimal_System_IConvertible_ToUInt32_m1050425626_0 (Decimal_t1989943944_0 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Decimal::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C"  uint64_t Decimal_System_IConvertible_ToUInt64_m_1837689960_0 (Decimal_t1989943944_0 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Decimal::GetBits(System.Decimal)
extern "C"  Int32U5BU5D_t1496069209_0* Decimal_GetBits_m_774565980_0 (Object_t * __this /* static, unused */, Decimal_t1989943944_0  ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Add(System.Decimal,System.Decimal)
extern "C"  Decimal_t1989943944_0  Decimal_Add_m1535064574_0 (Object_t * __this /* static, unused */, Decimal_t1989943944_0  ___d1, Decimal_t1989943944_0  ___d2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Subtract(System.Decimal,System.Decimal)
extern "C"  Decimal_t1989943944_0  Decimal_Subtract_m505281095_0 (Object_t * __this /* static, unused */, Decimal_t1989943944_0  ___d1, Decimal_t1989943944_0  ___d2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::GetHashCode()
extern "C"  int32_t Decimal_GetHashCode_m703641627_0 (Decimal_t1989943944_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Decimal::u64(System.Decimal)
extern "C"  uint64_t Decimal_u64_m_302979185_0 (Object_t * __this /* static, unused */, Decimal_t1989943944_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Decimal::s64(System.Decimal)
extern "C"  int64_t Decimal_s64_m_1329509864_0 (Object_t * __this /* static, unused */, Decimal_t1989943944_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::Equals(System.Decimal,System.Decimal)
extern "C"  bool Decimal_Equals_m_1227488253_0 (Object_t * __this /* static, unused */, Decimal_t1989943944_0  ___d1, Decimal_t1989943944_0  ___d2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::Equals(System.Object)
extern "C"  bool Decimal_Equals_m1798565377_0 (Decimal_t1989943944_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::IsZero()
extern "C"  bool Decimal_IsZero_m_737058112_0 (Decimal_t1989943944_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Floor(System.Decimal)
extern "C"  Decimal_t1989943944_0  Decimal_Floor_m1662853963_0 (Object_t * __this /* static, unused */, Decimal_t1989943944_0  ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Multiply(System.Decimal,System.Decimal)
extern "C"  Decimal_t1989943944_0  Decimal_Multiply_m1884379383_0 (Object_t * __this /* static, unused */, Decimal_t1989943944_0  ___d1, Decimal_t1989943944_0  ___d2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Divide(System.Decimal,System.Decimal)
extern "C"  Decimal_t1989943944_0  Decimal_Divide_m600158300_0 (Object_t * __this /* static, unused */, Decimal_t1989943944_0  ___d1, Decimal_t1989943944_0  ___d2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::Compare(System.Decimal,System.Decimal)
extern "C"  int32_t Decimal_Compare_m1330176085_0 (Object_t * __this /* static, unused */, Decimal_t1989943944_0  ___d1, Decimal_t1989943944_0  ___d2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::CompareTo(System.Object)
extern "C"  int32_t Decimal_CompareTo_m_1840465862_0 (Decimal_t1989943944_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::CompareTo(System.Decimal)
extern "C"  int32_t Decimal_CompareTo_m573986782_0 (Decimal_t1989943944_0 * __this, Decimal_t1989943944_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::Equals(System.Decimal)
extern "C"  bool Decimal_Equals_m1115043331_0 (Decimal_t1989943944_0 * __this, Decimal_t1989943944_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Parse(System.String,System.IFormatProvider)
extern "C"  Decimal_t1989943944_0  Decimal_Parse_m_1632104646_0 (Object_t * __this /* static, unused */, String_t* ___s, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::ThrowAtPos(System.Int32)
extern "C"  void Decimal_ThrowAtPos_m_976254502_0 (Object_t * __this /* static, unused */, int32_t ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::ThrowInvalidExp()
extern "C"  void Decimal_ThrowInvalidExp_m_864699658_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Decimal::stripStyles(System.String,System.Globalization.NumberStyles,System.Globalization.NumberFormatInfo,System.Int32&,System.Boolean&,System.Boolean&,System.Int32&,System.Boolean)
extern "C"  String_t* Decimal_stripStyles_m294582157_0 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___style, NumberFormatInfo_t404474286_0 * ___nfi, int32_t* ___decPos, bool* ___isNegative, bool* ___expFlag, int32_t* ___exp, bool ___throwex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
extern "C"  Decimal_t1989943944_0  Decimal_Parse_m_1371181369_0 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::PerformParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Decimal&,System.Boolean)
extern "C"  bool Decimal_PerformParse_m1766978056_0 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, Decimal_t1989943944_0 * ___res, bool ___throwex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Decimal::ToString(System.String,System.IFormatProvider)
extern "C"  String_t* Decimal_ToString_m541380585_0 (Decimal_t1989943944_0 * __this, String_t* ___format, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Decimal::ToString()
extern "C"  String_t* Decimal_ToString_m759431975_0 (Decimal_t1989943944_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Decimal::ToString(System.IFormatProvider)
extern "C"  String_t* Decimal_ToString_m752193835_0 (Decimal_t1989943944_0 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimal2UInt64(System.Decimal&,System.UInt64&)
extern "C"  int32_t Decimal_decimal2UInt64_m2090419396_0 (Object_t * __this /* static, unused */, Decimal_t1989943944_0 * ___val, uint64_t* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimal2Int64(System.Decimal&,System.Int64&)
extern "C"  int32_t Decimal_decimal2Int64_m792823028_0 (Object_t * __this /* static, unused */, Decimal_t1989943944_0 * ___val, int64_t* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimalIncr(System.Decimal&,System.Decimal&)
extern "C"  int32_t Decimal_decimalIncr_m_1475244673_0 (Object_t * __this /* static, unused */, Decimal_t1989943944_0 * ___d1, Decimal_t1989943944_0 * ___d2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::string2decimal(System.Decimal&,System.String,System.UInt32,System.Int32)
extern "C"  int32_t Decimal_string2decimal_m_1935659757_0 (Object_t * __this /* static, unused */, Decimal_t1989943944_0 * ___val, String_t* ___sDigits, uint32_t ___decPos, int32_t ___sign, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimalSetExponent(System.Decimal&,System.Int32)
extern "C"  int32_t Decimal_decimalSetExponent_m138220099_0 (Object_t * __this /* static, unused */, Decimal_t1989943944_0 * ___val, int32_t ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Decimal::decimal2double(System.Decimal&)
extern "C"  double Decimal_decimal2double_m_1211100633_0 (Object_t * __this /* static, unused */, Decimal_t1989943944_0 * ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::decimalFloorAndTrunc(System.Decimal&,System.Int32)
extern "C"  void Decimal_decimalFloorAndTrunc_m_639283867_0 (Object_t * __this /* static, unused */, Decimal_t1989943944_0 * ___val, int32_t ___floorFlag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimalMult(System.Decimal&,System.Decimal&)
extern "C"  int32_t Decimal_decimalMult_m_976553859_0 (Object_t * __this /* static, unused */, Decimal_t1989943944_0 * ___pd1, Decimal_t1989943944_0 * ___pd2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimalDiv(System.Decimal&,System.Decimal&,System.Decimal&)
extern "C"  int32_t Decimal_decimalDiv_m900036616_0 (Object_t * __this /* static, unused */, Decimal_t1989943944_0 * ___pc, Decimal_t1989943944_0 * ___pa, Decimal_t1989943944_0 * ___pb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimalCompare(System.Decimal&,System.Decimal&)
extern "C"  int32_t Decimal_decimalCompare_m26009298_0 (Object_t * __this /* static, unused */, Decimal_t1989943944_0 * ___d1, Decimal_t1989943944_0 * ___d2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Increment(System.Decimal)
extern "C"  Decimal_t1989943944_0  Decimal_op_Increment_m2012286538_0 (Object_t * __this /* static, unused */, Decimal_t1989943944_0  ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Subtraction(System.Decimal,System.Decimal)
extern "C"  Decimal_t1989943944_0  Decimal_op_Subtraction_m_13346893_0 (Object_t * __this /* static, unused */, Decimal_t1989943944_0  ___d1, Decimal_t1989943944_0  ___d2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Multiply(System.Decimal,System.Decimal)
extern "C"  Decimal_t1989943944_0  Decimal_op_Multiply_m363076371_0 (Object_t * __this /* static, unused */, Decimal_t1989943944_0  ___d1, Decimal_t1989943944_0  ___d2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Division(System.Decimal,System.Decimal)
extern "C"  Decimal_t1989943944_0  Decimal_op_Division_m1099836590_0 (Object_t * __this /* static, unused */, Decimal_t1989943944_0  ___d1, Decimal_t1989943944_0  ___d2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Decimal::op_Explicit(System.Decimal)
extern "C"  uint8_t Decimal_op_Explicit_m1053293908_0 (Object_t * __this /* static, unused */, Decimal_t1989943944_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Decimal::op_Explicit(System.Decimal)
extern "C"  int8_t Decimal_op_Explicit_m2135374155_0 (Object_t * __this /* static, unused */, Decimal_t1989943944_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Decimal::op_Explicit(System.Decimal)
extern "C"  int16_t Decimal_op_Explicit_m_979534894_0 (Object_t * __this /* static, unused */, Decimal_t1989943944_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Decimal::op_Explicit(System.Decimal)
extern "C"  uint16_t Decimal_op_Explicit_m1986696267_0 (Object_t * __this /* static, unused */, Decimal_t1989943944_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::op_Explicit(System.Decimal)
extern "C"  int32_t Decimal_op_Explicit_m_1800073064_0 (Object_t * __this /* static, unused */, Decimal_t1989943944_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Decimal::op_Explicit(System.Decimal)
extern "C"  uint32_t Decimal_op_Explicit_m714968249_0 (Object_t * __this /* static, unused */, Decimal_t1989943944_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Decimal::op_Explicit(System.Decimal)
extern "C"  int64_t Decimal_op_Explicit_m682912811_0 (Object_t * __this /* static, unused */, Decimal_t1989943944_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Decimal::op_Explicit(System.Decimal)
extern "C"  uint64_t Decimal_op_Explicit_m383920456_0 (Object_t * __this /* static, unused */, Decimal_t1989943944_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.Byte)
extern "C"  Decimal_t1989943944_0  Decimal_op_Implicit_m_1323356979_0 (Object_t * __this /* static, unused */, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.SByte)
extern "C"  Decimal_t1989943944_0  Decimal_op_Implicit_m623319612_0 (Object_t * __this /* static, unused */, int8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.Int16)
extern "C"  Decimal_t1989943944_0  Decimal_op_Implicit_m987128055_0 (Object_t * __this /* static, unused */, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.UInt16)
extern "C"  Decimal_t1989943944_0  Decimal_op_Implicit_m233687092_0 (Object_t * __this /* static, unused */, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.Int32)
extern "C"  Decimal_t1989943944_0  Decimal_op_Implicit_m_982240347_0 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.UInt32)
extern "C"  Decimal_t1989943944_0  Decimal_op_Implicit_m_48637906_0 (Object_t * __this /* static, unused */, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.Int64)
extern "C"  Decimal_t1989943944_0  Decimal_op_Implicit_m_2145039988_0 (Object_t * __this /* static, unused */, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.UInt64)
extern "C"  Decimal_t1989943944_0  Decimal_op_Implicit_m2135798419_0 (Object_t * __this /* static, unused */, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Explicit(System.Single)
extern "C"  Decimal_t1989943944_0  Decimal_op_Explicit_m185184148_0 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Explicit(System.Double)
extern "C"  Decimal_t1989943944_0  Decimal_op_Explicit_m1194935507_0 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Decimal::op_Explicit(System.Decimal)
extern "C"  float Decimal_op_Explicit_m729046406_0 (Object_t * __this /* static, unused */, Decimal_t1989943944_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Decimal::op_Explicit(System.Decimal)
extern "C"  double Decimal_op_Explicit_m16014099_0 (Object_t * __this /* static, unused */, Decimal_t1989943944_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::op_Inequality(System.Decimal,System.Decimal)
extern "C"  bool Decimal_op_Inequality_m519758535_0 (Object_t * __this /* static, unused */, Decimal_t1989943944_0  ___d1, Decimal_t1989943944_0  ___d2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::op_Equality(System.Decimal,System.Decimal)
extern "C"  bool Decimal_op_Equality_m_2016349142_0 (Object_t * __this /* static, unused */, Decimal_t1989943944_0  ___d1, Decimal_t1989943944_0  ___d2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::op_GreaterThan(System.Decimal,System.Decimal)
extern "C"  bool Decimal_op_GreaterThan_m1625379433_0 (Object_t * __this /* static, unused */, Decimal_t1989943944_0  ___d1, Decimal_t1989943944_0  ___d2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::op_LessThan(System.Decimal,System.Decimal)
extern "C"  bool Decimal_op_LessThan_m_622340976_0 (Object_t * __this /* static, unused */, Decimal_t1989943944_0  ___d1, Decimal_t1989943944_0  ___d2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
