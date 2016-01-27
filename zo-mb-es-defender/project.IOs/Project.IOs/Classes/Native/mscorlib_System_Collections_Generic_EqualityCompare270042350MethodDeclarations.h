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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t270042350_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Guid_192491652.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C"  void DefaultComparer__ctor_m71907202_0_gshared (DefaultComparer_t270042350_0 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m71907202_0(__this, method) ((  void (*) (DefaultComparer_t270042350_0 *, const MethodInfo*))DefaultComparer__ctor_m71907202_0_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::GetHashCode(T)
extern "C"  int32_t DefaultComparer_GetHashCode_m_221572469_0_gshared (DefaultComparer_t270042350_0 * __this, Guid_t_192491652_0  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m_221572469_0(__this, ___obj, method) ((  int32_t (*) (DefaultComparer_t270042350_0 *, Guid_t_192491652_0 , const MethodInfo*))DefaultComparer_GetHashCode_m_221572469_0_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::Equals(T,T)
extern "C"  bool DefaultComparer_Equals_m_721074629_0_gshared (DefaultComparer_t270042350_0 * __this, Guid_t_192491652_0  ___x, Guid_t_192491652_0  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m_721074629_0(__this, ___x, ___y, method) ((  bool (*) (DefaultComparer_t270042350_0 *, Guid_t_192491652_0 , Guid_t_192491652_0 , const MethodInfo*))DefaultComparer_Equals_m_721074629_0_gshared)(__this, ___x, ___y, method)
