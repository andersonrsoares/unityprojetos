#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Database.Internal.Core.View.EventRaiser
struct EventRaiser_t2009560;
// System.Collections.Generic.List`1<Firebase.Database.Internal.Core.View.Event>
struct List_1_t101927534;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.View.EventRaiser/Runnable30
struct  Runnable30_t656865134  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Core.View.EventRaiser Firebase.Database.Internal.Core.View.EventRaiser/Runnable30::_enclosing
	EventRaiser_t2009560 * ____enclosing_0;
	// System.Collections.Generic.List`1<Firebase.Database.Internal.Core.View.Event> Firebase.Database.Internal.Core.View.EventRaiser/Runnable30::_eventsClone
	List_1_t101927534 * ____eventsClone_1;

public:
	inline static int32_t get_offset_of__enclosing_0() { return static_cast<int32_t>(offsetof(Runnable30_t656865134, ____enclosing_0)); }
	inline EventRaiser_t2009560 * get__enclosing_0() const { return ____enclosing_0; }
	inline EventRaiser_t2009560 ** get_address_of__enclosing_0() { return &____enclosing_0; }
	inline void set__enclosing_0(EventRaiser_t2009560 * value)
	{
		____enclosing_0 = value;
		Il2CppCodeGenWriteBarrier(&____enclosing_0, value);
	}

	inline static int32_t get_offset_of__eventsClone_1() { return static_cast<int32_t>(offsetof(Runnable30_t656865134, ____eventsClone_1)); }
	inline List_1_t101927534 * get__eventsClone_1() const { return ____eventsClone_1; }
	inline List_1_t101927534 ** get_address_of__eventsClone_1() { return &____eventsClone_1; }
	inline void set__eventsClone_1(List_1_t101927534 * value)
	{
		____eventsClone_1 = value;
		Il2CppCodeGenWriteBarrier(&____eventsClone_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
