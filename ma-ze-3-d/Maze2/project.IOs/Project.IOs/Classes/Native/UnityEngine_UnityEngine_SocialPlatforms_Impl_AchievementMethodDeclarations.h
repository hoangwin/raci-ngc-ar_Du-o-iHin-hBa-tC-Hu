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

// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t767;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"

// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double,System.Boolean,System.Boolean,System.DateTime)
extern "C" void Achievement__ctor_m4084 (Achievement_t767 * __this, String_t* ___id, double ___percentCompleted, bool ___completed, bool ___hidden, DateTime_t716  ___lastReportedDate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double)
extern "C" void Achievement__ctor_m4085 (Achievement_t767 * __this, String_t* ___id, double ___percent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor()
extern "C" void Achievement__ctor_m4086 (Achievement_t767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::ToString()
extern "C" String_t* Achievement_ToString_m4087 (Achievement_t767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::get_id()
extern "C" String_t* Achievement_get_id_m4088 (Achievement_t767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_id(System.String)
extern "C" void Achievement_set_id_m4089 (Achievement_t767 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.SocialPlatforms.Impl.Achievement::get_percentCompleted()
extern "C" double Achievement_get_percentCompleted_m4090 (Achievement_t767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_percentCompleted(System.Double)
extern "C" void Achievement_set_percentCompleted_m4091 (Achievement_t767 * __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_completed()
extern "C" bool Achievement_get_completed_m4092 (Achievement_t767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_hidden()
extern "C" bool Achievement_get_hidden_m4093 (Achievement_t767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime UnityEngine.SocialPlatforms.Impl.Achievement::get_lastReportedDate()
extern "C" DateTime_t716  Achievement_get_lastReportedDate_m4094 (Achievement_t767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
