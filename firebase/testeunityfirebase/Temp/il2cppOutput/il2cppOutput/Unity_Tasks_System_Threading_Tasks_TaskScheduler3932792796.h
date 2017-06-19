#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Threading.SynchronizationContext
struct SynchronizationContext_t3857790437;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.TaskScheduler
struct  TaskScheduler_t3932792796  : public Il2CppObject
{
public:
	// System.Threading.SynchronizationContext System.Threading.Tasks.TaskScheduler::context
	SynchronizationContext_t3857790437 * ___context_1;

public:
	inline static int32_t get_offset_of_context_1() { return static_cast<int32_t>(offsetof(TaskScheduler_t3932792796, ___context_1)); }
	inline SynchronizationContext_t3857790437 * get_context_1() const { return ___context_1; }
	inline SynchronizationContext_t3857790437 ** get_address_of_context_1() { return &___context_1; }
	inline void set_context_1(SynchronizationContext_t3857790437 * value)
	{
		___context_1 = value;
		Il2CppCodeGenWriteBarrier(&___context_1, value);
	}
};

struct TaskScheduler_t3932792796_StaticFields
{
public:
	// System.Threading.SynchronizationContext System.Threading.Tasks.TaskScheduler::defaultContext
	SynchronizationContext_t3857790437 * ___defaultContext_0;

public:
	inline static int32_t get_offset_of_defaultContext_0() { return static_cast<int32_t>(offsetof(TaskScheduler_t3932792796_StaticFields, ___defaultContext_0)); }
	inline SynchronizationContext_t3857790437 * get_defaultContext_0() const { return ___defaultContext_0; }
	inline SynchronizationContext_t3857790437 ** get_address_of_defaultContext_0() { return &___defaultContext_0; }
	inline void set_defaultContext_0(SynchronizationContext_t3857790437 * value)
	{
		___defaultContext_0 = value;
		Il2CppCodeGenWriteBarrier(&___defaultContext_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
