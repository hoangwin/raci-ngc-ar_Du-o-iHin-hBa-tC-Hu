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

// System.Security.Cryptography.X509Certificates.X509ExtensionCollection
struct X509ExtensionCollection_t_838069572_0;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1541895718_0;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t435631375_0;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509Extension
struct X509Extension_t282679408_0;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator
struct X509ExtensionEnumerator_t1990194886_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.X509Certificates.X509ExtensionCollection::.ctor(Mono.Security.X509.X509Certificate)
extern "C"  void X509ExtensionCollection__ctor_m1324282194_0 (X509ExtensionCollection_t_838069572_0 * __this, X509Certificate_t1541895718_0 * ___cert, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ExtensionCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void X509ExtensionCollection_System_Collections_ICollection_CopyTo_m_873637950_0 (X509ExtensionCollection_t_838069572_0 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Security.Cryptography.X509Certificates.X509ExtensionCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * X509ExtensionCollection_System_Collections_IEnumerable_GetEnumerator_m1813422183_0 (X509ExtensionCollection_t_838069572_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509ExtensionCollection::get_Count()
extern "C"  int32_t X509ExtensionCollection_get_Count_m_496946162_0 (X509ExtensionCollection_t_838069572_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509ExtensionCollection::get_IsSynchronized()
extern "C"  bool X509ExtensionCollection_get_IsSynchronized_m882667483_0 (X509ExtensionCollection_t_838069572_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Cryptography.X509Certificates.X509ExtensionCollection::get_SyncRoot()
extern "C"  Object_t * X509ExtensionCollection_get_SyncRoot_m_755441781_0 (X509ExtensionCollection_t_838069572_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Extension System.Security.Cryptography.X509Certificates.X509ExtensionCollection::get_Item(System.String)
extern "C"  X509Extension_t282679408_0 * X509ExtensionCollection_get_Item_m_1902691503_0 (X509ExtensionCollection_t_838069572_0 * __this, String_t* ___oid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator System.Security.Cryptography.X509Certificates.X509ExtensionCollection::GetEnumerator()
extern "C"  X509ExtensionEnumerator_t1990194886_0 * X509ExtensionCollection_GetEnumerator_m_873869579_0 (X509ExtensionCollection_t_838069572_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
