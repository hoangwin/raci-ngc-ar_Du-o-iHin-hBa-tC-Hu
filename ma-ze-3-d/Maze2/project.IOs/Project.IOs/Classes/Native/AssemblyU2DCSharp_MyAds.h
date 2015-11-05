#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Sprite
struct Sprite_t52;
// MyAds/HandleCompleted
struct HandleCompleted_t43;
// MyAds/HandleFailed
struct HandleFailed_t47;
// System.String[,]
struct StringU5BU2CU5D_t53;
// System.Boolean[]
struct BooleanU5BU5D_t54;
// System.String
struct String_t;
// MyAds
struct MyAds_t51;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// MyAds
struct  MyAds_t51  : public MonoBehaviour_t3
{
};
struct MyAds_t51_StaticFields{
	// UnityEngine.Sprite MyAds::sprite1
	Sprite_t52 * ___sprite1_2;
	// UnityEngine.Sprite MyAds::sprite2
	Sprite_t52 * ___sprite2_3;
	// UnityEngine.Sprite MyAds::sprite3
	Sprite_t52 * ___sprite3_4;
	// MyAds/HandleCompleted MyAds::onCompleted
	HandleCompleted_t43 * ___onCompleted_5;
	// MyAds/HandleFailed MyAds::onFailed
	HandleFailed_t47 * ___onFailed_6;
	// System.String[,] MyAds::AdsInfoArray
	StringU5BU2CU5D_t53* ___AdsInfoArray_7;
	// System.Boolean[] MyAds::isLoad
	BooleanU5BU5D_t54* ___isLoad_8;
	// System.Boolean MyAds::isFistTime
	bool ___isFistTime_9;
	// System.String MyAds::STR_LOAD
	String_t* ___STR_LOAD_10;
	// System.Int32 MyAds::MAX_ADS
	int32_t ___MAX_ADS_11;
	// System.String MyAds::Link
	String_t* ___Link_12;
	// System.Boolean MyAds::isLoadText
	bool ___isLoadText_13;
	// MyAds MyAds::instance
	MyAds_t51 * ___instance_14;
};
