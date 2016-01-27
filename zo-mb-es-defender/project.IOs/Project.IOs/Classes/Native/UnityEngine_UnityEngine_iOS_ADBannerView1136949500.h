#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.iOS.ADBannerView/BannerWasClickedDelegate
struct BannerWasClickedDelegate_t_1717057030_0;
// UnityEngine.iOS.ADBannerView/BannerWasLoadedDelegate
struct BannerWasLoadedDelegate_t_1901461222_0;
// UnityEngine.iOS.ADBannerView/BannerFailedToLoadDelegate
struct BannerFailedToLoadDelegate_t_356069940_0;

#include "mscorlib_System_Object_1786876978.h"
#include "mscorlib_System_IntPtr117299260.h"

// UnityEngine.iOS.ADBannerView
struct  ADBannerView_t1136949500_0  : public Object_t
{
	// System.IntPtr UnityEngine.iOS.ADBannerView::_bannerView
	IntPtr_t ____bannerView_0;
};
struct ADBannerView_t1136949500_0_StaticFields{
	// UnityEngine.iOS.ADBannerView/BannerWasClickedDelegate UnityEngine.iOS.ADBannerView::onBannerWasClicked
	BannerWasClickedDelegate_t_1717057030_0 * ___onBannerWasClicked_1;
	// UnityEngine.iOS.ADBannerView/BannerWasLoadedDelegate UnityEngine.iOS.ADBannerView::onBannerWasLoaded
	BannerWasLoadedDelegate_t_1901461222_0 * ___onBannerWasLoaded_2;
	// UnityEngine.iOS.ADBannerView/BannerFailedToLoadDelegate UnityEngine.iOS.ADBannerView::onBannerFailedToLoad
	BannerFailedToLoadDelegate_t_356069940_0 * ___onBannerFailedToLoad_3;
};
