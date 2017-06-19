#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_System_Net_NetworkInformation_IPInterfacePr3986609851.h"
#include "mscorlib_System_DateTime693205669.h"

// System.Net.NetworkInformation.IPv4InterfaceProperties
struct IPv4InterfaceProperties_t1411071681;
// System.Net.NetworkInformation.UnixNetworkInterface
struct UnixNetworkInterface_t1000704527;
// System.Collections.Generic.List`1<System.Net.IPAddress>
struct List_1_t769092855;
// System.Net.NetworkInformation.IPAddressCollection
struct IPAddressCollection_t2986660307;
// System.String
struct String_t;
// System.Text.RegularExpressions.Regex
struct Regex_t1803876613;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.UnixIPInterfaceProperties
struct  UnixIPInterfaceProperties_t2418091637  : public IPInterfaceProperties_t3986609851
{
public:
	// System.Net.NetworkInformation.IPv4InterfaceProperties System.Net.NetworkInformation.UnixIPInterfaceProperties::ipv4iface_properties
	IPv4InterfaceProperties_t1411071681 * ___ipv4iface_properties_0;
	// System.Net.NetworkInformation.UnixNetworkInterface System.Net.NetworkInformation.UnixIPInterfaceProperties::iface
	UnixNetworkInterface_t1000704527 * ___iface_1;
	// System.Collections.Generic.List`1<System.Net.IPAddress> System.Net.NetworkInformation.UnixIPInterfaceProperties::addresses
	List_1_t769092855 * ___addresses_2;
	// System.Net.NetworkInformation.IPAddressCollection System.Net.NetworkInformation.UnixIPInterfaceProperties::dns_servers
	IPAddressCollection_t2986660307 * ___dns_servers_3;
	// System.Net.NetworkInformation.IPAddressCollection System.Net.NetworkInformation.UnixIPInterfaceProperties::gateways
	IPAddressCollection_t2986660307 * ___gateways_4;
	// System.String System.Net.NetworkInformation.UnixIPInterfaceProperties::dns_suffix
	String_t* ___dns_suffix_5;
	// System.DateTime System.Net.NetworkInformation.UnixIPInterfaceProperties::last_parse
	DateTime_t693205669  ___last_parse_6;

public:
	inline static int32_t get_offset_of_ipv4iface_properties_0() { return static_cast<int32_t>(offsetof(UnixIPInterfaceProperties_t2418091637, ___ipv4iface_properties_0)); }
	inline IPv4InterfaceProperties_t1411071681 * get_ipv4iface_properties_0() const { return ___ipv4iface_properties_0; }
	inline IPv4InterfaceProperties_t1411071681 ** get_address_of_ipv4iface_properties_0() { return &___ipv4iface_properties_0; }
	inline void set_ipv4iface_properties_0(IPv4InterfaceProperties_t1411071681 * value)
	{
		___ipv4iface_properties_0 = value;
		Il2CppCodeGenWriteBarrier(&___ipv4iface_properties_0, value);
	}

	inline static int32_t get_offset_of_iface_1() { return static_cast<int32_t>(offsetof(UnixIPInterfaceProperties_t2418091637, ___iface_1)); }
	inline UnixNetworkInterface_t1000704527 * get_iface_1() const { return ___iface_1; }
	inline UnixNetworkInterface_t1000704527 ** get_address_of_iface_1() { return &___iface_1; }
	inline void set_iface_1(UnixNetworkInterface_t1000704527 * value)
	{
		___iface_1 = value;
		Il2CppCodeGenWriteBarrier(&___iface_1, value);
	}

	inline static int32_t get_offset_of_addresses_2() { return static_cast<int32_t>(offsetof(UnixIPInterfaceProperties_t2418091637, ___addresses_2)); }
	inline List_1_t769092855 * get_addresses_2() const { return ___addresses_2; }
	inline List_1_t769092855 ** get_address_of_addresses_2() { return &___addresses_2; }
	inline void set_addresses_2(List_1_t769092855 * value)
	{
		___addresses_2 = value;
		Il2CppCodeGenWriteBarrier(&___addresses_2, value);
	}

	inline static int32_t get_offset_of_dns_servers_3() { return static_cast<int32_t>(offsetof(UnixIPInterfaceProperties_t2418091637, ___dns_servers_3)); }
	inline IPAddressCollection_t2986660307 * get_dns_servers_3() const { return ___dns_servers_3; }
	inline IPAddressCollection_t2986660307 ** get_address_of_dns_servers_3() { return &___dns_servers_3; }
	inline void set_dns_servers_3(IPAddressCollection_t2986660307 * value)
	{
		___dns_servers_3 = value;
		Il2CppCodeGenWriteBarrier(&___dns_servers_3, value);
	}

	inline static int32_t get_offset_of_gateways_4() { return static_cast<int32_t>(offsetof(UnixIPInterfaceProperties_t2418091637, ___gateways_4)); }
	inline IPAddressCollection_t2986660307 * get_gateways_4() const { return ___gateways_4; }
	inline IPAddressCollection_t2986660307 ** get_address_of_gateways_4() { return &___gateways_4; }
	inline void set_gateways_4(IPAddressCollection_t2986660307 * value)
	{
		___gateways_4 = value;
		Il2CppCodeGenWriteBarrier(&___gateways_4, value);
	}

	inline static int32_t get_offset_of_dns_suffix_5() { return static_cast<int32_t>(offsetof(UnixIPInterfaceProperties_t2418091637, ___dns_suffix_5)); }
	inline String_t* get_dns_suffix_5() const { return ___dns_suffix_5; }
	inline String_t** get_address_of_dns_suffix_5() { return &___dns_suffix_5; }
	inline void set_dns_suffix_5(String_t* value)
	{
		___dns_suffix_5 = value;
		Il2CppCodeGenWriteBarrier(&___dns_suffix_5, value);
	}

	inline static int32_t get_offset_of_last_parse_6() { return static_cast<int32_t>(offsetof(UnixIPInterfaceProperties_t2418091637, ___last_parse_6)); }
	inline DateTime_t693205669  get_last_parse_6() const { return ___last_parse_6; }
	inline DateTime_t693205669 * get_address_of_last_parse_6() { return &___last_parse_6; }
	inline void set_last_parse_6(DateTime_t693205669  value)
	{
		___last_parse_6 = value;
	}
};

struct UnixIPInterfaceProperties_t2418091637_StaticFields
{
public:
	// System.Text.RegularExpressions.Regex System.Net.NetworkInformation.UnixIPInterfaceProperties::ns
	Regex_t1803876613 * ___ns_7;
	// System.Text.RegularExpressions.Regex System.Net.NetworkInformation.UnixIPInterfaceProperties::search
	Regex_t1803876613 * ___search_8;

public:
	inline static int32_t get_offset_of_ns_7() { return static_cast<int32_t>(offsetof(UnixIPInterfaceProperties_t2418091637_StaticFields, ___ns_7)); }
	inline Regex_t1803876613 * get_ns_7() const { return ___ns_7; }
	inline Regex_t1803876613 ** get_address_of_ns_7() { return &___ns_7; }
	inline void set_ns_7(Regex_t1803876613 * value)
	{
		___ns_7 = value;
		Il2CppCodeGenWriteBarrier(&___ns_7, value);
	}

	inline static int32_t get_offset_of_search_8() { return static_cast<int32_t>(offsetof(UnixIPInterfaceProperties_t2418091637_StaticFields, ___search_8)); }
	inline Regex_t1803876613 * get_search_8() const { return ___search_8; }
	inline Regex_t1803876613 ** get_address_of_search_8() { return &___search_8; }
	inline void set_search_8(Regex_t1803876613 * value)
	{
		___search_8 = value;
		Il2CppCodeGenWriteBarrier(&___search_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
