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

// UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
struct GcLeaderboard_t_100683730_0;
// UnityEngine.SocialPlatforms.Impl.Leaderboard
struct Leaderboard_t1208424657_0;
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData[]
struct GcScoreDataU5BU5D_t_1513326885_0;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t_1137506664_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter1969742745.h"

// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::.ctor(UnityEngine.SocialPlatforms.Impl.Leaderboard)
extern "C"  void GcLeaderboard__ctor_m983739183_0 (GcLeaderboard_t_100683730_0 * __this, Leaderboard_t1208424657_0 * ___board, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Finalize()
extern "C"  void GcLeaderboard_Finalize_m827643570_0 (GcLeaderboard_t_100683730_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Contains(UnityEngine.SocialPlatforms.Impl.Leaderboard)
extern "C"  bool GcLeaderboard_Contains_m_357120202_0 (GcLeaderboard_t_100683730_0 * __this, Leaderboard_t1208424657_0 * ___board, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetScores(UnityEngine.SocialPlatforms.GameCenter.GcScoreData[])
extern "C"  void GcLeaderboard_SetScores_m695766380_0 (GcLeaderboard_t_100683730_0 * __this, GcScoreDataU5BU5D_t_1513326885_0* ___scoreDatas, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetLocalScore(UnityEngine.SocialPlatforms.GameCenter.GcScoreData)
extern "C"  void GcLeaderboard_SetLocalScore_m1455692368_0 (GcLeaderboard_t_100683730_0 * __this, GcScoreData_t1969742745_0  ___scoreData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetMaxRange(System.UInt32)
extern "C"  void GcLeaderboard_SetMaxRange_m124828187_0 (GcLeaderboard_t_100683730_0 * __this, uint32_t ___maxRange, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetTitle(System.String)
extern "C"  void GcLeaderboard_SetTitle_m404553404_0 (GcLeaderboard_t_100683730_0 * __this, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Internal_LoadScores(System.String,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void GcLeaderboard_Internal_LoadScores_m_523738259_0 (GcLeaderboard_t_100683730_0 * __this, String_t* ___category, int32_t ___from, int32_t ___count, int32_t ___playerScope, int32_t ___timeScope, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Internal_LoadScoresWithUsers(System.String,System.Int32,System.String[])
extern "C"  void GcLeaderboard_Internal_LoadScoresWithUsers_m1836788974_0 (GcLeaderboard_t_100683730_0 * __this, String_t* ___category, int32_t ___timeScope, StringU5BU5D_t_1137506664_0* ___userIDs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Loading()
extern "C"  bool GcLeaderboard_Loading_m1117879034_0 (GcLeaderboard_t_100683730_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Dispose()
extern "C"  void GcLeaderboard_Dispose_m_1051488603_0 (GcLeaderboard_t_100683730_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
