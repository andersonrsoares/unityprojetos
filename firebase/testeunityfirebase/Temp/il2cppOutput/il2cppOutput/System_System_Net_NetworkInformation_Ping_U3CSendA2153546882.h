#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Net.IPAddress
struct IPAddress_t1399971723;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Net.NetworkInformation.PingOptions
struct PingOptions_t1261881264;
// System.Net.NetworkInformation.Ping
struct Ping_t3611444498;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Ping/<SendAsync>c__AnonStorey6
struct  U3CSendAsyncU3Ec__AnonStorey6_t2153546882  : public Il2CppObject
{
public:
	// System.Net.IPAddress System.Net.NetworkInformation.Ping/<SendAsync>c__AnonStorey6::address
	IPAddress_t1399971723 * ___address_0;
	// System.Int32 System.Net.NetworkInformation.Ping/<SendAsync>c__AnonStorey6::timeout
	int32_t ___timeout_1;
	// System.Byte[] System.Net.NetworkInformation.Ping/<SendAsync>c__AnonStorey6::buffer
	ByteU5BU5D_t3397334013* ___buffer_2;
	// System.Net.NetworkInformation.PingOptions System.Net.NetworkInformation.Ping/<SendAsync>c__AnonStorey6::options
	PingOptions_t1261881264 * ___options_3;
	// System.Net.NetworkInformation.Ping System.Net.NetworkInformation.Ping/<SendAsync>c__AnonStorey6::<>f__this
	Ping_t3611444498 * ___U3CU3Ef__this_4;

public:
	inline static int32_t get_offset_of_address_0() { return static_cast<int32_t>(offsetof(U3CSendAsyncU3Ec__AnonStorey6_t2153546882, ___address_0)); }
	inline IPAddress_t1399971723 * get_address_0() const { return ___address_0; }
	inline IPAddress_t1399971723 ** get_address_of_address_0() { return &___address_0; }
	inline void set_address_0(IPAddress_t1399971723 * value)
	{
		___address_0 = value;
		Il2CppCodeGenWriteBarrier(&___address_0, value);
	}

	inline static int32_t get_offset_of_timeout_1() { return static_cast<int32_t>(offsetof(U3CSendAsyncU3Ec__AnonStorey6_t2153546882, ___timeout_1)); }
	inline int32_t get_timeout_1() const { return ___timeout_1; }
	inline int32_t* get_address_of_timeout_1() { return &___timeout_1; }
	inline void set_timeout_1(int32_t value)
	{
		___timeout_1 = value;
	}

	inline static int32_t get_offset_of_buffer_2() { return static_cast<int32_t>(offsetof(U3CSendAsyncU3Ec__AnonStorey6_t2153546882, ___buffer_2)); }
	inline ByteU5BU5D_t3397334013* get_buffer_2() const { return ___buffer_2; }
	inline ByteU5BU5D_t3397334013** get_address_of_buffer_2() { return &___buffer_2; }
	inline void set_buffer_2(ByteU5BU5D_t3397334013* value)
	{
		___buffer_2 = value;
		Il2CppCodeGenWriteBarrier(&___buffer_2, value);
	}

	inline static int32_t get_offset_of_options_3() { return static_cast<int32_t>(offsetof(U3CSendAsyncU3Ec__AnonStorey6_t2153546882, ___options_3)); }
	inline PingOptions_t1261881264 * get_options_3() const { return ___options_3; }
	inline PingOptions_t1261881264 ** get_address_of_options_3() { return &___options_3; }
	inline void set_options_3(PingOptions_t1261881264 * value)
	{
		___options_3 = value;
		Il2CppCodeGenWriteBarrier(&___options_3, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_4() { return static_cast<int32_t>(offsetof(U3CSendAsyncU3Ec__AnonStorey6_t2153546882, ___U3CU3Ef__this_4)); }
	inline Ping_t3611444498 * get_U3CU3Ef__this_4() const { return ___U3CU3Ef__this_4; }
	inline Ping_t3611444498 ** get_address_of_U3CU3Ef__this_4() { return &___U3CU3Ef__this_4; }
	inline void set_U3CU3Ef__this_4(Ping_t3611444498 * value)
	{
		___U3CU3Ef__this_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
