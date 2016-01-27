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

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t_1235050873_0;
// System.Net.WebRequest
struct WebRequest_t_178770957_0;
// System.Uri
struct Uri_t407561573_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.HttpRequestCreator::.ctor()
extern "C"  void HttpRequestCreator__ctor_m_1781051275_0 (HttpRequestCreator_t_1235050873_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern "C"  WebRequest_t_178770957_0 * HttpRequestCreator_Create_m_687457686_0 (HttpRequestCreator_t_1235050873_0 * __this, Uri_t407561573_0 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
