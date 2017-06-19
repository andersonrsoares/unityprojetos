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
#include "System_System_Net_NetworkInformation_NetBiosNodeTy2005148930.h"

// System.Net.NetworkInformation.Win32_FIXED_INFO
struct Win32_FIXED_INFO_t1371335919;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_FIXED_INFO
struct  Win32_FIXED_INFO_t1371335919  : public Il2CppObject
{
public:
	// System.String System.Net.NetworkInformation.Win32_FIXED_INFO::HostName
	String_t* ___HostName_4;
	// System.String System.Net.NetworkInformation.Win32_FIXED_INFO::DomainName
	String_t* ___DomainName_5;
	// System.IntPtr System.Net.NetworkInformation.Win32_FIXED_INFO::CurrentDnsServer
	IntPtr_t ___CurrentDnsServer_6;
	// System.Net.NetworkInformation.Win32_IP_ADDR_STRING System.Net.NetworkInformation.Win32_FIXED_INFO::DnsServerList
	Win32_IP_ADDR_STRING_t2646152127  ___DnsServerList_7;
	// System.Net.NetworkInformation.NetBiosNodeType System.Net.NetworkInformation.Win32_FIXED_INFO::NodeType
	int32_t ___NodeType_8;
	// System.String System.Net.NetworkInformation.Win32_FIXED_INFO::ScopeId
	String_t* ___ScopeId_9;
	// System.UInt32 System.Net.NetworkInformation.Win32_FIXED_INFO::EnableRouting
	uint32_t ___EnableRouting_10;
	// System.UInt32 System.Net.NetworkInformation.Win32_FIXED_INFO::EnableProxy
	uint32_t ___EnableProxy_11;
	// System.UInt32 System.Net.NetworkInformation.Win32_FIXED_INFO::EnableDns
	uint32_t ___EnableDns_12;

public:
	inline static int32_t get_offset_of_HostName_4() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t1371335919, ___HostName_4)); }
	inline String_t* get_HostName_4() const { return ___HostName_4; }
	inline String_t** get_address_of_HostName_4() { return &___HostName_4; }
	inline void set_HostName_4(String_t* value)
	{
		___HostName_4 = value;
		Il2CppCodeGenWriteBarrier(&___HostName_4, value);
	}

	inline static int32_t get_offset_of_DomainName_5() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t1371335919, ___DomainName_5)); }
	inline String_t* get_DomainName_5() const { return ___DomainName_5; }
	inline String_t** get_address_of_DomainName_5() { return &___DomainName_5; }
	inline void set_DomainName_5(String_t* value)
	{
		___DomainName_5 = value;
		Il2CppCodeGenWriteBarrier(&___DomainName_5, value);
	}

	inline static int32_t get_offset_of_CurrentDnsServer_6() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t1371335919, ___CurrentDnsServer_6)); }
	inline IntPtr_t get_CurrentDnsServer_6() const { return ___CurrentDnsServer_6; }
	inline IntPtr_t* get_address_of_CurrentDnsServer_6() { return &___CurrentDnsServer_6; }
	inline void set_CurrentDnsServer_6(IntPtr_t value)
	{
		___CurrentDnsServer_6 = value;
	}

	inline static int32_t get_offset_of_DnsServerList_7() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t1371335919, ___DnsServerList_7)); }
	inline Win32_IP_ADDR_STRING_t2646152127  get_DnsServerList_7() const { return ___DnsServerList_7; }
	inline Win32_IP_ADDR_STRING_t2646152127 * get_address_of_DnsServerList_7() { return &___DnsServerList_7; }
	inline void set_DnsServerList_7(Win32_IP_ADDR_STRING_t2646152127  value)
	{
		___DnsServerList_7 = value;
	}

	inline static int32_t get_offset_of_NodeType_8() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t1371335919, ___NodeType_8)); }
	inline int32_t get_NodeType_8() const { return ___NodeType_8; }
	inline int32_t* get_address_of_NodeType_8() { return &___NodeType_8; }
	inline void set_NodeType_8(int32_t value)
	{
		___NodeType_8 = value;
	}

	inline static int32_t get_offset_of_ScopeId_9() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t1371335919, ___ScopeId_9)); }
	inline String_t* get_ScopeId_9() const { return ___ScopeId_9; }
	inline String_t** get_address_of_ScopeId_9() { return &___ScopeId_9; }
	inline void set_ScopeId_9(String_t* value)
	{
		___ScopeId_9 = value;
		Il2CppCodeGenWriteBarrier(&___ScopeId_9, value);
	}

	inline static int32_t get_offset_of_EnableRouting_10() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t1371335919, ___EnableRouting_10)); }
	inline uint32_t get_EnableRouting_10() const { return ___EnableRouting_10; }
	inline uint32_t* get_address_of_EnableRouting_10() { return &___EnableRouting_10; }
	inline void set_EnableRouting_10(uint32_t value)
	{
		___EnableRouting_10 = value;
	}

	inline static int32_t get_offset_of_EnableProxy_11() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t1371335919, ___EnableProxy_11)); }
	inline uint32_t get_EnableProxy_11() const { return ___EnableProxy_11; }
	inline uint32_t* get_address_of_EnableProxy_11() { return &___EnableProxy_11; }
	inline void set_EnableProxy_11(uint32_t value)
	{
		___EnableProxy_11 = value;
	}

	inline static int32_t get_offset_of_EnableDns_12() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t1371335919, ___EnableDns_12)); }
	inline uint32_t get_EnableDns_12() const { return ___EnableDns_12; }
	inline uint32_t* get_address_of_EnableDns_12() { return &___EnableDns_12; }
	inline void set_EnableDns_12(uint32_t value)
	{
		___EnableDns_12 = value;
	}
};

struct Win32_FIXED_INFO_t1371335919_StaticFields
{
public:
	// System.Net.NetworkInformation.Win32_FIXED_INFO System.Net.NetworkInformation.Win32_FIXED_INFO::fixed_info
	Win32_FIXED_INFO_t1371335919 * ___fixed_info_3;

public:
	inline static int32_t get_offset_of_fixed_info_3() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t1371335919_StaticFields, ___fixed_info_3)); }
	inline Win32_FIXED_INFO_t1371335919 * get_fixed_info_3() const { return ___fixed_info_3; }
	inline Win32_FIXED_INFO_t1371335919 ** get_address_of_fixed_info_3() { return &___fixed_info_3; }
	inline void set_fixed_info_3(Win32_FIXED_INFO_t1371335919 * value)
	{
		___fixed_info_3 = value;
		Il2CppCodeGenWriteBarrier(&___fixed_info_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.Win32_FIXED_INFO
struct Win32_FIXED_INFO_t1371335919_marshaled_pinvoke
{
	char ___HostName_4[132];
	char ___DomainName_5[132];
	intptr_t ___CurrentDnsServer_6;
	Win32_IP_ADDR_STRING_t2646152127_marshaled_pinvoke ___DnsServerList_7;
	int32_t ___NodeType_8;
	char ___ScopeId_9[260];
	uint32_t ___EnableRouting_10;
	uint32_t ___EnableProxy_11;
	uint32_t ___EnableDns_12;
};
// Native definition for COM marshalling of System.Net.NetworkInformation.Win32_FIXED_INFO
struct Win32_FIXED_INFO_t1371335919_marshaled_com
{
	char ___HostName_4[132];
	char ___DomainName_5[132];
	intptr_t ___CurrentDnsServer_6;
	Win32_IP_ADDR_STRING_t2646152127_marshaled_com ___DnsServerList_7;
	int32_t ___NodeType_8;
	char ___ScopeId_9[260];
	uint32_t ___EnableRouting_10;
	uint32_t ___EnableProxy_11;
	uint32_t ___EnableDns_12;
};
