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

// System.String
struct String_t;
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
	Index_t2425062456 * ____index_8;
	// Firebase.Database.Internal.Snapshot.ChildKey Firebase.Database.Internal.Core.View.QueryParams::_indexEndName
	ChildKey_t1197802383 * ____indexEndName_9;
	// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Core.View.QueryParams::_indexEndValue
	Node_t2640059010 * ____indexEndValue_10;
	// Firebase.Database.Internal.Snapshot.ChildKey Firebase.Database.Internal.Core.View.QueryParams::_indexStartName
	ChildKey_t1197802383 * ____indexStartName_11;
	// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Core.View.QueryParams::_indexStartValue
	Node_t2640059010 * ____indexStartValue_12;
	// System.String Firebase.Database.Internal.Core.View.QueryParams::_jsonSerialization
	String_t* ____jsonSerialization_13;
	// System.Nullable`1<System.Int32> Firebase.Database.Internal.Core.View.QueryParams::_limit
	Nullable_1_t334943763  ____limit_14;
	// System.Nullable`1<Firebase.Database.Internal.Core.View.QueryParams/ViewFrom> Firebase.Database.Internal.Core.View.QueryParams::_viewFrom
	Nullable_1_t800577494  ____viewFrom_15;

public:
	inline static int32_t get_offset_of__index_8() { return static_cast<int32_t>(offsetof(QueryParams_t526937568, ____index_8)); }
	inline Index_t2425062456 * get__index_8() const { return ____index_8; }
	inline Index_t2425062456 ** get_address_of__index_8() { return &____index_8; }
	inline void set__index_8(Index_t2425062456 * value)
	{
		____index_8 = value;
		Il2CppCodeGenWriteBarrier(&____index_8, value);
	}

	inline static int32_t get_offset_of__indexEndName_9() { return static_cast<int32_t>(offsetof(QueryParams_t526937568, ____indexEndName_9)); }
	inline ChildKey_t1197802383 * get__indexEndName_9() const { return ____indexEndName_9; }
	inline ChildKey_t1197802383 ** get_address_of__indexEndName_9() { return &____indexEndName_9; }
	inline void set__indexEndName_9(ChildKey_t1197802383 * value)
	{
		____indexEndName_9 = value;
		Il2CppCodeGenWriteBarrier(&____indexEndName_9, value);
	}

	inline static int32_t get_offset_of__indexEndValue_10() { return static_cast<int32_t>(offsetof(QueryParams_t526937568, ____indexEndValue_10)); }
	inline Node_t2640059010 * get__indexEndValue_10() const { return ____indexEndValue_10; }
	inline Node_t2640059010 ** get_address_of__indexEndValue_10() { return &____indexEndValue_10; }
	inline void set__indexEndValue_10(Node_t2640059010 * value)
	{
		____indexEndValue_10 = value;
		Il2CppCodeGenWriteBarrier(&____indexEndValue_10, value);
	}

	inline static int32_t get_offset_of__indexStartName_11() { return static_cast<int32_t>(offsetof(QueryParams_t526937568, ____indexStartName_11)); }
	inline ChildKey_t1197802383 * get__indexStartName_11() const { return ____indexStartName_11; }
	inline ChildKey_t1197802383 ** get_address_of__indexStartName_11() { return &____indexStartName_11; }
	inline void set__indexStartName_11(ChildKey_t1197802383 * value)
	{
		____indexStartName_11 = value;
		Il2CppCodeGenWriteBarrier(&____indexStartName_11, value);
	}

	inline static int32_t get_offset_of__indexStartValue_12() { return static_cast<int32_t>(offsetof(QueryParams_t526937568, ____indexStartValue_12)); }
	inline Node_t2640059010 * get__indexStartValue_12() const { return ____indexStartValue_12; }
	inline Node_t2640059010 ** get_address_of__indexStartValue_12() { return &____indexStartValue_12; }
	inline void set__indexStartValue_12(Node_t2640059010 * value)
	{
		____indexStartValue_12 = value;
		Il2CppCodeGenWriteBarrier(&____indexStartValue_12, value);
	}

	inline static int32_t get_offset_of__jsonSerialization_13() { return static_cast<int32_t>(offsetof(QueryParams_t526937568, ____jsonSerialization_13)); }
	inline String_t* get__jsonSerialization_13() const { return ____jsonSerialization_13; }
	inline String_t** get_address_of__jsonSerialization_13() { return &____jsonSerialization_13; }
	inline void set__jsonSerialization_13(String_t* value)
	{
		____jsonSerialization_13 = value;
		Il2CppCodeGenWriteBarrier(&____jsonSerialization_13, value);
	}

	inline static int32_t get_offset_of__limit_14() { return static_cast<int32_t>(offsetof(QueryParams_t526937568, ____limit_14)); }
	inline Nullable_1_t334943763  get__limit_14() const { return ____limit_14; }
	inline Nullable_1_t334943763 * get_address_of__limit_14() { return &____limit_14; }
	inline void set__limit_14(Nullable_1_t334943763  value)
	{
		____limit_14 = value;
	}

	inline static int32_t get_offset_of__viewFrom_15() { return static_cast<int32_t>(offsetof(QueryParams_t526937568, ____viewFrom_15)); }
	inline Nullable_1_t800577494  get__viewFrom_15() const { return ____viewFrom_15; }
	inline Nullable_1_t800577494 * get_address_of__viewFrom_15() { return &____viewFrom_15; }
	inline void set__viewFrom_15(Nullable_1_t800577494  value)
	{
		____viewFrom_15 = value;
	}
};

struct QueryParams_t526937568_StaticFields
{
public:
	// Firebase.Database.Internal.Core.View.QueryParams Firebase.Database.Internal.Core.View.QueryParams::DefaultParams
	QueryParams_t526937568 * ___DefaultParams_7;

public:
	inline static int32_t get_offset_of_DefaultParams_7() { return static_cast<int32_t>(offsetof(QueryParams_t526937568_StaticFields, ___DefaultParams_7)); }
	inline QueryParams_t526937568 * get_DefaultParams_7() const { return ___DefaultParams_7; }
	inline QueryParams_t526937568 ** get_address_of_DefaultParams_7() { return &___DefaultParams_7; }
	inline void set_DefaultParams_7(QueryParams_t526937568 * value)
	{
		___DefaultParams_7 = value;
		Il2CppCodeGenWriteBarrier(&___DefaultParams_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
