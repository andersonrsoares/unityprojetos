#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Database.Internal.Core.Repo/ListenProvider131
struct ListenProvider131_t1577920156;
// Firebase.Database.Internal.Core.SyncTree/ICompletionListener
struct ICompletionListener_t1189386635;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.Repo/ListenProvider131/RequestResultCallback139
struct  RequestResultCallback139_t325891947  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Core.Repo/ListenProvider131 Firebase.Database.Internal.Core.Repo/ListenProvider131/RequestResultCallback139::_enclosing
	ListenProvider131_t1577920156 * ____enclosing_0;
	// Firebase.Database.Internal.Core.SyncTree/ICompletionListener Firebase.Database.Internal.Core.Repo/ListenProvider131/RequestResultCallback139::_onListenComplete
	Il2CppObject * ____onListenComplete_1;

public:
	inline static int32_t get_offset_of__enclosing_0() { return static_cast<int32_t>(offsetof(RequestResultCallback139_t325891947, ____enclosing_0)); }
	inline ListenProvider131_t1577920156 * get__enclosing_0() const { return ____enclosing_0; }
	inline ListenProvider131_t1577920156 ** get_address_of__enclosing_0() { return &____enclosing_0; }
	inline void set__enclosing_0(ListenProvider131_t1577920156 * value)
	{
		____enclosing_0 = value;
		Il2CppCodeGenWriteBarrier(&____enclosing_0, value);
	}

	inline static int32_t get_offset_of__onListenComplete_1() { return static_cast<int32_t>(offsetof(RequestResultCallback139_t325891947, ____onListenComplete_1)); }
	inline Il2CppObject * get__onListenComplete_1() const { return ____onListenComplete_1; }
	inline Il2CppObject ** get_address_of__onListenComplete_1() { return &____onListenComplete_1; }
	inline void set__onListenComplete_1(Il2CppObject * value)
	{
		____onListenComplete_1 = value;
		Il2CppCodeGenWriteBarrier(&____onListenComplete_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
