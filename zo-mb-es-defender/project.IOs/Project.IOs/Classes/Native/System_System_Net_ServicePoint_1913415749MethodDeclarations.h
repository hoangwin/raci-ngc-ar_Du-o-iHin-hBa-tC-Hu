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

// System.Net.ServicePoint
struct ServicePoint_t_1913415749_0;
// System.Uri
struct Uri_t407561573_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime_1242318096.h"

// System.Void System.Net.ServicePoint::.ctor(System.Uri,System.Int32,System.Int32)
extern "C"  void ServicePoint__ctor_m_32104218_0 (ServicePoint_t_1913415749_0 * __this, Uri_t407561573_0 * ___uri, int32_t ___connectionLimit, int32_t ___maxIdleTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.ServicePoint::get_Address()
extern "C"  Uri_t407561573_0 * ServicePoint_get_Address_m578153126_0 (ServicePoint_t_1913415749_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ServicePoint::get_CurrentConnections()
extern "C"  int32_t ServicePoint_get_CurrentConnections_m_1689329828_0 (ServicePoint_t_1913415749_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Net.ServicePoint::get_IdleSince()
extern "C"  DateTime_t_1242318096_0  ServicePoint_get_IdleSince_m1157936783_0 (ServicePoint_t_1913415749_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_IdleSince(System.DateTime)
extern "C"  void ServicePoint_set_IdleSince_m797014038_0 (ServicePoint_t_1913415749_0 * __this, DateTime_t_1242318096_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_Expect100Continue(System.Boolean)
extern "C"  void ServicePoint_set_Expect100Continue_m426209852_0 (ServicePoint_t_1913415749_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_UseNagleAlgorithm(System.Boolean)
extern "C"  void ServicePoint_set_UseNagleAlgorithm_m_1676955832_0 (ServicePoint_t_1913415749_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_SendContinue(System.Boolean)
extern "C"  void ServicePoint_set_SendContinue_m_2024093680_0 (ServicePoint_t_1913415749_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_UsesProxy(System.Boolean)
extern "C"  void ServicePoint_set_UsesProxy_m654127651_0 (ServicePoint_t_1913415749_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_UseConnect(System.Boolean)
extern "C"  void ServicePoint_set_UseConnect_m_1203216304_0 (ServicePoint_t_1913415749_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_AvailableForRecycling()
extern "C"  bool ServicePoint_get_AvailableForRecycling_m1105513096_0 (ServicePoint_t_1913415749_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
