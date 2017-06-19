#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.IList`1<System.String>
struct IList_1_t2570160834;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t2603311978;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Connection.PersistentConnectionImpl/ListenQuerySpec
struct  ListenQuerySpec_t2050960365  : public Il2CppObject
{
public:
	// System.Collections.Generic.IList`1<System.String> Firebase.Database.Internal.Connection.PersistentConnectionImpl/ListenQuerySpec::Path
	Il2CppObject* ___Path_0;
	// System.String Firebase.Database.Internal.Connection.PersistentConnectionImpl/ListenQuerySpec::_pathAsString
	String_t* ____pathAsString_1;
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> Firebase.Database.Internal.Connection.PersistentConnectionImpl/ListenQuerySpec::QueryParams
	Il2CppObject* ___QueryParams_2;

public:
	inline static int32_t get_offset_of_Path_0() { return static_cast<int32_t>(offsetof(ListenQuerySpec_t2050960365, ___Path_0)); }
	inline Il2CppObject* get_Path_0() const { return ___Path_0; }
	inline Il2CppObject** get_address_of_Path_0() { return &___Path_0; }
	inline void set_Path_0(Il2CppObject* value)
	{
		___Path_0 = value;
		Il2CppCodeGenWriteBarrier(&___Path_0, value);
	}

	inline static int32_t get_offset_of__pathAsString_1() { return static_cast<int32_t>(offsetof(ListenQuerySpec_t2050960365, ____pathAsString_1)); }
	inline String_t* get__pathAsString_1() const { return ____pathAsString_1; }
	inline String_t** get_address_of__pathAsString_1() { return &____pathAsString_1; }
	inline void set__pathAsString_1(String_t* value)
	{
		____pathAsString_1 = value;
		Il2CppCodeGenWriteBarrier(&____pathAsString_1, value);
	}

	inline static int32_t get_offset_of_QueryParams_2() { return static_cast<int32_t>(offsetof(ListenQuerySpec_t2050960365, ___QueryParams_2)); }
	inline Il2CppObject* get_QueryParams_2() const { return ___QueryParams_2; }
	inline Il2CppObject** get_address_of_QueryParams_2() { return &___QueryParams_2; }
	inline void set_QueryParams_2(Il2CppObject* value)
	{
		___QueryParams_2 = value;
		Il2CppCodeGenWriteBarrier(&___QueryParams_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
