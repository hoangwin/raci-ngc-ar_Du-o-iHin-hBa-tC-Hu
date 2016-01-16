#pragma once

#include <Availability.h>

//------------------------------------------------------------------------------
//
// ensuring proper compiler/xcode/whatever selection
//

#ifndef __clang__
#error please use clang compiler.
#endif

// NOT the best way but apple do not care about adding extensions properly
#if __clang_major__ < 3
#error please use xcode 4.2 or newer
#endif

#if !defined(__IPHONE_5_0) || __IPHONE_OS_VERSION_MAX_ALLOWED < __IPHONE_5_0
#error please use ios sdk 5.0 or newer
#endif

#if !defined(__IPHONE_4_0) || __IPHONE_OS_VERSION_MIN_REQUIRED < __IPHONE_4_0
#error please target ios 4.0 or newer
#endif


//------------------------------------------------------------------------------
//
// defines for sdk/target version
//

#ifdef __IPHONE_6_0
	#define UNITY_PRE_IOS6_SDK (__IPHONE_OS_VERSION_MAX_ALLOWED < __IPHONE_6_0)
#else
	#define UNITY_PRE_IOS6_SDK 1
#endif

#ifdef __IPHONE_6_0
	#define UNITY_PRE_IOS6_TARGET (__IPHONE_OS_VERSION_MIN_REQUIRED < __IPHONE_6_0)
#else
	#define UNITY_PRE_IOS6_TARGET 1
#endif


#ifdef __IPHONE_7_0
	#define UNITY_PRE_IOS7_SDK (__IPHONE_OS_VERSION_MAX_ALLOWED < __IPHONE_7_0)
#else
	#define UNITY_PRE_IOS7_SDK 1
#endif

#ifdef __IPHONE_7_0
	#define UNITY_PRE_IOS7_TARGET (__IPHONE_OS_VERSION_MIN_REQUIRED < __IPHONE_7_0)
#else
	#define UNITY_PRE_IOS7_TARGET 1
#endif


