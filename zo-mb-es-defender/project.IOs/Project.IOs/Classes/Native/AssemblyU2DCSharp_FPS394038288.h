#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t221418124_0;

#include "UnityEngine_UnityEngine_MonoBehaviour279269927.h"

// FPS
struct  FPS_t394038288_0  : public MonoBehaviour_t279269927_0
{
	// System.Single FPS::updateInterval
	float ___updateInterval_2;
	// System.Single FPS::accum
	float ___accum_3;
	// System.Int32 FPS::frames
	int32_t ___frames_4;
	// System.Single FPS::timeleft
	float ___timeleft_5;
	// UnityEngine.UI.Text FPS::_Text
	Text_t221418124_0 * ____Text_6;
};
