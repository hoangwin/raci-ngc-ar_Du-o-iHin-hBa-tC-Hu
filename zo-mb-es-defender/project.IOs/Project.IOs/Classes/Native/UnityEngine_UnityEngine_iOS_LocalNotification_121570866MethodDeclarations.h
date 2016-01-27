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

// UnityEngine.iOS.LocalNotification
struct LocalNotification_t_121570866_0;
// System.String
struct String_t;
// System.Collections.IDictionary
struct IDictionary_t_2050639113_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime_1242318096.h"
#include "UnityEngine_UnityEngine_iOS_CalendarUnit_737197626.h"
#include "UnityEngine_UnityEngine_iOS_CalendarIdentifier_963448611.h"

// System.Void UnityEngine.iOS.LocalNotification::.ctor()
extern "C"  void LocalNotification__ctor_m_264889632_0 (LocalNotification_t_121570866_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.LocalNotification::.cctor()
extern "C"  void LocalNotification__cctor_m1459868805_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.iOS.LocalNotification::GetFireDate()
extern "C"  double LocalNotification_GetFireDate_m2090610709_0 (LocalNotification_t_121570866_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.LocalNotification::SetFireDate(System.Double)
extern "C"  void LocalNotification_SetFireDate_m_472393410_0 (LocalNotification_t_121570866_0 * __this, double ___dt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime UnityEngine.iOS.LocalNotification::get_fireDate()
extern "C"  DateTime_t_1242318096_0  LocalNotification_get_fireDate_m1789441812_0 (LocalNotification_t_121570866_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.LocalNotification::set_fireDate(System.DateTime)
extern "C"  void LocalNotification_set_fireDate_m462195765_0 (LocalNotification_t_121570866_0 * __this, DateTime_t_1242318096_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.iOS.LocalNotification::get_timeZone()
extern "C"  String_t* LocalNotification_get_timeZone_m165284569_0 (LocalNotification_t_121570866_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.LocalNotification::set_timeZone(System.String)
extern "C"  void LocalNotification_set_timeZone_m1306235542_0 (LocalNotification_t_121570866_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.iOS.CalendarUnit UnityEngine.iOS.LocalNotification::get_repeatInterval()
extern "C"  int32_t LocalNotification_get_repeatInterval_m523532072_0 (LocalNotification_t_121570866_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.LocalNotification::set_repeatInterval(UnityEngine.iOS.CalendarUnit)
extern "C"  void LocalNotification_set_repeatInterval_m_1640252537_0 (LocalNotification_t_121570866_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.iOS.CalendarIdentifier UnityEngine.iOS.LocalNotification::get_repeatCalendar()
extern "C"  int32_t LocalNotification_get_repeatCalendar_m_388803658_0 (LocalNotification_t_121570866_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.LocalNotification::set_repeatCalendar(UnityEngine.iOS.CalendarIdentifier)
extern "C"  void LocalNotification_set_repeatCalendar_m1866253719_0 (LocalNotification_t_121570866_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.iOS.LocalNotification::get_alertBody()
extern "C"  String_t* LocalNotification_get_alertBody_m_905886752_0 (LocalNotification_t_121570866_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.LocalNotification::set_alertBody(System.String)
extern "C"  void LocalNotification_set_alertBody_m1054552499_0 (LocalNotification_t_121570866_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.iOS.LocalNotification::get_alertAction()
extern "C"  String_t* LocalNotification_get_alertAction_m1761754846_0 (LocalNotification_t_121570866_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.LocalNotification::set_alertAction(System.String)
extern "C"  void LocalNotification_set_alertAction_m_1188601511_0 (LocalNotification_t_121570866_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.iOS.LocalNotification::get_hasAction()
extern "C"  bool LocalNotification_get_hasAction_m_1594495861_0 (LocalNotification_t_121570866_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.LocalNotification::set_hasAction(System.Boolean)
extern "C"  void LocalNotification_set_hasAction_m_522062488_0 (LocalNotification_t_121570866_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.iOS.LocalNotification::get_alertLaunchImage()
extern "C"  String_t* LocalNotification_get_alertLaunchImage_m1987036946_0 (LocalNotification_t_121570866_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.LocalNotification::set_alertLaunchImage(System.String)
extern "C"  void LocalNotification_set_alertLaunchImage_m1613118657_0 (LocalNotification_t_121570866_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.iOS.LocalNotification::get_applicationIconBadgeNumber()
extern "C"  int32_t LocalNotification_get_applicationIconBadgeNumber_m_2065426844_0 (LocalNotification_t_121570866_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.LocalNotification::set_applicationIconBadgeNumber(System.Int32)
extern "C"  void LocalNotification_set_applicationIconBadgeNumber_m1023929213_0 (LocalNotification_t_121570866_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.iOS.LocalNotification::get_soundName()
extern "C"  String_t* LocalNotification_get_soundName_m_21135446_0 (LocalNotification_t_121570866_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.LocalNotification::set_soundName(System.String)
extern "C"  void LocalNotification_set_soundName_m1522089625_0 (LocalNotification_t_121570866_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.iOS.LocalNotification::get_defaultSoundName()
extern "C"  String_t* LocalNotification_get_defaultSoundName_m1631057317_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary UnityEngine.iOS.LocalNotification::get_userInfo()
extern "C"  Object_t * LocalNotification_get_userInfo_m_1975722708_0 (LocalNotification_t_121570866_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.LocalNotification::set_userInfo(System.Collections.IDictionary)
extern "C"  void LocalNotification_set_userInfo_m_404826095_0 (LocalNotification_t_121570866_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.LocalNotification::Destroy()
extern "C"  void LocalNotification_Destroy_m215220946_0 (LocalNotification_t_121570866_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.LocalNotification::Finalize()
extern "C"  void LocalNotification_Finalize_m1087615408_0 (LocalNotification_t_121570866_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.LocalNotification::InitWrapper()
extern "C"  void LocalNotification_InitWrapper_m_1427083605_0 (LocalNotification_t_121570866_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
