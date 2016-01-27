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

// System.Security.Cryptography.X509Certificates.X509ChainElementCollection
struct X509ChainElementCollection_t_1141216260_0;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t435631375_0;
// System.Security.Cryptography.X509Certificates.X509ChainElement
struct X509ChainElement_t1851841192_0;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator
struct X509ChainElementEnumerator_t1364466382_0;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t2035941040_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.X509Certificates.X509ChainElementCollection::.ctor()
extern "C"  void X509ChainElementCollection__ctor_m_1905620888_0 (X509ChainElementCollection_t_1141216260_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainElementCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void X509ChainElementCollection_System_Collections_ICollection_CopyTo_m1467895312_0 (X509ChainElementCollection_t_1141216260_0 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Security.Cryptography.X509Certificates.X509ChainElementCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * X509ChainElementCollection_System_Collections_IEnumerable_GetEnumerator_m_1735262607_0 (X509ChainElementCollection_t_1141216260_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509ChainElementCollection::get_Count()
extern "C"  int32_t X509ChainElementCollection_get_Count_m905965108_0 (X509ChainElementCollection_t_1141216260_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509ChainElementCollection::get_IsSynchronized()
extern "C"  bool X509ChainElementCollection_get_IsSynchronized_m_1581049467_0 (X509ChainElementCollection_t_1141216260_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainElement System.Security.Cryptography.X509Certificates.X509ChainElementCollection::get_Item(System.Int32)
extern "C"  X509ChainElement_t1851841192_0 * X509ChainElementCollection_get_Item_m1494130666_0 (X509ChainElementCollection_t_1141216260_0 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Cryptography.X509Certificates.X509ChainElementCollection::get_SyncRoot()
extern "C"  Object_t * X509ChainElementCollection_get_SyncRoot_m579710009_0 (X509ChainElementCollection_t_1141216260_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator System.Security.Cryptography.X509Certificates.X509ChainElementCollection::GetEnumerator()
extern "C"  X509ChainElementEnumerator_t1364466382_0 * X509ChainElementCollection_GetEnumerator_m_927716931_0 (X509ChainElementCollection_t_1141216260_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainElementCollection::Add(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C"  void X509ChainElementCollection_Add_m1511936349_0 (X509ChainElementCollection_t_1141216260_0 * __this, X509Certificate2_t2035941040_0 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainElementCollection::Clear()
extern "C"  void X509ChainElementCollection_Clear_m414681645_0 (X509ChainElementCollection_t_1141216260_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509ChainElementCollection::Contains(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C"  bool X509ChainElementCollection_Contains_m_694972229_0 (X509ChainElementCollection_t_1141216260_0 * __this, X509Certificate2_t2035941040_0 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
