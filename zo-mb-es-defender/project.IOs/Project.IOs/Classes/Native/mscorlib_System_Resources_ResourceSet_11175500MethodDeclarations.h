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

// System.Resources.ResourceSet
struct ResourceSet_t_11175500_0;
// System.IO.Stream
struct Stream_t_500356931_0;
// System.IO.UnmanagedMemoryStream
struct UnmanagedMemoryStream_t220781080_0;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t435631375_0;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t_2133791969_0;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Resources.ResourceSet::.ctor()
extern "C"  void ResourceSet__ctor_m_1728052884_0 (ResourceSet_t_11175500_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceSet::.ctor(System.IO.Stream)
extern "C"  void ResourceSet__ctor_m993837251_0 (ResourceSet_t_11175500_0 * __this, Stream_t_500356931_0 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceSet::.ctor(System.IO.UnmanagedMemoryStream)
extern "C"  void ResourceSet__ctor_m129522286_0 (ResourceSet_t_11175500_0 * __this, UnmanagedMemoryStream_t220781080_0 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceSet::.ctor(System.String)
extern "C"  void ResourceSet__ctor_m1222864106_0 (ResourceSet_t_11175500_0 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Resources.ResourceSet::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * ResourceSet_System_Collections_IEnumerable_GetEnumerator_m1568302465_0 (ResourceSet_t_11175500_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceSet::Dispose()
extern "C"  void ResourceSet_Dispose_m_1326487437_0 (ResourceSet_t_11175500_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceSet::Dispose(System.Boolean)
extern "C"  void ResourceSet_Dispose_m_1678986544_0 (ResourceSet_t_11175500_0 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Resources.ResourceSet::GetEnumerator()
extern "C"  Object_t * ResourceSet_GetEnumerator_m1363893992_0 (ResourceSet_t_11175500_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Resources.ResourceSet::GetObjectInternal(System.String,System.Boolean)
extern "C"  Object_t * ResourceSet_GetObjectInternal_m_738710786_0 (ResourceSet_t_11175500_0 * __this, String_t* ___name, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Resources.ResourceSet::GetObject(System.String)
extern "C"  Object_t * ResourceSet_GetObject_m1232449476_0 (ResourceSet_t_11175500_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Resources.ResourceSet::GetObject(System.String,System.Boolean)
extern "C"  Object_t * ResourceSet_GetObject_m730549927_0 (ResourceSet_t_11175500_0 * __this, String_t* ___name, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceSet::ReadResources()
extern "C"  void ResourceSet_ReadResources_m1669023823_0 (ResourceSet_t_11175500_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
