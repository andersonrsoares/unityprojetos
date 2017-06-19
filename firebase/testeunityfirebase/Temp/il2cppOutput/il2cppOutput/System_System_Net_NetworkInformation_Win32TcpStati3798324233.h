#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_System_Net_NetworkInformation_TcpStatistics2119642186.h"
#include "System_System_Net_NetworkInformation_Win32_MIB_TCP1219941615.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32TcpStatistics
struct  Win32TcpStatistics_t3798324233  : public TcpStatistics_t2119642186
{
public:
	// System.Net.NetworkInformation.Win32_MIB_TCPSTATS System.Net.NetworkInformation.Win32TcpStatistics::info
	Win32_MIB_TCPSTATS_t1219941615  ___info_0;

public:
	inline static int32_t get_offset_of_info_0() { return static_cast<int32_t>(offsetof(Win32TcpStatistics_t3798324233, ___info_0)); }
	inline Win32_MIB_TCPSTATS_t1219941615  get_info_0() const { return ___info_0; }
	inline Win32_MIB_TCPSTATS_t1219941615 * get_address_of_info_0() { return &___info_0; }
	inline void set_info_0(Win32_MIB_TCPSTATS_t1219941615  value)
	{
		___info_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
