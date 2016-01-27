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

// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t_2018490193_0;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IFormatProvider
struct IFormatProvider_t_716687078_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTimeOffset_141843879.h"
#include "mscorlib_System_DateTime_1242318096.h"
#include "mscorlib_System_TimeSpan_1119131324.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2060733842.h"

// System.Void System.DateTimeOffset::.ctor(System.DateTime)
extern "C"  void DateTimeOffset__ctor_m428942261_0 (DateTimeOffset_t_141843879_0 * __this, DateTime_t_1242318096_0  ___dateTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.ctor(System.DateTime,System.TimeSpan)
extern "C"  void DateTimeOffset__ctor_m_1424245901_0 (DateTimeOffset_t_141843879_0 * __this, DateTime_t_1242318096_0  ___dateTime, TimeSpan_t_1119131324_0  ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.ctor(System.Int64,System.TimeSpan)
extern "C"  void DateTimeOffset__ctor_m2110004919_0 (DateTimeOffset_t_141843879_0 * __this, int64_t ___ticks, TimeSpan_t_1119131324_0  ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void DateTimeOffset__ctor_m1796624924_0 (DateTimeOffset_t_141843879_0 * __this, SerializationInfo_t_2018490193_0 * ___info, StreamingContext_t2060733842_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.cctor()
extern "C"  void DateTimeOffset__cctor_m_1819466626_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::System.IComparable.CompareTo(System.Object)
extern "C"  int32_t DateTimeOffset_System_IComparable_CompareTo_m1775227279_0 (DateTimeOffset_t_141843879_0 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void DateTimeOffset_System_Runtime_Serialization_ISerializable_GetObjectData_m1430367682_0 (DateTimeOffset_t_141843879_0 * __this, SerializationInfo_t_2018490193_0 * ___info, StreamingContext_t2060733842_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C"  void DateTimeOffset_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m1059347059_0 (DateTimeOffset_t_141843879_0 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::CompareTo(System.DateTimeOffset)
extern "C"  int32_t DateTimeOffset_CompareTo_m441053436_0 (DateTimeOffset_t_141843879_0 * __this, DateTimeOffset_t_141843879_0  ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTimeOffset::Equals(System.DateTimeOffset)
extern "C"  bool DateTimeOffset_Equals_m_566664505_0 (DateTimeOffset_t_141843879_0 * __this, DateTimeOffset_t_141843879_0  ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTimeOffset::Equals(System.Object)
extern "C"  bool DateTimeOffset_Equals_m_827840222_0 (DateTimeOffset_t_141843879_0 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::GetHashCode()
extern "C"  int32_t DateTimeOffset_GetHashCode_m_982769834_0 (DateTimeOffset_t_141843879_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTimeOffset::ToString()
extern "C"  String_t* DateTimeOffset_ToString_m_1783582048_0 (DateTimeOffset_t_141843879_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTimeOffset::ToString(System.String,System.IFormatProvider)
extern "C"  String_t* DateTimeOffset_ToString_m2121173678_0 (DateTimeOffset_t_141843879_0 * __this, String_t* ___format, Object_t * ___formatProvider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTimeOffset::get_DateTime()
extern "C"  DateTime_t_1242318096_0  DateTimeOffset_get_DateTime_m229084964_0 (DateTimeOffset_t_141843879_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.DateTimeOffset::get_Offset()
extern "C"  TimeSpan_t_1119131324_0  DateTimeOffset_get_Offset_m_1959475222_0 (DateTimeOffset_t_141843879_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTimeOffset::get_UtcDateTime()
extern "C"  DateTime_t_1242318096_0  DateTimeOffset_get_UtcDateTime_m_1132416522_0 (DateTimeOffset_t_141843879_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
