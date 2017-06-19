#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Database.Internal.Core.Repo/ListenProvider106
struct ListenProvider106_t3500234454;
// Firebase.Database.Internal.Core.SyncTree/ICompletionListener
struct ICompletionListener_t1189386635;
// Firebase.Database.Internal.Core.View.QuerySpec
struct QuerySpec_t377558711;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.Repo/ListenProvider106/Runnable111
struct  Runnable111_t498336269  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Core.Repo/ListenProvider106 Firebase.Database.Internal.Core.Repo/ListenProvider106/Runnable111::_enclosing
	ListenProvider106_t3500234454 * ____enclosing_0;
	// Firebase.Database.Internal.Core.SyncTree/ICompletionListener Firebase.Database.Internal.Core.Repo/ListenProvider106/Runnable111::_onComplete
	Il2CppObject * ____onComplete_1;
	// Firebase.Database.Internal.Core.View.QuerySpec Firebase.Database.Internal.Core.Repo/ListenProvider106/Runnable111::_query
	QuerySpec_t377558711 * ____query_2;

public:
	inline static int32_t get_offset_of__enclosing_0() { return static_cast<int32_t>(offsetof(Runnable111_t498336269, ____enclosing_0)); }
	inline ListenProvider106_t3500234454 * get__enclosing_0() const { return ____enclosing_0; }
	inline ListenProvider106_t3500234454 ** get_address_of__enclosing_0() { return &____enclosing_0; }
	inline void set__enclosing_0(ListenProvider106_t3500234454 * value)
	{
		____enclosing_0 = value;
		Il2CppCodeGenWriteBarrier(&____enclosing_0, value);
	}

	inline static int32_t get_offset_of__onComplete_1() { return static_cast<int32_t>(offsetof(Runnable111_t498336269, ____onComplete_1)); }
	inline Il2CppObject * get__onComplete_1() const { return ____onComplete_1; }
	inline Il2CppObject ** get_address_of__onComplete_1() { return &____onComplete_1; }
	inline void set__onComplete_1(Il2CppObject * value)
	{
		____onComplete_1 = value;
		Il2CppCodeGenWriteBarrier(&____onComplete_1, value);
	}

	inline static int32_t get_offset_of__query_2() { return static_cast<int32_t>(offsetof(Runnable111_t498336269, ____query_2)); }
	inline QuerySpec_t377558711 * get__query_2() const { return ____query_2; }
	inline QuerySpec_t377558711 ** get_address_of__query_2() { return &____query_2; }
	inline void set__query_2(QuerySpec_t377558711 * value)
	{
		____query_2 = value;
		Il2CppCodeGenWriteBarrier(&____query_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
