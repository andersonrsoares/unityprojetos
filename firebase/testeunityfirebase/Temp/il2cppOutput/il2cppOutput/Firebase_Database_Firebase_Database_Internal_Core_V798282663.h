#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Database.Internal.Core.View.EventGenerator
struct EventGenerator_t3304926575;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.EventRegistration>
struct IList_1_t468891112;
// Firebase.Database.Internal.Core.View.ViewProcessor
struct ViewProcessor_t3676452127;
// Firebase.Database.Internal.Core.View.QuerySpec
struct QuerySpec_t377558711;
// Firebase.Database.Internal.Core.View.ViewCache
struct ViewCache_t983378685;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.View.View
struct  View_t798282663  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Core.View.EventGenerator Firebase.Database.Internal.Core.View.View::_eventGenerator
	EventGenerator_t3304926575 * ____eventGenerator_0;
	// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.EventRegistration> Firebase.Database.Internal.Core.View.View::_eventRegistrations
	Il2CppObject* ____eventRegistrations_1;
	// Firebase.Database.Internal.Core.View.ViewProcessor Firebase.Database.Internal.Core.View.View::_processor
	ViewProcessor_t3676452127 * ____processor_2;
	// Firebase.Database.Internal.Core.View.QuerySpec Firebase.Database.Internal.Core.View.View::_query
	QuerySpec_t377558711 * ____query_3;
	// Firebase.Database.Internal.Core.View.ViewCache Firebase.Database.Internal.Core.View.View::_viewCache
	ViewCache_t983378685 * ____viewCache_4;

public:
	inline static int32_t get_offset_of__eventGenerator_0() { return static_cast<int32_t>(offsetof(View_t798282663, ____eventGenerator_0)); }
	inline EventGenerator_t3304926575 * get__eventGenerator_0() const { return ____eventGenerator_0; }
	inline EventGenerator_t3304926575 ** get_address_of__eventGenerator_0() { return &____eventGenerator_0; }
	inline void set__eventGenerator_0(EventGenerator_t3304926575 * value)
	{
		____eventGenerator_0 = value;
		Il2CppCodeGenWriteBarrier(&____eventGenerator_0, value);
	}

	inline static int32_t get_offset_of__eventRegistrations_1() { return static_cast<int32_t>(offsetof(View_t798282663, ____eventRegistrations_1)); }
	inline Il2CppObject* get__eventRegistrations_1() const { return ____eventRegistrations_1; }
	inline Il2CppObject** get_address_of__eventRegistrations_1() { return &____eventRegistrations_1; }
	inline void set__eventRegistrations_1(Il2CppObject* value)
	{
		____eventRegistrations_1 = value;
		Il2CppCodeGenWriteBarrier(&____eventRegistrations_1, value);
	}

	inline static int32_t get_offset_of__processor_2() { return static_cast<int32_t>(offsetof(View_t798282663, ____processor_2)); }
	inline ViewProcessor_t3676452127 * get__processor_2() const { return ____processor_2; }
	inline ViewProcessor_t3676452127 ** get_address_of__processor_2() { return &____processor_2; }
	inline void set__processor_2(ViewProcessor_t3676452127 * value)
	{
		____processor_2 = value;
		Il2CppCodeGenWriteBarrier(&____processor_2, value);
	}

	inline static int32_t get_offset_of__query_3() { return static_cast<int32_t>(offsetof(View_t798282663, ____query_3)); }
	inline QuerySpec_t377558711 * get__query_3() const { return ____query_3; }
	inline QuerySpec_t377558711 ** get_address_of__query_3() { return &____query_3; }
	inline void set__query_3(QuerySpec_t377558711 * value)
	{
		____query_3 = value;
		Il2CppCodeGenWriteBarrier(&____query_3, value);
	}

	inline static int32_t get_offset_of__viewCache_4() { return static_cast<int32_t>(offsetof(View_t798282663, ____viewCache_4)); }
	inline ViewCache_t983378685 * get__viewCache_4() const { return ____viewCache_4; }
	inline ViewCache_t983378685 ** get_address_of__viewCache_4() { return &____viewCache_4; }
	inline void set__viewCache_4(ViewCache_t983378685 * value)
	{
		____viewCache_4 = value;
		Il2CppCodeGenWriteBarrier(&____viewCache_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
