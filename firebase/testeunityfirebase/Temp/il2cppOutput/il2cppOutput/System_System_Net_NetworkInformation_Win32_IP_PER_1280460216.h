#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "System_System_Net_NetworkInformation_Win32_IP_ADDR2646152127.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_IP_PER_ADAPTER_INFO
struct  Win32_IP_PER_ADAPTER_INFO_t1280460216  : public Il2CppObject
{
public:
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_PER_ADAPTER_INFO::AutoconfigEnabled
	uint32_t ___AutoconfigEnabled_0;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_PER_ADAPTER_INFO::AutoconfigActive
	uint32_t ___AutoconfigActive_1;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_PER_ADAPTER_INFO::CurrentDnsServer
	IntPtr_t ___CurrentDnsServer_2;
	// System.Net.NetworkInformation.Win32_IP_ADDR_STRING System.Net.NetworkInformation.Win32_IP_PER_ADAPTER_INFO::DnsServerList
	Win32_IP_ADDR_STRING_t2646152127  ___DnsServerList_3;

public:
	inline static int32_t get_offset_of_AutoconfigEnabled_0() { return static_cast<int32_t>(offsetof(Win32_IP_PER_ADAPTER_INFO_t1280460216, ___AutoconfigEnabled_0)); }
	inline uint32_t get_AutoconfigEnabled_0() const { return ___AutoconfigEnabled_0; }
	inline uint32_t* get_address_of_AutoconfigEnabled_0() { return &___AutoconfigEnabled_0; }
	inline void set_AutoconfigEnabled_0(uint32_t value)
	{
		___AutoconfigEnabled_0 = value;
	}

	inline static int32_t get_offset_of_AutoconfigActive_1() { return static_cast<int32_t>(offsetof(Win32_IP_PER_ADAPTER_INFO_t1280460216, ___AutoconfigActive_1)); }
	inline uint32_t get_AutoconfigActive_1() const { return ___AutoconfigActive_1; }
	inline uint32_t* get_address_of_AutoconfigActive_1() { return &___AutoconfigActive_1; }
	inline void set_AutoconfigActive_1(uint32_t value)
	{
		___AutoconfigActive_1 = value;
	}

	inline static int32_t get_offset_of_CurrentDnsServer_2() { return static_cast<int32_t>(offsetof(Win32_IP_PER_ADAPTER_INFO_t1280460216, ___CurrentDnsServer_2)); }
	inline IntPtr_t get_CurrentDnsServer_2() const { return ___CurrentDnsServer_2; }
	inline IntPtr_t* get_address_of_CurrentDnsServer_2() { return &___CurrentDnsServer_2; }
	inline void set_CurrentDnsServer_2(IntPtr_t value)
	{
		___CurrentDnsServer_2 = value;
	}

	inline static int32_t get_offset_of_DnsServerList_3() { return static_cast<int32_t>(offsetof(Win32_IP_PER_ADAPTER_INFO_t1280460216, ___DnsServerList_3)); }
	inline Win32_IP_ADDR_STRING_t2646152127  get_DnsServerList_3() const { return ___DnsServerList_3; }
	inline Win32_IP_ADDR_STRING_t2646152127 * get_address_of_DnsServerList_3() { return &___DnsServerList_3; }
	inline void set_DnsServerList_3(Win32_IP_ADDR_STRING_t2646152127  value)
	{
		___DnsServerList_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.Win32_IP_PER_ADAPTER_INFO
struct Win32_IP_PER_ADAPTER_INFO_t1280460216_marshaled_pinvoke
{
	uint32_t ___AutoconfigEnabled_0;
	uint32_t ___AutoconfigActive_1;
	intptr_t ___CurrentDnsServer_2;
	Win32_IP_ADDR_STRING_t2646152127_marshaled_pinvoke ___DnsServerList_3;
};
// Native definition for COM marshalling of System.Net.NetworkInformation.Win32_IP_PER_ADAPTER_INFO
struct Win32_IP_PER_ADAPTER_INFO_t1280460216_marshaled_com
{
	uint32_t ___AutoconfigEnabled_0;
	uint32_t ___AutoconfigActive_1;
	intptr_t ___CurrentDnsServer_2;
	Win32_IP_ADDR_STRING_t2646152127_marshaled_com ___DnsServerList_3;
};
