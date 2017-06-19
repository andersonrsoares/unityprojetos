#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Database.Internal.Snapshot.ChildKey
struct ChildKey_t1197802383;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Snapshot.ChildKey
struct  ChildKey_t1197802383  : public Il2CppObject
{
public:
	// System.String Firebase.Database.Internal.Snapshot.ChildKey::_key
	String_t* ____key_4;

public:
	inline static int32_t get_offset_of__key_4() { return static_cast<int32_t>(offsetof(ChildKey_t1197802383, ____key_4)); }
	inline String_t* get__key_4() const { return ____key_4; }
	inline String_t** get_address_of__key_4() { return &____key_4; }
	inline void set__key_4(String_t* value)
	{
		____key_4 = value;
		Il2CppCodeGenWriteBarrier(&____key_4, value);
	}
};

struct ChildKey_t1197802383_StaticFields
{
public:
	// Firebase.Database.Internal.Snapshot.ChildKey Firebase.Database.Internal.Snapshot.ChildKey::MinKey
	ChildKey_t1197802383 * ___MinKey_0;
	// Firebase.Database.Internal.Snapshot.ChildKey Firebase.Database.Internal.Snapshot.ChildKey::MaxKey
	ChildKey_t1197802383 * ___MaxKey_1;
	// Firebase.Database.Internal.Snapshot.ChildKey Firebase.Database.Internal.Snapshot.ChildKey::PriorityChildKey
	ChildKey_t1197802383 * ___PriorityChildKey_2;
	// Firebase.Database.Internal.Snapshot.ChildKey Firebase.Database.Internal.Snapshot.ChildKey::InfoChildKey
	ChildKey_t1197802383 * ___InfoChildKey_3;

public:
	inline static int32_t get_offset_of_MinKey_0() { return static_cast<int32_t>(offsetof(ChildKey_t1197802383_StaticFields, ___MinKey_0)); }
	inline ChildKey_t1197802383 * get_MinKey_0() const { return ___MinKey_0; }
	inline ChildKey_t1197802383 ** get_address_of_MinKey_0() { return &___MinKey_0; }
	inline void set_MinKey_0(ChildKey_t1197802383 * value)
	{
		___MinKey_0 = value;
		Il2CppCodeGenWriteBarrier(&___MinKey_0, value);
	}

	inline static int32_t get_offset_of_MaxKey_1() { return static_cast<int32_t>(offsetof(ChildKey_t1197802383_StaticFields, ___MaxKey_1)); }
	inline ChildKey_t1197802383 * get_MaxKey_1() const { return ___MaxKey_1; }
	inline ChildKey_t1197802383 ** get_address_of_MaxKey_1() { return &___MaxKey_1; }
	inline void set_MaxKey_1(ChildKey_t1197802383 * value)
	{
		___MaxKey_1 = value;
		Il2CppCodeGenWriteBarrier(&___MaxKey_1, value);
	}

	inline static int32_t get_offset_of_PriorityChildKey_2() { return static_cast<int32_t>(offsetof(ChildKey_t1197802383_StaticFields, ___PriorityChildKey_2)); }
	inline ChildKey_t1197802383 * get_PriorityChildKey_2() const { return ___PriorityChildKey_2; }
	inline ChildKey_t1197802383 ** get_address_of_PriorityChildKey_2() { return &___PriorityChildKey_2; }
	inline void set_PriorityChildKey_2(ChildKey_t1197802383 * value)
	{
		___PriorityChildKey_2 = value;
		Il2CppCodeGenWriteBarrier(&___PriorityChildKey_2, value);
	}

	inline static int32_t get_offset_of_InfoChildKey_3() { return static_cast<int32_t>(offsetof(ChildKey_t1197802383_StaticFields, ___InfoChildKey_3)); }
	inline ChildKey_t1197802383 * get_InfoChildKey_3() const { return ___InfoChildKey_3; }
	inline ChildKey_t1197802383 ** get_address_of_InfoChildKey_3() { return &___InfoChildKey_3; }
	inline void set_InfoChildKey_3(ChildKey_t1197802383 * value)
	{
		___InfoChildKey_3 = value;
		Il2CppCodeGenWriteBarrier(&___InfoChildKey_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
