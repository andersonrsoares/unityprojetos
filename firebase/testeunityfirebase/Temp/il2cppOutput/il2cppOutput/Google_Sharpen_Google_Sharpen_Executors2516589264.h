#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Google.Sharpen.ThreadFactory
struct ThreadFactory_t1392637388;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Google.Sharpen.Executors
struct  Executors_t2516589264  : public Il2CppObject
{
public:

public:
};

struct Executors_t2516589264_StaticFields
{
public:
	// Google.Sharpen.ThreadFactory Google.Sharpen.Executors::defaultThreadFactory
	ThreadFactory_t1392637388 * ___defaultThreadFactory_0;

public:
	inline static int32_t get_offset_of_defaultThreadFactory_0() { return static_cast<int32_t>(offsetof(Executors_t2516589264_StaticFields, ___defaultThreadFactory_0)); }
	inline ThreadFactory_t1392637388 * get_defaultThreadFactory_0() const { return ___defaultThreadFactory_0; }
	inline ThreadFactory_t1392637388 ** get_address_of_defaultThreadFactory_0() { return &___defaultThreadFactory_0; }
	inline void set_defaultThreadFactory_0(ThreadFactory_t1392637388 * value)
	{
		___defaultThreadFactory_0 = value;
		Il2CppCodeGenWriteBarrier(&___defaultThreadFactory_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
