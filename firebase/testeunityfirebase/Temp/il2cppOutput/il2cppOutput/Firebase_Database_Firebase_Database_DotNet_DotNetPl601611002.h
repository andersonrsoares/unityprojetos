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
// Google.Sharpen.ThreadPoolExecutor
struct ThreadPoolExecutor_t376308723;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.DotNet.DotNetPlatform/SynchronizationContextTarget
struct  SynchronizationContextTarget_t601611002  : public Il2CppObject
{
public:
	// System.Threading.SynchronizationContext Firebase.Database.DotNet.DotNetPlatform/SynchronizationContextTarget::_context
	SynchronizationContext_t3857790437 * ____context_0;
	// Google.Sharpen.ThreadPoolExecutor Firebase.Database.DotNet.DotNetPlatform/SynchronizationContextTarget::_executor
	ThreadPoolExecutor_t376308723 * ____executor_1;

public:
	inline static int32_t get_offset_of__context_0() { return static_cast<int32_t>(offsetof(SynchronizationContextTarget_t601611002, ____context_0)); }
	inline SynchronizationContext_t3857790437 * get__context_0() const { return ____context_0; }
	inline SynchronizationContext_t3857790437 ** get_address_of__context_0() { return &____context_0; }
	inline void set__context_0(SynchronizationContext_t3857790437 * value)
	{
		____context_0 = value;
		Il2CppCodeGenWriteBarrier(&____context_0, value);
	}

	inline static int32_t get_offset_of__executor_1() { return static_cast<int32_t>(offsetof(SynchronizationContextTarget_t601611002, ____executor_1)); }
	inline ThreadPoolExecutor_t376308723 * get__executor_1() const { return ____executor_1; }
	inline ThreadPoolExecutor_t376308723 ** get_address_of__executor_1() { return &____executor_1; }
	inline void set__executor_1(ThreadPoolExecutor_t376308723 * value)
	{
		____executor_1 = value;
		Il2CppCodeGenWriteBarrier(&____executor_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
