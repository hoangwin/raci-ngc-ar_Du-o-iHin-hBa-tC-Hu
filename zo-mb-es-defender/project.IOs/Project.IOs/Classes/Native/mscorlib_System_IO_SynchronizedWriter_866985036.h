#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.TextWriter
struct TextWriter_t_588677525_0;

#include "mscorlib_System_IO_TextWriter_588677525.h"

// System.IO.SynchronizedWriter
struct  SynchronizedWriter_t_866985036_0  : public TextWriter_t_588677525_0
{
	// System.IO.TextWriter System.IO.SynchronizedWriter::writer
	TextWriter_t_588677525_0 * ___writer_2;
	// System.Boolean System.IO.SynchronizedWriter::neverClose
	bool ___neverClose_3;
};
