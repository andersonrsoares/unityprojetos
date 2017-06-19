#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_System_Net_NetworkInformation_IPGlobalStatis106289253.h"

// System.Collections.Specialized.StringDictionary
struct StringDictionary_t1070889667;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MibIPGlobalStatistics
struct  MibIPGlobalStatistics_t1312635647  : public IPGlobalStatistics_t106289253
{
public:
	// System.Collections.Specialized.StringDictionary System.Net.NetworkInformation.MibIPGlobalStatistics::dic
	StringDictionary_t1070889667 * ___dic_0;

public:
	inline static int32_t get_offset_of_dic_0() { return static_cast<int32_t>(offsetof(MibIPGlobalStatistics_t1312635647, ___dic_0)); }
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
