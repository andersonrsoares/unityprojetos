#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Database.Internal.Core.Repo
struct Repo_t1244308462;
// Firebase.Database.DatabaseReference/CompletionListener
struct CompletionListener_t93014473;
// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.Repo/RequestResultCallback361
struct  RequestResultCallback361_t354392406  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Core.Repo Firebase.Database.Internal.Core.Repo/RequestResultCallback361::_enclosing
	Repo_t1244308462 * ____enclosing_0;
	// Firebase.Database.DatabaseReference/CompletionListener Firebase.Database.Internal.Core.Repo/RequestResultCallback361::_onComplete
	CompletionListener_t93014473 * ____onComplete_1;
	// Firebase.Database.Internal.Core.Path Firebase.Database.Internal.Core.Repo/RequestResultCallback361::_path
	Path_t2568473163 * ____path_2;
	// System.Int64 Firebase.Database.Internal.Core.Repo/RequestResultCallback361::_writeId
	int64_t ____writeId_3;

public:
	inline static int32_t get_offset_of__enclosing_0() { return static_cast<int32_t>(offsetof(RequestResultCallback361_t354392406, ____enclosing_0)); }
	inline Repo_t1244308462 * get__enclosing_0() const { return ____enclosing_0; }
	inline Repo_t1244308462 ** get_address_of__enclosing_0() { return &____enclosing_0; }
	inline void set__enclosing_0(Repo_t1244308462 * value)
	{
		____enclosing_0 = value;
		Il2CppCodeGenWriteBarrier(&____enclosing_0, value);
	}

	inline static int32_t get_offset_of__onComplete_1() { return static_cast<int32_t>(offsetof(RequestResultCallback361_t354392406, ____onComplete_1)); }
	inline CompletionListener_t93014473 * get__onComplete_1() const { return ____onComplete_1; }
	inline CompletionListener_t93014473 ** get_address_of__onComplete_1() { return &____onComplete_1; }
	inline void set__onComplete_1(CompletionListener_t93014473 * value)
	{
		____onComplete_1 = value;
		Il2CppCodeGenWriteBarrier(&____onComplete_1, value);
	}

	inline static int32_t get_offset_of__path_2() { return static_cast<int32_t>(offsetof(RequestResultCallback361_t354392406, ____path_2)); }
	inline Path_t2568473163 * get__path_2() const { return ____path_2; }
	inline Path_t2568473163 ** get_address_of__path_2() { return &____path_2; }
	inline void set__path_2(Path_t2568473163 * value)
	{
		____path_2 = value;
		Il2CppCodeGenWriteBarrier(&____path_2, value);
	}

	inline static int32_t get_offset_of__writeId_3() { return static_cast<int32_t>(offsetof(RequestResultCallback361_t354392406, ____writeId_3)); }
	inline int64_t get__writeId_3() const { return ____writeId_3; }
	inline int64_t* get_address_of__writeId_3() { return &____writeId_3; }
	inline void set__writeId_3(int64_t value)
	{
		____writeId_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
