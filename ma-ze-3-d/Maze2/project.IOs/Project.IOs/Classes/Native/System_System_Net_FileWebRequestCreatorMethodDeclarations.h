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

// System.Net.FileWebRequestCreator
struct FileWebRequestCreator_t897;
// System.Net.WebRequest
struct WebRequest_t893;
// System.Uri
struct Uri_t894;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.FileWebRequestCreator::.ctor()
extern "C" void FileWebRequestCreator__ctor_m4519 (FileWebRequestCreator_t897 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern "C" WebRequest_t893 * FileWebRequestCreator_Create_m4520 (FileWebRequestCreator_t897 * __this, Uri_t894 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
