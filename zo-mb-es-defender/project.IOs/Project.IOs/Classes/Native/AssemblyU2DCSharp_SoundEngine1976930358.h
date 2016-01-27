#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioSource
struct AudioSource_t_1856244150_0;
// UnityEngine.AudioClip
struct AudioClip_t_2050270981_0;
// SoundEngine
struct SoundEngine_t1976930358_0;

#include "UnityEngine_UnityEngine_MonoBehaviour279269927.h"

// SoundEngine
struct  SoundEngine_t1976930358_0  : public MonoBehaviour_t279269927_0
{
	// UnityEngine.AudioSource SoundEngine::m_AudioSource
	AudioSource_t_1856244150_0 * ___m_AudioSource_3;
	// UnityEngine.AudioSource SoundEngine::m_AudioSourceBG
	AudioSource_t_1856244150_0 * ___m_AudioSourceBG_4;
	// UnityEngine.AudioClip SoundEngine::m_ClickClip
	AudioClip_t_2050270981_0 * ___m_ClickClip_5;
	// UnityEngine.AudioClip SoundEngine::m_WinClip
	AudioClip_t_2050270981_0 * ___m_WinClip_6;
	// UnityEngine.AudioClip SoundEngine::m_LoseClip
	AudioClip_t_2050270981_0 * ___m_LoseClip_7;
	// UnityEngine.AudioClip SoundEngine::m_StartClip
	AudioClip_t_2050270981_0 * ___m_StartClip_8;
	// UnityEngine.AudioClip SoundEngine::m_GetItemClip
	AudioClip_t_2050270981_0 * ___m_GetItemClip_9;
};
struct SoundEngine_t1976930358_0_StaticFields{
	// System.Boolean SoundEngine::m_isSoundEnable
	bool ___m_isSoundEnable_2;
	// SoundEngine SoundEngine::m_Instancce
	SoundEngine_t1976930358_0 * ___m_Instancce_10;
};
