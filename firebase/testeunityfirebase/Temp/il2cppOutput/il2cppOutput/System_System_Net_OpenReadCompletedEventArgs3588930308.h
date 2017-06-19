#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_System_ComponentModel_AsyncCompletedEventArgs83270938.h"

// System.IO.Stream
struct Stream_t3255436806;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.OpenReadCompletedEventArgs
struct  OpenReadCompletedEventArgs_t3588930308  : public AsyncCompletedEventArgs_t83270938
{
public:
	// System.IO.Stream System.Net.OpenReadCompletedEventArgs::result
	Stream_t3255436806 * ___result_4;

public:
	inline static int32_t get_offset_of_result_4() { return static_cast<int32_t>(offsetof(OpenReadCompletedEventArgs_t3588930308, ___result_4)); }
	inline Stream_t3255436806 * get_result_4() const { return ___result_4; }
	inline Stream_t3255436806 ** get_address_of_result_4() { return &___result_4; }
	inline void set_result_4(Stream_t3255436806 * value)
	{
		___result_4 = value;
		Il2CppCodeGenWriteBarrier(&___result_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
