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
// UnityEngine.WWW
struct WWW_t49;
// MyAds/HandleCompleted
struct HandleCompleted_t43;
// System.Object
struct Object_t;

#include "mscorlib_System_Object.h"

// MyAds/<LoadPageByWWW>c__Iterator4
struct  U3CLoadPageByWWWU3Ec__Iterator4_t48  : public Object_t
{
	// System.String MyAds/<LoadPageByWWW>c__Iterator4::url
	String_t* ___url_0;
	// UnityEngine.WWW MyAds/<LoadPageByWWW>c__Iterator4::<www>__0
	WWW_t49 * ___U3CwwwU3E__0_1;
	// MyAds/HandleCompleted MyAds/<LoadPageByWWW>c__Iterator4::onCompleted
	HandleCompleted_t43 * ___onCompleted_2;
	// System.Int32 MyAds/<LoadPageByWWW>c__Iterator4::$PC
	int32_t ___U24PC_3;
	// System.Object MyAds/<LoadPageByWWW>c__Iterator4::$current
	Object_t * ___U24current_4;
	// System.String MyAds/<LoadPageByWWW>c__Iterator4::<$>url
	String_t* ___U3CU24U3Eurl_5;
	// MyAds/HandleCompleted MyAds/<LoadPageByWWW>c__Iterator4::<$>onCompleted
	HandleCompleted_t43 * ___U3CU24U3EonCompleted_6;
};
