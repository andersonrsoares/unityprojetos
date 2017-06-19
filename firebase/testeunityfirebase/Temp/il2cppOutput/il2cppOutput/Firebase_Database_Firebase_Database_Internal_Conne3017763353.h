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
// System.Object
struct Il2CppObject;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t2570160834;
// Firebase.Database.Internal.Connection.IRequestResultCallback
struct IRequestResultCallback_t1513452486;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Connection.PersistentConnectionImpl/OutstandingDisconnect
struct  OutstandingDisconnect_t3017763353  : public Il2CppObject
{
public:
	// System.String Firebase.Database.Internal.Connection.PersistentConnectionImpl/OutstandingDisconnect::_action
	String_t* ____action_0;
	// System.Object Firebase.Database.Internal.Connection.PersistentConnectionImpl/OutstandingDisconnect::_data
	Il2CppObject * ____data_1;
	// System.Collections.Generic.IList`1<System.String> Firebase.Database.Internal.Connection.PersistentConnectionImpl/OutstandingDisconnect::_path
	Il2CppObject* ____path_2;
	// Firebase.Database.Internal.Connection.IRequestResultCallback Firebase.Database.Internal.Connection.PersistentConnectionImpl/OutstandingDisconnect::OnComplete
	Il2CppObject * ___OnComplete_3;

public:
	inline static int32_t get_offset_of__action_0() { return static_cast<int32_t>(offsetof(OutstandingDisconnect_t3017763353, ____action_0)); }
	inline String_t* get__action_0() const { return ____action_0; }
	inline String_t** get_address_of__action_0() { return &____action_0; }
	inline void set__action_0(String_t* value)
	{
		____action_0 = value;
		Il2CppCodeGenWriteBarrier(&____action_0, value);
	}

	inline static int32_t get_offset_of__data_1() { return static_cast<int32_t>(offsetof(OutstandingDisconnect_t3017763353, ____data_1)); }
	inline Il2CppObject * get__data_1() const { return ____data_1; }
	inline Il2CppObject ** get_address_of__data_1() { return &____data_1; }
	inline void set__data_1(Il2CppObject * value)
	{
		____data_1 = value;
		Il2CppCodeGenWriteBarrier(&____data_1, value);
	}

	inline static int32_t get_offset_of__path_2() { return static_cast<int32_t>(offsetof(OutstandingDisconnect_t3017763353, ____path_2)); }
	inline Il2CppObject* get__path_2() const { return ____path_2; }
	inline Il2CppObject** get_address_of__path_2() { return &____path_2; }
	inline void set__path_2(Il2CppObject* value)
	{
		____path_2 = value;
		Il2CppCodeGenWriteBarrier(&____path_2, value);
	}

	inline static int32_t get_offset_of_OnComplete_3() { return static_cast<int32_t>(offsetof(OutstandingDisconnect_t3017763353, ___OnComplete_3)); }
	inline Il2CppObject * get_OnComplete_3() const { return ___OnComplete_3; }
	inline Il2CppObject ** get_address_of_OnComplete_3() { return &___OnComplete_3; }
	inline void set_OnComplete_3(Il2CppObject * value)
	{
		___OnComplete_3 = value;
		Il2CppCodeGenWriteBarrier(&___OnComplete_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
