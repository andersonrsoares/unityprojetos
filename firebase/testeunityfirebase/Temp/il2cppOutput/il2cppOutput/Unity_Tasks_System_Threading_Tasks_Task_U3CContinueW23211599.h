#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Action`1<System.Threading.Tasks.Task>
struct Action_1_t1645035489;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.Task/<ContinueWith>c__AnonStorey2
struct  U3CContinueWithU3Ec__AnonStorey2_t23211599  : public Il2CppObject
{
public:
	// System.Action`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task/<ContinueWith>c__AnonStorey2::continuation
	Action_1_t1645035489 * ___continuation_0;

public:
	inline static int32_t get_offset_of_continuation_0() { return static_cast<int32_t>(offsetof(U3CContinueWithU3Ec__AnonStorey2_t23211599, ___continuation_0)); }
	inline Action_1_t1645035489 * get_continuation_0() const { return ___continuation_0; }
	inline Action_1_t1645035489 ** get_address_of_continuation_0() { return &___continuation_0; }
	inline void set_continuation_0(Action_1_t1645035489 * value)
	{
		___continuation_0 = value;
		Il2CppCodeGenWriteBarrier(&___continuation_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
