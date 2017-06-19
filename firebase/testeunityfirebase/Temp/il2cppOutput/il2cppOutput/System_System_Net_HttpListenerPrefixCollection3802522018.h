#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// System.Net.HttpListener
struct HttpListener_t4041012462;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.HttpListenerPrefixCollection
struct  HttpListenerPrefixCollection_t3802522018  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<System.String> System.Net.HttpListenerPrefixCollection::prefixes
	List_1_t1398341365 * ___prefixes_0;
	// System.Net.HttpListener System.Net.HttpListenerPrefixCollection::listener
	HttpListener_t4041012462 * ___listener_1;

public:
	inline static int32_t get_offset_of_prefixes_0() { return static_cast<int32_t>(offsetof(HttpListenerPrefixCollection_t3802522018, ___prefixes_0)); }
	inline List_1_t1398341365 * get_prefixes_0() const { return ___prefixes_0; }
	inline List_1_t1398341365 ** get_address_of_prefixes_0() { return &___prefixes_0; }
	inline void set_prefixes_0(List_1_t1398341365 * value)
	{
		___prefixes_0 = value;
		Il2CppCodeGenWriteBarrier(&___prefixes_0, value);
	}

	inline static int32_t get_offset_of_listener_1() { return static_cast<int32_t>(offsetof(HttpListenerPrefixCollection_t3802522018, ___listener_1)); }
	inline HttpListener_t4041012462 * get_listener_1() const { return ___listener_1; }
	inline HttpListener_t4041012462 ** get_address_of_listener_1() { return &___listener_1; }
	inline void set_listener_1(HttpListener_t4041012462 * value)
	{
		___listener_1 = value;
		Il2CppCodeGenWriteBarrier(&___listener_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
