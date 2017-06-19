#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Database.Internal.Connection.PersistentConnectionImpl
struct PersistentConnectionImpl_t1099507887;
// Firebase.Database.Internal.Connection.PersistentConnectionImpl/OutstandingListen
struct OutstandingListen_t67058648;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Connection.PersistentConnectionImpl/ConnectionRequestCallback993
struct  ConnectionRequestCallback993_t485289728  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Connection.PersistentConnectionImpl Firebase.Database.Internal.Connection.PersistentConnectionImpl/ConnectionRequestCallback993::_enclosing
	PersistentConnectionImpl_t1099507887 * ____enclosing_0;
	// Firebase.Database.Internal.Connection.PersistentConnectionImpl/OutstandingListen Firebase.Database.Internal.Connection.PersistentConnectionImpl/ConnectionRequestCallback993::_listen
	OutstandingListen_t67058648 * ____listen_1;

public:
	inline static int32_t get_offset_of__enclosing_0() { return static_cast<int32_t>(offsetof(ConnectionRequestCallback993_t485289728, ____enclosing_0)); }
	inline PersistentConnectionImpl_t1099507887 * get__enclosing_0() const { return ____enclosing_0; }
	inline PersistentConnectionImpl_t1099507887 ** get_address_of__enclosing_0() { return &____enclosing_0; }
	inline void set__enclosing_0(PersistentConnectionImpl_t1099507887 * value)
	{
		____enclosing_0 = value;
		Il2CppCodeGenWriteBarrier(&____enclosing_0, value);
	}

	inline static int32_t get_offset_of__listen_1() { return static_cast<int32_t>(offsetof(ConnectionRequestCallback993_t485289728, ____listen_1)); }
	inline OutstandingListen_t67058648 * get__listen_1() const { return ____listen_1; }
	inline OutstandingListen_t67058648 ** get_address_of__listen_1() { return &____listen_1; }
	inline void set__listen_1(OutstandingListen_t67058648 * value)
	{
		____listen_1 = value;
		Il2CppCodeGenWriteBarrier(&____listen_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
