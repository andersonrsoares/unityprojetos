#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.PingOptions
struct  PingOptions_t1261881264  : public Il2CppObject
{
public:
	// System.Int32 System.Net.NetworkInformation.PingOptions::ttl
	int32_t ___ttl_0;
	// System.Boolean System.Net.NetworkInformation.PingOptions::dont_fragment
	bool ___dont_fragment_1;

public:
	inline static int32_t get_offset_of_ttl_0() { return static_cast<int32_t>(offsetof(PingOptions_t1261881264, ___ttl_0)); }
	inline int32_t get_ttl_0() const { return ___ttl_0; }
	inline int32_t* get_address_of_ttl_0() { return &___ttl_0; }
	inline void set_ttl_0(int32_t value)
	{
		___ttl_0 = value;
	}

	inline static int32_t get_offset_of_dont_fragment_1() { return static_cast<int32_t>(offsetof(PingOptions_t1261881264, ___dont_fragment_1)); }
	inline bool get_dont_fragment_1() const { return ___dont_fragment_1; }
	inline bool* get_address_of_dont_fragment_1() { return &___dont_fragment_1; }
	inline void set_dont_fragment_1(bool value)
	{
		___dont_fragment_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
