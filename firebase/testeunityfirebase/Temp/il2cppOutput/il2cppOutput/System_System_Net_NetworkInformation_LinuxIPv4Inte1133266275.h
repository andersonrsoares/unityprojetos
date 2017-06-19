#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_System_Net_NetworkInformation_IPv4Interface3946458365.h"

// System.Net.NetworkInformation.LinuxNetworkInterface
struct LinuxNetworkInterface_t3864470295;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.LinuxIPv4InterfaceStatistics
struct  LinuxIPv4InterfaceStatistics_t1133266275  : public IPv4InterfaceStatistics_t3946458365
{
public:
	// System.Net.NetworkInformation.LinuxNetworkInterface System.Net.NetworkInformation.LinuxIPv4InterfaceStatistics::linux
	LinuxNetworkInterface_t3864470295 * ___linux_0;

public:
	inline static int32_t get_offset_of_linux_0() { return static_cast<int32_t>(offsetof(LinuxIPv4InterfaceStatistics_t1133266275, ___linux_0)); }
	inline LinuxNetworkInterface_t3864470295 * get_linux_0() const { return ___linux_0; }
	inline LinuxNetworkInterface_t3864470295 ** get_address_of_linux_0() { return &___linux_0; }
	inline void set_linux_0(LinuxNetworkInterface_t3864470295 * value)
	{
		___linux_0 = value;
		Il2CppCodeGenWriteBarrier(&___linux_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
