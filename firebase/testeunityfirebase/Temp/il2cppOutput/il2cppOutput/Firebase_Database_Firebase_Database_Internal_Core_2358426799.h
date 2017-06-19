#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Database.Internal.Core.SyncTree
struct SyncTree_t528142079;
// Firebase.Database.Internal.Core.EventRegistration
struct EventRegistration_t4222917807;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.SyncTree/Callable399
struct  Callable399_t2358426799  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Core.SyncTree Firebase.Database.Internal.Core.SyncTree/Callable399::_enclosing
	SyncTree_t528142079 * ____enclosing_0;
	// Firebase.Database.Internal.Core.EventRegistration Firebase.Database.Internal.Core.SyncTree/Callable399::_eventRegistration
	EventRegistration_t4222917807 * ____eventRegistration_1;

public:
	inline static int32_t get_offset_of__enclosing_0() { return static_cast<int32_t>(offsetof(Callable399_t2358426799, ____enclosing_0)); }
	inline SyncTree_t528142079 * get__enclosing_0() const { return ____enclosing_0; }
	inline SyncTree_t528142079 ** get_address_of__enclosing_0() { return &____enclosing_0; }
	inline void set__enclosing_0(SyncTree_t528142079 * value)
	{
		____enclosing_0 = value;
		Il2CppCodeGenWriteBarrier(&____enclosing_0, value);
	}

	inline static int32_t get_offset_of__eventRegistration_1() { return static_cast<int32_t>(offsetof(Callable399_t2358426799, ____eventRegistration_1)); }
	inline EventRegistration_t4222917807 * get__eventRegistration_1() const { return ____eventRegistration_1; }
	inline EventRegistration_t4222917807 ** get_address_of__eventRegistration_1() { return &____eventRegistration_1; }
	inline void set__eventRegistration_1(EventRegistration_t4222917807 * value)
	{
		____eventRegistration_1 = value;
		Il2CppCodeGenWriteBarrier(&____eventRegistration_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
