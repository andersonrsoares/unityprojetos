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
// Firebase.Database.Internal.Snapshot.ChildKey[]
struct ChildKeyU5BU5D_t491817302;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.Path
struct  Path_t2568473163  : public Il2CppObject
{
public:
	// System.Int32 Firebase.Database.Internal.Core.Path::_end
	int32_t ____end_1;
	// Firebase.Database.Internal.Snapshot.ChildKey[] Firebase.Database.Internal.Core.Path::_pieces
	ChildKeyU5BU5D_t491817302* ____pieces_2;
	// System.Int32 Firebase.Database.Internal.Core.Path::_start
	int32_t ____start_3;

public:
	inline static int32_t get_offset_of__end_1() { return static_cast<int32_t>(offsetof(Path_t2568473163, ____end_1)); }
	inline int32_t get__end_1() const { return ____end_1; }
	inline int32_t* get_address_of__end_1() { return &____end_1; }
	inline void set__end_1(int32_t value)
	{
		____end_1 = value;
	}

	inline static int32_t get_offset_of__pieces_2() { return static_cast<int32_t>(offsetof(Path_t2568473163, ____pieces_2)); }
	inline ChildKeyU5BU5D_t491817302* get__pieces_2() const { return ____pieces_2; }
	inline ChildKeyU5BU5D_t491817302** get_address_of__pieces_2() { return &____pieces_2; }
	inline void set__pieces_2(ChildKeyU5BU5D_t491817302* value)
	{
		____pieces_2 = value;
		Il2CppCodeGenWriteBarrier(&____pieces_2, value);
	}

	inline static int32_t get_offset_of__start_3() { return static_cast<int32_t>(offsetof(Path_t2568473163, ____start_3)); }
	inline int32_t get__start_3() const { return ____start_3; }
	inline int32_t* get_address_of__start_3() { return &____start_3; }
	inline void set__start_3(int32_t value)
	{
		____start_3 = value;
	}
};

struct Path_t2568473163_StaticFields
{
public:
	// Firebase.Database.Internal.Core.Path Firebase.Database.Internal.Core.Path::EmptyPath
	Path_t2568473163 * ___EmptyPath_0;

public:
	inline static int32_t get_offset_of_EmptyPath_0() { return static_cast<int32_t>(offsetof(Path_t2568473163_StaticFields, ___EmptyPath_0)); }
	inline Path_t2568473163 * get_EmptyPath_0() const { return ___EmptyPath_0; }
	inline Path_t2568473163 ** get_address_of_EmptyPath_0() { return &___EmptyPath_0; }
	inline void set_EmptyPath_0(Path_t2568473163 * value)
	{
		___EmptyPath_0 = value;
		Il2CppCodeGenWriteBarrier(&___EmptyPath_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
