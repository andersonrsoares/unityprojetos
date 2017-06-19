#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Database.Internal.Core.Utilities.Predicate`1<Firebase.Database.Internal.Core.UserWriteRecord>
struct Predicate_1_t3200809552;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.UserWriteRecord>
struct IList_1_t929618180;
// Firebase.Database.Internal.Core.CompoundWrite
struct CompoundWrite_t496419158;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.WriteTree
struct  WriteTree_t736318673  : public Il2CppObject
{
public:
	// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.UserWriteRecord> Firebase.Database.Internal.Core.WriteTree::_allWrites
	Il2CppObject* ____allWrites_1;
	// System.Int64 Firebase.Database.Internal.Core.WriteTree::_lastWriteId
	int64_t ____lastWriteId_2;
	// Firebase.Database.Internal.Core.CompoundWrite Firebase.Database.Internal.Core.WriteTree::_visibleWrites
	CompoundWrite_t496419158 * ____visibleWrites_3;

public:
	inline static int32_t get_offset_of__allWrites_1() { return static_cast<int32_t>(offsetof(WriteTree_t736318673, ____allWrites_1)); }
	inline Il2CppObject* get__allWrites_1() const { return ____allWrites_1; }
	inline Il2CppObject** get_address_of__allWrites_1() { return &____allWrites_1; }
	inline void set__allWrites_1(Il2CppObject* value)
	{
		____allWrites_1 = value;
		Il2CppCodeGenWriteBarrier(&____allWrites_1, value);
	}

	inline static int32_t get_offset_of__lastWriteId_2() { return static_cast<int32_t>(offsetof(WriteTree_t736318673, ____lastWriteId_2)); }
	inline int64_t get__lastWriteId_2() const { return ____lastWriteId_2; }
	inline int64_t* get_address_of__lastWriteId_2() { return &____lastWriteId_2; }
	inline void set__lastWriteId_2(int64_t value)
	{
		____lastWriteId_2 = value;
	}

	inline static int32_t get_offset_of__visibleWrites_3() { return static_cast<int32_t>(offsetof(WriteTree_t736318673, ____visibleWrites_3)); }
	inline CompoundWrite_t496419158 * get__visibleWrites_3() const { return ____visibleWrites_3; }
	inline CompoundWrite_t496419158 ** get_address_of__visibleWrites_3() { return &____visibleWrites_3; }
	inline void set__visibleWrites_3(CompoundWrite_t496419158 * value)
	{
		____visibleWrites_3 = value;
		Il2CppCodeGenWriteBarrier(&____visibleWrites_3, value);
	}
};

struct WriteTree_t736318673_StaticFields
{
public:
	// Firebase.Database.Internal.Core.Utilities.Predicate`1<Firebase.Database.Internal.Core.UserWriteRecord> Firebase.Database.Internal.Core.WriteTree::DefaultFilter
	Predicate_1_t3200809552 * ___DefaultFilter_0;

public:
	inline static int32_t get_offset_of_DefaultFilter_0() { return static_cast<int32_t>(offsetof(WriteTree_t736318673_StaticFields, ___DefaultFilter_0)); }
	inline Predicate_1_t3200809552 * get_DefaultFilter_0() const { return ___DefaultFilter_0; }
	inline Predicate_1_t3200809552 ** get_address_of_DefaultFilter_0() { return &___DefaultFilter_0; }
	inline void set_DefaultFilter_0(Predicate_1_t3200809552 * value)
	{
		___DefaultFilter_0 = value;
		Il2CppCodeGenWriteBarrier(&___DefaultFilter_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
