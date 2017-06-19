#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Firebase_Database_Firebase_Database_Internal_Core_V732806402.h"

// Firebase.Database.DatabaseError
struct DatabaseError_t1067746743;
// Firebase.Database.Internal.Core.EventRegistration
struct EventRegistration_t4222917807;
// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.View.CancelEvent
struct  CancelEvent_t686203200  : public Event_t732806402
{
public:
	// Firebase.Database.DatabaseError Firebase.Database.Internal.Core.View.CancelEvent::_error
	DatabaseError_t1067746743 * ____error_0;
	// Firebase.Database.Internal.Core.EventRegistration Firebase.Database.Internal.Core.View.CancelEvent::_eventRegistration
	EventRegistration_t4222917807 * ____eventRegistration_1;
	// Firebase.Database.Internal.Core.Path Firebase.Database.Internal.Core.View.CancelEvent::_path
	Path_t2568473163 * ____path_2;

public:
	inline static int32_t get_offset_of__error_0() { return static_cast<int32_t>(offsetof(CancelEvent_t686203200, ____error_0)); }
	inline DatabaseError_t1067746743 * get__error_0() const { return ____error_0; }
	inline DatabaseError_t1067746743 ** get_address_of__error_0() { return &____error_0; }
	inline void set__error_0(DatabaseError_t1067746743 * value)
	{
		____error_0 = value;
		Il2CppCodeGenWriteBarrier(&____error_0, value);
	}

	inline static int32_t get_offset_of__eventRegistration_1() { return static_cast<int32_t>(offsetof(CancelEvent_t686203200, ____eventRegistration_1)); }
	inline EventRegistration_t4222917807 * get__eventRegistration_1() const { return ____eventRegistration_1; }
	inline EventRegistration_t4222917807 ** get_address_of__eventRegistration_1() { return &____eventRegistration_1; }
	inline void set__eventRegistration_1(EventRegistration_t4222917807 * value)
	{
		____eventRegistration_1 = value;
		Il2CppCodeGenWriteBarrier(&____eventRegistration_1, value);
	}

	inline static int32_t get_offset_of__path_2() { return static_cast<int32_t>(offsetof(CancelEvent_t686203200, ____path_2)); }
	inline Path_t2568473163 * get__path_2() const { return ____path_2; }
	inline Path_t2568473163 ** get_address_of__path_2() { return &____path_2; }
	inline void set__path_2(Path_t2568473163 * value)
	{
		____path_2 = value;
		Il2CppCodeGenWriteBarrier(&____path_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
