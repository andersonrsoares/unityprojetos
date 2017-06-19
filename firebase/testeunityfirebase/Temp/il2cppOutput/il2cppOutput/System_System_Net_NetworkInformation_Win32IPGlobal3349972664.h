#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_System_Net_NetworkInformation_IPGlobalStatis106289253.h"
#include "System_System_Net_NetworkInformation_Win32_MIB_IPS1777025181.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32IPGlobalStatistics
struct  Win32IPGlobalStatistics_t3349972664  : public IPGlobalStatistics_t106289253
{
public:
	// System.Net.NetworkInformation.Win32_MIB_IPSTATS System.Net.NetworkInformation.Win32IPGlobalStatistics::info
	Win32_MIB_IPSTATS_t1777025181  ___info_0;

public:
	inline static int32_t get_offset_of_info_0() { return static_cast<int32_t>(offsetof(Win32IPGlobalStatistics_t3349972664, ___info_0)); }
	inline Win32_MIB_IPSTATS_t1777025181  get_info_0() const { return ___info_0; }
	inline Win32_MIB_IPSTATS_t1777025181 * get_address_of_info_0() { return &___info_0; }
	inline void set_info_0(Win32_MIB_IPSTATS_t1777025181  value)
	{
		___info_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
