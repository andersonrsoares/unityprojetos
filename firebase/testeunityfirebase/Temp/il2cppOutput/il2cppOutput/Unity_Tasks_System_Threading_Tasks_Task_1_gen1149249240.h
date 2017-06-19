#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Unity_Tasks_System_Threading_Tasks_Task1843236107.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.Task`1<System.String>
struct  Task_1_t1149249240  : public Task_t1843236107
{
public:
	// T System.Threading.Tasks.Task`1::result
	String_t* ___result_7;

public:
	inline static int32_t get_offset_of_result_7() { return static_cast<int32_t>(offsetof(Task_1_t1149249240, ___result_7)); }
	inline String_t* get_result_7() const { return ___result_7; }
	inline String_t** get_address_of_result_7() { return &___result_7; }
	inline void set_result_7(String_t* value)
	{
		___result_7 = value;
		Il2CppCodeGenWriteBarrier(&___result_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
