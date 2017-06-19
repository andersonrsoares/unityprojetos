#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Firebase_Database_Firebase_Database_Internal_Snaps2640059010.h"

// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Snapshot.LeafNode
struct  LeafNode_t3399591604  : public Node_t2640059010
{
public:
	// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Snapshot.LeafNode::Priority
	Node_t2640059010 * ___Priority_1;
	// System.String Firebase.Database.Internal.Snapshot.LeafNode::_lazyHash
	String_t* ____lazyHash_2;

public:
	inline static int32_t get_offset_of_Priority_1() { return static_cast<int32_t>(offsetof(LeafNode_t3399591604, ___Priority_1)); }
	inline Node_t2640059010 * get_Priority_1() const { return ___Priority_1; }
	inline Node_t2640059010 ** get_address_of_Priority_1() { return &___Priority_1; }
	inline void set_Priority_1(Node_t2640059010 * value)
	{
		___Priority_1 = value;
		Il2CppCodeGenWriteBarrier(&___Priority_1, value);
	}

	inline static int32_t get_offset_of__lazyHash_2() { return static_cast<int32_t>(offsetof(LeafNode_t3399591604, ____lazyHash_2)); }
	inline String_t* get__lazyHash_2() const { return ____lazyHash_2; }
	inline String_t** get_address_of__lazyHash_2() { return &____lazyHash_2; }
	inline void set__lazyHash_2(String_t* value)
	{
		____lazyHash_2 = value;
		Il2CppCodeGenWriteBarrier(&____lazyHash_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
