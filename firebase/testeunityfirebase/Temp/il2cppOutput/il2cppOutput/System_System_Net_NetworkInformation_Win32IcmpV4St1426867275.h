#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_System_Net_NetworkInformation_IcmpV4Statist1794928690.h"
#include "System_System_Net_NetworkInformation_Win32_MIBICMPS683952994.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32IcmpV4Statistics
struct  Win32IcmpV4Statistics_t1426867275  : public IcmpV4Statistics_t1794928690
{
public:
	// System.Net.NetworkInformation.Win32_MIBICMPSTATS System.Net.NetworkInformation.Win32IcmpV4Statistics::iin
	Win32_MIBICMPSTATS_t683952994  ___iin_0;
	// System.Net.NetworkInformation.Win32_MIBICMPSTATS System.Net.NetworkInformation.Win32IcmpV4Statistics::iout
	Win32_MIBICMPSTATS_t683952994  ___iout_1;

public:
	inline static int32_t get_offset_of_iin_0() { return static_cast<int32_t>(offsetof(Win32IcmpV4Statistics_t1426867275, ___iin_0)); }
	inline Win32_MIBICMPSTATS_t683952994  get_iin_0() const { return ___iin_0; }
	inline Win32_MIBICMPSTATS_t683952994 * get_address_of_iin_0() { return &___iin_0; }
	inline void set_iin_0(Win32_MIBICMPSTATS_t683952994  value)
	{
		___iin_0 = value;
	}

	inline static int32_t get_offset_of_iout_1() { return static_cast<int32_t>(offsetof(Win32IcmpV4Statistics_t1426867275, ___iout_1)); }
	inline Win32_MIBICMPSTATS_t683952994  get_iout_1() const { return ___iout_1; }
	inline Win32_MIBICMPSTATS_t683952994 * get_address_of_iout_1() { return &___iout_1; }
	inline void set_iout_1(Win32_MIBICMPSTATS_t683952994  value)
	{
		___iout_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
