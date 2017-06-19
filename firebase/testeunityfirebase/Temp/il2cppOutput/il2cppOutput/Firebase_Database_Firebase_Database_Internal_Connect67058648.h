#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Nullable_1_gen3467111648.h"

// Firebase.Database.Internal.Connection.IListenHashProvider
struct IListenHashProvider_t1509816543;
// Firebase.Database.Internal.Connection.PersistentConnectionImpl/ListenQuerySpec
struct ListenQuerySpec_t2050960365;
// Firebase.Database.Internal.Connection.IRequestResultCallback
struct IRequestResultCallback_t1513452486;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Connection.PersistentConnectionImpl/OutstandingListen
struct  OutstandingListen_t67058648  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Connection.IListenHashProvider Firebase.Database.Internal.Connection.PersistentConnectionImpl/OutstandingListen::_hashFunction
	Il2CppObject * ____hashFunction_0;
	// Firebase.Database.Internal.Connection.PersistentConnectionImpl/ListenQuerySpec Firebase.Database.Internal.Connection.PersistentConnectionImpl/OutstandingListen::Query
	ListenQuerySpec_t2050960365 * ___Query_1;
	// Firebase.Database.Internal.Connection.IRequestResultCallback Firebase.Database.Internal.Connection.PersistentConnectionImpl/OutstandingListen::ResultCallback
	Il2CppObject * ___ResultCallback_2;
	// System.Nullable`1<System.Int64> Firebase.Database.Internal.Connection.PersistentConnectionImpl/OutstandingListen::_tag
	Nullable_1_t3467111648  ____tag_3;

public:
	inline static int32_t get_offset_of__hashFunction_0() { return static_cast<int32_t>(offsetof(OutstandingListen_t67058648, ____hashFunction_0)); }
	inline Il2CppObject * get__hashFunction_0() const { return ____hashFunction_0; }
	inline Il2CppObject ** get_address_of__hashFunction_0() { return &____hashFunction_0; }
	inline void set__hashFunction_0(Il2CppObject * value)
	{
		____hashFunction_0 = value;
		Il2CppCodeGenWriteBarrier(&____hashFunction_0, value);
	}

	inline static int32_t get_offset_of_Query_1() { return static_cast<int32_t>(offsetof(OutstandingListen_t67058648, ___Query_1)); }
	inline ListenQuerySpec_t2050960365 * get_Query_1() const { return ___Query_1; }
	inline ListenQuerySpec_t2050960365 ** get_address_of_Query_1() { return &___Query_1; }
	inline void set_Query_1(ListenQuerySpec_t2050960365 * value)
	{
		___Query_1 = value;
		Il2CppCodeGenWriteBarrier(&___Query_1, value);
	}

	inline static int32_t get_offset_of_ResultCallback_2() { return static_cast<int32_t>(offsetof(OutstandingListen_t67058648, ___ResultCallback_2)); }
	inline Il2CppObject * get_ResultCallback_2() const { return ___ResultCallback_2; }
	inline Il2CppObject ** get_address_of_ResultCallback_2() { return &___ResultCallback_2; }
	inline void set_ResultCallback_2(Il2CppObject * value)
	{
		___ResultCallback_2 = value;
		Il2CppCodeGenWriteBarrier(&___ResultCallback_2, value);
	}

	inline static int32_t get_offset_of__tag_3() { return static_cast<int32_t>(offsetof(OutstandingListen_t67058648, ____tag_3)); }
	inline Nullable_1_t3467111648  get__tag_3() const { return ____tag_3; }
	inline Nullable_1_t3467111648 * get_address_of__tag_3() { return &____tag_3; }
	inline void set__tag_3(Nullable_1_t3467111648  value)
	{
		____tag_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
