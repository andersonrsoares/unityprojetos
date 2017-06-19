#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;
// Firebase.Database.Internal.Snapshot.ChildKey
struct ChildKey_t1197802383;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.Path/Enumerator174
struct  Enumerator174_t1007998148  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Core.Path Firebase.Database.Internal.Core.Path/Enumerator174::_enclosing
	Path_t2568473163 * ____enclosing_0;
	// System.Int32 Firebase.Database.Internal.Core.Path/Enumerator174::_offset
	int32_t ____offset_1;
	// Firebase.Database.Internal.Snapshot.ChildKey Firebase.Database.Internal.Core.Path/Enumerator174::<Current>k__BackingField
	ChildKey_t1197802383 * ___U3CCurrentU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of__enclosing_0() { return static_cast<int32_t>(offsetof(Enumerator174_t1007998148, ____enclosing_0)); }
	inline Path_t2568473163 * get__enclosing_0() const { return ____enclosing_0; }
	inline Path_t2568473163 ** get_address_of__enclosing_0() { return &____enclosing_0; }
	inline void set__enclosing_0(Path_t2568473163 * value)
	{
		____enclosing_0 = value;
		Il2CppCodeGenWriteBarrier(&____enclosing_0, value);
	}

	inline static int32_t get_offset_of__offset_1() { return static_cast<int32_t>(offsetof(Enumerator174_t1007998148, ____offset_1)); }
	inline int32_t get__offset_1() const { return ____offset_1; }
	inline int32_t* get_address_of__offset_1() { return &____offset_1; }
	inline void set__offset_1(int32_t value)
	{
		____offset_1 = value;
	}

	inline static int32_t get_offset_of_U3CCurrentU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Enumerator174_t1007998148, ___U3CCurrentU3Ek__BackingField_2)); }
	inline ChildKey_t1197802383 * get_U3CCurrentU3Ek__BackingField_2() const { return ___U3CCurrentU3Ek__BackingField_2; }
	inline ChildKey_t1197802383 ** get_address_of_U3CCurrentU3Ek__BackingField_2() { return &___U3CCurrentU3Ek__BackingField_2; }
	inline void set_U3CCurrentU3Ek__BackingField_2(ChildKey_t1197802383 * value)
	{
		___U3CCurrentU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCurrentU3Ek__BackingField_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
