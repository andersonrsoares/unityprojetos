#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_System_Net_NetworkInformation_IPv4Interface1411071681.h"

// System.Net.NetworkInformation.UnixNetworkInterface
struct UnixNetworkInterface_t1000704527;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.UnixIPv4InterfaceProperties
struct  UnixIPv4InterfaceProperties_t179777771  : public IPv4InterfaceProperties_t1411071681
{
public:
	// System.Net.NetworkInformation.UnixNetworkInterface System.Net.NetworkInformation.UnixIPv4InterfaceProperties::iface
	UnixNetworkInterface_t1000704527 * ___iface_0;

public:
	inline static int32_t get_offset_of_iface_0() { return static_cast<int32_t>(offsetof(UnixIPv4InterfaceProperties_t179777771, ___iface_0)); }
	inline UnixNetworkInterface_t1000704527 * get_iface_0() const { return ___iface_0; }
	inline UnixNetworkInterface_t1000704527 ** get_address_of_iface_0() { return &___iface_0; }
	inline void set_iface_0(UnixNetworkInterface_t1000704527 * value)
	{
		___iface_0 = value;
		Il2CppCodeGenWriteBarrier(&___iface_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
