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

// System.Text.StringBuilder
struct StringBuilder_t1359700700_0;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t_2018490193_0;
// System.Object
struct Object_t;
// System.Char[]
struct CharU5BU5D_t2048601427_0;
// System.Object[]
struct ObjectU5BU5D_t_591698798_0;
// System.IFormatProvider
struct IFormatProvider_t_716687078_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2060733842.h"

// System.Void System.Text.StringBuilder::.ctor(System.String,System.Int32,System.Int32,System.Int32)
extern "C"  void StringBuilder__ctor_m_1987966609_0 (StringBuilder_t1359700700_0 * __this, String_t* ___value, int32_t ___startIndex, int32_t ___length, int32_t ___capacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.String,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void StringBuilder__ctor_m1386129952_0 (StringBuilder_t1359700700_0 * __this, String_t* ___value, int32_t ___startIndex, int32_t ___length, int32_t ___capacity, int32_t ___maxCapacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor()
extern "C"  void StringBuilder__ctor_m_348115494_0 (StringBuilder_t1359700700_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
extern "C"  void StringBuilder__ctor_m536337337_0 (StringBuilder_t1359700700_0 * __this, int32_t ___capacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.String)
extern "C"  void StringBuilder__ctor_m782331808_0 (StringBuilder_t1359700700_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.String,System.Int32)
extern "C"  void StringBuilder__ctor_m1456828835_0 (StringBuilder_t1359700700_0 * __this, String_t* ___value, int32_t ___capacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void StringBuilder__ctor_m201937067_0 (StringBuilder_t1359700700_0 * __this, SerializationInfo_t_2018490193_0 * ___info, StreamingContext_t2060733842_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void StringBuilder_System_Runtime_Serialization_ISerializable_GetObjectData_m_747207425_0 (StringBuilder_t1359700700_0 * __this, SerializationInfo_t_2018490193_0 * ___info, StreamingContext_t2060733842_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.StringBuilder::get_Capacity()
extern "C"  int32_t StringBuilder_get_Capacity_m1253303803_0 (StringBuilder_t1359700700_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::set_Capacity(System.Int32)
extern "C"  void StringBuilder_set_Capacity_m_974119008_0 (StringBuilder_t1359700700_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.StringBuilder::get_Length()
extern "C"  int32_t StringBuilder_get_Length_m1608241323_0 (StringBuilder_t1359700700_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::set_Length(System.Int32)
extern "C"  void StringBuilder_set_Length_m_1255741852_0 (StringBuilder_t1359700700_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Text.StringBuilder::get_Chars(System.Int32)
extern "C"  uint16_t StringBuilder_get_Chars_m256627635_0 (StringBuilder_t1359700700_0 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::set_Chars(System.Int32,System.Char)
extern "C"  void StringBuilder_set_Chars_m1019094834_0 (StringBuilder_t1359700700_0 * __this, int32_t ___index, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.StringBuilder::ToString()
extern "C"  String_t* StringBuilder_ToString_m1507807375_0 (StringBuilder_t1359700700_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.StringBuilder::ToString(System.Int32,System.Int32)
extern "C"  String_t* StringBuilder_ToString_m617673931_0 (StringBuilder_t1359700700_0 * __this, int32_t ___startIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Remove(System.Int32,System.Int32)
extern "C"  StringBuilder_t1359700700_0 * StringBuilder_Remove_m_677955551_0 (StringBuilder_t1359700700_0 * __this, int32_t ___startIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Replace(System.String,System.String)
extern "C"  StringBuilder_t1359700700_0 * StringBuilder_Replace_m28121947_0 (StringBuilder_t1359700700_0 * __this, String_t* ___oldValue, String_t* ___newValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Replace(System.String,System.String,System.Int32,System.Int32)
extern "C"  StringBuilder_t1359700700_0 * StringBuilder_Replace_m334638391_0 (StringBuilder_t1359700700_0 * __this, String_t* ___oldValue, String_t* ___newValue, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
extern "C"  StringBuilder_t1359700700_0 * StringBuilder_Append_m_658458817_0 (StringBuilder_t1359700700_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Int32)
extern "C"  StringBuilder_t1359700700_0 * StringBuilder_Append_m2109474214_0 (StringBuilder_t1359700700_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Int64)
extern "C"  StringBuilder_t1359700700_0 * StringBuilder_Append_m1128243247_0 (StringBuilder_t1359700700_0 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
extern "C"  StringBuilder_t1359700700_0 * StringBuilder_Append_m_753150805_0 (StringBuilder_t1359700700_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
extern "C"  StringBuilder_t1359700700_0 * StringBuilder_Append_m_676269756_0 (StringBuilder_t1359700700_0 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char,System.Int32)
extern "C"  StringBuilder_t1359700700_0 * StringBuilder_Append_m2084384963_0 (StringBuilder_t1359700700_0 * __this, uint16_t ___value, int32_t ___repeatCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char[],System.Int32,System.Int32)
extern "C"  StringBuilder_t1359700700_0 * StringBuilder_Append_m_2015919130_0 (StringBuilder_t1359700700_0 * __this, CharU5BU5D_t2048601427_0* ___value, int32_t ___startIndex, int32_t ___charCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String,System.Int32,System.Int32)
extern "C"  StringBuilder_t1359700700_0 * StringBuilder_Append_m1462406979_0 (StringBuilder_t1359700700_0 * __this, String_t* ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine()
extern "C"  StringBuilder_t1359700700_0 * StringBuilder_AppendLine_m1686706871_0 (StringBuilder_t1359700700_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine(System.String)
extern "C"  StringBuilder_t1359700700_0 * StringBuilder_AppendLine_m2033101329_0 (StringBuilder_t1359700700_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object[])
extern "C"  StringBuilder_t1359700700_0 * StringBuilder_AppendFormat_m1879616656_0 (StringBuilder_t1359700700_0 * __this, String_t* ___format, ObjectU5BU5D_t_591698798_0* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.IFormatProvider,System.String,System.Object[])
extern "C"  StringBuilder_t1359700700_0 * StringBuilder_AppendFormat_m_1116079888_0 (StringBuilder_t1359700700_0 * __this, Object_t * ___provider, String_t* ___format, ObjectU5BU5D_t_591698798_0* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object)
extern "C"  StringBuilder_t1359700700_0 * StringBuilder_AppendFormat_m_1029463600_0 (StringBuilder_t1359700700_0 * __this, String_t* ___format, Object_t * ___arg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object,System.Object)
extern "C"  StringBuilder_t1359700700_0 * StringBuilder_AppendFormat_m759296786_0 (StringBuilder_t1359700700_0 * __this, String_t* ___format, Object_t * ___arg0, Object_t * ___arg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object,System.Object,System.Object)
extern "C"  StringBuilder_t1359700700_0 * StringBuilder_AppendFormat_m1666670800_0 (StringBuilder_t1359700700_0 * __this, String_t* ___format, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Insert(System.Int32,System.String)
extern "C"  StringBuilder_t1359700700_0 * StringBuilder_Insert_m_972050169_0 (StringBuilder_t1359700700_0 * __this, int32_t ___index, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Insert(System.Int32,System.Char)
extern "C"  StringBuilder_t1359700700_0 * StringBuilder_Insert_m2080758720_0 (StringBuilder_t1359700700_0 * __this, int32_t ___index, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Insert(System.Int32,System.String,System.Int32)
extern "C"  StringBuilder_t1359700700_0 * StringBuilder_Insert_m1733097906_0 (StringBuilder_t1359700700_0 * __this, int32_t ___index, String_t* ___value, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::InternalEnsureCapacity(System.Int32)
extern "C"  void StringBuilder_InternalEnsureCapacity_m1674769070_0 (StringBuilder_t1359700700_0 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
