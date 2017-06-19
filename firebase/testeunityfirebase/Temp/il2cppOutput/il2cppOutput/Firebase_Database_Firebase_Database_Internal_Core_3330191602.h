#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Firebase_Database_Firebase_Database_Internal_Core_V732806402.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_1195404398.h"

// Firebase.Database.Internal.Core.EventRegistration
struct EventRegistration_t4222917807;
// System.String
struct String_t;
// Firebase.Database.DataSnapshot
struct DataSnapshot_t1287895350;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.View.DataEvent
struct  DataEvent_t3330191602  : public Event_t732806402
{
public:
	// Firebase.Database.Internal.Core.EventRegistration Firebase.Database.Internal.Core.View.DataEvent::_eventRegistration
	EventRegistration_t4222917807 * ____eventRegistration_0;
	// Firebase.Database.Internal.Core.View.Event/EventType Firebase.Database.Internal.Core.View.DataEvent::_eventType
	int32_t ____eventType_1;
	// System.String Firebase.Database.Internal.Core.View.DataEvent::_prevName
	String_t* ____prevName_2;
	// Firebase.Database.DataSnapshot Firebase.Database.Internal.Core.View.DataEvent::_snapshot
	DataSnapshot_t1287895350 * ____snapshot_3;

public:
	inline static int32_t get_offset_of__eventRegistration_0() { return static_cast<int32_t>(offsetof(DataEvent_t3330191602, ____eventRegistration_0)); }
	inline EventRegistration_t4222917807 * get__eventRegistration_0() const { return ____eventRegistration_0; }
	inline EventRegistration_t4222917807 ** get_address_of__eventRegistration_0() { return &____eventRegistration_0; }
	inline void set__eventRegistration_0(EventRegistration_t4222917807 * value)
	{
		____eventRegistration_0 = value;
		Il2CppCodeGenWriteBarrier(&____eventRegistration_0, value);
	}

	inline static int32_t get_offset_of__eventType_1() { return static_cast<int32_t>(offsetof(DataEvent_t3330191602, ____eventType_1)); }
	inline int32_t get__eventType_1() const { return ____eventType_1; }
	inline int32_t* get_address_of__eventType_1() { return &____eventType_1; }
	inline void set__eventType_1(int32_t value)
	{
		____eventType_1 = value;
	}

	inline static int32_t get_offset_of__prevName_2() { return static_cast<int32_t>(offsetof(DataEvent_t3330191602, ____prevName_2)); }
	inline String_t* get__prevName_2() const { return ____prevName_2; }
	inline String_t** get_address_of__prevName_2() { return &____prevName_2; }
	inline void set__prevName_2(String_t* value)
	{
		____prevName_2 = value;
		Il2CppCodeGenWriteBarrier(&____prevName_2, value);
	}

	inline static int32_t get_offset_of__snapshot_3() { return static_cast<int32_t>(offsetof(DataEvent_t3330191602, ____snapshot_3)); }
	inline DataSnapshot_t1287895350 * get__snapshot_3() const { return ____snapshot_3; }
	inline DataSnapshot_t1287895350 ** get_address_of__snapshot_3() { return &____snapshot_3; }
	inline void set__snapshot_3(DataSnapshot_t1287895350 * value)
	{
		____snapshot_3 = value;
		Il2CppCodeGenWriteBarrier(&____snapshot_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
