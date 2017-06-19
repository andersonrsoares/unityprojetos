#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Connection.HostInfo
struct  HostInfo_t2292118836  : public Il2CppObject
{
public:
	// System.String Firebase.Database.Internal.Connection.HostInfo::_host
	String_t* ____host_0;
	// System.String Firebase.Database.Internal.Connection.HostInfo::_namespace
	String_t* ____namespace_1;
	// System.Boolean Firebase.Database.Internal.Connection.HostInfo::_secure
	bool ____secure_2;

public:
	inline static int32_t get_offset_of__host_0() { return static_cast<int32_t>(offsetof(HostInfo_t2292118836, ____host_0)); }
	inline String_t* get__host_0() const { return ____host_0; }
	inline String_t** get_address_of__host_0() { return &____host_0; }
	inline void set__host_0(String_t* value)
	{
		____host_0 = value;
		Il2CppCodeGenWriteBarrier(&____host_0, value);
	}

	inline static int32_t get_offset_of__namespace_1() { return static_cast<int32_t>(offsetof(HostInfo_t2292118836, ____namespace_1)); }
	inline String_t* get__namespace_1() const { return ____namespace_1; }
	inline String_t** get_address_of__namespace_1() { return &____namespace_1; }
	inline void set__namespace_1(String_t* value)
	{
		____namespace_1 = value;
		Il2CppCodeGenWriteBarrier(&____namespace_1, value);
	}

	inline static int32_t get_offset_of__secure_2() { return static_cast<int32_t>(offsetof(HostInfo_t2292118836, ____secure_2)); }
	inline bool get__secure_2() const { return ____secure_2; }
	inline bool* get_address_of__secure_2() { return &____secure_2; }
	inline void set__secure_2(bool value)
	{
		____secure_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
