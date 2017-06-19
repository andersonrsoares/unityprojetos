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
#include "mscorlib_System_Byte3683104436.h"

// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO
struct  Win32_IP_ADAPTER_INFO_t2310876292  : public Il2CppObject
{
public:
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::Next
	IntPtr_t ___Next_3;
	// System.Int32 System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::ComboIndex
	int32_t ___ComboIndex_4;
	// System.String System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::AdapterName
	String_t* ___AdapterName_5;
	// System.String System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::Description
	String_t* ___Description_6;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::AddressLength
	uint32_t ___AddressLength_7;
	// System.Byte[] System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::Address
	ByteU5BU5D_t3397334013* ___Address_8;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::Index
	uint32_t ___Index_9;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::Type
	uint32_t ___Type_10;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::DhcpEnabled
	uint32_t ___DhcpEnabled_11;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::CurrentIpAddress
	IntPtr_t ___CurrentIpAddress_12;
	// System.Net.NetworkInformation.Win32_IP_ADDR_STRING System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::IpAddressList
	Win32_IP_ADDR_STRING_t2646152127  ___IpAddressList_13;
	// System.Net.NetworkInformation.Win32_IP_ADDR_STRING System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::GatewayList
	Win32_IP_ADDR_STRING_t2646152127  ___GatewayList_14;
	// System.Net.NetworkInformation.Win32_IP_ADDR_STRING System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::DhcpServer
	Win32_IP_ADDR_STRING_t2646152127  ___DhcpServer_15;
	// System.Boolean System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::HaveWins
	bool ___HaveWins_16;
	// System.Net.NetworkInformation.Win32_IP_ADDR_STRING System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::PrimaryWinsServer
	Win32_IP_ADDR_STRING_t2646152127  ___PrimaryWinsServer_17;
	// System.Net.NetworkInformation.Win32_IP_ADDR_STRING System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::SecondaryWinsServer
	Win32_IP_ADDR_STRING_t2646152127  ___SecondaryWinsServer_18;
	// System.Int64 System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::LeaseObtained
	int64_t ___LeaseObtained_19;
	// System.Int64 System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO::LeaseExpires
	int64_t ___LeaseExpires_20;

public:
	inline static int32_t get_offset_of_Next_3() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t2310876292, ___Next_3)); }
	inline IntPtr_t get_Next_3() const { return ___Next_3; }
	inline IntPtr_t* get_address_of_Next_3() { return &___Next_3; }
	inline void set_Next_3(IntPtr_t value)
	{
		___Next_3 = value;
	}

	inline static int32_t get_offset_of_ComboIndex_4() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t2310876292, ___ComboIndex_4)); }
	inline int32_t get_ComboIndex_4() const { return ___ComboIndex_4; }
	inline int32_t* get_address_of_ComboIndex_4() { return &___ComboIndex_4; }
	inline void set_ComboIndex_4(int32_t value)
	{
		___ComboIndex_4 = value;
	}

	inline static int32_t get_offset_of_AdapterName_5() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t2310876292, ___AdapterName_5)); }
	inline String_t* get_AdapterName_5() const { return ___AdapterName_5; }
	inline String_t** get_address_of_AdapterName_5() { return &___AdapterName_5; }
	inline void set_AdapterName_5(String_t* value)
	{
		___AdapterName_5 = value;
		Il2CppCodeGenWriteBarrier(&___AdapterName_5, value);
	}

	inline static int32_t get_offset_of_Description_6() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t2310876292, ___Description_6)); }
	inline String_t* get_Description_6() const { return ___Description_6; }
	inline String_t** get_address_of_Description_6() { return &___Description_6; }
	inline void set_Description_6(String_t* value)
	{
		___Description_6 = value;
		Il2CppCodeGenWriteBarrier(&___Description_6, value);
	}

	inline static int32_t get_offset_of_AddressLength_7() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t2310876292, ___AddressLength_7)); }
	inline uint32_t get_AddressLength_7() const { return ___AddressLength_7; }
	inline uint32_t* get_address_of_AddressLength_7() { return &___AddressLength_7; }
	inline void set_AddressLength_7(uint32_t value)
	{
		___AddressLength_7 = value;
	}

	inline static int32_t get_offset_of_Address_8() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t2310876292, ___Address_8)); }
	inline ByteU5BU5D_t3397334013* get_Address_8() const { return ___Address_8; }
	inline ByteU5BU5D_t3397334013** get_address_of_Address_8() { return &___Address_8; }
	inline void set_Address_8(ByteU5BU5D_t3397334013* value)
	{
		___Address_8 = value;
		Il2CppCodeGenWriteBarrier(&___Address_8, value);
	}

	inline static int32_t get_offset_of_Index_9() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t2310876292, ___Index_9)); }
	inline uint32_t get_Index_9() const { return ___Index_9; }
	inline uint32_t* get_address_of_Index_9() { return &___Index_9; }
	inline void set_Index_9(uint32_t value)
	{
		___Index_9 = value;
	}

	inline static int32_t get_offset_of_Type_10() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t2310876292, ___Type_10)); }
	inline uint32_t get_Type_10() const { return ___Type_10; }
	inline uint32_t* get_address_of_Type_10() { return &___Type_10; }
	inline void set_Type_10(uint32_t value)
	{
		___Type_10 = value;
	}

	inline static int32_t get_offset_of_DhcpEnabled_11() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t2310876292, ___DhcpEnabled_11)); }
	inline uint32_t get_DhcpEnabled_11() const { return ___DhcpEnabled_11; }
	inline uint32_t* get_address_of_DhcpEnabled_11() { return &___DhcpEnabled_11; }
	inline void set_DhcpEnabled_11(uint32_t value)
	{
		___DhcpEnabled_11 = value;
	}

	inline static int32_t get_offset_of_CurrentIpAddress_12() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t2310876292, ___CurrentIpAddress_12)); }
	inline IntPtr_t get_CurrentIpAddress_12() const { return ___CurrentIpAddress_12; }
	inline IntPtr_t* get_address_of_CurrentIpAddress_12() { return &___CurrentIpAddress_12; }
	inline void set_CurrentIpAddress_12(IntPtr_t value)
	{
		___CurrentIpAddress_12 = value;
	}

	inline static int32_t get_offset_of_IpAddressList_13() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t2310876292, ___IpAddressList_13)); }
	inline Win32_IP_ADDR_STRING_t2646152127  get_IpAddressList_13() const { return ___IpAddressList_13; }
	inline Win32_IP_ADDR_STRING_t2646152127 * get_address_of_IpAddressList_13() { return &___IpAddressList_13; }
	inline void set_IpAddressList_13(Win32_IP_ADDR_STRING_t2646152127  value)
	{
		___IpAddressList_13 = value;
	}

	inline static int32_t get_offset_of_GatewayList_14() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t2310876292, ___GatewayList_14)); }
	inline Win32_IP_ADDR_STRING_t2646152127  get_GatewayList_14() const { return ___GatewayList_14; }
	inline Win32_IP_ADDR_STRING_t2646152127 * get_address_of_GatewayList_14() { return &___GatewayList_14; }
	inline void set_GatewayList_14(Win32_IP_ADDR_STRING_t2646152127  value)
	{
		___GatewayList_14 = value;
	}

	inline static int32_t get_offset_of_DhcpServer_15() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t2310876292, ___DhcpServer_15)); }
	inline Win32_IP_ADDR_STRING_t2646152127  get_DhcpServer_15() const { return ___DhcpServer_15; }
	inline Win32_IP_ADDR_STRING_t2646152127 * get_address_of_DhcpServer_15() { return &___DhcpServer_15; }
	inline void set_DhcpServer_15(Win32_IP_ADDR_STRING_t2646152127  value)
	{
		___DhcpServer_15 = value;
	}

	inline static int32_t get_offset_of_HaveWins_16() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t2310876292, ___HaveWins_16)); }
	inline bool get_HaveWins_16() const { return ___HaveWins_16; }
	inline bool* get_address_of_HaveWins_16() { return &___HaveWins_16; }
	inline void set_HaveWins_16(bool value)
	{
		___HaveWins_16 = value;
	}

	inline static int32_t get_offset_of_PrimaryWinsServer_17() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t2310876292, ___PrimaryWinsServer_17)); }
	inline Win32_IP_ADDR_STRING_t2646152127  get_PrimaryWinsServer_17() const { return ___PrimaryWinsServer_17; }
	inline Win32_IP_ADDR_STRING_t2646152127 * get_address_of_PrimaryWinsServer_17() { return &___PrimaryWinsServer_17; }
	inline void set_PrimaryWinsServer_17(Win32_IP_ADDR_STRING_t2646152127  value)
	{
		___PrimaryWinsServer_17 = value;
	}

	inline static int32_t get_offset_of_SecondaryWinsServer_18() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t2310876292, ___SecondaryWinsServer_18)); }
	inline Win32_IP_ADDR_STRING_t2646152127  get_SecondaryWinsServer_18() const { return ___SecondaryWinsServer_18; }
	inline Win32_IP_ADDR_STRING_t2646152127 * get_address_of_SecondaryWinsServer_18() { return &___SecondaryWinsServer_18; }
	inline void set_SecondaryWinsServer_18(Win32_IP_ADDR_STRING_t2646152127  value)
	{
		___SecondaryWinsServer_18 = value;
	}

	inline static int32_t get_offset_of_LeaseObtained_19() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t2310876292, ___LeaseObtained_19)); }
	inline int64_t get_LeaseObtained_19() const { return ___LeaseObtained_19; }
	inline int64_t* get_address_of_LeaseObtained_19() { return &___LeaseObtained_19; }
	inline void set_LeaseObtained_19(int64_t value)
	{
		___LeaseObtained_19 = value;
	}

	inline static int32_t get_offset_of_LeaseExpires_20() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_INFO_t2310876292, ___LeaseExpires_20)); }
	inline int64_t get_LeaseExpires_20() const { return ___LeaseExpires_20; }
	inline int64_t* get_address_of_LeaseExpires_20() { return &___LeaseExpires_20; }
	inline void set_LeaseExpires_20(int64_t value)
	{
		___LeaseExpires_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO
struct Win32_IP_ADAPTER_INFO_t2310876292_marshaled_pinvoke
{
	intptr_t ___Next_3;
	int32_t ___ComboIndex_4;
	char ___AdapterName_5[260];
	char ___Description_6[132];
	uint32_t ___AddressLength_7;
	uint8_t ___Address_8[8];
	uint32_t ___Index_9;
	uint32_t ___Type_10;
	uint32_t ___DhcpEnabled_11;
	intptr_t ___CurrentIpAddress_12;
	Win32_IP_ADDR_STRING_t2646152127_marshaled_pinvoke ___IpAddressList_13;
	Win32_IP_ADDR_STRING_t2646152127_marshaled_pinvoke ___GatewayList_14;
	Win32_IP_ADDR_STRING_t2646152127_marshaled_pinvoke ___DhcpServer_15;
	int32_t ___HaveWins_16;
	Win32_IP_ADDR_STRING_t2646152127_marshaled_pinvoke ___PrimaryWinsServer_17;
	Win32_IP_ADDR_STRING_t2646152127_marshaled_pinvoke ___SecondaryWinsServer_18;
	int64_t ___LeaseObtained_19;
	int64_t ___LeaseExpires_20;
};
// Native definition for COM marshalling of System.Net.NetworkInformation.Win32_IP_ADAPTER_INFO
struct Win32_IP_ADAPTER_INFO_t2310876292_marshaled_com
{
	intptr_t ___Next_3;
	int32_t ___ComboIndex_4;
	char ___AdapterName_5[260];
	char ___Description_6[132];
	uint32_t ___AddressLength_7;
	uint8_t ___Address_8[8];
	uint32_t ___Index_9;
	uint32_t ___Type_10;
	uint32_t ___DhcpEnabled_11;
	intptr_t ___CurrentIpAddress_12;
	Win32_IP_ADDR_STRING_t2646152127_marshaled_com ___IpAddressList_13;
	Win32_IP_ADDR_STRING_t2646152127_marshaled_com ___GatewayList_14;
	Win32_IP_ADDR_STRING_t2646152127_marshaled_com ___DhcpServer_15;
	int32_t ___HaveWins_16;
	Win32_IP_ADDR_STRING_t2646152127_marshaled_com ___PrimaryWinsServer_17;
	Win32_IP_ADDR_STRING_t2646152127_marshaled_com ___SecondaryWinsServer_18;
	int64_t ___LeaseObtained_19;
	int64_t ___LeaseExpires_20;
};
