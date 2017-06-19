#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_System_Net_NetworkInformation_UdpStatistics3170871206.h"
#include "System_System_Net_NetworkInformation_Win32_MIB_UDP4063826601.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32UdpStatistics
struct  Win32UdpStatistics_t477239559  : public UdpStatistics_t3170871206
{
public:
	// System.Net.NetworkInformation.Win32_MIB_UDPSTATS System.Net.NetworkInformation.Win32UdpStatistics::info
	Win32_MIB_UDPSTATS_t4063826601  ___info_0;

public:
	inline static int32_t get_offset_of_info_0() { return static_cast<int32_t>(offsetof(Win32UdpStatistics_t477239559, ___info_0)); }
	inline Win32_MIB_UDPSTATS_t4063826601  get_info_0() const { return ___info_0; }
	inline Win32_MIB_UDPSTATS_t4063826601 * get_address_of_info_0() { return &___info_0; }
	inline void set_info_0(Win32_MIB_UDPSTATS_t4063826601  value)
	{
		___info_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
