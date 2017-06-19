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

// System.Net.NetworkInformation.Win32_MIB_UDPSTATS
struct  Win32_MIB_UDPSTATS_t4063826601 
{
public:
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_UDPSTATS::InDatagrams
	uint32_t ___InDatagrams_0;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_UDPSTATS::NoPorts
	uint32_t ___NoPorts_1;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_UDPSTATS::InErrors
	uint32_t ___InErrors_2;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_UDPSTATS::OutDatagrams
	uint32_t ___OutDatagrams_3;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_UDPSTATS::NumAddrs
	int32_t ___NumAddrs_4;

public:
	inline static int32_t get_offset_of_InDatagrams_0() { return static_cast<int32_t>(offsetof(Win32_MIB_UDPSTATS_t4063826601, ___InDatagrams_0)); }
	inline uint32_t get_InDatagrams_0() const { return ___InDatagrams_0; }
	inline uint32_t* get_address_of_InDatagrams_0() { return &___InDatagrams_0; }
	inline void set_InDatagrams_0(uint32_t value)
	{
		___InDatagrams_0 = value;
	}

	inline static int32_t get_offset_of_NoPorts_1() { return static_cast<int32_t>(offsetof(Win32_MIB_UDPSTATS_t4063826601, ___NoPorts_1)); }
	inline uint32_t get_NoPorts_1() const { return ___NoPorts_1; }
	inline uint32_t* get_address_of_NoPorts_1() { return &___NoPorts_1; }
	inline void set_NoPorts_1(uint32_t value)
	{
		___NoPorts_1 = value;
	}

	inline static int32_t get_offset_of_InErrors_2() { return static_cast<int32_t>(offsetof(Win32_MIB_UDPSTATS_t4063826601, ___InErrors_2)); }
	inline uint32_t get_InErrors_2() const { return ___InErrors_2; }
	inline uint32_t* get_address_of_InErrors_2() { return &___InErrors_2; }
	inline void set_InErrors_2(uint32_t value)
	{
		___InErrors_2 = value;
	}

	inline static int32_t get_offset_of_OutDatagrams_3() { return static_cast<int32_t>(offsetof(Win32_MIB_UDPSTATS_t4063826601, ___OutDatagrams_3)); }
	inline uint32_t get_OutDatagrams_3() const { return ___OutDatagrams_3; }
	inline uint32_t* get_address_of_OutDatagrams_3() { return &___OutDatagrams_3; }
	inline void set_OutDatagrams_3(uint32_t value)
	{
		___OutDatagrams_3 = value;
	}

	inline static int32_t get_offset_of_NumAddrs_4() { return static_cast<int32_t>(offsetof(Win32_MIB_UDPSTATS_t4063826601, ___NumAddrs_4)); }
	inline int32_t get_NumAddrs_4() const { return ___NumAddrs_4; }
	inline int32_t* get_address_of_NumAddrs_4() { return &___NumAddrs_4; }
	inline void set_NumAddrs_4(int32_t value)
	{
		___NumAddrs_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
