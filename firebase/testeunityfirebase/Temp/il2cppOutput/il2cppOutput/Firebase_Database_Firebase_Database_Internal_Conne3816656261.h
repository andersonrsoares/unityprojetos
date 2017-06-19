#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Database.Internal.Connection.PersistentConnectionImpl
struct PersistentConnectionImpl_t1099507887;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Connection.PersistentConnectionImpl/Runnable557
struct  Runnable557_t3816656261  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Connection.PersistentConnectionImpl Firebase.Database.Internal.Connection.PersistentConnectionImpl/Runnable557::_enclosing
	PersistentConnectionImpl_t1099507887 * ____enclosing_0;
	// System.Boolean Firebase.Database.Internal.Connection.PersistentConnectionImpl/Runnable557::_forceRefresh
	bool ____forceRefresh_1;

public:
	inline static int32_t get_offset_of__enclosing_0() { return static_cast<int32_t>(offsetof(Runnable557_t3816656261, ____enclosing_0)); }
	inline PersistentConnectionImpl_t1099507887 * get__enclosing_0() const { return ____enclosing_0; }
	inline PersistentConnectionImpl_t1099507887 ** get_address_of__enclosing_0() { return &____enclosing_0; }
	inline void set__enclosing_0(PersistentConnectionImpl_t1099507887 * value)
	{
		____enclosing_0 = value;
		Il2CppCodeGenWriteBarrier(&____enclosing_0, value);
	}

	inline static int32_t get_offset_of__forceRefresh_1() { return static_cast<int32_t>(offsetof(Runnable557_t3816656261, ____forceRefresh_1)); }
	inline bool get__forceRefresh_1() const { return ____forceRefresh_1; }
	inline bool* get_address_of__forceRefresh_1() { return &____forceRefresh_1; }
	inline void set__forceRefresh_1(bool value)
	{
		____forceRefresh_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
