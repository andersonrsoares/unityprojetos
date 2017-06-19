#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_System_ComponentModel_AsyncCompletedEventArgs83270938.h"

// System.Net.NetworkInformation.PingReply
struct PingReply_t1978568794;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.PingCompletedEventArgs
struct  PingCompletedEventArgs_t841787612  : public AsyncCompletedEventArgs_t83270938
{
public:
	// System.Net.NetworkInformation.PingReply System.Net.NetworkInformation.PingCompletedEventArgs::reply
	PingReply_t1978568794 * ___reply_4;

public:
	inline static int32_t get_offset_of_reply_4() { return static_cast<int32_t>(offsetof(PingCompletedEventArgs_t841787612, ___reply_4)); }
	inline PingReply_t1978568794 * get_reply_4() const { return ___reply_4; }
	inline PingReply_t1978568794 ** get_address_of_reply_4() { return &___reply_4; }
	inline void set_reply_4(PingReply_t1978568794 * value)
	{
		___reply_4 = value;
		Il2CppCodeGenWriteBarrier(&___reply_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
