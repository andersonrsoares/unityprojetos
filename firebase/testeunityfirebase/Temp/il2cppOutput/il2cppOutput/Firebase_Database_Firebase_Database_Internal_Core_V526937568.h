#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Nullable_1_gen334943763.h"
#include "mscorlib_System_Nullable_1_gen800577494.h"

// Firebase.Database.Internal.Core.View.QueryParams
struct QueryParams_t526937568;
// Firebase.Database.Internal.Snapshot.Index
struct Index_t2425062456;
// Firebase.Database.Internal.Snapshot.ChildKey
struct ChildKey_t1197802383;
// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.View.QueryParams
struct  QueryParams_t526937568  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Snapshot.Index Firebase.Database.Internal.Core.View.QueryParams::_index
	Index_t2425062456 * ____index_1;
	// Firebase.Database.Internal.Snapshot.ChildKey Firebase.Database.Internal.Core.View.QueryParams::_indexEndName
	ChildKey_t1197802383 * ____indexEndName_2;
	// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Core.View.QueryParams::_indexEndValue
	Node_t2640059010 * ____indexEndValue_3;
	// Firebase.Database.Internal.Snapshot.ChildKey Firebase.Database.Internal.Core.View.QueryParams::_indexStartName
	ChildKey_t1197802383 * ____indexStartName_4;
	// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Core.View.QueryParams::_indexStartValue
	Node_t2640059010 * ____indexStartValue_5;
	// System.Nullable`1<System.Int32> Firebase.Database.Internal.Core.View.QueryParams::_limit
	Nullable_1_t334943763  ____limit_6;
	// System.Nullable`1<Firebase.Database.Internal.Core.View.QueryParams/ViewFrom> Firebase.Database.Internal.Core.View.QueryParams::_viewFrom
	Nullable_1_t800577494  ____viewFrom_7;

public:
	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(QueryParams_t526937568, ____index_1)); }
	inline Index_t2425062456 * get__index_1() const { return ____index_1; }
	inline Index_t2425062456 ** get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(Index_t2425062456 * value)
	{
		____index_1 = value;
		Il2CppCodeGenWriteBarrier(&____index_1, value);
	}

	inline static int32_t get_offset_of__indexEndName_2() { return static_cast<int32_t>(offsetof(QueryParams_t526937568, ____indexEndName_2)); }
	inline ChildKey_t1197802383 * get__indexEndName_2() const { return ____indexEndName_2; }
	inline ChildKey_t1197802383 ** get_address_of__indexEndName_2() { return &____indexEndName_2; }
	inline void set__indexEndName_2(ChildKey_t1197802383 * value)
	{
		____indexEndName_2 = value;
		Il2CppCodeGenWriteBarrier(&____indexEndName_2, value);
	}

	inline static int32_t get_offset_of__indexEndValue_3() { return static_cast<int32_t>(offsetof(QueryParams_t526937568, ____indexEndValue_3)); }
	inline Node_t2640059010 * get__indexEndValue_3() const { return ____indexEndValue_3; }
	inline Node_t2640059010 ** get_address_of__indexEndValue_3() { return &____indexEndValue_3; }
	inline void set__indexEndValue_3(Node_t2640059010 * value)
	{
		____indexEndValue_3 = value;
		Il2CppCodeGenWriteBarrier(&____indexEndValue_3, value);
	}

	inline static int32_t get_offset_of__indexStartName_4() { return static_cast<int32_t>(offsetof(QueryParams_t526937568, ____indexStartName_4)); }
	inline ChildKey_t1197802383 * get__indexStartName_4() const { return ____indexStartName_4; }
	inline ChildKey_t1197802383 ** get_address_of__indexStartName_4() { return &____indexStartName_4; }
	inline void set__indexStartName_4(ChildKey_t1197802383 * value)
	{
		____indexStartName_4 = value;
		Il2CppCodeGenWriteBarrier(&____indexStartName_4, value);
	}

	inline static int32_t get_offset_of__indexStartValue_5() { return static_cast<int32_t>(offsetof(QueryParams_t526937568, ____indexStartValue_5)); }
	inline Node_t2640059010 * get__indexStartValue_5() const { return ____indexStartValue_5; }
	inline Node_t2640059010 ** get_address_of__indexStartValue_5() { return &____indexStartValue_5; }
	inline void set__indexStartValue_5(Node_t2640059010 * value)
	{
		____indexStartValue_5 = value;
		Il2CppCodeGenWriteBarrier(&____indexStartValue_5, value);
	}

	inline static int32_t get_offset_of__limit_6() { return static_cast<int32_t>(offsetof(QueryParams_t526937568, ____limit_6)); }
	inline Nullable_1_t334943763  get__limit_6() const { return ____limit_6; }
	inline Nullable_1_t334943763 * get_address_of__limit_6() { return &____limit_6; }
	inline void set__limit_6(Nullable_1_t334943763  value)
	{
		____limit_6 = value;
	}

	inline static int32_t get_offset_of__viewFrom_7() { return static_cast<int32_t>(offsetof(QueryParams_t526937568, ____viewFrom_7)); }
	inline Nullable_1_t800577494  get__viewFrom_7() const { return ____viewFrom_7; }
	inline Nullable_1_t800577494 * get_address_of__viewFrom_7() { return &____viewFrom_7; }
	inline void set__viewFrom_7(Nullable_1_t800577494  value)
	{
		____viewFrom_7 = value;
	}
};

struct QueryParams_t526937568_StaticFields
{
public:
	// Firebase.Database.Internal.Core.View.QueryParams Firebase.Database.Internal.Core.View.QueryParams::DefaultParams
	QueryParams_t526937568 * ___DefaultParams_0;

public:
	inline static int32_t get_offset_of_DefaultParams_0() { return static_cast<int32_t>(offsetof(QueryParams_t526937568_StaticFields, ___DefaultParams_0)); }
	inline QueryParams_t526937568 * get_DefaultParams_0() const { return ___DefaultParams_0; }
	inline QueryParams_t526937568 ** get_address_of_DefaultParams_0() { return &___DefaultParams_0; }
	inline void set_DefaultParams_0(QueryParams_t526937568 * value)
	{
		___DefaultParams_0 = value;
		Il2CppCodeGenWriteBarrier(&___DefaultParams_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
