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

// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t2048601427_0;
// System.IFormatProvider
struct IFormatProvider_t_716687078_0;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Collections.Generic.IEnumerator`1<System.Char>
struct IEnumerator_1_t1084163406_0;
// System.Collections.IEnumerator
struct IEnumerator_t435631375_0;
// System.String[]
struct StringU5BU5D_t_1137506664_0;
// System.Globalization.CultureInfo
struct CultureInfo_t1283181710_0;
// System.Object[]
struct ObjectU5BU5D_t_591698798_0;
// System.Text.StringBuilder
struct StringBuilder_t1359700700_0;
// System.Text.Encoding
struct Encoding_t_1491589107_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime_1242318096.h"
#include "mscorlib_System_Decimal1989943944.h"
#include "mscorlib_System_StringSplitOptions_831991506.h"
#include "mscorlib_System_StringComparison643151393.h"
#include "mscorlib_System_Globalization_CompareOptions_1730749291.h"

// System.Void System.String::.ctor(System.Char*,System.Int32,System.Int32)
extern "C"  void String__ctor_m2041020387_0 (String_t* __this, uint16_t* ___value, int32_t ___startIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::.ctor(System.Char[],System.Int32,System.Int32)
extern "C"  void String__ctor_m_1201956769_0 (String_t* __this, CharU5BU5D_t2048601427_0* ___value, int32_t ___startIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::.ctor(System.Char[])
extern "C"  void String__ctor_m372528291_0 (String_t* __this, CharU5BU5D_t2048601427_0* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::.ctor(System.Char,System.Int32)
extern "C"  void String__ctor_m757966614_0 (String_t* __this, uint16_t ___c, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::.cctor()
extern "C"  void String__cctor_m710226597_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C"  bool String_System_IConvertible_ToBoolean_m_1598215974_0 (String_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.String::System.IConvertible.ToByte(System.IFormatProvider)
extern "C"  uint8_t String_System_IConvertible_ToByte_m_1562644886_0 (String_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.String::System.IConvertible.ToChar(System.IFormatProvider)
extern "C"  uint16_t String_System_IConvertible_ToChar_m1804118378_0 (String_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.String::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C"  DateTime_t_1242318096_0  String_System_IConvertible_ToDateTime_m1423627978_0 (String_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.String::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C"  Decimal_t1989943944_0  String_System_IConvertible_ToDecimal_m1150081472_0 (String_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.String::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C"  double String_System_IConvertible_ToDouble_m_434055574_0 (String_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.String::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C"  int16_t String_System_IConvertible_ToInt16_m_1929664230_0 (String_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C"  int32_t String_System_IConvertible_ToInt32_m1927223638_0 (String_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.String::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C"  int64_t String_System_IConvertible_ToInt64_m1895913508_0 (String_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.String::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C"  int8_t String_System_IConvertible_ToSByte_m587045588_0 (String_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.String::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C"  float String_System_IConvertible_ToSingle_m1404310570_0 (String_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.String::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C"  Object_t * String_System_IConvertible_ToType_m512800076_0 (String_t* __this, Type_t * ___targetType, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.String::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C"  uint16_t String_System_IConvertible_ToUInt16_m981183466_0 (String_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.String::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C"  uint32_t String_System_IConvertible_ToUInt32_m1549386346_0 (String_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.String::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C"  uint64_t String_System_IConvertible_ToUInt64_m_730490326_0 (String_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Char> System.String::System.Collections.Generic.IEnumerable<char>.GetEnumerator()
extern "C"  Object_t* String_System_Collections_Generic_IEnumerableU3CcharU3E_GetEnumerator_m1449564085_0 (String_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.String::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * String_System_Collections_IEnumerable_GetEnumerator_m252173599_0 (String_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Equals(System.String,System.String)
extern "C"  bool String_Equals_m_726819171_0 (Object_t * __this /* static, unused */, String_t* ___a, String_t* ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Equals(System.Object)
extern "C"  bool String_Equals_m406432531_0 (String_t* __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Equals(System.String)
extern "C"  bool String_Equals_m_1661374873_0 (String_t* __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.String::get_Chars(System.Int32)
extern "C"  uint16_t String_get_Chars_m_64400591_0 (String_t* __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.String::Clone()
extern "C"  Object_t * String_Clone_m_632979716_0 (String_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::CopyTo(System.Int32,System.Char[],System.Int32,System.Int32)
extern "C"  void String_CopyTo_m_897758952_0 (String_t* __this, int32_t ___sourceIndex, CharU5BU5D_t2048601427_0* ___destination, int32_t ___destinationIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char[] System.String::ToCharArray()
extern "C"  CharU5BU5D_t2048601427_0* String_ToCharArray_m870309954_0 (String_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char[] System.String::ToCharArray(System.Int32,System.Int32)
extern "C"  CharU5BU5D_t2048601427_0* String_ToCharArray_m324532646_0 (String_t* __this, int32_t ___startIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::Split(System.Char[])
extern "C"  StringU5BU5D_t_1137506664_0* String_Split_m_968701432_0 (String_t* __this, CharU5BU5D_t2048601427_0* ___separator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::Split(System.Char[],System.Int32)
extern "C"  StringU5BU5D_t_1137506664_0* String_Split_m_944270733_0 (String_t* __this, CharU5BU5D_t2048601427_0* ___separator, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::Split(System.Char[],System.Int32,System.StringSplitOptions)
extern "C"  StringU5BU5D_t_1137506664_0* String_Split_m1779268055_0 (String_t* __this, CharU5BU5D_t2048601427_0* ___separator, int32_t ___count, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::Split(System.String[],System.Int32,System.StringSplitOptions)
extern "C"  StringU5BU5D_t_1137506664_0* String_Split_m394273024_0 (String_t* __this, StringU5BU5D_t_1137506664_0* ___separator, int32_t ___count, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::Split(System.String[],System.StringSplitOptions)
extern "C"  StringU5BU5D_t_1137506664_0* String_Split_m_367227205_0 (String_t* __this, StringU5BU5D_t_1137506664_0* ___separator, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Substring(System.Int32)
extern "C"  String_t* String_Substring_m2032624251_0 (String_t* __this, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Substring(System.Int32,System.Int32)
extern "C"  String_t* String_Substring_m12482732_0 (String_t* __this, int32_t ___startIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::SubstringUnchecked(System.Int32,System.Int32)
extern "C"  String_t* String_SubstringUnchecked_m_997375886_0 (String_t* __this, int32_t ___startIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Trim()
extern "C"  String_t* String_Trim_m_1626199583_0 (String_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Trim(System.Char[])
extern "C"  String_t* String_Trim_m_312447072_0 (String_t* __this, CharU5BU5D_t2048601427_0* ___trimChars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::TrimStart(System.Char[])
extern "C"  String_t* String_TrimStart_m710830036_0 (String_t* __this, CharU5BU5D_t2048601427_0* ___trimChars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::TrimEnd(System.Char[])
extern "C"  String_t* String_TrimEnd_m_1141824285_0 (String_t* __this, CharU5BU5D_t2048601427_0* ___trimChars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::FindNotWhiteSpace(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t String_FindNotWhiteSpace_m729333788_0 (String_t* __this, int32_t ___pos, int32_t ___target, int32_t ___change, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::FindNotInTable(System.Int32,System.Int32,System.Int32,System.Char[])
extern "C"  int32_t String_FindNotInTable_m2094917037_0 (String_t* __this, int32_t ___pos, int32_t ___target, int32_t ___change, CharU5BU5D_t2048601427_0* ___table, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::Compare(System.String,System.String)
extern "C"  int32_t String_Compare_m705567607_0 (Object_t * __this /* static, unused */, String_t* ___strA, String_t* ___strB, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::Compare(System.String,System.String,System.Boolean)
extern "C"  int32_t String_Compare_m_1443359624_0 (Object_t * __this /* static, unused */, String_t* ___strA, String_t* ___strB, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::Compare(System.String,System.String,System.Boolean,System.Globalization.CultureInfo)
extern "C"  int32_t String_Compare_m1847873744_0 (Object_t * __this /* static, unused */, String_t* ___strA, String_t* ___strB, bool ___ignoreCase, CultureInfo_t1283181710_0 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::Compare(System.String,System.Int32,System.String,System.Int32,System.Int32,System.Boolean,System.Globalization.CultureInfo)
extern "C"  int32_t String_Compare_m560208559_0 (Object_t * __this /* static, unused */, String_t* ___strA, int32_t ___indexA, String_t* ___strB, int32_t ___indexB, int32_t ___length, bool ___ignoreCase, CultureInfo_t1283181710_0 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::CompareTo(System.Object)
extern "C"  int32_t String_CompareTo_m_1413785348_0 (String_t* __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::CompareTo(System.String)
extern "C"  int32_t String_CompareTo_m_415357402_0 (String_t* __this, String_t* ___strB, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::CompareOrdinal(System.String,System.Int32,System.String,System.Int32,System.Int32)
extern "C"  int32_t String_CompareOrdinal_m244070001_0 (Object_t * __this /* static, unused */, String_t* ___strA, int32_t ___indexA, String_t* ___strB, int32_t ___indexB, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::CompareOrdinalUnchecked(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32)
extern "C"  int32_t String_CompareOrdinalUnchecked_m_507585584_0 (Object_t * __this /* static, unused */, String_t* ___strA, int32_t ___indexA, int32_t ___lenA, String_t* ___strB, int32_t ___indexB, int32_t ___lenB, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::CompareOrdinalCaseInsensitiveUnchecked(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32)
extern "C"  int32_t String_CompareOrdinalCaseInsensitiveUnchecked_m2002640463_0 (Object_t * __this /* static, unused */, String_t* ___strA, int32_t ___indexA, int32_t ___lenA, String_t* ___strB, int32_t ___indexB, int32_t ___lenB, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::EndsWith(System.String)
extern "C"  bool String_EndsWith_m568509976_0 (String_t* __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfAny(System.Char[])
extern "C"  int32_t String_IndexOfAny_m2016554902_0 (String_t* __this, CharU5BU5D_t2048601427_0* ___anyOf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfAny(System.Char[],System.Int32)
extern "C"  int32_t String_IndexOfAny_m2027595557_0 (String_t* __this, CharU5BU5D_t2048601427_0* ___anyOf, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfAny(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t String_IndexOfAny_m_2007098200_0 (String_t* __this, CharU5BU5D_t2048601427_0* ___anyOf, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfAnyUnchecked(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t String_IndexOfAnyUnchecked_m1691561612_0 (String_t* __this, CharU5BU5D_t2048601427_0* ___anyOf, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.String,System.StringComparison)
extern "C"  int32_t String_IndexOf_m570401060_0 (String_t* __this, String_t* ___value, int32_t ___comparisonType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.String,System.Int32,System.Int32,System.StringComparison)
extern "C"  int32_t String_IndexOf_m2126171214_0 (String_t* __this, String_t* ___value, int32_t ___startIndex, int32_t ___count, int32_t ___comparisonType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfOrdinal(System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
extern "C"  int32_t String_IndexOfOrdinal_m_703343319_0 (String_t* __this, String_t* ___value, int32_t ___startIndex, int32_t ___count, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfOrdinalUnchecked(System.String,System.Int32,System.Int32)
extern "C"  int32_t String_IndexOfOrdinalUnchecked_m_33917184_0 (String_t* __this, String_t* ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfOrdinalIgnoreCaseUnchecked(System.String,System.Int32,System.Int32)
extern "C"  int32_t String_IndexOfOrdinalIgnoreCaseUnchecked_m1674098430_0 (String_t* __this, String_t* ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.Char)
extern "C"  int32_t String_IndexOf_m_1936728060_0 (String_t* __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.Char,System.Int32)
extern "C"  int32_t String_IndexOf_m_404604759_0 (String_t* __this, uint16_t ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.Char,System.Int32,System.Int32)
extern "C"  int32_t String_IndexOf_m519385554_0 (String_t* __this, uint16_t ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfUnchecked(System.Char,System.Int32,System.Int32)
extern "C"  int32_t String_IndexOfUnchecked_m_938245742_0 (String_t* __this, uint16_t ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.String)
extern "C"  int32_t String_IndexOf_m_43151559_0 (String_t* __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.String,System.Int32)
extern "C"  int32_t String_IndexOf_m1887352430_0 (String_t* __this, String_t* ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.String,System.Int32,System.Int32)
extern "C"  int32_t String_IndexOf_m_544667475_0 (String_t* __this, String_t* ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOfAny(System.Char[])
extern "C"  int32_t String_LastIndexOfAny_m1473637802_0 (String_t* __this, CharU5BU5D_t2048601427_0* ___anyOf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOfAny(System.Char[],System.Int32)
extern "C"  int32_t String_LastIndexOfAny_m_13642001_0 (String_t* __this, CharU5BU5D_t2048601427_0* ___anyOf, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOfAnyUnchecked(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t String_LastIndexOfAnyUnchecked_m_779869100_0 (String_t* __this, CharU5BU5D_t2048601427_0* ___anyOf, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOf(System.Char)
extern "C"  int32_t String_LastIndexOf_m_739091616_0 (String_t* __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOf(System.Char,System.Int32)
extern "C"  int32_t String_LastIndexOf_m_1137452025_0 (String_t* __this, uint16_t ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOf(System.Char,System.Int32,System.Int32)
extern "C"  int32_t String_LastIndexOf_m_1348948270_0 (String_t* __this, uint16_t ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOfUnchecked(System.Char,System.Int32,System.Int32)
extern "C"  int32_t String_LastIndexOfUnchecked_m1575121566_0 (String_t* __this, uint16_t ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOf(System.String)
extern "C"  int32_t String_LastIndexOf_m1975817115_0 (String_t* __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOf(System.String,System.Int32,System.Int32)
extern "C"  int32_t String_LastIndexOf_m290475879_0 (String_t* __this, String_t* ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Contains(System.String)
extern "C"  bool String_Contains_m_277907333_0 (String_t* __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C"  bool String_IsNullOrEmpty_m_1492840559_0 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::PadRight(System.Int32,System.Char)
extern "C"  String_t* String_PadRight_m1043573208_0 (String_t* __this, int32_t ___totalWidth, uint16_t ___paddingChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::StartsWith(System.String)
extern "C"  bool String_StartsWith_m1841920685_0 (String_t* __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Replace(System.Char,System.Char)
extern "C"  String_t* String_Replace_m534438427_0 (String_t* __this, uint16_t ___oldChar, uint16_t ___newChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Replace(System.String,System.String)
extern "C"  String_t* String_Replace_m1941156251_0 (String_t* __this, String_t* ___oldValue, String_t* ___newValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ReplaceUnchecked(System.String,System.String)
extern "C"  String_t* String_ReplaceUnchecked_m_363055653_0 (String_t* __this, String_t* ___oldValue, String_t* ___newValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ReplaceFallback(System.String,System.String,System.Int32)
extern "C"  String_t* String_ReplaceFallback_m64616664_0 (String_t* __this, String_t* ___oldValue, String_t* ___newValue, int32_t ___testedCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Remove(System.Int32,System.Int32)
extern "C"  String_t* String_Remove_m_714852831_0 (String_t* __this, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToLower()
extern "C"  String_t* String_ToLower_m_1300506773_0 (String_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToLower(System.Globalization.CultureInfo)
extern "C"  String_t* String_ToLower_m743194025_0 (String_t* __this, CultureInfo_t1283181710_0 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToLowerInvariant()
extern "C"  String_t* String_ToLowerInvariant_m_1142439809_0 (String_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToString()
extern "C"  String_t* String_ToString_m_1068307295_0 (String_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToString(System.IFormatProvider)
extern "C"  String_t* String_ToString_m_347933107_0 (String_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object)
extern "C"  String_t* String_Format_m2024975688_0 (Object_t * __this /* static, unused */, String_t* ___format, Object_t * ___arg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object,System.Object)
extern "C"  String_t* String_Format_m1811873526_0 (Object_t * __this /* static, unused */, String_t* ___format, Object_t * ___arg0, Object_t * ___arg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
extern "C"  String_t* String_Format_m_32051000_0 (Object_t * __this /* static, unused */, String_t* ___format, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object[])
extern "C"  String_t* String_Format_m1263743648_0 (Object_t * __this /* static, unused */, String_t* ___format, ObjectU5BU5D_t_591698798_0* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object[])
extern "C"  String_t* String_Format_m876527052_0 (Object_t * __this /* static, unused */, Object_t * ___provider, String_t* ___format, ObjectU5BU5D_t_591698798_0* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.String::FormatHelper(System.Text.StringBuilder,System.IFormatProvider,System.String,System.Object[])
extern "C"  StringBuilder_t1359700700_0 * String_FormatHelper_m1513692144_0 (Object_t * __this /* static, unused */, StringBuilder_t1359700700_0 * ___result, Object_t * ___provider, String_t* ___format, ObjectU5BU5D_t_591698798_0* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object)
extern "C"  String_t* String_Concat_m56707527_0 (Object_t * __this /* static, unused */, Object_t * ___arg0, Object_t * ___arg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object,System.Object)
extern "C"  String_t* String_Concat_m2000667605_0 (Object_t * __this /* static, unused */, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m_1698557753_0 (Object_t * __this /* static, unused */, String_t* ___str0, String_t* ___str1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m612901809_0 (Object_t * __this /* static, unused */, String_t* ___str0, String_t* ___str1, String_t* ___str2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m1561703559_0 (Object_t * __this /* static, unused */, String_t* ___str0, String_t* ___str1, String_t* ___str2, String_t* ___str3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object[])
extern "C"  String_t* String_Concat_m_413168673_0 (Object_t * __this /* static, unused */, ObjectU5BU5D_t_591698798_0* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String[])
extern "C"  String_t* String_Concat_m626692867_0 (Object_t * __this /* static, unused */, StringU5BU5D_t_1137506664_0* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ConcatInternal(System.String[],System.Int32)
extern "C"  String_t* String_ConcatInternal_m165256365_0 (Object_t * __this /* static, unused */, StringU5BU5D_t_1137506664_0* ___values, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Insert(System.Int32,System.String)
extern "C"  String_t* String_Insert_m1649676359_0 (String_t* __this, int32_t ___startIndex, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Join(System.String,System.String[])
extern "C"  String_t* String_Join_m1966872927_0 (Object_t * __this /* static, unused */, String_t* ___separator, StringU5BU5D_t_1137506664_0* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Join(System.String,System.String[],System.Int32,System.Int32)
extern "C"  String_t* String_Join_m106492019_0 (Object_t * __this /* static, unused */, String_t* ___separator, StringU5BU5D_t_1137506664_0* ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::JoinUnchecked(System.String,System.String[],System.Int32,System.Int32)
extern "C"  String_t* String_JoinUnchecked_m1880555587_0 (Object_t * __this /* static, unused */, String_t* ___separator, StringU5BU5D_t_1137506664_0* ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::get_Length()
extern "C"  int32_t String_get_Length_m1606060069_0 (String_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::ParseFormatSpecifier(System.String,System.Int32&,System.Int32&,System.Int32&,System.Boolean&,System.String&)
extern "C"  void String_ParseFormatSpecifier_m1466397490_0 (Object_t * __this /* static, unused */, String_t* ___str, int32_t* ___ptr, int32_t* ___n, int32_t* ___width, bool* ___left_align, String_t** ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::ParseDecimal(System.String,System.Int32&)
extern "C"  int32_t String_ParseDecimal_m_698903965_0 (Object_t * __this /* static, unused */, String_t* ___str, int32_t* ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::InternalSetChar(System.Int32,System.Char)
extern "C"  void String_InternalSetChar_m_1844022975_0 (String_t* __this, int32_t ___idx, uint16_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::InternalSetLength(System.Int32)
extern "C"  void String_InternalSetLength_m_1288745272_0 (String_t* __this, int32_t ___newLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::GetHashCode()
extern "C"  int32_t String_GetHashCode_m931956593_0 (String_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::GetCaseInsensitiveHashCode()
extern "C"  int32_t String_GetCaseInsensitiveHashCode_m74381984_0 (String_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.SByte*)
extern "C"  String_t* String_CreateString_m_183179206_0 (String_t* __this, int8_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.SByte*,System.Int32,System.Int32)
extern "C"  String_t* String_CreateString_m197601096_0 (String_t* __this, int8_t* ___value, int32_t ___startIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.SByte*,System.Int32,System.Int32,System.Text.Encoding)
extern "C"  String_t* String_CreateString_m560359261_0 (String_t* __this, int8_t* ___value, int32_t ___startIndex, int32_t ___length, Encoding_t_1491589107_0 * ___enc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.Char*)
extern "C"  String_t* String_CreateString_m_58467969_0 (String_t* __this, uint16_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.Char*,System.Int32,System.Int32)
extern "C"  String_t* String_CreateString_m_917968557_0 (String_t* __this, uint16_t* ___value, int32_t ___startIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.Char[],System.Int32,System.Int32)
extern "C"  String_t* String_CreateString_m_1846502921_0 (String_t* __this, CharU5BU5D_t2048601427_0* ___val, int32_t ___startIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.Char[])
extern "C"  String_t* String_CreateString_m_476660213_0 (String_t* __this, CharU5BU5D_t2048601427_0* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.Char,System.Int32)
extern "C"  String_t* String_CreateString_m_1738266362_0 (String_t* __this, uint16_t ___c, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::memcpy4(System.Byte*,System.Byte*,System.Int32)
extern "C"  void String_memcpy4_m1859035986_0 (Object_t * __this /* static, unused */, uint8_t* ___dest, uint8_t* ___src, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::memcpy2(System.Byte*,System.Byte*,System.Int32)
extern "C"  void String_memcpy2_m_1956563628_0 (Object_t * __this /* static, unused */, uint8_t* ___dest, uint8_t* ___src, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::memcpy1(System.Byte*,System.Byte*,System.Int32)
extern "C"  void String_memcpy1_m971106965_0 (Object_t * __this /* static, unused */, uint8_t* ___dest, uint8_t* ___src, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::memcpy(System.Byte*,System.Byte*,System.Int32)
extern "C"  void String_memcpy_m1656639862_0 (Object_t * __this /* static, unused */, uint8_t* ___dest, uint8_t* ___src, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::CharCopy(System.Char*,System.Char*,System.Int32)
extern "C"  void String_CharCopy_m586187774_0 (Object_t * __this /* static, unused */, uint16_t* ___dest, uint16_t* ___src, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::CharCopyReverse(System.Char*,System.Char*,System.Int32)
extern "C"  void String_CharCopyReverse_m553340332_0 (Object_t * __this /* static, unused */, uint16_t* ___dest, uint16_t* ___src, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::CharCopy(System.String,System.Int32,System.String,System.Int32,System.Int32)
extern "C"  void String_CharCopy_m2071900310_0 (Object_t * __this /* static, unused */, String_t* ___target, int32_t ___targetIndex, String_t* ___source, int32_t ___sourceIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::CharCopy(System.String,System.Int32,System.Char[],System.Int32,System.Int32)
extern "C"  void String_CharCopy_m_1744567399_0 (Object_t * __this /* static, unused */, String_t* ___target, int32_t ___targetIndex, CharU5BU5D_t2048601427_0* ___source, int32_t ___sourceIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::CharCopyReverse(System.String,System.Int32,System.String,System.Int32,System.Int32)
extern "C"  void String_CharCopyReverse_m_1281164588_0 (Object_t * __this /* static, unused */, String_t* ___target, int32_t ___targetIndex, String_t* ___source, int32_t ___sourceIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::InternalSplit(System.Char[],System.Int32,System.Int32)
extern "C"  StringU5BU5D_t_1137506664_0* String_InternalSplit_m_1474767863_0 (String_t* __this, CharU5BU5D_t2048601427_0* ___separator, int32_t ___count, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::InternalAllocateStr(System.Int32)
extern "C"  String_t* String_InternalAllocateStr_m736211701_0 (Object_t * __this /* static, unused */, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m1790663636_0 (Object_t * __this /* static, unused */, String_t* ___a, String_t* ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Inequality(System.String,System.String)
extern "C"  bool String_op_Inequality_m304203149_0 (Object_t * __this /* static, unused */, String_t* ___a, String_t* ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
