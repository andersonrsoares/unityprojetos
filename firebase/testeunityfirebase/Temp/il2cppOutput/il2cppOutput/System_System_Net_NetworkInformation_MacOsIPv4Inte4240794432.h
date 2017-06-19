#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_System_Net_NetworkInformation_IPv4Interface3946458365.h"

// System.Net.NetworkInformation.MacOsNetworkInterface
struct MacOsNetworkInterface_t1454185290;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MacOsIPv4InterfaceStatistics
struct  MacOsIPv4InterfaceStatistics_t4240794432  : public IPv4InterfaceStatistics_t3946458365
{
public:
	// System.Net.NetworkInformation.MacOsNetworkInterface System.Net.NetworkInformation.MacOsIPv4InterfaceStatistics::macos
	MacOsNetworkInterface_t1454185290 * ___macos_0;

public:
	inline static int32_t get_offset_of_macos_0() { return static_cast<int32_t>(offsetof(MacOsIPv4InterfaceStatistics_t4240794432, ___macos_0)); }
	inline MacOsNetworkInterface_t1454185290 * get_macos_0() const { return ___macos_0; }
	inline MacOsNetworkInterface_t1454185290 ** get_address_of_macos_0() { return &___macos_0; }
	inline void set_macos_0(MacOsNetworkInterface_t1454185290 * value)
	{
		___macos_0 = value;
		Il2CppCodeGenWriteBarrier(&___macos_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
