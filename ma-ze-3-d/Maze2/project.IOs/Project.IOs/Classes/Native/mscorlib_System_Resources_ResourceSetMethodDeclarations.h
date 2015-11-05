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
struct ResourceSet_t1532;
// System.IO.Stream
struct Stream_t1177;
// System.IO.UnmanagedMemoryStream
struct UnmanagedMemoryStream_t1434;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t239;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1042;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Resources.ResourceSet::.ctor()
extern "C" void ResourceSet__ctor_m9303 (ResourceSet_t1532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceSet::.ctor(System.IO.Stream)
extern "C" void ResourceSet__ctor_m9304 (ResourceSet_t1532 * __this, Stream_t1177 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceSet::.ctor(System.IO.UnmanagedMemoryStream)
extern "C" void ResourceSet__ctor_m9305 (ResourceSet_t1532 * __this, UnmanagedMemoryStream_t1434 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceSet::.ctor(System.String)
extern "C" void ResourceSet__ctor_m9306 (ResourceSet_t1532 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Resources.ResourceSet::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ResourceSet_System_Collections_IEnumerable_GetEnumerator_m9307 (ResourceSet_t1532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceSet::Dispose()
extern "C" void ResourceSet_Dispose_m9308 (ResourceSet_t1532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceSet::Dispose(System.Boolean)
extern "C" void ResourceSet_Dispose_m9309 (ResourceSet_t1532 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Resources.ResourceSet::GetEnumerator()
extern "C" Object_t * ResourceSet_GetEnumerator_m9310 (ResourceSet_t1532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Resources.ResourceSet::GetObjectInternal(System.String,System.Boolean)
extern "C" Object_t * ResourceSet_GetObjectInternal_m9311 (ResourceSet_t1532 * __this, String_t* ___name, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Resources.ResourceSet::GetObject(System.String)
extern "C" Object_t * ResourceSet_GetObject_m9312 (ResourceSet_t1532 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Resources.ResourceSet::GetObject(System.String,System.Boolean)
extern "C" Object_t * ResourceSet_GetObject_m9313 (ResourceSet_t1532 * __this, String_t* ___name, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Resources.ResourceSet::ReadResources()
extern "C" void ResourceSet_ReadResources_m9314 (ResourceSet_t1532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
