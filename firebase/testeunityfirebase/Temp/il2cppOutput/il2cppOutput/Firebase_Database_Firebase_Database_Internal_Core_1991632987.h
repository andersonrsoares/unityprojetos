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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.Repo/TreeVisitor1098
struct  TreeVisitor1098_t1991632987  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Core.Repo Firebase.Database.Internal.Core.Repo/TreeVisitor1098::_enclosing
	Repo_t1244308462 * ____enclosing_0;
	// System.Int32 Firebase.Database.Internal.Core.Repo/TreeVisitor1098::_reason
	int32_t ____reason_1;

public:
	inline static int32_t get_offset_of__enclosing_0() { return static_cast<int32_t>(offsetof(TreeVisitor1098_t1991632987, ____enclosing_0)); }
	inline Repo_t1244308462 * get__enclosing_0() const { return ____enclosing_0; }
	inline Repo_t1244308462 ** get_address_of__enclosing_0() { return &____enclosing_0; }
	inline void set__enclosing_0(Repo_t1244308462 * value)
	{
		____enclosing_0 = value;
		Il2CppCodeGenWriteBarrier(&____enclosing_0, value);
	}

	inline static int32_t get_offset_of__reason_1() { return static_cast<int32_t>(offsetof(TreeVisitor1098_t1991632987, ____reason_1)); }
	inline int32_t get__reason_1() const { return ____reason_1; }
	inline int32_t* get_address_of__reason_1() { return &____reason_1; }
	inline void set__reason_1(int32_t value)
	{
		____reason_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
