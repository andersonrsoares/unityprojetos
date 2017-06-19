#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.List`1<System.Net.NetworkInformation.MulticastIPAddressInformation>
struct List_1_t949889585;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MulticastIPAddressInformationCollection
struct  MulticastIPAddressInformationCollection_t2350102231  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<System.Net.NetworkInformation.MulticastIPAddressInformation> System.Net.NetworkInformation.MulticastIPAddressInformationCollection::list
	List_1_t949889585 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(MulticastIPAddressInformationCollection_t2350102231, ___list_0)); }
	inline List_1_t949889585 * get_list_0() const { return ___list_0; }
	inline List_1_t949889585 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t949889585 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier(&___list_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
