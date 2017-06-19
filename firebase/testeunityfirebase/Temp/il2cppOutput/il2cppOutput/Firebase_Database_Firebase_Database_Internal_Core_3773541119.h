#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Database.Internal.Core.ZombieEventManager
struct ZombieEventManager_t3773541119;
// System.Collections.Generic.Dictionary`2<Firebase.Database.Internal.Core.EventRegistration,System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.EventRegistration>>
struct Dictionary_2_t4055753192;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.ZombieEventManager
struct  ZombieEventManager_t3773541119  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<Firebase.Database.Internal.Core.EventRegistration,System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.EventRegistration>> Firebase.Database.Internal.Core.ZombieEventManager::GlobalEventRegistrations
	Dictionary_2_t4055753192 * ___GlobalEventRegistrations_1;

public:
	inline static int32_t get_offset_of_GlobalEventRegistrations_1() { return static_cast<int32_t>(offsetof(ZombieEventManager_t3773541119, ___GlobalEventRegistrations_1)); }
	inline Dictionary_2_t4055753192 * get_GlobalEventRegistrations_1() const { return ___GlobalEventRegistrations_1; }
	inline Dictionary_2_t4055753192 ** get_address_of_GlobalEventRegistrations_1() { return &___GlobalEventRegistrations_1; }
	inline void set_GlobalEventRegistrations_1(Dictionary_2_t4055753192 * value)
	{
		___GlobalEventRegistrations_1 = value;
		Il2CppCodeGenWriteBarrier(&___GlobalEventRegistrations_1, value);
	}
};

struct ZombieEventManager_t3773541119_StaticFields
{
public:
	// Firebase.Database.Internal.Core.ZombieEventManager Firebase.Database.Internal.Core.ZombieEventManager::DefaultInstance
	ZombieEventManager_t3773541119 * ___DefaultInstance_0;

public:
	inline static int32_t get_offset_of_DefaultInstance_0() { return static_cast<int32_t>(offsetof(ZombieEventManager_t3773541119_StaticFields, ___DefaultInstance_0)); }
	inline ZombieEventManager_t3773541119 * get_DefaultInstance_0() const { return ___DefaultInstance_0; }
	inline ZombieEventManager_t3773541119 ** get_address_of_DefaultInstance_0() { return &___DefaultInstance_0; }
	inline void set_DefaultInstance_0(ZombieEventManager_t3773541119 * value)
	{
		___DefaultInstance_0 = value;
		Il2CppCodeGenWriteBarrier(&___DefaultInstance_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
