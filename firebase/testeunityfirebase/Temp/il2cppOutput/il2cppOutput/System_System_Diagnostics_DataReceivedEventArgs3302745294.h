#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_EventArgs3289624707.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.DataReceivedEventArgs
struct  DataReceivedEventArgs_t3302745294  : public EventArgs_t3289624707
{
public:
	// System.String System.Diagnostics.DataReceivedEventArgs::data
	String_t* ___data_1;

public:
	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(DataReceivedEventArgs_t3302745294, ___data_1)); }
	inline String_t* get_data_1() const { return ___data_1; }
	inline String_t** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(String_t* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier(&___data_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
