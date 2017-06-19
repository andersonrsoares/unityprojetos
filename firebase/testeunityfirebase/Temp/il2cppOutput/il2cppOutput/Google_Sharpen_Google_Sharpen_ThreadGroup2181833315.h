#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.List`1<Google.Sharpen.Thread>
struct List_1_t691498718;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Google.Sharpen.ThreadGroup
struct  ThreadGroup_t2181833315  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<Google.Sharpen.Thread> Google.Sharpen.ThreadGroup::threads
	List_1_t691498718 * ___threads_0;

public:
	inline static int32_t get_offset_of_threads_0() { return static_cast<int32_t>(offsetof(ThreadGroup_t2181833315, ___threads_0)); }
	inline List_1_t691498718 * get_threads_0() const { return ___threads_0; }
	inline List_1_t691498718 ** get_address_of_threads_0() { return &___threads_0; }
	inline void set_threads_0(List_1_t691498718 * value)
	{
		___threads_0 = value;
		Il2CppCodeGenWriteBarrier(&___threads_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
