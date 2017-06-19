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
#include "System_System_Net_NetworkInformation_Win32IPGlobal3054921274.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_TCP6ROW
struct  Win32_MIB_TCP6ROW_t4007155549  : public Il2CppObject
{
public:
	// System.Net.NetworkInformation.TcpState System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_TCP6ROW::State
	int32_t ___State_0;
	// System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_IN6_ADDR System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_TCP6ROW::LocalAddr
	Win32_IN6_ADDR_t3054921274  ___LocalAddr_1;
	// System.UInt32 System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_TCP6ROW::LocalScopeId
	uint32_t ___LocalScopeId_2;
	// System.Int32 System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_TCP6ROW::LocalPort
	int32_t ___LocalPort_3;
	// System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_IN6_ADDR System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_TCP6ROW::RemoteAddr
	Win32_IN6_ADDR_t3054921274  ___RemoteAddr_4;
	// System.UInt32 System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_TCP6ROW::RemoteScopeId
	uint32_t ___RemoteScopeId_5;
	// System.Int32 System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_TCP6ROW::RemotePort
	int32_t ___RemotePort_6;

public:
	inline static int32_t get_offset_of_State_0() { return static_cast<int32_t>(offsetof(Win32_MIB_TCP6ROW_t4007155549, ___State_0)); }
	inline int32_t get_State_0() const { return ___State_0; }
	inline int32_t* get_address_of_State_0() { return &___State_0; }
	inline void set_State_0(int32_t value)
	{
		___State_0 = value;
	}

	inline static int32_t get_offset_of_LocalAddr_1() { return static_cast<int32_t>(offsetof(Win32_MIB_TCP6ROW_t4007155549, ___LocalAddr_1)); }
	inline Win32_IN6_ADDR_t3054921274  get_LocalAddr_1() const { return ___LocalAddr_1; }
	inline Win32_IN6_ADDR_t3054921274 * get_address_of_LocalAddr_1() { return &___LocalAddr_1; }
	inline void set_LocalAddr_1(Win32_IN6_ADDR_t3054921274  value)
	{
		___LocalAddr_1 = value;
	}

	inline static int32_t get_offset_of_LocalScopeId_2() { return static_cast<int32_t>(offsetof(Win32_MIB_TCP6ROW_t4007155549, ___LocalScopeId_2)); }
	inline uint32_t get_LocalScopeId_2() const { return ___LocalScopeId_2; }
	inline uint32_t* get_address_of_LocalScopeId_2() { return &___LocalScopeId_2; }
	inline void set_LocalScopeId_2(uint32_t value)
	{
		___LocalScopeId_2 = value;
	}

	inline static int32_t get_offset_of_LocalPort_3() { return static_cast<int32_t>(offsetof(Win32_MIB_TCP6ROW_t4007155549, ___LocalPort_3)); }
	inline int32_t get_LocalPort_3() const { return ___LocalPort_3; }
	inline int32_t* get_address_of_LocalPort_3() { return &___LocalPort_3; }
	inline void set_LocalPort_3(int32_t value)
	{
		___LocalPort_3 = value;
	}

	inline static int32_t get_offset_of_RemoteAddr_4() { return static_cast<int32_t>(offsetof(Win32_MIB_TCP6ROW_t4007155549, ___RemoteAddr_4)); }
	inline Win32_IN6_ADDR_t3054921274  get_RemoteAddr_4() const { return ___RemoteAddr_4; }
	inline Win32_IN6_ADDR_t3054921274 * get_address_of_RemoteAddr_4() { return &___RemoteAddr_4; }
	inline void set_RemoteAddr_4(Win32_IN6_ADDR_t3054921274  value)
	{
		___RemoteAddr_4 = value;
	}

	inline static int32_t get_offset_of_RemoteScopeId_5() { return static_cast<int32_t>(offsetof(Win32_MIB_TCP6ROW_t4007155549, ___RemoteScopeId_5)); }
	inline uint32_t get_RemoteScopeId_5() const { return ___RemoteScopeId_5; }
	inline uint32_t* get_address_of_RemoteScopeId_5() { return &___RemoteScopeId_5; }
	inline void set_RemoteScopeId_5(uint32_t value)
	{
		___RemoteScopeId_5 = value;
	}

	inline static int32_t get_offset_of_RemotePort_6() { return static_cast<int32_t>(offsetof(Win32_MIB_TCP6ROW_t4007155549, ___RemotePort_6)); }
	inline int32_t get_RemotePort_6() const { return ___RemotePort_6; }
	inline int32_t* get_address_of_RemotePort_6() { return &___RemotePort_6; }
	inline void set_RemotePort_6(int32_t value)
	{
		___RemotePort_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_TCP6ROW
struct Win32_MIB_TCP6ROW_t4007155549_marshaled_pinvoke
{
	int32_t ___State_0;
	Win32_IN6_ADDR_t3054921274_marshaled_pinvoke ___LocalAddr_1;
	uint32_t ___LocalScopeId_2;
	int32_t ___LocalPort_3;
	Win32_IN6_ADDR_t3054921274_marshaled_pinvoke ___RemoteAddr_4;
	uint32_t ___RemoteScopeId_5;
	int32_t ___RemotePort_6;
};
// Native definition for COM marshalling of System.Net.NetworkInformation.Win32IPGlobalProperties/Win32_MIB_TCP6ROW
struct Win32_MIB_TCP6ROW_t4007155549_marshaled_com
{
	int32_t ___State_0;
	Win32_IN6_ADDR_t3054921274_marshaled_com ___LocalAddr_1;
	uint32_t ___LocalScopeId_2;
	int32_t ___LocalPort_3;
	Win32_IN6_ADDR_t3054921274_marshaled_com ___RemoteAddr_4;
	uint32_t ___RemoteScopeId_5;
	int32_t ___RemotePort_6;
};
