#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Firebase_Database_Firebase_Database_Internal_Colle4116347079.h"

// Firebase.Database.Internal.Core.SyncTree
struct SyncTree_t528142079;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.Event>
struct IList_1_t1273747003;
// Firebase.Database.Internal.Core.Operation.Operation
struct Operation_t3598067969;
// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;
// Firebase.Database.Internal.Core.WriteTreeRef
struct WriteTreeRef_t351426802;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.SyncTree/NodeVisitor826
struct  NodeVisitor826_t3330738428  : public NodeVisitor_t4116347079
{
public:
	// Firebase.Database.Internal.Core.SyncTree Firebase.Database.Internal.Core.SyncTree/NodeVisitor826::_enclosing
	SyncTree_t528142079 * ____enclosing_0;
	// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.View.Event> Firebase.Database.Internal.Core.SyncTree/NodeVisitor826::_events
	Il2CppObject* ____events_1;
	// Firebase.Database.Internal.Core.Operation.Operation Firebase.Database.Internal.Core.SyncTree/NodeVisitor826::_operation
	Operation_t3598067969 * ____operation_2;
	// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Core.SyncTree/NodeVisitor826::_resolvedServerCache
	Node_t2640059010 * ____resolvedServerCache_3;
	// Firebase.Database.Internal.Core.WriteTreeRef Firebase.Database.Internal.Core.SyncTree/NodeVisitor826::_writesCache
	WriteTreeRef_t351426802 * ____writesCache_4;

public:
	inline static int32_t get_offset_of__enclosing_0() { return static_cast<int32_t>(offsetof(NodeVisitor826_t3330738428, ____enclosing_0)); }
	inline SyncTree_t528142079 * get__enclosing_0() const { return ____enclosing_0; }
	inline SyncTree_t528142079 ** get_address_of__enclosing_0() { return &____enclosing_0; }
	inline void set__enclosing_0(SyncTree_t528142079 * value)
	{
		____enclosing_0 = value;
		Il2CppCodeGenWriteBarrier(&____enclosing_0, value);
	}

	inline static int32_t get_offset_of__events_1() { return static_cast<int32_t>(offsetof(NodeVisitor826_t3330738428, ____events_1)); }
	inline Il2CppObject* get__events_1() const { return ____events_1; }
	inline Il2CppObject** get_address_of__events_1() { return &____events_1; }
	inline void set__events_1(Il2CppObject* value)
	{
		____events_1 = value;
		Il2CppCodeGenWriteBarrier(&____events_1, value);
	}

	inline static int32_t get_offset_of__operation_2() { return static_cast<int32_t>(offsetof(NodeVisitor826_t3330738428, ____operation_2)); }
	inline Operation_t3598067969 * get__operation_2() const { return ____operation_2; }
	inline Operation_t3598067969 ** get_address_of__operation_2() { return &____operation_2; }
	inline void set__operation_2(Operation_t3598067969 * value)
	{
		____operation_2 = value;
		Il2CppCodeGenWriteBarrier(&____operation_2, value);
	}

	inline static int32_t get_offset_of__resolvedServerCache_3() { return static_cast<int32_t>(offsetof(NodeVisitor826_t3330738428, ____resolvedServerCache_3)); }
	inline Node_t2640059010 * get__resolvedServerCache_3() const { return ____resolvedServerCache_3; }
	inline Node_t2640059010 ** get_address_of__resolvedServerCache_3() { return &____resolvedServerCache_3; }
	inline void set__resolvedServerCache_3(Node_t2640059010 * value)
	{
		____resolvedServerCache_3 = value;
		Il2CppCodeGenWriteBarrier(&____resolvedServerCache_3, value);
	}

	inline static int32_t get_offset_of__writesCache_4() { return static_cast<int32_t>(offsetof(NodeVisitor826_t3330738428, ____writesCache_4)); }
	inline WriteTreeRef_t351426802 * get__writesCache_4() const { return ____writesCache_4; }
	inline WriteTreeRef_t351426802 ** get_address_of__writesCache_4() { return &____writesCache_4; }
	inline void set__writesCache_4(WriteTreeRef_t351426802 * value)
	{
		____writesCache_4 = value;
		Il2CppCodeGenWriteBarrier(&____writesCache_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
