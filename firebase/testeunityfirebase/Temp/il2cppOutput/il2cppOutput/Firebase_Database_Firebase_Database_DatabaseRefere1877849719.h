#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.DataSnapshot>
struct TaskCompletionSource_1_t170329430;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.DatabaseReference/<RunTransaction>c__AnonStorey0
struct  U3CRunTransactionU3Ec__AnonStorey0_t1877849719  : public Il2CppObject
{
public:
	// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.DataSnapshot> Firebase.Database.DatabaseReference/<RunTransaction>c__AnonStorey0::completionSource
	TaskCompletionSource_1_t170329430 * ___completionSource_0;

public:
	inline static int32_t get_offset_of_completionSource_0() { return static_cast<int32_t>(offsetof(U3CRunTransactionU3Ec__AnonStorey0_t1877849719, ___completionSource_0)); }
	inline TaskCompletionSource_1_t170329430 * get_completionSource_0() const { return ___completionSource_0; }
	inline TaskCompletionSource_1_t170329430 ** get_address_of_completionSource_0() { return &___completionSource_0; }
	inline void set_completionSource_0(TaskCompletionSource_1_t170329430 * value)
	{
		___completionSource_0 = value;
		Il2CppCodeGenWriteBarrier(&___completionSource_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
