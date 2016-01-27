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

// System.Globalization.CultureInfo
struct CultureInfo_t1283181710_0;
// System.String
struct String_t;
// System.Globalization.TextInfo
struct TextInfo_t_308632779_0;
// System.Object
struct Object_t;
// System.Globalization.CompareInfo
struct CompareInfo_t589814375_0;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t404474286_0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t1836403126_0;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Globalization.CultureInfo::.ctor(System.Int32)
extern "C"  void CultureInfo__ctor_m_877482909_0 (CultureInfo_t1283181710_0 * __this, int32_t ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.ctor(System.Int32,System.Boolean)
extern "C"  void CultureInfo__ctor_m_1287459086_0 (CultureInfo_t1283181710_0 * __this, int32_t ___culture, bool ___useUserOverride, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.ctor(System.Int32,System.Boolean,System.Boolean)
extern "C"  void CultureInfo__ctor_m1916039599_0 (CultureInfo_t1283181710_0 * __this, int32_t ___culture, bool ___useUserOverride, bool ___read_only, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.ctor(System.String,System.Boolean,System.Boolean)
extern "C"  void CultureInfo__ctor_m182018410_0 (CultureInfo_t1283181710_0 * __this, String_t* ___name, bool ___useUserOverride, bool ___read_only, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.ctor()
extern "C"  void CultureInfo__ctor_m456863818_0 (CultureInfo_t1283181710_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.cctor()
extern "C"  void CultureInfo__cctor_m_2004698619_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
extern "C"  CultureInfo_t1283181710_0 * CultureInfo_get_InvariantCulture_m398972276_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentCulture()
extern "C"  CultureInfo_t1283181710_0 * CultureInfo_get_CurrentCulture_m711066087_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentUICulture()
extern "C"  CultureInfo_t1283181710_0 * CultureInfo_get_CurrentUICulture_m_1052554105_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::ConstructCurrentCulture()
extern "C"  CultureInfo_t1283181710_0 * CultureInfo_ConstructCurrentCulture_m1264488007_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::ConstructCurrentUICulture()
extern "C"  CultureInfo_t1283181710_0 * CultureInfo_ConstructCurrentUICulture_m_931617697_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CultureInfo::get_LCID()
extern "C"  int32_t CultureInfo_get_LCID_m1392728055_0 (CultureInfo_t1283181710_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.CultureInfo::get_Name()
extern "C"  String_t* CultureInfo_get_Name_m_978737403_0 (CultureInfo_t1283181710_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_Parent()
extern "C"  CultureInfo_t1283181710_0 * CultureInfo_get_Parent_m_1046120778_0 (CultureInfo_t1283181710_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.TextInfo System.Globalization.CultureInfo::get_TextInfo()
extern "C"  TextInfo_t_308632779_0 * CultureInfo_get_TextInfo_m1582311326_0 (CultureInfo_t1283181710_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.CultureInfo::get_IcuName()
extern "C"  String_t* CultureInfo_get_IcuName_m_1743511666_0 (CultureInfo_t1283181710_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.CultureInfo::Clone()
extern "C"  Object_t * CultureInfo_Clone_m_1324213530_0 (CultureInfo_t1283181710_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::Equals(System.Object)
extern "C"  bool CultureInfo_Equals_m1273044155_0 (CultureInfo_t1283181710_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CultureInfo::GetHashCode()
extern "C"  int32_t CultureInfo_GetHashCode_m927602525_0 (CultureInfo_t1283181710_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.CultureInfo::ToString()
extern "C"  String_t* CultureInfo_ToString_m_1459356947_0 (CultureInfo_t1283181710_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CompareInfo System.Globalization.CultureInfo::get_CompareInfo()
extern "C"  CompareInfo_t589814375_0 * CultureInfo_get_CompareInfo_m_1209686434_0 (CultureInfo_t1283181710_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::get_IsNeutralCulture()
extern "C"  bool CultureInfo_get_IsNeutralCulture_m_420090826_0 (CultureInfo_t1283181710_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::CheckNeutral()
extern "C"  void CultureInfo_CheckNeutral_m_1390242711_0 (CultureInfo_t1283181710_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.NumberFormatInfo System.Globalization.CultureInfo::get_NumberFormat()
extern "C"  NumberFormatInfo_t404474286_0 * CultureInfo_get_NumberFormat_m724925476_0 (CultureInfo_t1283181710_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::set_NumberFormat(System.Globalization.NumberFormatInfo)
extern "C"  void CultureInfo_set_NumberFormat_m1618950525_0 (CultureInfo_t1283181710_0 * __this, NumberFormatInfo_t404474286_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DateTimeFormatInfo System.Globalization.CultureInfo::get_DateTimeFormat()
extern "C"  DateTimeFormatInfo_t1836403126_0 * CultureInfo_get_DateTimeFormat_m1833759772_0 (CultureInfo_t1283181710_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::set_DateTimeFormat(System.Globalization.DateTimeFormatInfo)
extern "C"  void CultureInfo_set_DateTimeFormat_m_273350531_0 (CultureInfo_t1283181710_0 * __this, DateTimeFormatInfo_t1836403126_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::get_IsReadOnly()
extern "C"  bool CultureInfo_get_IsReadOnly_m1391179347_0 (CultureInfo_t1283181710_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.CultureInfo::GetFormat(System.Type)
extern "C"  Object_t * CultureInfo_GetFormat_m_734850811_0 (CultureInfo_t1283181710_0 * __this, Type_t * ___formatType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::Construct()
extern "C"  void CultureInfo_Construct_m896220827_0 (CultureInfo_t1283181710_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::ConstructInternalLocaleFromName(System.String)
extern "C"  bool CultureInfo_ConstructInternalLocaleFromName_m_1486670933_0 (CultureInfo_t1283181710_0 * __this, String_t* ___locale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::ConstructInternalLocaleFromLcid(System.Int32)
extern "C"  bool CultureInfo_ConstructInternalLocaleFromLcid_m1929848881_0 (CultureInfo_t1283181710_0 * __this, int32_t ___lcid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::ConstructInternalLocaleFromCurrentLocale(System.Globalization.CultureInfo)
extern "C"  bool CultureInfo_ConstructInternalLocaleFromCurrentLocale_m1342751405_0 (Object_t * __this /* static, unused */, CultureInfo_t1283181710_0 * ___ci, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::construct_internal_locale_from_lcid(System.Int32)
extern "C"  bool CultureInfo_construct_internal_locale_from_lcid_m498096141_0 (CultureInfo_t1283181710_0 * __this, int32_t ___lcid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::construct_internal_locale_from_name(System.String)
extern "C"  bool CultureInfo_construct_internal_locale_from_name_m971766383_0 (CultureInfo_t1283181710_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::construct_internal_locale_from_current_locale(System.Globalization.CultureInfo)
extern "C"  bool CultureInfo_construct_internal_locale_from_current_locale_m2029574092_0 (Object_t * __this /* static, unused */, CultureInfo_t1283181710_0 * ___ci, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::construct_datetime_format()
extern "C"  void CultureInfo_construct_datetime_format_m268249821_0 (CultureInfo_t1283181710_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::construct_number_format()
extern "C"  void CultureInfo_construct_number_format_m2069641695_0 (CultureInfo_t1283181710_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::ConstructInvariant(System.Boolean)
extern "C"  void CultureInfo_ConstructInvariant_m_1802020118_0 (CultureInfo_t1283181710_0 * __this, bool ___read_only, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.TextInfo System.Globalization.CultureInfo::CreateTextInfo(System.Boolean)
extern "C"  TextInfo_t_308632779_0 * CultureInfo_CreateTextInfo_m_2025569734_0 (CultureInfo_t1283181710_0 * __this, bool ___readOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::CreateCulture(System.String,System.Boolean)
extern "C"  CultureInfo_t1283181710_0 * CultureInfo_CreateCulture_m_53513388_0 (Object_t * __this /* static, unused */, String_t* ___name, bool ___reference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
