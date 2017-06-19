#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Net.IPAddress
struct IPAddress_t1399971723;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.MulticastOption
struct  MulticastOption_t2505469155  : public Il2CppObject
{
public:
	// System.Net.IPAddress System.Net.Sockets.MulticastOption::group
	IPAddress_t1399971723 * ___group_0;
	// System.Net.IPAddress System.Net.Sockets.MulticastOption::local
	IPAddress_t1399971723 * ___local_1;
	// System.Int32 System.Net.Sockets.MulticastOption::iface_index
	int32_t ___iface_index_2;

public:
	inline static int32_t get_offset_of_group_0() { return static_cast<int32_t>(offsetof(MulticastOption_t2505469155, ___group_0)); }
	inline IPAddress_t1399971723 * get_group_0() const { return ___group_0; }
	inline IPAddress_t1399971723 ** get_address_of_group_0() { return &___group_0; }
	inline void set_group_0(IPAddress_t1399971723 * value)
	{
		___group_0 = value;
		Il2CppCodeGenWriteBarrier(&___group_0, value);
	}

	inline static int32_t get_offset_of_local_1() { return static_cast<int32_t>(offsetof(MulticastOption_t2505469155, ___local_1)); }
	inline IPAddress_t1399971723 * get_local_1() const { return ___local_1; }
	inline IPAddress_t1399971723 ** get_address_of_local_1() { return &___local_1; }
	inline void set_local_1(IPAddress_t1399971723 * value)
	{
		___local_1 = value;
		Il2CppCodeGenWriteBarrier(&___local_1, value);
	}

	inline static int32_t get_offset_of_iface_index_2() { return static_cast<int32_t>(offsetof(MulticastOption_t2505469155, ___iface_index_2)); }
	inline int32_t get_iface_index_2() const { return ___iface_index_2; }
	inline int32_t* get_address_of_iface_index_2() { return &___iface_index_2; }
	inline void set_iface_index_2(int32_t value)
	{
		___iface_index_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
