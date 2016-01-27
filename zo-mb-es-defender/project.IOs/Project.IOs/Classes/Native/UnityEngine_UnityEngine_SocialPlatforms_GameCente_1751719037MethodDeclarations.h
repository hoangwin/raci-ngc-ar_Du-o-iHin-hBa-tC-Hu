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

// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform
struct GameCenterPlatform_t_1751719037_0;
// UnityEngine.SocialPlatforms.ILocalUser
struct ILocalUser_t621169647_0;
// System.Action`1<System.Boolean>
struct Action_1_t_1815946807_0;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t949651122_0;
// System.String[]
struct StringU5BU5D_t_1137506664_0;
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData[]
struct GcAchievementDataU5BU5D_t_1622691438_0;
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData[]
struct GcScoreDataU5BU5D_t_1513326885_0;
// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>
struct Action_1_t1822194736_0;
// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>
struct Action_1_t1148469502_0;
// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
struct Action_1_t1302816251_0;
// UnityEngine.SocialPlatforms.ILeaderboard
struct ILeaderboard_t765130448_0;
// System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>
struct Action_1_t206501713_0;
// UnityEngine.SocialPlatforms.Impl.UserProfile[]
struct UserProfileU5BU5D_t82693650_0;
// UnityEngine.SocialPlatforms.IAchievement
struct IAchievement_t1483729388_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_TimeScope891115517.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_303547572.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_263992003.h"

// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::.ctor()
extern "C"  void GameCenterPlatform__ctor_m644203297_0 (GameCenterPlatform_t_1751719037_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::.cctor()
extern "C"  void GameCenterPlatform__cctor_m_1891027696_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::UnityEngine.SocialPlatforms.ISocialPlatform.LoadFriends(UnityEngine.SocialPlatforms.ILocalUser,System.Action`1<System.Boolean>)
extern "C"  void GameCenterPlatform_UnityEngine_SocialPlatforms_ISocialPlatform_LoadFriends_m692395677_0 (GameCenterPlatform_t_1751719037_0 * __this, Object_t * ___user, Action_1_t_1815946807_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::UnityEngine.SocialPlatforms.ISocialPlatform.Authenticate(UnityEngine.SocialPlatforms.ILocalUser,System.Action`1<System.Boolean>)
extern "C"  void GameCenterPlatform_UnityEngine_SocialPlatforms_ISocialPlatform_Authenticate_m1019748987_0 (GameCenterPlatform_t_1751719037_0 * __this, Object_t * ___user, Action_1_t_1815946807_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Authenticate()
extern "C"  void GameCenterPlatform_Internal_Authenticate_m_497601814_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Authenticated()
extern "C"  bool GameCenterPlatform_Internal_Authenticated_m_465412_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserName()
extern "C"  String_t* GameCenterPlatform_Internal_UserName_m_1246702078_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserID()
extern "C"  String_t* GameCenterPlatform_Internal_UserID_m1103178632_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_Underage()
extern "C"  bool GameCenterPlatform_Internal_Underage_m_1604455738_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserImage()
extern "C"  Texture2D_t949651122_0 * GameCenterPlatform_Internal_UserImage_m915316496_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadFriends()
extern "C"  void GameCenterPlatform_Internal_LoadFriends_m_1259947558_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadAchievementDescriptions()
extern "C"  void GameCenterPlatform_Internal_LoadAchievementDescriptions_m631344173_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadAchievements()
extern "C"  void GameCenterPlatform_Internal_LoadAchievements_m_1593813457_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ReportProgress(System.String,System.Double)
extern "C"  void GameCenterPlatform_Internal_ReportProgress_m1293200984_0 (Object_t * __this /* static, unused */, String_t* ___id, double ___progress, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ReportScore(System.Int64,System.String)
extern "C"  void GameCenterPlatform_Internal_ReportScore_m_1914680281_0 (Object_t * __this /* static, unused */, int64_t ___score, String_t* ___category, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadScores(System.String)
extern "C"  void GameCenterPlatform_Internal_LoadScores_m_99704410_0 (Object_t * __this /* static, unused */, String_t* ___category, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowAchievementsUI()
extern "C"  void GameCenterPlatform_Internal_ShowAchievementsUI_m_83515524_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowLeaderboardUI()
extern "C"  void GameCenterPlatform_Internal_ShowLeaderboardUI_m_1156503221_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadUsers(System.String[])
extern "C"  void GameCenterPlatform_Internal_LoadUsers_m_424713319_0 (Object_t * __this /* static, unused */, StringU5BU5D_t_1137506664_0* ___userIds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ResetAllAchievements()
extern "C"  void GameCenterPlatform_Internal_ResetAllAchievements_m_805177115_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowDefaultAchievementBanner(System.Boolean)
extern "C"  void GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m_289872331_0 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ResetAllAchievements(System.Action`1<System.Boolean>)
extern "C"  void GameCenterPlatform_ResetAllAchievements_m_180160982_0 (Object_t * __this /* static, unused */, Action_1_t_1815946807_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowDefaultAchievementCompletionBanner(System.Boolean)
extern "C"  void GameCenterPlatform_ShowDefaultAchievementCompletionBanner_m534321293_0 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowLeaderboardUI(System.String,UnityEngine.SocialPlatforms.TimeScope)
extern "C"  void GameCenterPlatform_ShowLeaderboardUI_m_1767448836_0 (Object_t * __this /* static, unused */, String_t* ___leaderboardID, int32_t ___timeScope, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowSpecificLeaderboardUI(System.String,System.Int32)
extern "C"  void GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m915894780_0 (Object_t * __this /* static, unused */, String_t* ___leaderboardID, int32_t ___timeScope, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ClearAchievementDescriptions(System.Int32)
extern "C"  void GameCenterPlatform_ClearAchievementDescriptions_m_231570485_0 (Object_t * __this /* static, unused */, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetAchievementDescription(UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData,System.Int32)
extern "C"  void GameCenterPlatform_SetAchievementDescription_m1025952251_0 (Object_t * __this /* static, unused */, GcAchievementDescriptionData_t_303547572_0  ___data, int32_t ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetAchievementDescriptionImage(UnityEngine.Texture2D,System.Int32)
extern "C"  void GameCenterPlatform_SetAchievementDescriptionImage_m_2110395600_0 (Object_t * __this /* static, unused */, Texture2D_t949651122_0 * ___texture, int32_t ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::TriggerAchievementDescriptionCallback()
extern "C"  void GameCenterPlatform_TriggerAchievementDescriptionCallback_m382485689_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::AuthenticateCallbackWrapper(System.Int32)
extern "C"  void GameCenterPlatform_AuthenticateCallbackWrapper_m1619241663_0 (Object_t * __this /* static, unused */, int32_t ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ClearFriends(System.Int32)
extern "C"  void GameCenterPlatform_ClearFriends_m1742022050_0 (Object_t * __this /* static, unused */, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetFriends(UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData,System.Int32)
extern "C"  void GameCenterPlatform_SetFriends_m676763082_0 (Object_t * __this /* static, unused */, GcUserProfileData_t263992003_0  ___data, int32_t ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetFriendImage(UnityEngine.Texture2D,System.Int32)
extern "C"  void GameCenterPlatform_SetFriendImage_m1119516317_0 (Object_t * __this /* static, unused */, Texture2D_t949651122_0 * ___texture, int32_t ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::TriggerFriendsCallbackWrapper(System.Int32)
extern "C"  void GameCenterPlatform_TriggerFriendsCallbackWrapper_m809905571_0 (Object_t * __this /* static, unused */, int32_t ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::AchievementCallbackWrapper(UnityEngine.SocialPlatforms.GameCenter.GcAchievementData[])
extern "C"  void GameCenterPlatform_AchievementCallbackWrapper_m1306048684_0 (Object_t * __this /* static, unused */, GcAchievementDataU5BU5D_t_1622691438_0* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ProgressCallbackWrapper(System.Boolean)
extern "C"  void GameCenterPlatform_ProgressCallbackWrapper_m1005842297_0 (Object_t * __this /* static, unused */, bool ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ScoreCallbackWrapper(System.Boolean)
extern "C"  void GameCenterPlatform_ScoreCallbackWrapper_m_1908541172_0 (Object_t * __this /* static, unused */, bool ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ScoreLoaderCallbackWrapper(UnityEngine.SocialPlatforms.GameCenter.GcScoreData[])
extern "C"  void GameCenterPlatform_ScoreLoaderCallbackWrapper_m_1958121919_0 (Object_t * __this /* static, unused */, GcScoreDataU5BU5D_t_1513326885_0* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.ILocalUser UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::get_localUser()
extern "C"  Object_t * GameCenterPlatform_get_localUser_m_1107573574_0 (GameCenterPlatform_t_1751719037_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::PopulateLocalUser()
extern "C"  void GameCenterPlatform_PopulateLocalUser_m_2012531137_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadAchievementDescriptions(System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>)
extern "C"  void GameCenterPlatform_LoadAchievementDescriptions_m293745755_0 (GameCenterPlatform_t_1751719037_0 * __this, Action_1_t1822194736_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ReportProgress(System.String,System.Double,System.Action`1<System.Boolean>)
extern "C"  void GameCenterPlatform_ReportProgress_m_709314665_0 (GameCenterPlatform_t_1751719037_0 * __this, String_t* ___id, double ___progress, Action_1_t_1815946807_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadAchievements(System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>)
extern "C"  void GameCenterPlatform_LoadAchievements_m200011543_0 (GameCenterPlatform_t_1751719037_0 * __this, Action_1_t1148469502_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ReportScore(System.Int64,System.String,System.Action`1<System.Boolean>)
extern "C"  void GameCenterPlatform_ReportScore_m_574823572_0 (GameCenterPlatform_t_1751719037_0 * __this, int64_t ___score, String_t* ___board, Action_1_t_1815946807_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadScores(System.String,System.Action`1<UnityEngine.SocialPlatforms.IScore[]>)
extern "C"  void GameCenterPlatform_LoadScores_m_2134078091_0 (GameCenterPlatform_t_1751719037_0 * __this, String_t* ___category, Action_1_t1302816251_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadScores(UnityEngine.SocialPlatforms.ILeaderboard,System.Action`1<System.Boolean>)
extern "C"  void GameCenterPlatform_LoadScores_m2122243871_0 (GameCenterPlatform_t_1751719037_0 * __this, Object_t * ___board, Action_1_t_1815946807_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LeaderboardCallbackWrapper(System.Boolean)
extern "C"  void GameCenterPlatform_LeaderboardCallbackWrapper_m1317866993_0 (Object_t * __this /* static, unused */, bool ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::GetLoading(UnityEngine.SocialPlatforms.ILeaderboard)
extern "C"  bool GameCenterPlatform_GetLoading_m_1392313665_0 (GameCenterPlatform_t_1751719037_0 * __this, Object_t * ___board, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::VerifyAuthentication()
extern "C"  bool GameCenterPlatform_VerifyAuthentication_m_146114408_0 (GameCenterPlatform_t_1751719037_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowAchievementsUI()
extern "C"  void GameCenterPlatform_ShowAchievementsUI_m217572822_0 (GameCenterPlatform_t_1751719037_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowLeaderboardUI()
extern "C"  void GameCenterPlatform_ShowLeaderboardUI_m_1144970877_0 (GameCenterPlatform_t_1751719037_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ClearUsers(System.Int32)
extern "C"  void GameCenterPlatform_ClearUsers_m28146411_0 (Object_t * __this /* static, unused */, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetUser(UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData,System.Int32)
extern "C"  void GameCenterPlatform_SetUser_m_158660724_0 (Object_t * __this /* static, unused */, GcUserProfileData_t263992003_0  ___data, int32_t ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetUserImage(UnityEngine.Texture2D,System.Int32)
extern "C"  void GameCenterPlatform_SetUserImage_m_629093496_0 (Object_t * __this /* static, unused */, Texture2D_t949651122_0 * ___texture, int32_t ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::TriggerUsersCallbackWrapper()
extern "C"  void GameCenterPlatform_TriggerUsersCallbackWrapper_m_1543015251_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadUsers(System.String[],System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>)
extern "C"  void GameCenterPlatform_LoadUsers_m_76496736_0 (GameCenterPlatform_t_1751719037_0 * __this, StringU5BU5D_t_1137506664_0* ___userIds, Action_1_t206501713_0 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SafeSetUserImage(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,UnityEngine.Texture2D,System.Int32)
extern "C"  void GameCenterPlatform_SafeSetUserImage_m_11292547_0 (Object_t * __this /* static, unused */, UserProfileU5BU5D_t82693650_0** ___array, Texture2D_t949651122_0 * ___texture, int32_t ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SafeClearArray(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,System.Int32)
extern "C"  void GameCenterPlatform_SafeClearArray_m_1603999377_0 (Object_t * __this /* static, unused */, UserProfileU5BU5D_t82693650_0** ___array, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.ILeaderboard UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::CreateLeaderboard()
extern "C"  Object_t * GameCenterPlatform_CreateLeaderboard_m1959129937_0 (GameCenterPlatform_t_1751719037_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.IAchievement UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::CreateAchievement()
extern "C"  Object_t * GameCenterPlatform_CreateAchievement_m_1302300059_0 (GameCenterPlatform_t_1751719037_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::TriggerResetAchievementCallback(System.Boolean)
extern "C"  void GameCenterPlatform_TriggerResetAchievementCallback_m247723933_0 (Object_t * __this /* static, unused */, bool ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
