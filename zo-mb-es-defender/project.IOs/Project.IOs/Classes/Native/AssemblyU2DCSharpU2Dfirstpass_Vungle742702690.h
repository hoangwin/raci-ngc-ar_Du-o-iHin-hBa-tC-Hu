#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
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

#include "mscorlib_System_Object_1786876978.h"

// Vungle
struct  Vungle_t742702690_0  : public Object_t
{
};
struct Vungle_t742702690_0_StaticFields{
	// System.Action Vungle::onAdStartedEvent
	Action_t_1705395358_0 * ___onAdStartedEvent_4;
	// System.Action Vungle::onAdEndedEvent
	Action_t_1705395358_0 * ___onAdEndedEvent_5;
	// System.Action`1<System.Boolean> Vungle::adPlayableEvent
	Action_1_t_1815946807_0 * ___adPlayableEvent_6;
	// System.Action Vungle::onCachedAdAvailableEvent
	Action_t_1705395358_0 * ___onCachedAdAvailableEvent_7;
	// System.Action`2<System.Double,System.Double> Vungle::onAdViewedEvent
	Action_2_t_536444486_0 * ___onAdViewedEvent_8;
	// System.Action`1<System.String> Vungle::onLogEvent
	Action_1_t_1507084777_0 * ___onLogEvent_9;
	// System.Action`1<AdFinishedEventArgs> Vungle::onAdFinishedEvent
	Action_1_t_799107195_0 * ___onAdFinishedEvent_10;
};
