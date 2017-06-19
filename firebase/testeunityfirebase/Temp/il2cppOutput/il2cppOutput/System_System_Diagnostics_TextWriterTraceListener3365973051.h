#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_System_Diagnostics_TraceListener3414949279.h"

// System.IO.TextWriter
struct TextWriter_t4027217640;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.TextWriterTraceListener
struct  TextWriterTraceListener_t3365973051  : public TraceListener_t3414949279
{
public:
	// System.IO.TextWriter System.Diagnostics.TextWriterTraceListener::writer
	TextWriter_t4027217640 * ___writer_7;

public:
	inline static int32_t get_offset_of_writer_7() { return static_cast<int32_t>(offsetof(TextWriterTraceListener_t3365973051, ___writer_7)); }
	inline TextWriter_t4027217640 * get_writer_7() const { return ___writer_7; }
	inline TextWriter_t4027217640 ** get_address_of_writer_7() { return &___writer_7; }
	inline void set_writer_7(TextWriter_t4027217640 * value)
	{
		___writer_7 = value;
		Il2CppCodeGenWriteBarrier(&___writer_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
