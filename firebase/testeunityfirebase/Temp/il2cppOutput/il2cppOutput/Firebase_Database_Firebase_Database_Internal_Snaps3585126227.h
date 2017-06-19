#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.IList`1<System.String>
struct IList_1_t2570160834;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.Path>
struct IList_1_t3109413764;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Snapshot.CompoundHash
struct  CompoundHash_t3585126227  : public Il2CppObject
{
public:
	// System.Collections.Generic.IList`1<System.String> Firebase.Database.Internal.Snapshot.CompoundHash::_hashes
	Il2CppObject* ____hashes_0;
	// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.Path> Firebase.Database.Internal.Snapshot.CompoundHash::_posts
	Il2CppObject* ____posts_1;

public:
	inline static int32_t get_offset_of__hashes_0() { return static_cast<int32_t>(offsetof(CompoundHash_t3585126227, ____hashes_0)); }
	inline Il2CppObject* get__hashes_0() const { return ____hashes_0; }
	inline Il2CppObject** get_address_of__hashes_0() { return &____hashes_0; }
	inline void set__hashes_0(Il2CppObject* value)
	{
		____hashes_0 = value;
		Il2CppCodeGenWriteBarrier(&____hashes_0, value);
	}

	inline static int32_t get_offset_of__posts_1() { return static_cast<int32_t>(offsetof(CompoundHash_t3585126227, ____posts_1)); }
	inline Il2CppObject* get__posts_1() const { return ____posts_1; }
	inline Il2CppObject** get_address_of__posts_1() { return &____posts_1; }
	inline void set__posts_1(Il2CppObject* value)
	{
		____posts_1 = value;
		Il2CppCodeGenWriteBarrier(&____posts_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
