#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_UDPROW
struct  Win32_MIB_UDPROW_t3234258897  : public Il2CppObject
{
public:
	// System.UInt32 System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_UDPROW::LocalAddr
	uint32_t ___LocalAddr_0;
	// System.Int32 System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_UDPROW::LocalPort
	int32_t ___LocalPort_1;

public:
	inline static int32_t get_offset_of_LocalAddr_0() { return static_cast<int32_t>(offsetof(Win32_MIB_UDPROW_t3234258897, ___LocalAddr_0)); }
	inline uint32_t get_LocalAddr_0() const { return ___LocalAddr_0; }
	inline uint32_t* get_address_of_LocalAddr_0() { return &___LocalAddr_0; }
	inline void set_LocalAddr_0(uint32_t value)
	{
		___LocalAddr_0 = value;
	}

	inline static int32_t get_offset_of_LocalPort_1() { return static_cast<int32_t>(offsetof(Win32_MIB_UDPROW_t3234258897, ___LocalPort_1)); }
	inline int32_t get_LocalPort_1() const { return ___LocalPort_1; }
	inline int32_t* get_address_of_LocalPort_1() { return &___LocalPort_1; }
	inline void set_LocalPort_1(int32_t value)
	{
		___LocalPort_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_UDPROW
struct Win32_MIB_UDPROW_t3234258897_marshaled_pinvoke
{
	uint32_t ___LocalAddr_0;
	int32_t ___LocalPort_1;
};
// Native definition for COM marshalling of System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_UDPROW
struct Win32_MIB_UDPROW_t3234258897_marshaled_com
{
	uint32_t ___LocalAddr_0;
	int32_t ___LocalPort_1;
};
