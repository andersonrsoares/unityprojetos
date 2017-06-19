#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Collections.Generic.IEnumerable`1<System.String>>
struct TaskCompletionSource_1_t1203781358;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Auth.FirebaseAuth/<FetchProvidersForEmailAsync>c__AnonStorey2
struct  U3CFetchProvidersForEmailAsyncU3Ec__AnonStorey2_t2012910777  : public Il2CppObject
{
public:
	// System.Threading.Tasks.TaskCompletionSource`1<System.Collections.Generic.IEnumerable`1<System.String>> Firebase.Auth.FirebaseAuth/<FetchProvidersForEmailAsync>c__AnonStorey2::taskCompletionSource
	TaskCompletionSource_1_t1203781358 * ___taskCompletionSource_0;

public:
	inline static int32_t get_offset_of_taskCompletionSource_0() { return static_cast<int32_t>(offsetof(U3CFetchProvidersForEmailAsyncU3Ec__AnonStorey2_t2012910777, ___taskCompletionSource_0)); }
	inline TaskCompletionSource_1_t1203781358 * get_taskCompletionSource_0() const { return ___taskCompletionSource_0; }
	inline TaskCompletionSource_1_t1203781358 ** get_address_of_taskCompletionSource_0() { return &___taskCompletionSource_0; }
	inline void set_taskCompletionSource_0(TaskCompletionSource_1_t1203781358 * value)
	{
		___taskCompletionSource_0 = value;
		Il2CppCodeGenWriteBarrier(&___taskCompletionSource_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
