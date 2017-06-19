#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "mscorlib_System_IntPtr2504060609.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_SOCKET_ADDRESS
struct  Win32_SOCKET_ADDRESS_t1093973396 
{
public:
	// System.IntPtr System.Net.NetworkInformation.Win32_SOCKET_ADDRESS::Sockaddr
	IntPtr_t ___Sockaddr_1;
	// System.Int32 System.Net.NetworkInformation.Win32_SOCKET_ADDRESS::SockaddrLength
	int32_t ___SockaddrLength_2;

public:
	inline static int32_t get_offset_of_Sockaddr_1() { return static_cast<int32_t>(offsetof(Win32_SOCKET_ADDRESS_t1093973396, ___Sockaddr_1)); }
	inline IntPtr_t get_Sockaddr_1() const { return ___Sockaddr_1; }
	inline IntPtr_t* get_address_of_Sockaddr_1() { return &___Sockaddr_1; }
	inline void set_Sockaddr_1(IntPtr_t value)
	{
		___Sockaddr_1 = value;
	}

	inline static int32_t get_offset_of_SockaddrLength_2() { return static_cast<int32_t>(offsetof(Win32_SOCKET_ADDRESS_t1093973396, ___SockaddrLength_2)); }
	inline int32_t get_SockaddrLength_2() const { return ___SockaddrLength_2; }
	inline int32_t* get_address_of_SockaddrLength_2() { return &___SockaddrLength_2; }
	inline void set_SockaddrLength_2(int32_t value)
	{
		___SockaddrLength_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
