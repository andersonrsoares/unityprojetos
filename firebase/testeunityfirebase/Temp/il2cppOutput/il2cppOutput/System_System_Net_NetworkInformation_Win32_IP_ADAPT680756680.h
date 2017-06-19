#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "System_System_Net_NetworkInformation_AlignmentUnion707470070.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "System_System_Net_NetworkInformation_NetworkInterf4226883065.h"
#include "System_System_Net_NetworkInformation_OperationalSt2833345236.h"
#include "mscorlib_System_Byte3683104436.h"
#include "mscorlib_System_UInt322149682021.h"

// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.UInt32[]
struct UInt32U5BU5D_t59386216;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES
struct  Win32_IP_ADAPTER_ADDRESSES_t680756680  : public Il2CppObject
{
public:
	// System.Net.NetworkInformation.AlignmentUnion System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Alignment
	AlignmentUnion_t707470070  ___Alignment_4;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Next
	IntPtr_t ___Next_5;
	// System.String System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::AdapterName
	String_t* ___AdapterName_6;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::FirstUnicastAddress
	IntPtr_t ___FirstUnicastAddress_7;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::FirstAnycastAddress
	IntPtr_t ___FirstAnycastAddress_8;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::FirstMulticastAddress
	IntPtr_t ___FirstMulticastAddress_9;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::FirstDnsServerAddress
	IntPtr_t ___FirstDnsServerAddress_10;
	// System.String System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::DnsSuffix
	String_t* ___DnsSuffix_11;
	// System.String System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Description
	String_t* ___Description_12;
	// System.String System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::FriendlyName
	String_t* ___FriendlyName_13;
	// System.Byte[] System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::PhysicalAddress
	ByteU5BU5D_t3397334013* ___PhysicalAddress_14;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::PhysicalAddressLength
	uint32_t ___PhysicalAddressLength_15;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Flags
	uint32_t ___Flags_16;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Mtu
	uint32_t ___Mtu_17;
	// System.Net.NetworkInformation.NetworkInterfaceType System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::IfType
	int32_t ___IfType_18;
	// System.Net.NetworkInformation.OperationalStatus System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::OperStatus
	int32_t ___OperStatus_19;
	// System.Int32 System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Ipv6IfIndex
	int32_t ___Ipv6IfIndex_20;
	// System.UInt32[] System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::ZoneIndices
	UInt32U5BU5D_t59386216* ___ZoneIndices_21;

public:
	inline static int32_t get_offset_of_Alignment_4() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t680756680, ___Alignment_4)); }
	inline AlignmentUnion_t707470070  get_Alignment_4() const { return ___Alignment_4; }
	inline AlignmentUnion_t707470070 * get_address_of_Alignment_4() { return &___Alignment_4; }
	inline void set_Alignment_4(AlignmentUnion_t707470070  value)
	{
		___Alignment_4 = value;
	}

	inline static int32_t get_offset_of_Next_5() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t680756680, ___Next_5)); }
	inline IntPtr_t get_Next_5() const { return ___Next_5; }
	inline IntPtr_t* get_address_of_Next_5() { return &___Next_5; }
	inline void set_Next_5(IntPtr_t value)
	{
		___Next_5 = value;
	}

	inline static int32_t get_offset_of_AdapterName_6() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t680756680, ___AdapterName_6)); }
	inline String_t* get_AdapterName_6() const { return ___AdapterName_6; }
	inline String_t** get_address_of_AdapterName_6() { return &___AdapterName_6; }
	inline void set_AdapterName_6(String_t* value)
	{
		___AdapterName_6 = value;
		Il2CppCodeGenWriteBarrier(&___AdapterName_6, value);
	}

	inline static int32_t get_offset_of_FirstUnicastAddress_7() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t680756680, ___FirstUnicastAddress_7)); }
	inline IntPtr_t get_FirstUnicastAddress_7() const { return ___FirstUnicastAddress_7; }
	inline IntPtr_t* get_address_of_FirstUnicastAddress_7() { return &___FirstUnicastAddress_7; }
	inline void set_FirstUnicastAddress_7(IntPtr_t value)
	{
		___FirstUnicastAddress_7 = value;
	}

	inline static int32_t get_offset_of_FirstAnycastAddress_8() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t680756680, ___FirstAnycastAddress_8)); }
	inline IntPtr_t get_FirstAnycastAddress_8() const { return ___FirstAnycastAddress_8; }
	inline IntPtr_t* get_address_of_FirstAnycastAddress_8() { return &___FirstAnycastAddress_8; }
	inline void set_FirstAnycastAddress_8(IntPtr_t value)
	{
		___FirstAnycastAddress_8 = value;
	}

	inline static int32_t get_offset_of_FirstMulticastAddress_9() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t680756680, ___FirstMulticastAddress_9)); }
	inline IntPtr_t get_FirstMulticastAddress_9() const { return ___FirstMulticastAddress_9; }
	inline IntPtr_t* get_address_of_FirstMulticastAddress_9() { return &___FirstMulticastAddress_9; }
	inline void set_FirstMulticastAddress_9(IntPtr_t value)
	{
		___FirstMulticastAddress_9 = value;
	}

	inline static int32_t get_offset_of_FirstDnsServerAddress_10() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t680756680, ___FirstDnsServerAddress_10)); }
	inline IntPtr_t get_FirstDnsServerAddress_10() const { return ___FirstDnsServerAddress_10; }
	inline IntPtr_t* get_address_of_FirstDnsServerAddress_10() { return &___FirstDnsServerAddress_10; }
	inline void set_FirstDnsServerAddress_10(IntPtr_t value)
	{
		___FirstDnsServerAddress_10 = value;
	}

	inline static int32_t get_offset_of_DnsSuffix_11() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t680756680, ___DnsSuffix_11)); }
	inline String_t* get_DnsSuffix_11() const { return ___DnsSuffix_11; }
	inline String_t** get_address_of_DnsSuffix_11() { return &___DnsSuffix_11; }
	inline void set_DnsSuffix_11(String_t* value)
	{
		___DnsSuffix_11 = value;
		Il2CppCodeGenWriteBarrier(&___DnsSuffix_11, value);
	}

	inline static int32_t get_offset_of_Description_12() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t680756680, ___Description_12)); }
	inline String_t* get_Description_12() const { return ___Description_12; }
	inline String_t** get_address_of_Description_12() { return &___Description_12; }
	inline void set_Description_12(String_t* value)
	{
		___Description_12 = value;
		Il2CppCodeGenWriteBarrier(&___Description_12, value);
	}

	inline static int32_t get_offset_of_FriendlyName_13() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t680756680, ___FriendlyName_13)); }
	inline String_t* get_FriendlyName_13() const { return ___FriendlyName_13; }
	inline String_t** get_address_of_FriendlyName_13() { return &___FriendlyName_13; }
	inline void set_FriendlyName_13(String_t* value)
	{
		___FriendlyName_13 = value;
		Il2CppCodeGenWriteBarrier(&___FriendlyName_13, value);
	}

	inline static int32_t get_offset_of_PhysicalAddress_14() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t680756680, ___PhysicalAddress_14)); }
	inline ByteU5BU5D_t3397334013* get_PhysicalAddress_14() const { return ___PhysicalAddress_14; }
	inline ByteU5BU5D_t3397334013** get_address_of_PhysicalAddress_14() { return &___PhysicalAddress_14; }
	inline void set_PhysicalAddress_14(ByteU5BU5D_t3397334013* value)
	{
		___PhysicalAddress_14 = value;
		Il2CppCodeGenWriteBarrier(&___PhysicalAddress_14, value);
	}

	inline static int32_t get_offset_of_PhysicalAddressLength_15() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t680756680, ___PhysicalAddressLength_15)); }
	inline uint32_t get_PhysicalAddressLength_15() const { return ___PhysicalAddressLength_15; }
	inline uint32_t* get_address_of_PhysicalAddressLength_15() { return &___PhysicalAddressLength_15; }
	inline void set_PhysicalAddressLength_15(uint32_t value)
	{
		___PhysicalAddressLength_15 = value;
	}

	inline static int32_t get_offset_of_Flags_16() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t680756680, ___Flags_16)); }
	inline uint32_t get_Flags_16() const { return ___Flags_16; }
	inline uint32_t* get_address_of_Flags_16() { return &___Flags_16; }
	inline void set_Flags_16(uint32_t value)
	{
		___Flags_16 = value;
	}

	inline static int32_t get_offset_of_Mtu_17() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t680756680, ___Mtu_17)); }
	inline uint32_t get_Mtu_17() const { return ___Mtu_17; }
	inline uint32_t* get_address_of_Mtu_17() { return &___Mtu_17; }
	inline void set_Mtu_17(uint32_t value)
	{
		___Mtu_17 = value;
	}

	inline static int32_t get_offset_of_IfType_18() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t680756680, ___IfType_18)); }
	inline int32_t get_IfType_18() const { return ___IfType_18; }
	inline int32_t* get_address_of_IfType_18() { return &___IfType_18; }
	inline void set_IfType_18(int32_t value)
	{
		___IfType_18 = value;
	}

	inline static int32_t get_offset_of_OperStatus_19() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t680756680, ___OperStatus_19)); }
	inline int32_t get_OperStatus_19() const { return ___OperStatus_19; }
	inline int32_t* get_address_of_OperStatus_19() { return &___OperStatus_19; }
	inline void set_OperStatus_19(int32_t value)
	{
		___OperStatus_19 = value;
	}

	inline static int32_t get_offset_of_Ipv6IfIndex_20() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t680756680, ___Ipv6IfIndex_20)); }
	inline int32_t get_Ipv6IfIndex_20() const { return ___Ipv6IfIndex_20; }
	inline int32_t* get_address_of_Ipv6IfIndex_20() { return &___Ipv6IfIndex_20; }
	inline void set_Ipv6IfIndex_20(int32_t value)
	{
		___Ipv6IfIndex_20 = value;
	}

	inline static int32_t get_offset_of_ZoneIndices_21() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t680756680, ___ZoneIndices_21)); }
	inline UInt32U5BU5D_t59386216* get_ZoneIndices_21() const { return ___ZoneIndices_21; }
	inline UInt32U5BU5D_t59386216** get_address_of_ZoneIndices_21() { return &___ZoneIndices_21; }
	inline void set_ZoneIndices_21(UInt32U5BU5D_t59386216* value)
	{
		___ZoneIndices_21 = value;
		Il2CppCodeGenWriteBarrier(&___ZoneIndices_21, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES
struct Win32_IP_ADAPTER_ADDRESSES_t680756680_marshaled_pinvoke
{
	AlignmentUnion_t707470070  ___Alignment_4;
	intptr_t ___Next_5;
	char* ___AdapterName_6;
	intptr_t ___FirstUnicastAddress_7;
	intptr_t ___FirstAnycastAddress_8;
	intptr_t ___FirstMulticastAddress_9;
	intptr_t ___FirstDnsServerAddress_10;
	Il2CppChar* ___DnsSuffix_11;
	Il2CppChar* ___Description_12;
	Il2CppChar* ___FriendlyName_13;
	uint8_t ___PhysicalAddress_14[8];
	uint32_t ___PhysicalAddressLength_15;
	uint32_t ___Flags_16;
	uint32_t ___Mtu_17;
	int32_t ___IfType_18;
	int32_t ___OperStatus_19;
	int32_t ___Ipv6IfIndex_20;
	uint32_t ___ZoneIndices_21[64];
};
// Native definition for COM marshalling of System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES
struct Win32_IP_ADAPTER_ADDRESSES_t680756680_marshaled_com
{
	AlignmentUnion_t707470070  ___Alignment_4;
	intptr_t ___Next_5;
	char* ___AdapterName_6;
	intptr_t ___FirstUnicastAddress_7;
	intptr_t ___FirstAnycastAddress_8;
	intptr_t ___FirstMulticastAddress_9;
	intptr_t ___FirstDnsServerAddress_10;
	Il2CppChar* ___DnsSuffix_11;
	Il2CppChar* ___Description_12;
	Il2CppChar* ___FriendlyName_13;
	uint8_t ___PhysicalAddress_14[8];
	uint32_t ___PhysicalAddressLength_15;
	uint32_t ___Flags_16;
	uint32_t ___Mtu_17;
	int32_t ___IfType_18;
	int32_t ___OperStatus_19;
	int32_t ___Ipv6IfIndex_20;
	uint32_t ___ZoneIndices_21[64];
};
