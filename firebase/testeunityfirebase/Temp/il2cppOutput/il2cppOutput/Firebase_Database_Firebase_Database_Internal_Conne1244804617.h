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
// Firebase.Database.Internal.Connection.PersistentConnectionImpl
struct PersistentConnectionImpl_t1099507887;
// Firebase.Database.Internal.Connection.IRequestResultCallback
struct IRequestResultCallback_t1513452486;
// Firebase.Database.Internal.Connection.PersistentConnectionImpl/OutstandingPut
struct OutstandingPut_t774816424;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Connection.PersistentConnectionImpl/ConnectionRequestCallback941
struct  ConnectionRequestCallback941_t1244804617  : public Il2CppObject
{
public:
	// System.String Firebase.Database.Internal.Connection.PersistentConnectionImpl/ConnectionRequestCallback941::_action
	String_t* ____action_0;
	// Firebase.Database.Internal.Connection.PersistentConnectionImpl Firebase.Database.Internal.Connection.PersistentConnectionImpl/ConnectionRequestCallback941::_enclosing
	PersistentConnectionImpl_t1099507887 * ____enclosing_1;
	// Firebase.Database.Internal.Connection.IRequestResultCallback Firebase.Database.Internal.Connection.PersistentConnectionImpl/ConnectionRequestCallback941::_onComplete
	Il2CppObject * ____onComplete_2;
	// Firebase.Database.Internal.Connection.PersistentConnectionImpl/OutstandingPut Firebase.Database.Internal.Connection.PersistentConnectionImpl/ConnectionRequestCallback941::_put
	OutstandingPut_t774816424 * ____put_3;
	// System.Int64 Firebase.Database.Internal.Connection.PersistentConnectionImpl/ConnectionRequestCallback941::_putId
	int64_t ____putId_4;

public:
	inline static int32_t get_offset_of__action_0() { return static_cast<int32_t>(offsetof(ConnectionRequestCallback941_t1244804617, ____action_0)); }
	inline String_t* get__action_0() const { return ____action_0; }
	inline String_t** get_address_of__action_0() { return &____action_0; }
	inline void set__action_0(String_t* value)
	{
		____action_0 = value;
		Il2CppCodeGenWriteBarrier(&____action_0, value);
	}

	inline static int32_t get_offset_of__enclosing_1() { return static_cast<int32_t>(offsetof(ConnectionRequestCallback941_t1244804617, ____enclosing_1)); }
	inline PersistentConnectionImpl_t1099507887 * get__enclosing_1() const { return ____enclosing_1; }
	inline PersistentConnectionImpl_t1099507887 ** get_address_of__enclosing_1() { return &____enclosing_1; }
	inline void set__enclosing_1(PersistentConnectionImpl_t1099507887 * value)
	{
		____enclosing_1 = value;
		Il2CppCodeGenWriteBarrier(&____enclosing_1, value);
	}

	inline static int32_t get_offset_of__onComplete_2() { return static_cast<int32_t>(offsetof(ConnectionRequestCallback941_t1244804617, ____onComplete_2)); }
	inline Il2CppObject * get__onComplete_2() const { return ____onComplete_2; }
	inline Il2CppObject ** get_address_of__onComplete_2() { return &____onComplete_2; }
	inline void set__onComplete_2(Il2CppObject * value)
	{
		____onComplete_2 = value;
		Il2CppCodeGenWriteBarrier(&____onComplete_2, value);
	}

	inline static int32_t get_offset_of__put_3() { return static_cast<int32_t>(offsetof(ConnectionRequestCallback941_t1244804617, ____put_3)); }
	inline OutstandingPut_t774816424 * get__put_3() const { return ____put_3; }
	inline OutstandingPut_t774816424 ** get_address_of__put_3() { return &____put_3; }
	inline void set__put_3(OutstandingPut_t774816424 * value)
	{
		____put_3 = value;
		Il2CppCodeGenWriteBarrier(&____put_3, value);
	}

	inline static int32_t get_offset_of__putId_4() { return static_cast<int32_t>(offsetof(ConnectionRequestCallback941_t1244804617, ____putId_4)); }
	inline int64_t get__putId_4() const { return ____putId_4; }
	inline int64_t* get_address_of__putId_4() { return &____putId_4; }
	inline void set__putId_4(int64_t value)
	{
		____putId_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
