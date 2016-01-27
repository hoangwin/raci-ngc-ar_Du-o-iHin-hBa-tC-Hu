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

// MiniJSONV.Json/Serializer
struct Serializer_t_104433709_0;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Collections.IDictionary
struct IDictionary_t_2050639113_0;
// System.Collections.IList
struct IList_t1369951781_0;

#include "codegen/il2cpp-codegen.h"

// System.Void MiniJSONV.Json/Serializer::.ctor()
extern "C"  void Serializer__ctor_m1991167877_0 (Serializer_t_104433709_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MiniJSONV.Json/Serializer::Serialize(System.Object)
extern "C"  String_t* Serializer_Serialize_m1784896974_0 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MiniJSONV.Json/Serializer::SerializeValue(System.Object)
extern "C"  void Serializer_SerializeValue_m_1025484778_0 (Serializer_t_104433709_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MiniJSONV.Json/Serializer::SerializeObject(System.Collections.IDictionary)
extern "C"  void Serializer_SerializeObject_m_832771045_0 (Serializer_t_104433709_0 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MiniJSONV.Json/Serializer::SerializeArray(System.Collections.IList)
extern "C"  void Serializer_SerializeArray_m457693413_0 (Serializer_t_104433709_0 * __this, Object_t * ___anArray, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MiniJSONV.Json/Serializer::SerializeString(System.String)
extern "C"  void Serializer_SerializeString_m87172552_0 (Serializer_t_104433709_0 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MiniJSONV.Json/Serializer::SerializeOther(System.Object)
extern "C"  void Serializer_SerializeOther_m_765587659_0 (Serializer_t_104433709_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
