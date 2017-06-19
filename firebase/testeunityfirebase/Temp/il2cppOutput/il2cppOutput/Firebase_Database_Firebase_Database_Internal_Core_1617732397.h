#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Database.Internal.Core.Utilities.Tree`1/ITreeVisitor<System.Object>
struct ITreeVisitor_t512772653;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.Utilities.Tree`1/TreeVisitor111<System.Object>
struct  TreeVisitor111_t1617732397  : public Il2CppObject
{
public:
	// System.Boolean Firebase.Database.Internal.Core.Utilities.Tree`1/TreeVisitor111::_childrenFirst
	bool ____childrenFirst_0;
	// Firebase.Database.Internal.Core.Utilities.Tree`1/ITreeVisitor<T> Firebase.Database.Internal.Core.Utilities.Tree`1/TreeVisitor111::_visitor
	Il2CppObject* ____visitor_1;

public:
	inline static int32_t get_offset_of__childrenFirst_0() { return static_cast<int32_t>(offsetof(TreeVisitor111_t1617732397, ____childrenFirst_0)); }
	inline bool get__childrenFirst_0() const { return ____childrenFirst_0; }
	inline bool* get_address_of__childrenFirst_0() { return &____childrenFirst_0; }
	inline void set__childrenFirst_0(bool value)
	{
		____childrenFirst_0 = value;
	}

	inline static int32_t get_offset_of__visitor_1() { return static_cast<int32_t>(offsetof(TreeVisitor111_t1617732397, ____visitor_1)); }
	inline Il2CppObject* get__visitor_1() const { return ____visitor_1; }
	inline Il2CppObject** get_address_of__visitor_1() { return &____visitor_1; }
	inline void set__visitor_1(Il2CppObject* value)
	{
		____visitor_1 = value;
		Il2CppCodeGenWriteBarrier(&____visitor_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
