#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_System_ComponentModel_AsyncCompletedEventArgs83270938.h"

// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.DownloadDataCompletedEventArgs
struct  DownloadDataCompletedEventArgs_t2512484440  : public AsyncCompletedEventArgs_t83270938
{
public:
	// System.Byte[] System.Net.DownloadDataCompletedEventArgs::result
	ByteU5BU5D_t3397334013* ___result_4;

public:
	inline static int32_t get_offset_of_result_4() { return static_cast<int32_t>(offsetof(DownloadDataCompletedEventArgs_t2512484440, ___result_4)); }
	inline ByteU5BU5D_t3397334013* get_result_4() const { return ___result_4; }
	inline ByteU5BU5D_t3397334013** get_address_of_result_4() { return &___result_4; }
	inline void set_result_4(ByteU5BU5D_t3397334013* value)
	{
		___result_4 = value;
		Il2CppCodeGenWriteBarrier(&___result_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
