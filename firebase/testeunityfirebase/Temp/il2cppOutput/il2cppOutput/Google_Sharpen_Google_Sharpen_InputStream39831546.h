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

// Google.Sharpen.InputStream
struct  InputStream_t39831546  : public Il2CppObject
{
public:
	// System.Int64 Google.Sharpen.InputStream::mark
	int64_t ___mark_0;
	// System.IO.Stream Google.Sharpen.InputStream::Wrapped
	Stream_t3255436806 * ___Wrapped_1;

public:
	inline static int32_t get_offset_of_mark_0() { return static_cast<int32_t>(offsetof(InputStream_t39831546, ___mark_0)); }
	inline int64_t get_mark_0() const { return ___mark_0; }
	inline int64_t* get_address_of_mark_0() { return &___mark_0; }
	inline void set_mark_0(int64_t value)
	{
		___mark_0 = value;
	}

	inline static int32_t get_offset_of_Wrapped_1() { return static_cast<int32_t>(offsetof(InputStream_t39831546, ___Wrapped_1)); }
	inline Stream_t3255436806 * get_Wrapped_1() const { return ___Wrapped_1; }
	inline Stream_t3255436806 ** get_address_of_Wrapped_1() { return &___Wrapped_1; }
	inline void set_Wrapped_1(Stream_t3255436806 * value)
	{
		___Wrapped_1 = value;
		Il2CppCodeGenWriteBarrier(&___Wrapped_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
