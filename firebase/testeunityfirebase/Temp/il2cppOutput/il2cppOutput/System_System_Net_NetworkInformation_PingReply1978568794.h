#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "System_System_Net_NetworkInformation_IPStatus1105460603.h"

// System.Net.IPAddress
struct IPAddress_t1399971723;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Net.NetworkInformation.PingOptions
struct PingOptions_t1261881264;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.PingReply
struct  PingReply_t1978568794  : public Il2CppObject
{
public:
	// System.Net.IPAddress System.Net.NetworkInformation.PingReply::address
	IPAddress_t1399971723 * ___address_0;
	// System.Byte[] System.Net.NetworkInformation.PingReply::buffer
	ByteU5BU5D_t3397334013* ___buffer_1;
	// System.Net.NetworkInformation.PingOptions System.Net.NetworkInformation.PingReply::options
	PingOptions_t1261881264 * ___options_2;
	// System.Int64 System.Net.NetworkInformation.PingReply::rtt
	int64_t ___rtt_3;
	// System.Net.NetworkInformation.IPStatus System.Net.NetworkInformation.PingReply::status
	int32_t ___status_4;

public:
	inline static int32_t get_offset_of_address_0() { return static_cast<int32_t>(offsetof(PingReply_t1978568794, ___address_0)); }
	inline IPAddress_t1399971723 * get_address_0() const { return ___address_0; }
	inline IPAddress_t1399971723 ** get_address_of_address_0() { return &___address_0; }
	inline void set_address_0(IPAddress_t1399971723 * value)
	{
		___address_0 = value;
		Il2CppCodeGenWriteBarrier(&___address_0, value);
	}

	inline static int32_t get_offset_of_buffer_1() { return static_cast<int32_t>(offsetof(PingReply_t1978568794, ___buffer_1)); }
	inline ByteU5BU5D_t3397334013* get_buffer_1() const { return ___buffer_1; }
	inline ByteU5BU5D_t3397334013** get_address_of_buffer_1() { return &___buffer_1; }
	inline void set_buffer_1(ByteU5BU5D_t3397334013* value)
	{
		___buffer_1 = value;
		Il2CppCodeGenWriteBarrier(&___buffer_1, value);
	}

	inline static int32_t get_offset_of_options_2() { return static_cast<int32_t>(offsetof(PingReply_t1978568794, ___options_2)); }
	inline PingOptions_t1261881264 * get_options_2() const { return ___options_2; }
	inline PingOptions_t1261881264 ** get_address_of_options_2() { return &___options_2; }
	inline void set_options_2(PingOptions_t1261881264 * value)
	{
		___options_2 = value;
		Il2CppCodeGenWriteBarrier(&___options_2, value);
	}

	inline static int32_t get_offset_of_rtt_3() { return static_cast<int32_t>(offsetof(PingReply_t1978568794, ___rtt_3)); }
	inline int64_t get_rtt_3() const { return ___rtt_3; }
	inline int64_t* get_address_of_rtt_3() { return &___rtt_3; }
	inline void set_rtt_3(int64_t value)
	{
		___rtt_3 = value;
	}

	inline static int32_t get_offset_of_status_4() { return static_cast<int32_t>(offsetof(PingReply_t1978568794, ___status_4)); }
	inline int32_t get_status_4() const { return ___status_4; }
	inline int32_t* get_address_of_status_4() { return &___status_4; }
	inline void set_status_4(int32_t value)
	{
		___status_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
