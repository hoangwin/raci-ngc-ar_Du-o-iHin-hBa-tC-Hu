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
// System.IO.TextReader
struct TextReader_t_29614003_0;
// System.Text.Encoding
struct Encoding_t_1491589107_0;

#include "mscorlib_System_Object_1786876978.h"

// System.Console
struct  Console_t712239006_0  : public Object_t
{
};
struct Console_t712239006_0_StaticFields{
	// System.IO.TextWriter System.Console::stdout
	TextWriter_t_588677525_0 * ___stdout_0;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_t_588677525_0 * ___stderr_1;
	// System.IO.TextReader System.Console::stdin
	TextReader_t_29614003_0 * ___stdin_2;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_t_1491589107_0 * ___inputEncoding_3;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_t_1491589107_0 * ___outputEncoding_4;
};
