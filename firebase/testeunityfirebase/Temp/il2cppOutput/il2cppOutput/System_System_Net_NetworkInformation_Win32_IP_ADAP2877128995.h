#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "System_System_Net_NetworkInformation_Win32LengthFl1910118479.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "System_System_Net_NetworkInformation_Win32_SOCKET_1093973396.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_IP_ADAPTER_MULTICAST_ADDRESS
struct  Win32_IP_ADAPTER_MULTICAST_ADDRESS_t2877128995 
{
public:
	// System.Net.NetworkInformation.Win32LengthFlagsUnion System.Net.NetworkInformation.Win32_IP_ADAPTER_MULTICAST_ADDRESS::LengthFlags
	Win32LengthFlagsUnion_t1910118479  ___LengthFlags_0;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_MULTICAST_ADDRESS::Next
	IntPtr_t ___Next_1;
	// System.Net.NetworkInformation.Win32_SOCKET_ADDRESS System.Net.NetworkInformation.Win32_IP_ADAPTER_MULTICAST_ADDRESS::Address
	Win32_SOCKET_ADDRESS_t1093973396  ___Address_2;

public:
	inline static int32_t get_offset_of_LengthFlags_0() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_MULTICAST_ADDRESS_t2877128995, ___LengthFlags_0)); }
	inline Win32LengthFlagsUnion_t1910118479  get_LengthFlags_0() const { return ___LengthFlags_0; }
	inline Win32LengthFlagsUnion_t1910118479 * get_address_of_LengthFlags_0() { return &___LengthFlags_0; }
	inline void set_LengthFlags_0(Win32LengthFlagsUnion_t1910118479  value)
	{
		___LengthFlags_0 = value;
	}

	inline static int32_t get_offset_of_Next_1() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_MULTICAST_ADDRESS_t2877128995, ___Next_1)); }
	inline IntPtr_t get_Next_1() const { return ___Next_1; }
	inline IntPtr_t* get_address_of_Next_1() { return &___Next_1; }
	inline void set_Next_1(IntPtr_t value)
	{
		___Next_1 = value;
	}

	inline static int32_t get_offset_of_Address_2() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_MULTICAST_ADDRESS_t2877128995, ___Address_2)); }
	inline Win32_SOCKET_ADDRESS_t1093973396  get_Address_2() const { return ___Address_2; }
	inline Win32_SOCKET_ADDRESS_t1093973396 * get_address_of_Address_2() { return &___Address_2; }
	inline void set_Address_2(Win32_SOCKET_ADDRESS_t1093973396  value)
	{
		___Address_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
