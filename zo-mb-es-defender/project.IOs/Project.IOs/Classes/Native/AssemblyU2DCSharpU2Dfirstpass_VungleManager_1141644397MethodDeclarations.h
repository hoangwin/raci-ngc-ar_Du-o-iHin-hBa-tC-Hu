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

// VungleManager
struct VungleManager_t_1141644397_0;
// System.Action
struct Action_t_1705395358_0;
// System.Action`1<System.Boolean>
struct Action_1_t_1815946807_0;
// System.Action`2<System.Double,System.Double>
struct Action_2_t_536444486_0;
// System.Action`1<System.String>
struct Action_1_t_1507084777_0;
// System.Action`1<AdFinishedEventArgs>
struct Action_1_t_799107195_0;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t1667490442_0;

#include "codegen/il2cpp-codegen.h"

// System.Void VungleManager::.ctor()
extern "C"  void VungleManager__ctor_m804520037_0 (VungleManager_t_1141644397_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VungleManager::.cctor()
extern "C"  void VungleManager__cctor_m1373216880_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VungleManager::add_OnAdStartEvent(System.Action)
extern "C"  void VungleManager_add_OnAdStartEvent_m1416341724_0 (Object_t * __this /* static, unused */, Action_t_1705395358_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VungleManager::remove_OnAdStartEvent(System.Action)
extern "C"  void VungleManager_remove_OnAdStartEvent_m_1746047867_0 (Object_t * __this /* static, unused */, Action_t_1705395358_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VungleManager::add_OnCachedAdAvailableEvent(System.Action)
extern "C"  void VungleManager_add_OnCachedAdAvailableEvent_m417470363_0 (Object_t * __this /* static, unused */, Action_t_1705395358_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VungleManager::remove_OnCachedAdAvailableEvent(System.Action)
extern "C"  void VungleManager_remove_OnCachedAdAvailableEvent_m1700302858_0 (Object_t * __this /* static, unused */, Action_t_1705395358_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VungleManager::add_OnAdPlayableEvent(System.Action`1<System.Boolean>)
extern "C"  void VungleManager_add_OnAdPlayableEvent_m_1230225542_0 (Object_t * __this /* static, unused */, Action_1_t_1815946807_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VungleManager::remove_OnAdPlayableEvent(System.Action`1<System.Boolean>)
extern "C"  void VungleManager_remove_OnAdPlayableEvent_m1004879859_0 (Object_t * __this /* static, unused */, Action_1_t_1815946807_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VungleManager::add_OnAdEndEvent(System.Action)
extern "C"  void VungleManager_add_OnAdEndEvent_m1580616733_0 (Object_t * __this /* static, unused */, Action_t_1705395358_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VungleManager::remove_OnAdEndEvent(System.Action)
extern "C"  void VungleManager_remove_OnAdEndEvent_m_2007120970_0 (Object_t * __this /* static, unused */, Action_t_1705395358_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VungleManager::add_OnVideoViewEvent(System.Action`2<System.Double,System.Double>)
extern "C"  void VungleManager_add_OnVideoViewEvent_m_1727556805_0 (Object_t * __this /* static, unused */, Action_2_t_536444486_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VungleManager::remove_OnVideoViewEvent(System.Action`2<System.Double,System.Double>)
extern "C"  void VungleManager_remove_OnVideoViewEvent_m_1598930812_0 (Object_t * __this /* static, unused */, Action_2_t_536444486_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VungleManager::add_OnSDKLogEvent(System.Action`1<System.String>)
extern "C"  void VungleManager_add_OnSDKLogEvent_m739411974_0 (Object_t * __this /* static, unused */, Action_1_t_1507084777_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VungleManager::remove_OnSDKLogEvent(System.Action`1<System.String>)
extern "C"  void VungleManager_remove_OnSDKLogEvent_m_893493927_0 (Object_t * __this /* static, unused */, Action_1_t_1507084777_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VungleManager::add_OnAdFinishedEvent(System.Action`1<AdFinishedEventArgs>)
extern "C"  void VungleManager_add_OnAdFinishedEvent_m_111546857_0 (Object_t * __this /* static, unused */, Action_1_t_799107195_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VungleManager::remove_OnAdFinishedEvent(System.Action`1<AdFinishedEventArgs>)
extern "C"  void VungleManager_remove_OnAdFinishedEvent_m_1266941870_0 (Object_t * __this /* static, unused */, Action_1_t_799107195_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VungleManager::noop()
extern "C"  void VungleManager_noop_m1457360811_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VungleManager::onEvent(System.String,System.String)
extern "C"  void VungleManager_onEvent_m_573119516_0 (Object_t * __this /* static, unused */, String_t* ___e, String_t* ___arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VungleManager::OnAdStart(System.String)
extern "C"  void VungleManager_OnAdStart_m_278889049_0 (VungleManager_t_1141644397_0 * __this, String_t* ___empty, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VungleManager::OnCachedAdAvailable(System.String)
extern "C"  void VungleManager_OnCachedAdAvailable_m1062084182_0 (VungleManager_t_1141644397_0 * __this, String_t* ___empty, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VungleManager::OnAdPlayable(System.String)
extern "C"  void VungleManager_OnAdPlayable_m_1328433295_0 (VungleManager_t_1141644397_0 * __this, String_t* ___playable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VungleManager::OnVideoView(System.String)
extern "C"  void VungleManager_OnVideoView_m1978788766_0 (VungleManager_t_1141644397_0 * __this, String_t* ___param, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VungleManager::OnCloseProductSheet(System.String)
extern "C"  void VungleManager_OnCloseProductSheet_m993668098_0 (VungleManager_t_1141644397_0 * __this, String_t* ___empty, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VungleManager::OnSDKLog(System.String)
extern "C"  void VungleManager_OnSDKLog_m_1203343320_0 (VungleManager_t_1141644397_0 * __this, String_t* ___log, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VungleManager::OnAdEnd(System.String)
extern "C"  void VungleManager_OnAdEnd_m1014877638_0 (VungleManager_t_1141644397_0 * __this, String_t* ___param, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VungleManager::extractBoolValue(System.String,System.String)
extern "C"  bool VungleManager_extractBoolValue_m_1673357363_0 (VungleManager_t_1141644397_0 * __this, String_t* ___json, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VungleManager::extractBoolValue(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String)
extern "C"  bool VungleManager_extractBoolValue_m_1487049386_0 (VungleManager_t_1141644397_0 * __this, Dictionary_2_t1667490442_0 * ___attrs, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
