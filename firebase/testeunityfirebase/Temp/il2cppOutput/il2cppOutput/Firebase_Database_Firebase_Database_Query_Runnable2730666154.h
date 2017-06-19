#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Database.Query
struct Query_t2792659010;
// Firebase.Database.Internal.Core.EventRegistration
struct EventRegistration_t4222917807;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Query/Runnable192
struct  Runnable192_t2730666154  : public Il2CppObject
{
public:
	// Firebase.Database.Query Firebase.Database.Query/Runnable192::_enclosing
	Query_t2792659010 * ____enclosing_0;
	// Firebase.Database.Internal.Core.EventRegistration Firebase.Database.Query/Runnable192::_listener
	EventRegistration_t4222917807 * ____listener_1;

public:
	inline static int32_t get_offset_of__enclosing_0() { return static_cast<int32_t>(offsetof(Runnable192_t2730666154, ____enclosing_0)); }
	inline Query_t2792659010 * get__enclosing_0() const { return ____enclosing_0; }
	inline Query_t2792659010 ** get_address_of__enclosing_0() { return &____enclosing_0; }
	inline void set__enclosing_0(Query_t2792659010 * value)
	{
		____enclosing_0 = value;
		Il2CppCodeGenWriteBarrier(&____enclosing_0, value);
	}

	inline static int32_t get_offset_of__listener_1() { return static_cast<int32_t>(offsetof(Runnable192_t2730666154, ____listener_1)); }
	inline EventRegistration_t4222917807 * get__listener_1() const { return ____listener_1; }
	inline EventRegistration_t4222917807 ** get_address_of__listener_1() { return &____listener_1; }
	inline void set__listener_1(EventRegistration_t4222917807 * value)
	{
		____listener_1 = value;
		Il2CppCodeGenWriteBarrier(&____listener_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
