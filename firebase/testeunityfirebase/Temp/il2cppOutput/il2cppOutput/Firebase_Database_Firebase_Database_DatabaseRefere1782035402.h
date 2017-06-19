#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Database.DatabaseReference
struct DatabaseReference_t1167676104;
// Firebase.Database.ITransactionHandler
struct ITransactionHandler_t384952127;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.DatabaseReference/Runnable402
struct  Runnable402_t1782035402  : public Il2CppObject
{
public:
	// Firebase.Database.DatabaseReference Firebase.Database.DatabaseReference/Runnable402::_enclosing
	DatabaseReference_t1167676104 * ____enclosing_0;
	// System.Boolean Firebase.Database.DatabaseReference/Runnable402::_fireLocalEvents
	bool ____fireLocalEvents_1;
	// Firebase.Database.ITransactionHandler Firebase.Database.DatabaseReference/Runnable402::_handler
	Il2CppObject * ____handler_2;

public:
	inline static int32_t get_offset_of__enclosing_0() { return static_cast<int32_t>(offsetof(Runnable402_t1782035402, ____enclosing_0)); }
	inline DatabaseReference_t1167676104 * get__enclosing_0() const { return ____enclosing_0; }
	inline DatabaseReference_t1167676104 ** get_address_of__enclosing_0() { return &____enclosing_0; }
	inline void set__enclosing_0(DatabaseReference_t1167676104 * value)
	{
		____enclosing_0 = value;
		Il2CppCodeGenWriteBarrier(&____enclosing_0, value);
	}

	inline static int32_t get_offset_of__fireLocalEvents_1() { return static_cast<int32_t>(offsetof(Runnable402_t1782035402, ____fireLocalEvents_1)); }
	inline bool get__fireLocalEvents_1() const { return ____fireLocalEvents_1; }
	inline bool* get_address_of__fireLocalEvents_1() { return &____fireLocalEvents_1; }
	inline void set__fireLocalEvents_1(bool value)
	{
		____fireLocalEvents_1 = value;
	}

	inline static int32_t get_offset_of__handler_2() { return static_cast<int32_t>(offsetof(Runnable402_t1782035402, ____handler_2)); }
	inline Il2CppObject * get__handler_2() const { return ____handler_2; }
	inline Il2CppObject ** get_address_of__handler_2() { return &____handler_2; }
	inline void set__handler_2(Il2CppObject * value)
	{
		____handler_2 = value;
		Il2CppCodeGenWriteBarrier(&____handler_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
