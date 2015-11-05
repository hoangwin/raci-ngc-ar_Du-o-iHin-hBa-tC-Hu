#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioSource
struct AudioSource_t161;
// UnityEngine.AudioClip
struct AudioClip_t162;
// SoundEngine
struct SoundEngine_t160;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// SoundEngine
struct  SoundEngine_t160  : public MonoBehaviour_t3
{
	// UnityEngine.AudioSource SoundEngine::music
	AudioSource_t161 * ___music_4;
	// UnityEngine.AudioClip SoundEngine::music1
	AudioClip_t162 * ___music1_5;
	// UnityEngine.AudioClip SoundEngine::music2
	AudioClip_t162 * ___music2_6;
	// UnityEngine.AudioClip SoundEngine::music3
	AudioClip_t162 * ___music3_7;
	// UnityEngine.AudioClip SoundEngine::music4
	AudioClip_t162 * ___music4_8;
	// UnityEngine.AudioClip SoundEngine::click
	AudioClip_t162 * ___click_9;
	// UnityEngine.AudioClip SoundEngine::move
	AudioClip_t162 * ___move_10;
	// UnityEngine.AudioClip SoundEngine::win
	AudioClip_t162 * ___win_11;
	// UnityEngine.AudioSource SoundEngine::audioSource
	AudioSource_t161 * ___audioSource_12;
	// UnityEngine.AudioSource SoundEngine::audioSourceFXLoop
	AudioSource_t161 * ___audioSourceFXLoop_13;
};
struct SoundEngine_t160_StaticFields{
	// System.Boolean SoundEngine::isSoundMusic
	bool ___isSoundMusic_2;
	// System.Boolean SoundEngine::isSoundSFX
	bool ___isSoundSFX_3;
	// SoundEngine SoundEngine::instance
	SoundEngine_t160 * ___instance_14;
};
