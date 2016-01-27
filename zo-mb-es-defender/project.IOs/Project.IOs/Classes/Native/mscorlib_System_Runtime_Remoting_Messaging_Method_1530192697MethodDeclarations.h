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

// System.Runtime.Remoting.Messaging.MethodDictionary
struct MethodDictionary_t_1530192697_0;
// System.Runtime.Remoting.Messaging.IMethodMessage
struct IMethodMessage_t179956965_0;
// System.Collections.IEnumerator
struct IEnumerator_t435631375_0;
// System.String[]
struct StringU5BU5D_t_1137506664_0;
// System.Collections.IDictionary
struct IDictionary_t_2050639113_0;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Collections.ICollection
struct ICollection_t140887709_0;
// System.Array
struct Array_t;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t_2133791969_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::.ctor(System.Runtime.Remoting.Messaging.IMethodMessage)
extern "C"  void MethodDictionary__ctor_m184006744_0 (MethodDictionary_t_1530192697_0 * __this, Object_t * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Runtime.Remoting.Messaging.MethodDictionary::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * MethodDictionary_System_Collections_IEnumerable_GetEnumerator_m1794586762_0 (MethodDictionary_t_1530192697_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::set_MethodKeys(System.String[])
extern "C"  void MethodDictionary_set_MethodKeys_m_1114659745_0 (MethodDictionary_t_1530192697_0 * __this, StringU5BU5D_t_1137506664_0* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodDictionary::AllocInternalProperties()
extern "C"  Object_t * MethodDictionary_AllocInternalProperties_m_1033671420_0 (MethodDictionary_t_1530192697_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodDictionary::GetInternalProperties()
extern "C"  Object_t * MethodDictionary_GetInternalProperties_m1562637947_0 (MethodDictionary_t_1530192697_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::IsOverridenKey(System.String)
extern "C"  bool MethodDictionary_IsOverridenKey_m_372742646_0 (MethodDictionary_t_1530192697_0 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary::get_Item(System.Object)
extern "C"  Object_t * MethodDictionary_get_Item_m_942666764_0 (MethodDictionary_t_1530192697_0 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::set_Item(System.Object,System.Object)
extern "C"  void MethodDictionary_set_Item_m_819820407_0 (MethodDictionary_t_1530192697_0 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary::GetMethodProperty(System.String)
extern "C"  Object_t * MethodDictionary_GetMethodProperty_m_209109554_0 (MethodDictionary_t_1530192697_0 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::SetMethodProperty(System.String,System.Object)
extern "C"  void MethodDictionary_SetMethodProperty_m1502558295_0 (MethodDictionary_t_1530192697_0 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Runtime.Remoting.Messaging.MethodDictionary::get_Keys()
extern "C"  Object_t * MethodDictionary_get_Keys_m_245111540_0 (MethodDictionary_t_1530192697_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Runtime.Remoting.Messaging.MethodDictionary::get_Values()
extern "C"  Object_t * MethodDictionary_get_Values_m_426376930_0 (MethodDictionary_t_1530192697_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::Add(System.Object,System.Object)
extern "C"  void MethodDictionary_Add_m1424332128_0 (MethodDictionary_t_1530192697_0 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::Contains(System.Object)
extern "C"  bool MethodDictionary_Contains_m_596555496_0 (MethodDictionary_t_1530192697_0 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::Remove(System.Object)
extern "C"  void MethodDictionary_Remove_m_329952331_0 (MethodDictionary_t_1530192697_0 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Remoting.Messaging.MethodDictionary::get_Count()
extern "C"  int32_t MethodDictionary_get_Count_m_1080118587_0 (MethodDictionary_t_1530192697_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::get_IsSynchronized()
extern "C"  bool MethodDictionary_get_IsSynchronized_m800297790_0 (MethodDictionary_t_1530192697_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary::get_SyncRoot()
extern "C"  Object_t * MethodDictionary_get_SyncRoot_m673971424_0 (MethodDictionary_t_1530192697_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::CopyTo(System.Array,System.Int32)
extern "C"  void MethodDictionary_CopyTo_m1721788774_0 (MethodDictionary_t_1530192697_0 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Runtime.Remoting.Messaging.MethodDictionary::GetEnumerator()
extern "C"  Object_t * MethodDictionary_GetEnumerator_m_1460006103_0 (MethodDictionary_t_1530192697_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
