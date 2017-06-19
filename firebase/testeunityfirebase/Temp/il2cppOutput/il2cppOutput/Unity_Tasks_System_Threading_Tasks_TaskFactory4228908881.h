#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "Unity_Tasks_System_Threading_CancellationToken1851405782.h"

// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3932792796;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.TaskFactory
struct  TaskFactory_t4228908881  : public Il2CppObject
{
public:
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskFactory::scheduler
	TaskScheduler_t3932792796 * ___scheduler_0;
	// System.Threading.CancellationToken System.Threading.Tasks.TaskFactory::cancellationToken
	CancellationToken_t1851405782  ___cancellationToken_1;

public:
	inline static int32_t get_offset_of_scheduler_0() { return static_cast<int32_t>(offsetof(TaskFactory_t4228908881, ___scheduler_0)); }
	inline TaskScheduler_t3932792796 * get_scheduler_0() const { return ___scheduler_0; }
	inline TaskScheduler_t3932792796 ** get_address_of_scheduler_0() { return &___scheduler_0; }
	inline void set_scheduler_0(TaskScheduler_t3932792796 * value)
	{
		___scheduler_0 = value;
		Il2CppCodeGenWriteBarrier(&___scheduler_0, value);
	}

	inline static int32_t get_offset_of_cancellationToken_1() { return static_cast<int32_t>(offsetof(TaskFactory_t4228908881, ___cancellationToken_1)); }
	inline CancellationToken_t1851405782  get_cancellationToken_1() const { return ___cancellationToken_1; }
	inline CancellationToken_t1851405782 * get_address_of_cancellationToken_1() { return &___cancellationToken_1; }
	inline void set_cancellationToken_1(CancellationToken_t1851405782  value)
	{
		___cancellationToken_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
