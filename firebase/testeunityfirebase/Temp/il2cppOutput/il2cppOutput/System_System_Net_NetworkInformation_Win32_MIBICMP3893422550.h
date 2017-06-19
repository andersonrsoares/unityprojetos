#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "mscorlib_System_UInt322149682021.h"

// System.UInt32[]
struct UInt32U5BU5D_t59386216;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_MIBICMPSTATS_EX
struct  Win32_MIBICMPSTATS_EX_t3893422550 
{
public:
	// System.UInt32 System.Net.NetworkInformation.Win32_MIBICMPSTATS_EX::Msgs
	uint32_t ___Msgs_0;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIBICMPSTATS_EX::Errors
	uint32_t ___Errors_1;
	// System.UInt32[] System.Net.NetworkInformation.Win32_MIBICMPSTATS_EX::Counts
	UInt32U5BU5D_t59386216* ___Counts_2;

public:
	inline static int32_t get_offset_of_Msgs_0() { return static_cast<int32_t>(offsetof(Win32_MIBICMPSTATS_EX_t3893422550, ___Msgs_0)); }
	inline uint32_t get_Msgs_0() const { return ___Msgs_0; }
	inline uint32_t* get_address_of_Msgs_0() { return &___Msgs_0; }
	inline void set_Msgs_0(uint32_t value)
	{
		___Msgs_0 = value;
	}

	inline static int32_t get_offset_of_Errors_1() { return static_cast<int32_t>(offsetof(Win32_MIBICMPSTATS_EX_t3893422550, ___Errors_1)); }
	inline uint32_t get_Errors_1() const { return ___Errors_1; }
	inline uint32_t* get_address_of_Errors_1() { return &___Errors_1; }
	inline void set_Errors_1(uint32_t value)
	{
		___Errors_1 = value;
	}

	inline static int32_t get_offset_of_Counts_2() { return static_cast<int32_t>(offsetof(Win32_MIBICMPSTATS_EX_t3893422550, ___Counts_2)); }
	inline UInt32U5BU5D_t59386216* get_Counts_2() const { return ___Counts_2; }
	inline UInt32U5BU5D_t59386216** get_address_of_Counts_2() { return &___Counts_2; }
	inline void set_Counts_2(UInt32U5BU5D_t59386216* value)
	{
		___Counts_2 = value;
		Il2CppCodeGenWriteBarrier(&___Counts_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.Win32_MIBICMPSTATS_EX
struct Win32_MIBICMPSTATS_EX_t3893422550_marshaled_pinvoke
{
	uint32_t ___Msgs_0;
	uint32_t ___Errors_1;
	uint32_t ___Counts_2[256];
};
// Native definition for COM marshalling of System.Net.NetworkInformation.Win32_MIBICMPSTATS_EX
struct Win32_MIBICMPSTATS_EX_t3893422550_marshaled_com
{
	uint32_t ___Msgs_0;
	uint32_t ___Errors_1;
	uint32_t ___Counts_2[256];
};
