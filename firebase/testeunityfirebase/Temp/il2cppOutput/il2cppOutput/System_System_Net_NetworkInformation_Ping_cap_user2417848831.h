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

// System.Net.NetworkInformation.Ping/cap_user_data_t
struct  cap_user_data_t_t2417848831 
{
public:
	// System.UInt32 System.Net.NetworkInformation.Ping/cap_user_data_t::effective
	uint32_t ___effective_0;
	// System.UInt32 System.Net.NetworkInformation.Ping/cap_user_data_t::permitted
	uint32_t ___permitted_1;
	// System.UInt32 System.Net.NetworkInformation.Ping/cap_user_data_t::inheritable
	uint32_t ___inheritable_2;

public:
	inline static int32_t get_offset_of_effective_0() { return static_cast<int32_t>(offsetof(cap_user_data_t_t2417848831, ___effective_0)); }
	inline uint32_t get_effective_0() const { return ___effective_0; }
	inline uint32_t* get_address_of_effective_0() { return &___effective_0; }
	inline void set_effective_0(uint32_t value)
	{
		___effective_0 = value;
	}

	inline static int32_t get_offset_of_permitted_1() { return static_cast<int32_t>(offsetof(cap_user_data_t_t2417848831, ___permitted_1)); }
	inline uint32_t get_permitted_1() const { return ___permitted_1; }
	inline uint32_t* get_address_of_permitted_1() { return &___permitted_1; }
	inline void set_permitted_1(uint32_t value)
	{
		___permitted_1 = value;
	}

	inline static int32_t get_offset_of_inheritable_2() { return static_cast<int32_t>(offsetof(cap_user_data_t_t2417848831, ___inheritable_2)); }
	inline uint32_t get_inheritable_2() const { return ___inheritable_2; }
	inline uint32_t* get_address_of_inheritable_2() { return &___inheritable_2; }
	inline void set_inheritable_2(uint32_t value)
	{
		___inheritable_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
