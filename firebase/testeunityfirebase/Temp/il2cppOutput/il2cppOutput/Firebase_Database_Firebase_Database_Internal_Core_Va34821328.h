#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Firebase_Database_Firebase_Database_Internal_Core_4222917807.h"

// System.EventHandler`1<Firebase.Database.ValueChangedEventArgs>
struct EventHandler_1_t3816151702;
// Firebase.Database.Internal.Core.Repo
struct Repo_t1244308462;
// Firebase.Database.Internal.Core.View.QuerySpec
struct QuerySpec_t377558711;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.ValueEventRegistration
struct  ValueEventRegistration_t34821328  : public EventRegistration_t4222917807
{
public:
	// System.EventHandler`1<Firebase.Database.ValueChangedEventArgs> Firebase.Database.Internal.Core.ValueEventRegistration::_eventHandler
	EventHandler_1_t3816151702 * ____eventHandler_3;
	// Firebase.Database.Internal.Core.Repo Firebase.Database.Internal.Core.ValueEventRegistration::_repo
	Repo_t1244308462 * ____repo_4;
	// Firebase.Database.Internal.Core.View.QuerySpec Firebase.Database.Internal.Core.ValueEventRegistration::_spec
	QuerySpec_t377558711 * ____spec_5;

public:
	inline static int32_t get_offset_of__eventHandler_3() { return static_cast<int32_t>(offsetof(ValueEventRegistration_t34821328, ____eventHandler_3)); }
	inline EventHandler_1_t3816151702 * get__eventHandler_3() const { return ____eventHandler_3; }
	inline EventHandler_1_t3816151702 ** get_address_of__eventHandler_3() { return &____eventHandler_3; }
	inline void set__eventHandler_3(EventHandler_1_t3816151702 * value)
	{
		____eventHandler_3 = value;
		Il2CppCodeGenWriteBarrier(&____eventHandler_3, value);
	}

	inline static int32_t get_offset_of__repo_4() { return static_cast<int32_t>(offsetof(ValueEventRegistration_t34821328, ____repo_4)); }
	inline Repo_t1244308462 * get__repo_4() const { return ____repo_4; }
	inline Repo_t1244308462 ** get_address_of__repo_4() { return &____repo_4; }
	inline void set__repo_4(Repo_t1244308462 * value)
	{
		____repo_4 = value;
		Il2CppCodeGenWriteBarrier(&____repo_4, value);
	}

	inline static int32_t get_offset_of__spec_5() { return static_cast<int32_t>(offsetof(ValueEventRegistration_t34821328, ____spec_5)); }
	inline QuerySpec_t377558711 * get__spec_5() const { return ____spec_5; }
	inline QuerySpec_t377558711 ** get_address_of__spec_5() { return &____spec_5; }
	inline void set__spec_5(QuerySpec_t377558711 * value)
	{
		____spec_5 = value;
		Il2CppCodeGenWriteBarrier(&____spec_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
