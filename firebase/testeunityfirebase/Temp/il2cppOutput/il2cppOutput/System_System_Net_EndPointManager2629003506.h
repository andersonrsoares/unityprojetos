#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Hashtable
struct Hashtable_t909839986;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.EndPointManager
struct  EndPointManager_t2629003506  : public Il2CppObject
{
public:

public:
};

struct EndPointManager_t2629003506_StaticFields
{
public:
	// System.Collections.Hashtable System.Net.EndPointManager::ip_to_endpoints
	Hashtable_t909839986 * ___ip_to_endpoints_0;

public:
	inline static int32_t get_offset_of_ip_to_endpoints_0() { return static_cast<int32_t>(offsetof(EndPointManager_t2629003506_StaticFields, ___ip_to_endpoints_0)); }
	inline Hashtable_t909839986 * get_ip_to_endpoints_0() const { return ___ip_to_endpoints_0; }
	inline Hashtable_t909839986 ** get_address_of_ip_to_endpoints_0() { return &___ip_to_endpoints_0; }
	inline void set_ip_to_endpoints_0(Hashtable_t909839986 * value)
	{
		___ip_to_endpoints_0 = value;
		Il2CppCodeGenWriteBarrier(&___ip_to_endpoints_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
