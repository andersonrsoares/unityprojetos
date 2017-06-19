#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Database.DatabaseError
struct DatabaseError_t1067746743;
// Firebase.Database.DatabaseReference/CompletionListener
struct CompletionListener_t93014473;
// Firebase.Database.DatabaseReference
struct DatabaseReference_t1167676104;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.Repo/Runnable326
struct  Runnable326_t1011990335  : public Il2CppObject
{
public:
	// Firebase.Database.DatabaseError Firebase.Database.Internal.Core.Repo/Runnable326::_error
	DatabaseError_t1067746743 * ____error_0;
	// Firebase.Database.DatabaseReference/CompletionListener Firebase.Database.Internal.Core.Repo/Runnable326::_onComplete
	CompletionListener_t93014473 * ____onComplete_1;
	// Firebase.Database.DatabaseReference Firebase.Database.Internal.Core.Repo/Runnable326::_ref
	DatabaseReference_t1167676104 * ____ref_2;

public:
	inline static int32_t get_offset_of__error_0() { return static_cast<int32_t>(offsetof(Runnable326_t1011990335, ____error_0)); }
	inline DatabaseError_t1067746743 * get__error_0() const { return ____error_0; }
	inline DatabaseError_t1067746743 ** get_address_of__error_0() { return &____error_0; }
	inline void set__error_0(DatabaseError_t1067746743 * value)
	{
		____error_0 = value;
		Il2CppCodeGenWriteBarrier(&____error_0, value);
	}

	inline static int32_t get_offset_of__onComplete_1() { return static_cast<int32_t>(offsetof(Runnable326_t1011990335, ____onComplete_1)); }
	inline CompletionListener_t93014473 * get__onComplete_1() const { return ____onComplete_1; }
	inline CompletionListener_t93014473 ** get_address_of__onComplete_1() { return &____onComplete_1; }
	inline void set__onComplete_1(CompletionListener_t93014473 * value)
	{
		____onComplete_1 = value;
		Il2CppCodeGenWriteBarrier(&____onComplete_1, value);
	}

	inline static int32_t get_offset_of__ref_2() { return static_cast<int32_t>(offsetof(Runnable326_t1011990335, ____ref_2)); }
	inline DatabaseReference_t1167676104 * get__ref_2() const { return ____ref_2; }
	inline DatabaseReference_t1167676104 ** get_address_of__ref_2() { return &____ref_2; }
	inline void set__ref_2(DatabaseReference_t1167676104 * value)
	{
		____ref_2 = value;
		Il2CppCodeGenWriteBarrier(&____ref_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
