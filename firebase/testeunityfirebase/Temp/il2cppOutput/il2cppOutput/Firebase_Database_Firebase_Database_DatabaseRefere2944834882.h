#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Database.DatabaseReference
struct DatabaseReference_t1167676104;
// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;
// Firebase.Database.Internal.Utilities.Pair`2<System.Threading.Tasks.Task`1<System.Object>,Firebase.Database.DatabaseReference/CompletionListener>
struct Pair_2_t2408862168;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.DatabaseReference/Runnable226
struct  Runnable226_t2944834882  : public Il2CppObject
{
public:
	// Firebase.Database.DatabaseReference Firebase.Database.DatabaseReference/Runnable226::_enclosing
	DatabaseReference_t1167676104 * ____enclosing_0;
	// Firebase.Database.Internal.Snapshot.Node Firebase.Database.DatabaseReference/Runnable226::_node
	Node_t2640059010 * ____node_1;
	// Firebase.Database.Internal.Utilities.Pair`2<System.Threading.Tasks.Task`1<System.Object>,Firebase.Database.DatabaseReference/CompletionListener> Firebase.Database.DatabaseReference/Runnable226::_wrapped
	Pair_2_t2408862168 * ____wrapped_2;

public:
	inline static int32_t get_offset_of__enclosing_0() { return static_cast<int32_t>(offsetof(Runnable226_t2944834882, ____enclosing_0)); }
	inline DatabaseReference_t1167676104 * get__enclosing_0() const { return ____enclosing_0; }
	inline DatabaseReference_t1167676104 ** get_address_of__enclosing_0() { return &____enclosing_0; }
	inline void set__enclosing_0(DatabaseReference_t1167676104 * value)
	{
		____enclosing_0 = value;
		Il2CppCodeGenWriteBarrier(&____enclosing_0, value);
	}

	inline static int32_t get_offset_of__node_1() { return static_cast<int32_t>(offsetof(Runnable226_t2944834882, ____node_1)); }
	inline Node_t2640059010 * get__node_1() const { return ____node_1; }
	inline Node_t2640059010 ** get_address_of__node_1() { return &____node_1; }
	inline void set__node_1(Node_t2640059010 * value)
	{
		____node_1 = value;
		Il2CppCodeGenWriteBarrier(&____node_1, value);
	}

	inline static int32_t get_offset_of__wrapped_2() { return static_cast<int32_t>(offsetof(Runnable226_t2944834882, ____wrapped_2)); }
	inline Pair_2_t2408862168 * get__wrapped_2() const { return ____wrapped_2; }
	inline Pair_2_t2408862168 ** get_address_of__wrapped_2() { return &____wrapped_2; }
	inline void set__wrapped_2(Pair_2_t2408862168 * value)
	{
		____wrapped_2 = value;
		Il2CppCodeGenWriteBarrier(&____wrapped_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
