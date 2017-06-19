#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Database.Internal.Core.SyncTree
struct SyncTree_t528142079;
// Firebase.Database.Internal.Snapshot.Node
struct Node_t2640059010;
// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.SyncTree/Callable149
struct  Callable149_t2640751814  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Core.SyncTree Firebase.Database.Internal.Core.SyncTree/Callable149::_enclosing
	SyncTree_t528142079 * ____enclosing_0;
	// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Core.SyncTree/Callable149::_newData
	Node_t2640059010 * ____newData_1;
	// Firebase.Database.Internal.Snapshot.Node Firebase.Database.Internal.Core.SyncTree/Callable149::_newDataUnresolved
	Node_t2640059010 * ____newDataUnresolved_2;
	// Firebase.Database.Internal.Core.Path Firebase.Database.Internal.Core.SyncTree/Callable149::_path
	Path_t2568473163 * ____path_3;
	// System.Boolean Firebase.Database.Internal.Core.SyncTree/Callable149::_persist
	bool ____persist_4;
	// System.Boolean Firebase.Database.Internal.Core.SyncTree/Callable149::_visible
	bool ____visible_5;
	// System.Int64 Firebase.Database.Internal.Core.SyncTree/Callable149::_writeId
	int64_t ____writeId_6;

public:
	inline static int32_t get_offset_of__enclosing_0() { return static_cast<int32_t>(offsetof(Callable149_t2640751814, ____enclosing_0)); }
	inline SyncTree_t528142079 * get__enclosing_0() const { return ____enclosing_0; }
	inline SyncTree_t528142079 ** get_address_of__enclosing_0() { return &____enclosing_0; }
	inline void set__enclosing_0(SyncTree_t528142079 * value)
	{
		____enclosing_0 = value;
		Il2CppCodeGenWriteBarrier(&____enclosing_0, value);
	}

	inline static int32_t get_offset_of__newData_1() { return static_cast<int32_t>(offsetof(Callable149_t2640751814, ____newData_1)); }
	inline Node_t2640059010 * get__newData_1() const { return ____newData_1; }
	inline Node_t2640059010 ** get_address_of__newData_1() { return &____newData_1; }
	inline void set__newData_1(Node_t2640059010 * value)
	{
		____newData_1 = value;
		Il2CppCodeGenWriteBarrier(&____newData_1, value);
	}

	inline static int32_t get_offset_of__newDataUnresolved_2() { return static_cast<int32_t>(offsetof(Callable149_t2640751814, ____newDataUnresolved_2)); }
	inline Node_t2640059010 * get__newDataUnresolved_2() const { return ____newDataUnresolved_2; }
	inline Node_t2640059010 ** get_address_of__newDataUnresolved_2() { return &____newDataUnresolved_2; }
	inline void set__newDataUnresolved_2(Node_t2640059010 * value)
	{
		____newDataUnresolved_2 = value;
		Il2CppCodeGenWriteBarrier(&____newDataUnresolved_2, value);
	}

	inline static int32_t get_offset_of__path_3() { return static_cast<int32_t>(offsetof(Callable149_t2640751814, ____path_3)); }
	inline Path_t2568473163 * get__path_3() const { return ____path_3; }
	inline Path_t2568473163 ** get_address_of__path_3() { return &____path_3; }
	inline void set__path_3(Path_t2568473163 * value)
	{
		____path_3 = value;
		Il2CppCodeGenWriteBarrier(&____path_3, value);
	}

	inline static int32_t get_offset_of__persist_4() { return static_cast<int32_t>(offsetof(Callable149_t2640751814, ____persist_4)); }
	inline bool get__persist_4() const { return ____persist_4; }
	inline bool* get_address_of__persist_4() { return &____persist_4; }
	inline void set__persist_4(bool value)
	{
		____persist_4 = value;
	}

	inline static int32_t get_offset_of__visible_5() { return static_cast<int32_t>(offsetof(Callable149_t2640751814, ____visible_5)); }
	inline bool get__visible_5() const { return ____visible_5; }
	inline bool* get_address_of__visible_5() { return &____visible_5; }
	inline void set__visible_5(bool value)
	{
		____visible_5 = value;
	}

	inline static int32_t get_offset_of__writeId_6() { return static_cast<int32_t>(offsetof(Callable149_t2640751814, ____writeId_6)); }
	inline int64_t get__writeId_6() const { return ____writeId_6; }
	inline int64_t* get_address_of__writeId_6() { return &____writeId_6; }
	inline void set__writeId_6(int64_t value)
	{
		____writeId_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
