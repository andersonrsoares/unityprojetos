#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1809478302;
// Firebase.Database.DatabaseReference/CompletionListener
struct CompletionListener_t93014473;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Utilities.Pair`2<System.Threading.Tasks.Task`1<System.Object>,Firebase.Database.DatabaseReference/CompletionListener>
struct  Pair_2_t2408862168  : public Il2CppObject
{
public:
	// T Firebase.Database.Internal.Utilities.Pair`2::_first
	Task_1_t1809478302 * ____first_0;
	// TU Firebase.Database.Internal.Utilities.Pair`2::_second
	CompletionListener_t93014473 * ____second_1;

public:
	inline static int32_t get_offset_of__first_0() { return static_cast<int32_t>(offsetof(Pair_2_t2408862168, ____first_0)); }
	inline Task_1_t1809478302 * get__first_0() const { return ____first_0; }
	inline Task_1_t1809478302 ** get_address_of__first_0() { return &____first_0; }
	inline void set__first_0(Task_1_t1809478302 * value)
	{
		____first_0 = value;
		Il2CppCodeGenWriteBarrier(&____first_0, value);
	}

	inline static int32_t get_offset_of__second_1() { return static_cast<int32_t>(offsetof(Pair_2_t2408862168, ____second_1)); }
	inline CompletionListener_t93014473 * get__second_1() const { return ____second_1; }
	inline CompletionListener_t93014473 ** get_address_of__second_1() { return &____second_1; }
	inline void set__second_1(CompletionListener_t93014473 * value)
	{
		____second_1 = value;
		Il2CppCodeGenWriteBarrier(&____second_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
