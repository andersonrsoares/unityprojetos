#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Google.Sharpen.AtomicLong
struct AtomicLong_t1771203261;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Google.Sharpen.AtomicBoolean
struct  AtomicBoolean_t895648235  : public Il2CppObject
{
public:
	// Google.Sharpen.AtomicLong Google.Sharpen.AtomicBoolean::_actualValue
	AtomicLong_t1771203261 * ____actualValue_0;

public:
	inline static int32_t get_offset_of__actualValue_0() { return static_cast<int32_t>(offsetof(AtomicBoolean_t895648235, ____actualValue_0)); }
	inline AtomicLong_t1771203261 * get__actualValue_0() const { return ____actualValue_0; }
	inline AtomicLong_t1771203261 ** get_address_of__actualValue_0() { return &____actualValue_0; }
	inline void set__actualValue_0(AtomicLong_t1771203261 * value)
	{
		____actualValue_0 = value;
		Il2CppCodeGenWriteBarrier(&____actualValue_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
