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

// Firebase.Database.Internal.Connection.PersistentConnectionImpl/ConnectionRequestCallback797
struct  ConnectionRequestCallback797_t485289530  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Connection.PersistentConnectionImpl Firebase.Database.Internal.Connection.PersistentConnectionImpl/ConnectionRequestCallback797::_enclosing
	PersistentConnectionImpl_t1099507887 * ____enclosing_0;
	// System.Boolean Firebase.Database.Internal.Connection.PersistentConnectionImpl/ConnectionRequestCallback797::_restoreStateAfterComplete
	bool ____restoreStateAfterComplete_1;

public:
	inline static int32_t get_offset_of__enclosing_0() { return static_cast<int32_t>(offsetof(ConnectionRequestCallback797_t485289530, ____enclosing_0)); }
	inline PersistentConnectionImpl_t1099507887 * get__enclosing_0() const { return ____enclosing_0; }
	inline PersistentConnectionImpl_t1099507887 ** get_address_of__enclosing_0() { return &____enclosing_0; }
	inline void set__enclosing_0(PersistentConnectionImpl_t1099507887 * value)
	{
		____enclosing_0 = value;
		Il2CppCodeGenWriteBarrier(&____enclosing_0, value);
	}

	inline static int32_t get_offset_of__restoreStateAfterComplete_1() { return static_cast<int32_t>(offsetof(ConnectionRequestCallback797_t485289530, ____restoreStateAfterComplete_1)); }
	inline bool get__restoreStateAfterComplete_1() const { return ____restoreStateAfterComplete_1; }
	inline bool* get_address_of__restoreStateAfterComplete_1() { return &____restoreStateAfterComplete_1; }
	inline void set__restoreStateAfterComplete_1(bool value)
	{
		____restoreStateAfterComplete_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
