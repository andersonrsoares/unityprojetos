#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.IO.Stream
struct Stream_t3255436806;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Google.Sharpen.OutputStream
struct  OutputStream_t3965982961  : public Il2CppObject
{
public:
	// System.IO.Stream Google.Sharpen.OutputStream::Wrapped
	Stream_t3255436806 * ___Wrapped_0;

public:
	inline static int32_t get_offset_of_Wrapped_0() { return static_cast<int32_t>(offsetof(OutputStream_t3965982961, ___Wrapped_0)); }
	inline Stream_t3255436806 * get_Wrapped_0() const { return ___Wrapped_0; }
	inline Stream_t3255436806 ** get_address_of_Wrapped_0() { return &___Wrapped_0; }
	inline void set_Wrapped_0(Stream_t3255436806 * value)
	{
		___Wrapped_0 = value;
		Il2CppCodeGenWriteBarrier(&___Wrapped_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
