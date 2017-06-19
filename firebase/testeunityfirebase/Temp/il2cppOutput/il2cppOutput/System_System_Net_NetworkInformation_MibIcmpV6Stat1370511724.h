#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_System_Net_NetworkInformation_IcmpV6Statistic86748584.h"

// System.Collections.Specialized.StringDictionary
struct StringDictionary_t1070889667;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MibIcmpV6Statistics
struct  MibIcmpV6Statistics_t1370511724  : public IcmpV6Statistics_t86748584
{
public:
	// System.Collections.Specialized.StringDictionary System.Net.NetworkInformation.MibIcmpV6Statistics::dic
	StringDictionary_t1070889667 * ___dic_0;

public:
	inline static int32_t get_offset_of_dic_0() { return static_cast<int32_t>(offsetof(MibIcmpV6Statistics_t1370511724, ___dic_0)); }
	inline StringDictionary_t1070889667 * get_dic_0() const { return ___dic_0; }
	inline StringDictionary_t1070889667 ** get_address_of_dic_0() { return &___dic_0; }
	inline void set_dic_0(StringDictionary_t1070889667 * value)
	{
		___dic_0 = value;
		Il2CppCodeGenWriteBarrier(&___dic_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
