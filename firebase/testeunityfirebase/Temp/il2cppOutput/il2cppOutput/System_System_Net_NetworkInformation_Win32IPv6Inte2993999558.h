#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_System_Net_NetworkInformation_IPv6Interface1930412363.h"
#include "System_System_Net_NetworkInformation_Win32_MIB_IFR4215928996.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32IPv6InterfaceProperties
struct  Win32IPv6InterfaceProperties_t2993999558  : public IPv6InterfaceProperties_t1930412363
{
public:
	// System.Net.NetworkInformation.Win32_MIB_IFROW System.Net.NetworkInformation.Win32IPv6InterfaceProperties::mib
	Win32_MIB_IFROW_t4215928996  ___mib_0;

public:
	inline static int32_t get_offset_of_mib_0() { return static_cast<int32_t>(offsetof(Win32IPv6InterfaceProperties_t2993999558, ___mib_0)); }
	inline Win32_MIB_IFROW_t4215928996  get_mib_0() const { return ___mib_0; }
	inline Win32_MIB_IFROW_t4215928996 * get_address_of_mib_0() { return &___mib_0; }
	inline void set_mib_0(Win32_MIB_IFROW_t4215928996  value)
	{
		___mib_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
