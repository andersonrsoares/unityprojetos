#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "System_System_Net_NetworkInformation_Win32IPGlobal3054921274.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_UDP6ROW
struct  Win32_MIB_UDP6ROW_t2989424443  : public Il2CppObject
{
public:
	// System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_IN6_ADDR System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_UDP6ROW::LocalAddr
	Win32_IN6_ADDR_t3054921274  ___LocalAddr_0;
	// System.UInt32 System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_UDP6ROW::LocalScopeId
	uint32_t ___LocalScopeId_1;
	// System.Int32 System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_UDP6ROW::LocalPort
	int32_t ___LocalPort_2;

public:
	inline static int32_t get_offset_of_LocalAddr_0() { return static_cast<int32_t>(offsetof(Win32_MIB_UDP6ROW_t2989424443, ___LocalAddr_0)); }
	inline Win32_IN6_ADDR_t3054921274  get_LocalAddr_0() const { return ___LocalAddr_0; }
	inline Win32_IN6_ADDR_t3054921274 * get_address_of_LocalAddr_0() { return &___LocalAddr_0; }
	inline void set_LocalAddr_0(Win32_IN6_ADDR_t3054921274  value)
	{
		___LocalAddr_0 = value;
	}

	inline static int32_t get_offset_of_LocalScopeId_1() { return static_cast<int32_t>(offsetof(Win32_MIB_UDP6ROW_t2989424443, ___LocalScopeId_1)); }
	inline uint32_t get_LocalScopeId_1() const { return ___LocalScopeId_1; }
	inline uint32_t* get_address_of_LocalScopeId_1() { return &___LocalScopeId_1; }
	inline void set_LocalScopeId_1(uint32_t value)
	{
		___LocalScopeId_1 = value;
	}

	inline static int32_t get_offset_of_LocalPort_2() { return static_cast<int32_t>(offsetof(Win32_MIB_UDP6ROW_t2989424443, ___LocalPort_2)); }
	inline int32_t get_LocalPort_2() const { return ___LocalPort_2; }
	inline int32_t* get_address_of_LocalPort_2() { return &___LocalPort_2; }
	inline void set_LocalPort_2(int32_t value)
	{
		___LocalPort_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_UDP6ROW
struct Win32_MIB_UDP6ROW_t2989424443_marshaled_pinvoke
{
	Win32_IN6_ADDR_t3054921274_marshaled_pinvoke ___LocalAddr_0;
	uint32_t ___LocalScopeId_1;
	int32_t ___LocalPort_2;
};
// Native definition for COM marshalling of System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_UDP6ROW
struct Win32_MIB_UDP6ROW_t2989424443_marshaled_com
{
	Win32_IN6_ADDR_t3054921274_marshaled_com ___LocalAddr_0;
	uint32_t ___LocalScopeId_1;
	int32_t ___LocalPort_2;
};
