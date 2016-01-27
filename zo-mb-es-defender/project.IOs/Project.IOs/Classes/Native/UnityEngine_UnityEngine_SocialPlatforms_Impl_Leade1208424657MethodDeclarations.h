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

// UnityEngine.SocialPlatforms.Impl.Leaderboard
struct Leaderboard_t1208424657_0;
// System.String
struct String_t;
// UnityEngine.SocialPlatforms.IScore
struct IScore_t674439431_0;
// UnityEngine.SocialPlatforms.IScore[]
struct IScoreU5BU5D_t_1308663195_0;
// System.String[]
struct StringU5BU5D_t_1137506664_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_UserScope1001407141.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_Range_1680814087.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_TimeScope891115517.h"

// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::.ctor()
extern "C"  void Leaderboard__ctor_m1521627019_0 (Leaderboard_t1208424657_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::ToString()
extern "C"  String_t* Leaderboard_ToString_m1566921590_0 (Leaderboard_t1208424657_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetLocalUserScore(UnityEngine.SocialPlatforms.IScore)
extern "C"  void Leaderboard_SetLocalUserScore_m1546635330_0 (Leaderboard_t1208424657_0 * __this, Object_t * ___score, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetMaxRange(System.UInt32)
extern "C"  void Leaderboard_SetMaxRange_m255256830_0 (Leaderboard_t1208424657_0 * __this, uint32_t ___maxRange, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetScores(UnityEngine.SocialPlatforms.IScore[])
extern "C"  void Leaderboard_SetScores_m_1750939793_0 (Leaderboard_t1208424657_0 * __this, IScoreU5BU5D_t_1308663195_0* ___scores, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetTitle(System.String)
extern "C"  void Leaderboard_SetTitle_m_237982081_0 (Leaderboard_t1208424657_0 * __this, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] UnityEngine.SocialPlatforms.Impl.Leaderboard::GetUserFilter()
extern "C"  StringU5BU5D_t_1137506664_0* Leaderboard_GetUserFilter_m_180679629_0 (Leaderboard_t1208424657_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::get_id()
extern "C"  String_t* Leaderboard_get_id_m_663411714_0 (Leaderboard_t1208424657_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_id(System.String)
extern "C"  void Leaderboard_set_id_m_1252838203_0 (Leaderboard_t1208424657_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_userScope()
extern "C"  int32_t Leaderboard_get_userScope_m_1813527237_0 (Leaderboard_t1208424657_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_userScope(UnityEngine.SocialPlatforms.UserScope)
extern "C"  void Leaderboard_set_userScope_m_5108284_0 (Leaderboard_t1208424657_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::get_range()
extern "C"  Range_t_1680814087_0  Leaderboard_get_range_m636637371_0 (Leaderboard_t1208424657_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_range(UnityEngine.SocialPlatforms.Range)
extern "C"  void Leaderboard_set_range_m_1850896060_0 (Leaderboard_t1208424657_0 * __this, Range_t_1680814087_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_timeScope()
extern "C"  int32_t Leaderboard_get_timeScope_m_2045326277_0 (Leaderboard_t1208424657_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_timeScope(UnityEngine.SocialPlatforms.TimeScope)
extern "C"  void Leaderboard_set_timeScope_m1932011396_0 (Leaderboard_t1208424657_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
