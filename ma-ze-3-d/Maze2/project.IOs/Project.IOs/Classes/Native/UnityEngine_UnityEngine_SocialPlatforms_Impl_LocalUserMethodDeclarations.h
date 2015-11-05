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

// UnityEngine.SocialPlatforms.Impl.LocalUser
struct LocalUser_t620;
// UnityEngine.SocialPlatforms.IUserProfile[]
struct IUserProfileU5BU5D_t766;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::.ctor()
extern "C" void LocalUser__ctor_m4069 (LocalUser_t620 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetFriends(UnityEngine.SocialPlatforms.IUserProfile[])
extern "C" void LocalUser_SetFriends_m4070 (LocalUser_t620 * __this, IUserProfileU5BU5D_t766* ___friends, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetAuthenticated(System.Boolean)
extern "C" void LocalUser_SetAuthenticated_m4071 (LocalUser_t620 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetUnderage(System.Boolean)
extern "C" void LocalUser_SetUnderage_m4072 (LocalUser_t620 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.Impl.LocalUser::get_authenticated()
extern "C" bool LocalUser_get_authenticated_m4073 (LocalUser_t620 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
