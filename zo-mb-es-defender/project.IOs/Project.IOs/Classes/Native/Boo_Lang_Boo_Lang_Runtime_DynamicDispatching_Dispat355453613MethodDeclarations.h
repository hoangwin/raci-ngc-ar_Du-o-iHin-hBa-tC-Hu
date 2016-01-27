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

// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache
struct DispatcherCache_t355453613_0;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
struct Dispatcher_t_1025614635_0;
// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey
struct DispatcherKey_t1624204824_0;
// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory
struct DispatcherFactory_t_1077393591_0;

#include "codegen/il2cpp-codegen.h"

// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherCache::.ctor()
extern "C"  void DispatcherCache__ctor_m1122887875_0 (DispatcherCache_t355453613_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherCache::.cctor()
extern "C"  void DispatcherCache__cctor_m_1838741936_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.DispatcherCache::Get(Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory)
extern "C"  Dispatcher_t_1025614635_0 * DispatcherCache_Get_m_1810273367_0 (DispatcherCache_t355453613_0 * __this, DispatcherKey_t1624204824_0 * ___key, DispatcherFactory_t_1077393591_0 * ___factory, const MethodInfo* method) IL2CPP_METHOD_ATTR;
