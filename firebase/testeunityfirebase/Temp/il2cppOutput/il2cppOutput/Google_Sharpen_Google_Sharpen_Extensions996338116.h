#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Text.UTF8Encoding
struct UTF8Encoding_t111055448;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Google.Sharpen.Extensions
struct  Extensions_t996338116  : public Il2CppObject
{
public:

public:
};

struct Extensions_t996338116_StaticFields
{
public:
	// System.Int64 Google.Sharpen.Extensions::EpochTicks
	int64_t ___EpochTicks_0;
	// System.Text.UTF8Encoding Google.Sharpen.Extensions::Utf8Encoder
	UTF8Encoding_t111055448 * ___Utf8Encoder_1;

public:
	inline static int32_t get_offset_of_EpochTicks_0() { return static_cast<int32_t>(offsetof(Extensions_t996338116_StaticFields, ___EpochTicks_0)); }
	inline int64_t get_EpochTicks_0() const { return ___EpochTicks_0; }
	inline int64_t* get_address_of_EpochTicks_0() { return &___EpochTicks_0; }
	inline void set_EpochTicks_0(int64_t value)
	{
		___EpochTicks_0 = value;
	}

	inline static int32_t get_offset_of_Utf8Encoder_1() { return static_cast<int32_t>(offsetof(Extensions_t996338116_StaticFields, ___Utf8Encoder_1)); }
	inline UTF8Encoding_t111055448 * get_Utf8Encoder_1() const { return ___Utf8Encoder_1; }
	inline UTF8Encoding_t111055448 ** get_address_of_Utf8Encoder_1() { return &___Utf8Encoder_1; }
	inline void set_Utf8Encoder_1(UTF8Encoding_t111055448 * value)
	{
		___Utf8Encoder_1 = value;
		Il2CppCodeGenWriteBarrier(&___Utf8Encoder_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
