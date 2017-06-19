#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<Firebase.Database.Internal.Core.Path,Firebase.Database.Internal.Snapshot.Node>>
struct IList_1_t247851509;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.Utilities.ImmutableTree`1/TreeVisitor278<Firebase.Database.Internal.Snapshot.Node>
struct  TreeVisitor278_t1485792902  : public Il2CppObject
{
public:
	// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<Firebase.Database.Internal.Core.Path,T>> Firebase.Database.Internal.Core.Utilities.ImmutableTree`1/TreeVisitor278::_list
	Il2CppObject* ____list_0;

public:
	inline static int32_t get_offset_of__list_0() { return static_cast<int32_t>(offsetof(TreeVisitor278_t1485792902, ____list_0)); }
	inline Il2CppObject* get__list_0() const { return ____list_0; }
	inline Il2CppObject** get_address_of__list_0() { return &____list_0; }
	inline void set__list_0(Il2CppObject* value)
	{
		____list_0 = value;
		Il2CppCodeGenWriteBarrier(&____list_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
