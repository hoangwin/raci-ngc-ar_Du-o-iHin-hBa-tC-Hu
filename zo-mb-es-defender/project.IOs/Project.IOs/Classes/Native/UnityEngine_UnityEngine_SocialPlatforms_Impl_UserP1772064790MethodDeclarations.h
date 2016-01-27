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

// UnityEngine.SocialPlatforms.Impl.UserProfile
struct UserProfile_t1772064790_0;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t949651122_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_UserState_1196325414.h"

// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor()
extern "C"  void UserProfile__ctor_m1897167318_0 (UserProfile_t1772064790_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor(System.String,System.String,System.Boolean,UnityEngine.SocialPlatforms.UserState,UnityEngine.Texture2D)
extern "C"  void UserProfile__ctor_m_118080799_0 (UserProfile_t1772064790_0 * __this, String_t* ___name, String_t* ___id, bool ___friend, int32_t ___state, Texture2D_t949651122_0 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::ToString()
extern "C"  String_t* UserProfile_ToString_m_710736821_0 (UserProfile_t1772064790_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserName(System.String)
extern "C"  void UserProfile_SetUserName_m_627539200_0 (UserProfile_t1772064790_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserID(System.String)
extern "C"  void UserProfile_SetUserID_m_476850786_0 (UserProfile_t1772064790_0 * __this, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetImage(UnityEngine.Texture2D)
extern "C"  void UserProfile_SetImage_m_1152489133_0 (UserProfile_t1772064790_0 * __this, Texture2D_t949651122_0 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_userName()
extern "C"  String_t* UserProfile_get_userName_m_1960827820_0 (UserProfile_t1772064790_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_id()
extern "C"  String_t* UserProfile_get_id_m1121636229_0 (UserProfile_t1772064790_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.Impl.UserProfile::get_isFriend()
extern "C"  bool UserProfile_get_isFriend_m1824376057_0 (UserProfile_t1772064790_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.UserState UnityEngine.SocialPlatforms.Impl.UserProfile::get_state()
extern "C"  int32_t UserProfile_get_state_m_1476783507_0 (UserProfile_t1772064790_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
