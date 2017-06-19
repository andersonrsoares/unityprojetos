#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Database.DataSnapshot
struct DataSnapshot_t1287895350;
// System.Collections.Generic.IEnumerator`1<Firebase.Database.Internal.Snapshot.NamedNode>
struct IEnumerator_1_t2558376908;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.DataSnapshot/Enumerable238
struct  Enumerable238_t3246115362  : public Il2CppObject
{
public:
	// Firebase.Database.DataSnapshot Firebase.Database.DataSnapshot/Enumerable238::_enclosing
	DataSnapshot_t1287895350 * ____enclosing_0;
	// System.Collections.Generic.IEnumerator`1<Firebase.Database.Internal.Snapshot.NamedNode> Firebase.Database.DataSnapshot/Enumerable238::_iter
	Il2CppObject* ____iter_1;

public:
	inline static int32_t get_offset_of__enclosing_0() { return static_cast<int32_t>(offsetof(Enumerable238_t3246115362, ____enclosing_0)); }
	inline DataSnapshot_t1287895350 * get__enclosing_0() const { return ____enclosing_0; }
	inline DataSnapshot_t1287895350 ** get_address_of__enclosing_0() { return &____enclosing_0; }
	inline void set__enclosing_0(DataSnapshot_t1287895350 * value)
	{
		____enclosing_0 = value;
		Il2CppCodeGenWriteBarrier(&____enclosing_0, value);
	}

	inline static int32_t get_offset_of__iter_1() { return static_cast<int32_t>(offsetof(Enumerable238_t3246115362, ____iter_1)); }
	inline Il2CppObject* get__iter_1() const { return ____iter_1; }
	inline Il2CppObject** get_address_of__iter_1() { return &____iter_1; }
	inline void set__iter_1(Il2CppObject* value)
	{
		____iter_1 = value;
		Il2CppCodeGenWriteBarrier(&____iter_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
