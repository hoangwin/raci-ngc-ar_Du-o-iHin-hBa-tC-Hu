#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.iOS.ADInterstitialAd/InterstitialWasLoadedDelegate
struct InterstitialWasLoadedDelegate_t_1011740646_0;
// UnityEngine.iOS.ADInterstitialAd/InterstitialWasViewedDelegate
struct InterstitialWasViewedDelegate_t_2089400831_0;

#include "mscorlib_System_Object_1786876978.h"
#include "mscorlib_System_IntPtr117299260.h"

// UnityEngine.iOS.ADInterstitialAd
struct  ADInterstitialAd_t_118882008_0  : public Object_t
{
	// System.IntPtr UnityEngine.iOS.ADInterstitialAd::interstitialView
	IntPtr_t ___interstitialView_0;
};
struct ADInterstitialAd_t_118882008_0_StaticFields{
	// UnityEngine.iOS.ADInterstitialAd/InterstitialWasLoadedDelegate UnityEngine.iOS.ADInterstitialAd::onInterstitialWasLoaded
	InterstitialWasLoadedDelegate_t_1011740646_0 * ___onInterstitialWasLoaded_1;
	// UnityEngine.iOS.ADInterstitialAd/InterstitialWasViewedDelegate UnityEngine.iOS.ADInterstitialAd::onInterstitialWasViewed
	InterstitialWasViewedDelegate_t_2089400831_0 * ___onInterstitialWasViewed_2;
};
