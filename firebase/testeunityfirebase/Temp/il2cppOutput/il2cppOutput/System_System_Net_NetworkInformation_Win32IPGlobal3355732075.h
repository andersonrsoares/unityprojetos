#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "System_System_Net_NetworkInformation_TcpState3539676666.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_TCPROW
struct  Win32_MIB_TCPROW_t3355732075  : public Il2CppObject
{
public:
	// System.Net.NetworkInformation.TcpState System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_TCPROW::State
	int32_t ___State_0;
	// System.UInt32 System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_TCPROW::LocalAddr
	uint32_t ___LocalAddr_1;
	// System.Int32 System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_TCPROW::LocalPort
	int32_t ___LocalPort_2;
	// System.UInt32 System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_TCPROW::RemoteAddr
	uint32_t ___RemoteAddr_3;
	// System.Int32 System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_TCPROW::RemotePort
	int32_t ___RemotePort_4;

public:
	inline static int32_t get_offset_of_State_0() { return static_cast<int32_t>(offsetof(Win32_MIB_TCPROW_t3355732075, ___State_0)); }
	inline int32_t get_State_0() const { return ___State_0; }
	inline int32_t* get_address_of_State_0() { return &___State_0; }
	inline void set_State_0(int32_t value)
	{
		___State_0 = value;
	}

	inline static int32_t get_offset_of_LocalAddr_1() { return static_cast<int32_t>(offsetof(Win32_MIB_TCPROW_t3355732075, ___LocalAddr_1)); }
	inline uint32_t get_LocalAddr_1() const { return ___LocalAddr_1; }
	inline uint32_t* get_address_of_LocalAddr_1() { return &___LocalAddr_1; }
	inline void set_LocalAddr_1(uint32_t value)
	{
		___LocalAddr_1 = value;
	}

	inline static int32_t get_offset_of_LocalPort_2() { return static_cast<int32_t>(offsetof(Win32_MIB_TCPROW_t3355732075, ___LocalPort_2)); }
	inline int32_t get_LocalPort_2() const { return ___LocalPort_2; }
	inline int32_t* get_address_of_LocalPort_2() { return &___LocalPort_2; }
	inline void set_LocalPort_2(int32_t value)
	{
		___LocalPort_2 = value;
	}

	inline static int32_t get_offset_of_RemoteAddr_3() { return static_cast<int32_t>(offsetof(Win32_MIB_TCPROW_t3355732075, ___RemoteAddr_3)); }
	inline uint32_t get_RemoteAddr_3() const { return ___RemoteAddr_3; }
	inline uint32_t* get_address_of_RemoteAddr_3() { return &___RemoteAddr_3; }
	inline void set_RemoteAddr_3(uint32_t value)
	{
		___RemoteAddr_3 = value;
	}

	inline static int32_t get_offset_of_RemotePort_4() { return static_cast<int32_t>(offsetof(Win32_MIB_TCPROW_t3355732075, ___RemotePort_4)); }
	inline int32_t get_RemotePort_4() const { return ___RemotePort_4; }
	inline int32_t* get_address_of_RemotePort_4() { return &___RemotePort_4; }
	inline void set_RemotePort_4(int32_t value)
	{
		___RemotePort_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_TCPROW
struct Win32_MIB_TCPROW_t3355732075_marshaled_pinvoke
{
	int32_t ___State_0;
	uint32_t ___LocalAddr_1;
	int32_t ___LocalPort_2;
	uint32_t ___RemoteAddr_3;
	int32_t ___RemotePort_4;
};
// Native definition for COM marshalling of System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_TCPROW
struct Win32_MIB_TCPROW_t3355732075_marshaled_com
{
	int32_t ___State_0;
	uint32_t ___LocalAddr_1;
	int32_t ___LocalPort_2;
	uint32_t ___RemoteAddr_3;
	int32_t ___RemotePort_4;
};
