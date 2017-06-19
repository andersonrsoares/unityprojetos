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
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.Repo/TransactionData>
struct IList_1_t2684453066;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.Repo/TreeVisitor1074
struct  TreeVisitor1074_t3961001445  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Core.Repo Firebase.Database.Internal.Core.Repo/TreeVisitor1074::_enclosing
	Repo_t1244308462 * ____enclosing_0;
	// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.Repo/TransactionData> Firebase.Database.Internal.Core.Repo/TreeVisitor1074::_queue
	Il2CppObject* ____queue_1;

public:
	inline static int32_t get_offset_of__enclosing_0() { return static_cast<int32_t>(offsetof(TreeVisitor1074_t3961001445, ____enclosing_0)); }
	inline Repo_t1244308462 * get__enclosing_0() const { return ____enclosing_0; }
	inline Repo_t1244308462 ** get_address_of__enclosing_0() { return &____enclosing_0; }
	inline void set__enclosing_0(Repo_t1244308462 * value)
	{
		____enclosing_0 = value;
		Il2CppCodeGenWriteBarrier(&____enclosing_0, value);
	}

	inline static int32_t get_offset_of__queue_1() { return static_cast<int32_t>(offsetof(TreeVisitor1074_t3961001445, ____queue_1)); }
	inline Il2CppObject* get__queue_1() const { return ____queue_1; }
	inline Il2CppObject** get_address_of__queue_1() { return &____queue_1; }
	inline void set__queue_1(Il2CppObject* value)
	{
		____queue_1 = value;
		Il2CppCodeGenWriteBarrier(&____queue_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
