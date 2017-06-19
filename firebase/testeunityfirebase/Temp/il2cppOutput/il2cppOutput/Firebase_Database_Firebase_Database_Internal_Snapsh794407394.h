#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Firebase_Database_Firebase_Database_Internal_Colle4066956794.h"

// Firebase.Database.Internal.Snapshot.ChildrenNode
struct ChildrenNode_t1490646017;
// Firebase.Database.Internal.Snapshot.ChildrenNode/ChildVisitor
struct ChildVisitor_t394951299;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Snapshot.ChildrenNode/NodeVisitor245
struct  NodeVisitor245_t794407394  : public NodeVisitor_t4066956794
{
public:
	// Firebase.Database.Internal.Snapshot.ChildrenNode Firebase.Database.Internal.Snapshot.ChildrenNode/NodeVisitor245::_enclosing
	ChildrenNode_t1490646017 * ____enclosing_0;
	// Firebase.Database.Internal.Snapshot.ChildrenNode/ChildVisitor Firebase.Database.Internal.Snapshot.ChildrenNode/NodeVisitor245::_visitor
	ChildVisitor_t394951299 * ____visitor_1;
	// System.Boolean Firebase.Database.Internal.Snapshot.ChildrenNode/NodeVisitor245::_passedPriorityKey
	bool ____passedPriorityKey_2;

public:
	inline static int32_t get_offset_of__enclosing_0() { return static_cast<int32_t>(offsetof(NodeVisitor245_t794407394, ____enclosing_0)); }
	inline ChildrenNode_t1490646017 * get__enclosing_0() const { return ____enclosing_0; }
	inline ChildrenNode_t1490646017 ** get_address_of__enclosing_0() { return &____enclosing_0; }
	inline void set__enclosing_0(ChildrenNode_t1490646017 * value)
	{
		____enclosing_0 = value;
		Il2CppCodeGenWriteBarrier(&____enclosing_0, value);
	}

	inline static int32_t get_offset_of__visitor_1() { return static_cast<int32_t>(offsetof(NodeVisitor245_t794407394, ____visitor_1)); }
	inline ChildVisitor_t394951299 * get__visitor_1() const { return ____visitor_1; }
	inline ChildVisitor_t394951299 ** get_address_of__visitor_1() { return &____visitor_1; }
	inline void set__visitor_1(ChildVisitor_t394951299 * value)
	{
		____visitor_1 = value;
		Il2CppCodeGenWriteBarrier(&____visitor_1, value);
	}

	inline static int32_t get_offset_of__passedPriorityKey_2() { return static_cast<int32_t>(offsetof(NodeVisitor245_t794407394, ____passedPriorityKey_2)); }
	inline bool get__passedPriorityKey_2() const { return ____passedPriorityKey_2; }
	inline bool* get_address_of__passedPriorityKey_2() { return &____passedPriorityKey_2; }
	inline void set__passedPriorityKey_2(bool value)
	{
		____passedPriorityKey_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
