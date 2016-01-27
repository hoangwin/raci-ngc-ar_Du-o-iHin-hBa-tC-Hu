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

// Vungle
struct Vungle_t742702690_0;
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
// AdFinishedEventArgs
struct AdFinishedEventArgs_t_171625393_0;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t1667490442_0;

#include "codegen/il2cpp-codegen.h"

// System.Void Vungle::.ctor()
extern "C"  void Vungle__ctor_m_784272846_0 (Vungle_t742702690_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vungle::.cctor()
extern "C"  void Vungle__cctor_m501060357_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vungle::add_onAdStartedEvent(System.Action)
extern "C"  void Vungle_add_onAdStartedEvent_m1097615574_0 (Object_t * __this /* static, unused */, Action_t_1705395358_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vungle::remove_onAdStartedEvent(System.Action)
extern "C"  void Vungle_remove_onAdStartedEvent_m882276987_0 (Object_t * __this /* static, unused */, Action_t_1705395358_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vungle::add_onAdEndedEvent(System.Action)
extern "C"  void Vungle_add_onAdEndedEvent_m_783987017_0 (Object_t * __this /* static, unused */, Action_t_1705395358_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vungle::remove_onAdEndedEvent(System.Action)
extern "C"  void Vungle_remove_onAdEndedEvent_m621944130_0 (Object_t * __this /* static, unused */, Action_t_1705395358_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vungle::add_adPlayableEvent(System.Action`1<System.Boolean>)
extern "C"  void Vungle_add_adPlayableEvent_m_1160382818_0 (Object_t * __this /* static, unused */, Action_1_t_1815946807_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vungle::remove_adPlayableEvent(System.Action`1<System.Boolean>)
extern "C"  void Vungle_remove_adPlayableEvent_m_1397239763_0 (Object_t * __this /* static, unused */, Action_1_t_1815946807_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vungle::add_onCachedAdAvailableEvent(System.Action)
extern "C"  void Vungle_add_onCachedAdAvailableEvent_m_1270855994_0 (Object_t * __this /* static, unused */, Action_t_1705395358_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vungle::remove_onCachedAdAvailableEvent(System.Action)
extern "C"  void Vungle_remove_onCachedAdAvailableEvent_m931141715_0 (Object_t * __this /* static, unused */, Action_t_1705395358_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vungle::add_onAdViewedEvent(System.Action`2<System.Double,System.Double>)
extern "C"  void Vungle_add_onAdViewedEvent_m_1496051095_0 (Object_t * __this /* static, unused */, Action_2_t_536444486_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vungle::remove_onAdViewedEvent(System.Action`2<System.Double,System.Double>)
extern "C"  void Vungle_remove_onAdViewedEvent_m1393387552_0 (Object_t * __this /* static, unused */, Action_2_t_536444486_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vungle::add_onLogEvent(System.Action`1<System.String>)
extern "C"  void Vungle_add_onLogEvent_m1646358325_0 (Object_t * __this /* static, unused */, Action_1_t_1507084777_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vungle::remove_onLogEvent(System.Action`1<System.String>)
extern "C"  void Vungle_remove_onLogEvent_m2124544134_0 (Object_t * __this /* static, unused */, Action_1_t_1507084777_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vungle::add_onAdFinishedEvent(System.Action`1<AdFinishedEventArgs>)
extern "C"  void Vungle_add_onAdFinishedEvent_m1977907486_0 (Object_t * __this /* static, unused */, Action_1_t_799107195_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vungle::remove_onAdFinishedEvent(System.Action`1<AdFinishedEventArgs>)
extern "C"  void Vungle_remove_onAdFinishedEvent_m_1383850449_0 (Object_t * __this /* static, unused */, Action_1_t_799107195_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vungle::adStarted()
extern "C"  void Vungle_adStarted_m_1092287616_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vungle::adEnded()
extern "C"  void Vungle_adEnded_m_1033107103_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vungle::videoViewed(System.Double,System.Double)
extern "C"  void Vungle_videoViewed_m_1580366597_0 (Object_t * __this /* static, unused */, double ___timeWatched, double ___totalDuration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vungle::cachedAdAvailable()
extern "C"  void Vungle_cachedAdAvailable_m_475157624_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vungle::adPlayable(System.Boolean)
extern "C"  void Vungle_adPlayable_m_1537640822_0 (Object_t * __this /* static, unused */, bool ___playable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vungle::onLog(System.String)
extern "C"  void Vungle_onLog_m1636652017_0 (Object_t * __this /* static, unused */, String_t* ___log, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vungle::adFinished(AdFinishedEventArgs)
extern "C"  void Vungle_adFinished_m1776384013_0 (Object_t * __this /* static, unused */, AdFinishedEventArgs_t_171625393_0 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vungle::get_VersionInfo()
extern "C"  String_t* Vungle_get_VersionInfo_m_1735364230_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vungle::init(System.String,System.String,System.String)
extern "C"  void Vungle_init_m_207013464_0 (Object_t * __this /* static, unused */, String_t* ___androidAppId, String_t* ___iosAppId, String_t* ___winAppId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vungle::setSoundEnabled(System.Boolean)
extern "C"  void Vungle_setSoundEnabled_m1296640217_0 (Object_t * __this /* static, unused */, bool ___isEnabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vungle::isAdvertAvailable()
extern "C"  bool Vungle_isAdvertAvailable_m_1614623599_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vungle::playAd(System.Boolean,System.String,System.Int32)
extern "C"  void Vungle_playAd_m1351187991_0 (Object_t * __this /* static, unused */, bool ___incentivized, String_t* ___user, int32_t ___orientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vungle::playAdWithOptions(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void Vungle_playAdWithOptions_m_749879114_0 (Object_t * __this /* static, unused */, Dictionary_2_t1667490442_0 * ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vungle::clearCache()
extern "C"  void Vungle_clearCache_m1755831247_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vungle::clearSleep()
extern "C"  void Vungle_clearSleep_m_1659183328_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vungle::setEndPoint(System.String)
extern "C"  void Vungle_setEndPoint_m1313524893_0 (Object_t * __this /* static, unused */, String_t* ___endPoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vungle::setLogEnable(System.Boolean)
extern "C"  void Vungle_setLogEnable_m132581060_0 (Object_t * __this /* static, unused */, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vungle::getEndPoint()
extern "C"  String_t* Vungle_getEndPoint_m2032981944_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vungle::onResume()
extern "C"  void Vungle_onResume_m_1453929730_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vungle::onPause()
extern "C"  void Vungle_onPause_m1863354785_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
