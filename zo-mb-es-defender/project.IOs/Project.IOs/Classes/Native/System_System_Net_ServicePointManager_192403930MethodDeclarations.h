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

// System.Net.ICertificatePolicy
struct ICertificatePolicy_t_1168853292_0;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t2085908125_0;
// System.Net.ServicePoint
struct ServicePoint_t_1913415749_0;
// System.Uri
struct Uri_t407561573_0;
// System.Net.IWebProxy
struct IWebProxy_t837034055_0;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_SecurityProtocolType_711978622.h"

// System.Void System.Net.ServicePointManager::.cctor()
extern "C"  void ServicePointManager__cctor_m_2078671923_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICertificatePolicy System.Net.ServicePointManager::get_CertificatePolicy()
extern "C"  Object_t * ServicePointManager_get_CertificatePolicy_m481780303_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePointManager::get_CheckCertificateRevocationList()
extern "C"  bool ServicePointManager_get_CheckCertificateRevocationList_m_285557066_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.SecurityProtocolType System.Net.ServicePointManager::get_SecurityProtocol()
extern "C"  int32_t ServicePointManager_get_SecurityProtocol_m1445189298_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Security.RemoteCertificateValidationCallback System.Net.ServicePointManager::get_ServerCertificateValidationCallback()
extern "C"  RemoteCertificateValidationCallback_t2085908125_0 * ServicePointManager_get_ServerCertificateValidationCallback_m1419353403_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.ServicePointManager::FindServicePoint(System.Uri,System.Net.IWebProxy)
extern "C"  ServicePoint_t_1913415749_0 * ServicePointManager_FindServicePoint_m_1157611128_0 (Object_t * __this /* static, unused */, Uri_t407561573_0 * ___address, Object_t * ___proxy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePointManager::RecycleServicePoints()
extern "C"  void ServicePointManager_RecycleServicePoints_m_1522348513_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
