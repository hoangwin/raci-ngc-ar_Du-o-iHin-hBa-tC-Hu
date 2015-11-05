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

// MyAds
struct MyAds_t51;
// System.String
struct String_t;
// MyAds/HandleCompleted
struct HandleCompleted_t43;
// System.Collections.IEnumerator
struct IEnumerator_t239;

#include "codegen/il2cpp-codegen.h"

// System.Void MyAds::.ctor()
extern "C" void MyAds__ctor_m123 (MyAds_t51 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MyAds::.cctor()
extern "C" void MyAds__cctor_m124 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MyAds::Start()
extern "C" void MyAds_Start_m125 (MyAds_t51 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MyAds::GetADS()
extern "C" void MyAds_GetADS_m126 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MyAds::GetHTML(System.String,MyAds/HandleCompleted)
extern "C" void MyAds_GetHTML_m127 (Object_t * __this /* static, unused */, String_t* ___uri, HandleCompleted_t43 * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MyAds::LoadPageByWWW(System.String,MyAds/HandleCompleted)
extern "C" Object_t * MyAds_LoadPageByWWW_m128 (Object_t * __this /* static, unused */, String_t* ___url, HandleCompleted_t43 * ___onCompleted, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MyAds::OnLoadDone()
extern "C" void MyAds_OnLoadDone_m129 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MyAds::LoadImage()
extern "C" void MyAds_LoadImage_m130 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MyAds::LoadImage(System.String,System.Int32)
extern "C" Object_t * MyAds_LoadImage_m131 (Object_t * __this /* static, unused */, String_t* ___imageUrl, int32_t ____index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MyAds::OnLoadFailed()
extern "C" void MyAds_OnLoadFailed_m132 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
