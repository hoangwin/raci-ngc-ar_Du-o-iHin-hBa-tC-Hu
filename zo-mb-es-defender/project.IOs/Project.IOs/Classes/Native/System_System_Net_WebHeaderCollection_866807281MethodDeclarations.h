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

// System.Net.WebHeaderCollection
struct WebHeaderCollection_t_866807281_0;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t_2018490193_0;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t_566336751_0;
// System.Collections.IEnumerator
struct IEnumerator_t435631375_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2060733842.h"

// System.Void System.Net.WebHeaderCollection::.ctor()
extern "C"  void WebHeaderCollection__ctor_m_1264395059_0 (WebHeaderCollection_t_866807281_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WebHeaderCollection__ctor_m_206028586_0 (WebHeaderCollection_t_866807281_0 * __this, SerializationInfo_t_2018490193_0 * ___serializationInfo, StreamingContext_t2060733842_0  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::.ctor(System.Boolean)
extern "C"  void WebHeaderCollection__ctor_m_822875676_0 (WebHeaderCollection_t_866807281_0 * __this, bool ___internallyCreated, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::.cctor()
extern "C"  void WebHeaderCollection__cctor_m_980466392_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WebHeaderCollection_System_Runtime_Serialization_ISerializable_GetObjectData_m_1229118852_0 (WebHeaderCollection_t_866807281_0 * __this, SerializationInfo_t_2018490193_0 * ___serializationInfo, StreamingContext_t2060733842_0  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::Add(System.String,System.String)
extern "C"  void WebHeaderCollection_Add_m1090164380_0 (WebHeaderCollection_t_866807281_0 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::AddWithoutValidate(System.String,System.String)
extern "C"  void WebHeaderCollection_AddWithoutValidate_m1479880592_0 (WebHeaderCollection_t_866807281_0 * __this, String_t* ___headerName, String_t* ___headerValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebHeaderCollection::IsRestricted(System.String)
extern "C"  bool WebHeaderCollection_IsRestricted_m_1711797386_0 (Object_t * __this /* static, unused */, String_t* ___headerName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::OnDeserialization(System.Object)
extern "C"  void WebHeaderCollection_OnDeserialization_m1255164557_0 (WebHeaderCollection_t_866807281_0 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebHeaderCollection::ToString()
extern "C"  String_t* WebHeaderCollection_ToString_m1246460752_0 (WebHeaderCollection_t_866807281_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WebHeaderCollection_GetObjectData_m_354846319_0 (WebHeaderCollection_t_866807281_0 * __this, SerializationInfo_t_2018490193_0 * ___serializationInfo, StreamingContext_t2060733842_0  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebHeaderCollection::get_Count()
extern "C"  int32_t WebHeaderCollection_get_Count_m_187277707_0 (WebHeaderCollection_t_866807281_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Net.WebHeaderCollection::get_Keys()
extern "C"  KeysCollection_t_566336751_0 * WebHeaderCollection_get_Keys_m_465411650_0 (WebHeaderCollection_t_866807281_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebHeaderCollection::Get(System.Int32)
extern "C"  String_t* WebHeaderCollection_Get_m_903022389_0 (WebHeaderCollection_t_866807281_0 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebHeaderCollection::GetKey(System.Int32)
extern "C"  String_t* WebHeaderCollection_GetKey_m_703904186_0 (WebHeaderCollection_t_866807281_0 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Net.WebHeaderCollection::GetEnumerator()
extern "C"  Object_t * WebHeaderCollection_GetEnumerator_m_1881722211_0 (WebHeaderCollection_t_866807281_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebHeaderCollection::IsHeaderValue(System.String)
extern "C"  bool WebHeaderCollection_IsHeaderValue_m1723393133_0 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebHeaderCollection::IsHeaderName(System.String)
extern "C"  bool WebHeaderCollection_IsHeaderName_m_536051487_0 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
