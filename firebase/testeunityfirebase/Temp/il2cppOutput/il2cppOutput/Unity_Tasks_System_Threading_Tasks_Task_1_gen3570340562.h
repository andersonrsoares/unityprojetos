﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Unity_Tasks_System_Threading_Tasks_Task1843236107.h"

// Firebase.Auth.FetchProvidersResult
struct FetchProvidersResult_t155344259;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.Task`1<Firebase.Auth.FetchProvidersResult>
struct  Task_1_t3570340562  : public Task_t1843236107
{
public:
	// T System.Threading.Tasks.Task`1::result
	FetchProvidersResult_t155344259 * ___result_7;

public:
	inline static int32_t get_offset_of_result_7() { return static_cast<int32_t>(offsetof(Task_1_t3570340562, ___result_7)); }
	inline FetchProvidersResult_t155344259 * get_result_7() const { return ___result_7; }
	inline FetchProvidersResult_t155344259 ** get_address_of_result_7() { return &___result_7; }
	inline void set_result_7(FetchProvidersResult_t155344259 * value)
	{
		___result_7 = value;
		Il2CppCodeGenWriteBarrier(&___result_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif