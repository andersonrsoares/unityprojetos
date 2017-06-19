#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Ping/cap_user_header_t
struct  cap_user_header_t_t1012002510 
{
public:
	// System.UInt32 System.Net.NetworkInformation.Ping/cap_user_header_t::version
	uint32_t ___version_0;
	// System.Int32 System.Net.NetworkInformation.Ping/cap_user_header_t::pid
	int32_t ___pid_1;

public:
	inline static int32_t get_offset_of_version_0() { return static_cast<int32_t>(offsetof(cap_user_header_t_t1012002510, ___version_0)); }
	inline uint32_t get_version_0() const { return ___version_0; }
	inline uint32_t* get_address_of_version_0() { return &___version_0; }
	inline void set_version_0(uint32_t value)
	{
		___version_0 = value;
	}

	inline static int32_t get_offset_of_pid_1() { return static_cast<int32_t>(offsetof(cap_user_header_t_t1012002510, ___pid_1)); }
	inline int32_t get_pid_1() const { return ___pid_1; }
	inline int32_t* get_address_of_pid_1() { return &___pid_1; }
	inline void set_pid_1(int32_t value)
	{
		___pid_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
