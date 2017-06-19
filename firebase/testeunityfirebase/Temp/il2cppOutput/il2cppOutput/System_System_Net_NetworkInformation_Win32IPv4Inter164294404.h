#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_System_Net_NetworkInformation_IPv4Interface1411071681.h"
#include "System_System_Net_NetworkInformation_Win32_MIB_IFR4215928996.h"

// System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO
struct Win32_IP_ADAPTER_INFO_t2310876292;
// System.Net.NetworkInformation.Win32_IP_PER_ADAPTER_INFO
struct Win32_IP_PER_ADAPTER_INFO_t1280460216;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32IPv4InterfaceProperties
struct  Win32IPv4InterfaceProperties_t164294404  : public IPv4InterfaceProperties_t1411071681
{
public:
	// System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO System.Net.NetworkInformation.Win32IPv4InterfaceProperties::ainfo
	Win32_IP_ADAPTER_INFO_t2310876292 * ___ainfo_0;
	// System.Net.NetworkInformation.Win32_IP_PER_ADAPTER_INFO System.Net.NetworkInformation.Win32IPv4InterfaceProperties::painfo
	Win32_IP_PER_ADAPTER_INFO_t1280460216 * ___painfo_1;
	// System.Net.NetworkInformation.Win32_MIB_IFROW System.Net.NetworkInformation.Win32IPv4InterfaceProperties::mib
	Win32_MIB_IFROW_t4215928996  ___mib_2;

public:
	inline static int32_t get_offset_of_ainfo_0() { return static_cast<int32_t>(offsetof(Win32IPv4InterfaceProperties_t164294404, ___ainfo_0)); }
	inline Win32_IP_ADAPTER_INFO_t2310876292 * get_ainfo_0() const { return ___ainfo_0; }
	inline Win32_IP_ADAPTER_INFO_t2310876292 ** get_address_of_ainfo_0() { return &___ainfo_0; }
	inline void set_ainfo_0(Win32_IP_ADAPTER_INFO_t2310876292 * value)
	{
		___ainfo_0 = value;
		Il2CppCodeGenWriteBarrier(&___ainfo_0, value);
	}

	inline static int32_t get_offset_of_painfo_1() { return static_cast<int32_t>(offsetof(Win32IPv4InterfaceProperties_t164294404, ___painfo_1)); }
	inline Win32_IP_PER_ADAPTER_INFO_t1280460216 * get_painfo_1() const { return ___painfo_1; }
	inline Win32_IP_PER_ADAPTER_INFO_t1280460216 ** get_address_of_painfo_1() { return &___painfo_1; }
	inline void set_painfo_1(Win32_IP_PER_ADAPTER_INFO_t1280460216 * value)
	{
		___painfo_1 = value;
		Il2CppCodeGenWriteBarrier(&___painfo_1, value);
	}

	inline static int32_t get_offset_of_mib_2() { return static_cast<int32_t>(offsetof(Win32IPv4InterfaceProperties_t164294404, ___mib_2)); }
	inline Win32_MIB_IFROW_t4215928996  get_mib_2() const { return ___mib_2; }
	inline Win32_MIB_IFROW_t4215928996 * get_address_of_mib_2() { return &___mib_2; }
	inline void set_mib_2(Win32_MIB_IFROW_t4215928996  value)
	{
		___mib_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
