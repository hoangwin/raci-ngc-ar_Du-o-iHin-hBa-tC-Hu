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

// System.Globalization.CompareInfo
struct CompareInfo_t589814375_0;
// System.Globalization.CultureInfo
struct CultureInfo_t1283181710_0;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Globalization.SortKey
struct SortKey_t_918079813_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Globalization_CompareOptions_1730749291.h"

// System.Void System.Globalization.CompareInfo::.ctor()
extern "C"  void CompareInfo__ctor_m_757687647_0 (CompareInfo_t589814375_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CompareInfo::.ctor(System.Globalization.CultureInfo)
extern "C"  void CompareInfo__ctor_m2066631099_0 (CompareInfo_t589814375_0 * __this, CultureInfo_t1283181710_0 * ___ci, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CompareInfo::.cctor()
extern "C"  void CompareInfo__cctor_m374454560_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CompareInfo::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C"  void CompareInfo_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m_1169061907_0 (CompareInfo_t589814375_0 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CompareInfo::get_UseManagedCollation()
extern "C"  bool CompareInfo_get_UseManagedCollation_m_1978441269_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CompareInfo::construct_compareinfo(System.String)
extern "C"  void CompareInfo_construct_compareinfo_m1849123306_0 (CompareInfo_t589814375_0 * __this, String_t* ___locale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CompareInfo::free_internal_collator()
extern "C"  void CompareInfo_free_internal_collator_m_1581244960_0 (CompareInfo_t589814375_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CompareInfo::internal_compare(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
extern "C"  int32_t CompareInfo_internal_compare_m_1867698641_0 (CompareInfo_t589814375_0 * __this, String_t* ___str1, int32_t ___offset1, int32_t ___length1, String_t* ___str2, int32_t ___offset2, int32_t ___length2, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CompareInfo::assign_sortkey(System.Object,System.String,System.Globalization.CompareOptions)
extern "C"  void CompareInfo_assign_sortkey_m_147925339_0 (CompareInfo_t589814375_0 * __this, Object_t * ___key, String_t* ___source, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CompareInfo::internal_index(System.String,System.Int32,System.Int32,System.String,System.Globalization.CompareOptions,System.Boolean)
extern "C"  int32_t CompareInfo_internal_index_m_778954319_0 (CompareInfo_t589814375_0 * __this, String_t* ___source, int32_t ___sindex, int32_t ___count, String_t* ___value, int32_t ___options, bool ___first, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CompareInfo::Finalize()
extern "C"  void CompareInfo_Finalize_m_1426231429_0 (CompareInfo_t589814375_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CompareInfo::internal_compare_managed(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
extern "C"  int32_t CompareInfo_internal_compare_managed_m1173317301_0 (CompareInfo_t589814375_0 * __this, String_t* ___str1, int32_t ___offset1, int32_t ___length1, String_t* ___str2, int32_t ___offset2, int32_t ___length2, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CompareInfo::internal_compare_switch(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
extern "C"  int32_t CompareInfo_internal_compare_switch_m1232517870_0 (CompareInfo_t589814375_0 * __this, String_t* ___str1, int32_t ___offset1, int32_t ___length1, String_t* ___str2, int32_t ___offset2, int32_t ___length2, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CompareInfo::Compare(System.String,System.String)
extern "C"  int32_t CompareInfo_Compare_m529052140_0 (CompareInfo_t589814375_0 * __this, String_t* ___string1, String_t* ___string2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CompareInfo::Compare(System.String,System.String,System.Globalization.CompareOptions)
extern "C"  int32_t CompareInfo_Compare_m_311672313_0 (CompareInfo_t589814375_0 * __this, String_t* ___string1, String_t* ___string2, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CompareInfo::Compare(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
extern "C"  int32_t CompareInfo_Compare_m1376863687_0 (CompareInfo_t589814375_0 * __this, String_t* ___string1, int32_t ___offset1, int32_t ___length1, String_t* ___string2, int32_t ___offset2, int32_t ___length2, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CompareInfo::Equals(System.Object)
extern "C"  bool CompareInfo_Equals_m1849093104_0 (CompareInfo_t589814375_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CompareInfo::GetHashCode()
extern "C"  int32_t CompareInfo_GetHashCode_m103561552_0 (CompareInfo_t589814375_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.SortKey System.Globalization.CompareInfo::GetSortKey(System.String,System.Globalization.CompareOptions)
extern "C"  SortKey_t_918079813_0 * CompareInfo_GetSortKey_m_603584423_0 (CompareInfo_t589814375_0 * __this, String_t* ___source, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CompareInfo::IndexOf(System.String,System.String,System.Int32,System.Int32)
extern "C"  int32_t CompareInfo_IndexOf_m1755461348_0 (CompareInfo_t589814375_0 * __this, String_t* ___source, String_t* ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CompareInfo::internal_index_managed(System.String,System.Int32,System.Int32,System.String,System.Globalization.CompareOptions,System.Boolean)
extern "C"  int32_t CompareInfo_internal_index_managed_m859405335_0 (CompareInfo_t589814375_0 * __this, String_t* ___s1, int32_t ___sindex, int32_t ___count, String_t* ___s2, int32_t ___opt, bool ___first, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CompareInfo::internal_index_switch(System.String,System.Int32,System.Int32,System.String,System.Globalization.CompareOptions,System.Boolean)
extern "C"  int32_t CompareInfo_internal_index_switch_m_726541890_0 (CompareInfo_t589814375_0 * __this, String_t* ___s1, int32_t ___sindex, int32_t ___count, String_t* ___s2, int32_t ___opt, bool ___first, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CompareInfo::IndexOf(System.String,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
extern "C"  int32_t CompareInfo_IndexOf_m_1004377793_0 (CompareInfo_t589814375_0 * __this, String_t* ___source, String_t* ___value, int32_t ___startIndex, int32_t ___count, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CompareInfo::IsPrefix(System.String,System.String,System.Globalization.CompareOptions)
extern "C"  bool CompareInfo_IsPrefix_m_16759372_0 (CompareInfo_t589814375_0 * __this, String_t* ___source, String_t* ___prefix, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CompareInfo::IsSuffix(System.String,System.String,System.Globalization.CompareOptions)
extern "C"  bool CompareInfo_IsSuffix_m_1367924221_0 (CompareInfo_t589814375_0 * __this, String_t* ___source, String_t* ___suffix, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CompareInfo::LastIndexOf(System.String,System.String,System.Int32,System.Int32)
extern "C"  int32_t CompareInfo_LastIndexOf_m_1316770600_0 (CompareInfo_t589814375_0 * __this, String_t* ___source, String_t* ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CompareInfo::LastIndexOf(System.String,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
extern "C"  int32_t CompareInfo_LastIndexOf_m_1123565655_0 (CompareInfo_t589814375_0 * __this, String_t* ___source, String_t* ___value, int32_t ___startIndex, int32_t ___count, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.CompareInfo::ToString()
extern "C"  String_t* CompareInfo_ToString_m_1192464616_0 (CompareInfo_t589814375_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CompareInfo::get_LCID()
extern "C"  int32_t CompareInfo_get_LCID_m_948520940_0 (CompareInfo_t589814375_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
