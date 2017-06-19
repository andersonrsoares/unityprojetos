#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Database.Internal.Core.Persistence.IPersistenceManager
struct IPersistenceManager_t636124941;
// System.Collections.Generic.IDictionary`2<Firebase.Database.Internal.Core.View.QueryParams,Firebase.Database.Internal.Core.View.View>
struct IDictionary_2_t2301322799;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.SyncPoint
struct  SyncPoint_t2720557329  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Core.Persistence.IPersistenceManager Firebase.Database.Internal.Core.SyncPoint::_persistenceManager
	Il2CppObject * ____persistenceManager_0;
	// System.Collections.Generic.IDictionary`2<Firebase.Database.Internal.Core.View.QueryParams,Firebase.Database.Internal.Core.View.View> Firebase.Database.Internal.Core.SyncPoint::_views
	Il2CppObject* ____views_1;

public:
	inline static int32_t get_offset_of__persistenceManager_0() { return static_cast<int32_t>(offsetof(SyncPoint_t2720557329, ____persistenceManager_0)); }
	inline Il2CppObject * get__persistenceManager_0() const { return ____persistenceManager_0; }
	inline Il2CppObject ** get_address_of__persistenceManager_0() { return &____persistenceManager_0; }
	inline void set__persistenceManager_0(Il2CppObject * value)
	{
		____persistenceManager_0 = value;
		Il2CppCodeGenWriteBarrier(&____persistenceManager_0, value);
	}

	inline static int32_t get_offset_of__views_1() { return static_cast<int32_t>(offsetof(SyncPoint_t2720557329, ____views_1)); }
	inline Il2CppObject* get__views_1() const { return ____views_1; }
	inline Il2CppObject** get_address_of__views_1() { return &____views_1; }
	inline void set__views_1(Il2CppObject* value)
	{
		____views_1 = value;
		Il2CppCodeGenWriteBarrier(&____views_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
