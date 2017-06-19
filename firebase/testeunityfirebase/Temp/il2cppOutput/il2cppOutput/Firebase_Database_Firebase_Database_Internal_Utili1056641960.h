#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Google.Sharpen.ScheduledThreadPoolExecutor
struct ScheduledThreadPoolExecutor_t2537379786;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Utilities.DefaultRunLoop
struct  DefaultRunLoop_t1056641960  : public Il2CppObject
{
public:
	// Google.Sharpen.ScheduledThreadPoolExecutor Firebase.Database.Internal.Utilities.DefaultRunLoop::_executor
	ScheduledThreadPoolExecutor_t2537379786 * ____executor_0;

public:
	inline static int32_t get_offset_of__executor_0() { return static_cast<int32_t>(offsetof(DefaultRunLoop_t1056641960, ____executor_0)); }
	inline ScheduledThreadPoolExecutor_t2537379786 * get__executor_0() const { return ____executor_0; }
	inline ScheduledThreadPoolExecutor_t2537379786 ** get_address_of__executor_0() { return &____executor_0; }
	inline void set__executor_0(ScheduledThreadPoolExecutor_t2537379786 * value)
	{
		____executor_0 = value;
		Il2CppCodeGenWriteBarrier(&____executor_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
