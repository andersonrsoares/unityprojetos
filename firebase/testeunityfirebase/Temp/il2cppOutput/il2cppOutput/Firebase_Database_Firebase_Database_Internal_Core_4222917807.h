#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Google.Sharpen.AtomicBoolean
struct AtomicBoolean_t895648235;
// Firebase.Database.Internal.Core.IEventRegistrationZombieListener
struct IEventRegistrationZombieListener_t2054389000;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.EventRegistration
struct  EventRegistration_t4222917807  : public Il2CppObject
{
public:
	// Google.Sharpen.AtomicBoolean Firebase.Database.Internal.Core.EventRegistration::_zombied
	AtomicBoolean_t895648235 * ____zombied_0;
	// System.Boolean Firebase.Database.Internal.Core.EventRegistration::_isUserInitiated
	bool ____isUserInitiated_1;
	// Firebase.Database.Internal.Core.IEventRegistrationZombieListener Firebase.Database.Internal.Core.EventRegistration::_listener
	Il2CppObject * ____listener_2;

public:
	inline static int32_t get_offset_of__zombied_0() { return static_cast<int32_t>(offsetof(EventRegistration_t4222917807, ____zombied_0)); }
	inline AtomicBoolean_t895648235 * get__zombied_0() const { return ____zombied_0; }
	inline AtomicBoolean_t895648235 ** get_address_of__zombied_0() { return &____zombied_0; }
	inline void set__zombied_0(AtomicBoolean_t895648235 * value)
	{
		____zombied_0 = value;
		Il2CppCodeGenWriteBarrier(&____zombied_0, value);
	}

	inline static int32_t get_offset_of__isUserInitiated_1() { return static_cast<int32_t>(offsetof(EventRegistration_t4222917807, ____isUserInitiated_1)); }
	inline bool get__isUserInitiated_1() const { return ____isUserInitiated_1; }
	inline bool* get_address_of__isUserInitiated_1() { return &____isUserInitiated_1; }
	inline void set__isUserInitiated_1(bool value)
	{
		____isUserInitiated_1 = value;
	}

	inline static int32_t get_offset_of__listener_2() { return static_cast<int32_t>(offsetof(EventRegistration_t4222917807, ____listener_2)); }
	inline Il2CppObject * get__listener_2() const { return ____listener_2; }
	inline Il2CppObject ** get_address_of__listener_2() { return &____listener_2; }
	inline void set__listener_2(Il2CppObject * value)
	{
		____listener_2 = value;
		Il2CppCodeGenWriteBarrier(&____listener_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
