#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_System_ComponentModel_AsyncCompletedEventArgs83270938.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.DownloadStringCompletedEventArgs
struct  DownloadStringCompletedEventArgs_t661276395  : public AsyncCompletedEventArgs_t83270938
{
public:
	// System.String System.Net.DownloadStringCompletedEventArgs::result
	String_t* ___result_4;

public:
	inline static int32_t get_offset_of_result_4() { return static_cast<int32_t>(offsetof(DownloadStringCompletedEventArgs_t661276395, ___result_4)); }
	inline String_t* get_result_4() const { return ___result_4; }
	inline String_t** get_address_of_result_4() { return &___result_4; }
	inline void set_result_4(String_t* value)
	{
		___result_4 = value;
		Il2CppCodeGenWriteBarrier(&___result_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
