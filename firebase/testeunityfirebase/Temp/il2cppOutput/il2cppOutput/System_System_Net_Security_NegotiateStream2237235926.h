#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_System_Net_Security_AuthenticatedStream1183414097.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.NegotiateStream
struct  NegotiateStream_t2237235926  : public AuthenticatedStream_t1183414097
{
public:
	// System.Int32 System.Net.Security.NegotiateStream::readTimeout
	int32_t ___readTimeout_4;
	// System.Int32 System.Net.Security.NegotiateStream::writeTimeout
	int32_t ___writeTimeout_5;

public:
	inline static int32_t get_offset_of_readTimeout_4() { return static_cast<int32_t>(offsetof(NegotiateStream_t2237235926, ___readTimeout_4)); }
	inline int32_t get_readTimeout_4() const { return ___readTimeout_4; }
	inline int32_t* get_address_of_readTimeout_4() { return &___readTimeout_4; }
	inline void set_readTimeout_4(int32_t value)
	{
		___readTimeout_4 = value;
	}

	inline static int32_t get_offset_of_writeTimeout_5() { return static_cast<int32_t>(offsetof(NegotiateStream_t2237235926, ___writeTimeout_5)); }
	inline int32_t get_writeTimeout_5() const { return ___writeTimeout_5; }
	inline int32_t* get_address_of_writeTimeout_5() { return &___writeTimeout_5; }
	inline void set_writeTimeout_5(int32_t value)
	{
		___writeTimeout_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
