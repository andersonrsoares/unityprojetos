#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "System_System_Net_NetworkInformation_Win32_MIBICMP3893422550.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_MIB_ICMP_EX
struct  Win32_MIB_ICMP_EX_t2748725486 
{
public:
	// System.Net.NetworkInformation.Win32_MIBICMPSTATS_EX System.Net.NetworkInformation.Win32_MIB_ICMP_EX::InStats
	Win32_MIBICMPSTATS_EX_t3893422550  ___InStats_0;
	// System.Net.NetworkInformation.Win32_MIBICMPSTATS_EX System.Net.NetworkInformation.Win32_MIB_ICMP_EX::OutStats
	Win32_MIBICMPSTATS_EX_t3893422550  ___OutStats_1;

public:
	inline static int32_t get_offset_of_InStats_0() { return static_cast<int32_t>(offsetof(Win32_MIB_ICMP_EX_t2748725486, ___InStats_0)); }
	inline Win32_MIBICMPSTATS_EX_t3893422550  get_InStats_0() const { return ___InStats_0; }
	inline Win32_MIBICMPSTATS_EX_t3893422550 * get_address_of_InStats_0() { return &___InStats_0; }
	inline void set_InStats_0(Win32_MIBICMPSTATS_EX_t3893422550  value)
	{
		___InStats_0 = value;
	}

	inline static int32_t get_offset_of_OutStats_1() { return static_cast<int32_t>(offsetof(Win32_MIB_ICMP_EX_t2748725486, ___OutStats_1)); }
	inline Win32_MIBICMPSTATS_EX_t3893422550  get_OutStats_1() const { return ___OutStats_1; }
	inline Win32_MIBICMPSTATS_EX_t3893422550 * get_address_of_OutStats_1() { return &___OutStats_1; }
	inline void set_OutStats_1(Win32_MIBICMPSTATS_EX_t3893422550  value)
	{
		___OutStats_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.Win32_MIB_ICMP_EX
struct Win32_MIB_ICMP_EX_t2748725486_marshaled_pinvoke
{
	Win32_MIBICMPSTATS_EX_t3893422550_marshaled_pinvoke ___InStats_0;
	Win32_MIBICMPSTATS_EX_t3893422550_marshaled_pinvoke ___OutStats_1;
};
// Native definition for COM marshalling of System.Net.NetworkInformation.Win32_MIB_ICMP_EX
struct Win32_MIB_ICMP_EX_t2748725486_marshaled_com
{
	Win32_MIBICMPSTATS_EX_t3893422550_marshaled_com ___InStats_0;
	Win32_MIBICMPSTATS_EX_t3893422550_marshaled_com ___OutStats_1;
};
