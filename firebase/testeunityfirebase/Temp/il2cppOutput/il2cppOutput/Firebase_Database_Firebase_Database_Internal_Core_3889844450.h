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
// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;
// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.Repo/TransactionData>
struct IList_1_t2684453066;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.Repo/RequestResultCallback817
struct  RequestResultCallback817_t3889844450  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Core.Repo Firebase.Database.Internal.Core.Repo/RequestResultCallback817::_enclosing
	Repo_t1244308462 * ____enclosing_0;
	// Firebase.Database.Internal.Core.Path Firebase.Database.Internal.Core.Repo/RequestResultCallback817::_path
	Path_t2568473163 * ____path_1;
	// System.Collections.Generic.IList`1<Firebase.Database.Internal.Core.Repo/TransactionData> Firebase.Database.Internal.Core.Repo/RequestResultCallback817::_queue
	Il2CppObject* ____queue_2;
	// Firebase.Database.Internal.Core.Repo Firebase.Database.Internal.Core.Repo/RequestResultCallback817::_repo
	Repo_t1244308462 * ____repo_3;

public:
	inline static int32_t get_offset_of__enclosing_0() { return static_cast<int32_t>(offsetof(RequestResultCallback817_t3889844450, ____enclosing_0)); }
	inline Repo_t1244308462 * get__enclosing_0() const { return ____enclosing_0; }
	inline Repo_t1244308462 ** get_address_of__enclosing_0() { return &____enclosing_0; }
	inline void set__enclosing_0(Repo_t1244308462 * value)
	{
		____enclosing_0 = value;
		Il2CppCodeGenWriteBarrier(&____enclosing_0, value);
	}

	inline static int32_t get_offset_of__path_1() { return static_cast<int32_t>(offsetof(RequestResultCallback817_t3889844450, ____path_1)); }
	inline Path_t2568473163 * get__path_1() const { return ____path_1; }
	inline Path_t2568473163 ** get_address_of__path_1() { return &____path_1; }
	inline void set__path_1(Path_t2568473163 * value)
	{
		____path_1 = value;
		Il2CppCodeGenWriteBarrier(&____path_1, value);
	}

	inline static int32_t get_offset_of__queue_2() { return static_cast<int32_t>(offsetof(RequestResultCallback817_t3889844450, ____queue_2)); }
	inline Il2CppObject* get__queue_2() const { return ____queue_2; }
	inline Il2CppObject** get_address_of__queue_2() { return &____queue_2; }
	inline void set__queue_2(Il2CppObject* value)
	{
		____queue_2 = value;
		Il2CppCodeGenWriteBarrier(&____queue_2, value);
	}

	inline static int32_t get_offset_of__repo_3() { return static_cast<int32_t>(offsetof(RequestResultCallback817_t3889844450, ____repo_3)); }
	inline Repo_t1244308462 * get__repo_3() const { return ____repo_3; }
	inline Repo_t1244308462 ** get_address_of__repo_3() { return &____repo_3; }
	inline void set__repo_3(Repo_t1244308462 * value)
	{
		____repo_3 = value;
		Il2CppCodeGenWriteBarrier(&____repo_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
