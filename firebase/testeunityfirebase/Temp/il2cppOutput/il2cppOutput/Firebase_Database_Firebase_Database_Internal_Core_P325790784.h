#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.Persistence.NoopPersistenceManager
struct  NoopPersistenceManager_t325790784  : public Il2CppObject
{
public:
	// System.Boolean Firebase.Database.Internal.Core.Persistence.NoopPersistenceManager::_insideTransaction
	bool ____insideTransaction_0;

public:
	inline static int32_t get_offset_of__insideTransaction_0() { return static_cast<int32_t>(offsetof(NoopPersistenceManager_t325790784, ____insideTransaction_0)); }
	inline bool get__insideTransaction_0() const { return ____insideTransaction_0; }
	inline bool* get_address_of__insideTransaction_0() { return &____insideTransaction_0; }
	inline void set__insideTransaction_0(bool value)
	{
		____insideTransaction_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
