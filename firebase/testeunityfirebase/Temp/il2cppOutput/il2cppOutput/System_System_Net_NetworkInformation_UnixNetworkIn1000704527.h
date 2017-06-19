#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_System_Net_NetworkInformation_NetworkInterfac63927633.h"
#include "System_System_Net_NetworkInformation_NetworkInterf4226883065.h"

// System.Net.NetworkInformation.IPv4InterfaceStatistics
struct IPv4InterfaceStatistics_t3946458365;
// System.Net.NetworkInformation.IPInterfaceProperties
struct IPInterfaceProperties_t3986609851;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.Net.IPAddress>
struct List_1_t769092855;
// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.UnixNetworkInterface
struct  UnixNetworkInterface_t1000704527  : public NetworkInterface_t63927633
{
public:
	// System.Net.NetworkInformation.IPv4InterfaceStatistics System.Net.NetworkInformation.UnixNetworkInterface::ipv4stats
	IPv4InterfaceStatistics_t3946458365 * ___ipv4stats_2;
	// System.Net.NetworkInformation.IPInterfaceProperties System.Net.NetworkInformation.UnixNetworkInterface::ipproperties
	IPInterfaceProperties_t3986609851 * ___ipproperties_3;
	// System.String System.Net.NetworkInformation.UnixNetworkInterface::name
	String_t* ___name_4;
	// System.Int32 System.Net.NetworkInformation.UnixNetworkInterface::index
	int32_t ___index_5;
	// System.Collections.Generic.List`1<System.Net.IPAddress> System.Net.NetworkInformation.UnixNetworkInterface::addresses
	List_1_t769092855 * ___addresses_6;
	// System.Byte[] System.Net.NetworkInformation.UnixNetworkInterface::macAddress
	ByteU5BU5D_t3397334013* ___macAddress_7;
	// System.Net.NetworkInformation.NetworkInterfaceType System.Net.NetworkInformation.UnixNetworkInterface::type
	int32_t ___type_8;

public:
	inline static int32_t get_offset_of_ipv4stats_2() { return static_cast<int32_t>(offsetof(UnixNetworkInterface_t1000704527, ___ipv4stats_2)); }
	inline IPv4InterfaceStatistics_t3946458365 * get_ipv4stats_2() const { return ___ipv4stats_2; }
	inline IPv4InterfaceStatistics_t3946458365 ** get_address_of_ipv4stats_2() { return &___ipv4stats_2; }
	inline void set_ipv4stats_2(IPv4InterfaceStatistics_t3946458365 * value)
	{
		___ipv4stats_2 = value;
		Il2CppCodeGenWriteBarrier(&___ipv4stats_2, value);
	}

	inline static int32_t get_offset_of_ipproperties_3() { return static_cast<int32_t>(offsetof(UnixNetworkInterface_t1000704527, ___ipproperties_3)); }
	inline IPInterfaceProperties_t3986609851 * get_ipproperties_3() const { return ___ipproperties_3; }
	inline IPInterfaceProperties_t3986609851 ** get_address_of_ipproperties_3() { return &___ipproperties_3; }
	inline void set_ipproperties_3(IPInterfaceProperties_t3986609851 * value)
	{
		___ipproperties_3 = value;
		Il2CppCodeGenWriteBarrier(&___ipproperties_3, value);
	}

	inline static int32_t get_offset_of_name_4() { return static_cast<int32_t>(offsetof(UnixNetworkInterface_t1000704527, ___name_4)); }
	inline String_t* get_name_4() const { return ___name_4; }
	inline String_t** get_address_of_name_4() { return &___name_4; }
	inline void set_name_4(String_t* value)
	{
		___name_4 = value;
		Il2CppCodeGenWriteBarrier(&___name_4, value);
	}

	inline static int32_t get_offset_of_index_5() { return static_cast<int32_t>(offsetof(UnixNetworkInterface_t1000704527, ___index_5)); }
	inline int32_t get_index_5() const { return ___index_5; }
	inline int32_t* get_address_of_index_5() { return &___index_5; }
	inline void set_index_5(int32_t value)
	{
		___index_5 = value;
	}

	inline static int32_t get_offset_of_addresses_6() { return static_cast<int32_t>(offsetof(UnixNetworkInterface_t1000704527, ___addresses_6)); }
	inline List_1_t769092855 * get_addresses_6() const { return ___addresses_6; }
	inline List_1_t769092855 ** get_address_of_addresses_6() { return &___addresses_6; }
	inline void set_addresses_6(List_1_t769092855 * value)
	{
		___addresses_6 = value;
		Il2CppCodeGenWriteBarrier(&___addresses_6, value);
	}

	inline static int32_t get_offset_of_macAddress_7() { return static_cast<int32_t>(offsetof(UnixNetworkInterface_t1000704527, ___macAddress_7)); }
	inline ByteU5BU5D_t3397334013* get_macAddress_7() const { return ___macAddress_7; }
	inline ByteU5BU5D_t3397334013** get_address_of_macAddress_7() { return &___macAddress_7; }
	inline void set_macAddress_7(ByteU5BU5D_t3397334013* value)
	{
		___macAddress_7 = value;
		Il2CppCodeGenWriteBarrier(&___macAddress_7, value);
	}

	inline static int32_t get_offset_of_type_8() { return static_cast<int32_t>(offsetof(UnixNetworkInterface_t1000704527, ___type_8)); }
	inline int32_t get_type_8() const { return ___type_8; }
	inline int32_t* get_address_of_type_8() { return &___type_8; }
	inline void set_type_8(int32_t value)
	{
		___type_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
