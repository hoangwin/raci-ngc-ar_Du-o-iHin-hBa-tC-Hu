#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// AdFinishedEventArgs
struct AdFinishedEventArgs_t_171625393_0;
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

#include "UnityEngine_UnityEngine_MonoBehaviour279269927.h"

// VungleManager
struct  VungleManager_t_1141644397_0  : public MonoBehaviour_t279269927_0
{
	// AdFinishedEventArgs VungleManager::adFinishedEventArgs
	AdFinishedEventArgs_t_171625393_0 * ___adFinishedEventArgs_2;
};
struct VungleManager_t_1141644397_0_StaticFields{
	// AdFinishedEventArgs VungleManager::adWinFinishedEventArgs
	AdFinishedEventArgs_t_171625393_0 * ___adWinFinishedEventArgs_3;
	// System.Action VungleManager::OnAdStartEvent
	Action_t_1705395358_0 * ___OnAdStartEvent_4;
	// System.Action VungleManager::OnCachedAdAvailableEvent
	Action_t_1705395358_0 * ___OnCachedAdAvailableEvent_5;
	// System.Action`1<System.Boolean> VungleManager::OnAdPlayableEvent
	Action_1_t_1815946807_0 * ___OnAdPlayableEvent_6;
	// System.Action VungleManager::OnAdEndEvent
	Action_t_1705395358_0 * ___OnAdEndEvent_7;
	// System.Action`2<System.Double,System.Double> VungleManager::OnVideoViewEvent
	Action_2_t_536444486_0 * ___OnVideoViewEvent_8;
	// System.Action`1<System.String> VungleManager::OnSDKLogEvent
	Action_1_t_1507084777_0 * ___OnSDKLogEvent_9;
	// System.Action`1<AdFinishedEventArgs> VungleManager::OnAdFinishedEvent
	Action_1_t_799107195_0 * ___OnAdFinishedEvent_10;
};
