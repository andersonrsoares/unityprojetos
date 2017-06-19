#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Database.Internal.Core.CompoundWrite
struct CompoundWrite_t496419158;
// Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<Firebase.Database.Internal.Snapshot.Node>
struct ImmutableTree_1_t919968048;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.CompoundWrite
struct  CompoundWrite_t496419158  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<Firebase.Database.Internal.Snapshot.Node> Firebase.Database.Internal.Core.CompoundWrite::_writeTree
	ImmutableTree_1_t919968048 * ____writeTree_1;

public:
	inline static int32_t get_offset_of__writeTree_1() { return static_cast<int32_t>(offsetof(CompoundWrite_t496419158, ____writeTree_1)); }
	inline ImmutableTree_1_t919968048 * get__writeTree_1() const { return ____writeTree_1; }
	inline ImmutableTree_1_t919968048 ** get_address_of__writeTree_1() { return &____writeTree_1; }
	inline void set__writeTree_1(ImmutableTree_1_t919968048 * value)
	{
		____writeTree_1 = value;
		Il2CppCodeGenWriteBarrier(&____writeTree_1, value);
	}
};

struct CompoundWrite_t496419158_StaticFields
{
public:
	// Firebase.Database.Internal.Core.CompoundWrite Firebase.Database.Internal.Core.CompoundWrite::Empty
	CompoundWrite_t496419158 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(CompoundWrite_t496419158_StaticFields, ___Empty_0)); }
	inline CompoundWrite_t496419158 * get_Empty_0() const { return ___Empty_0; }
	inline CompoundWrite_t496419158 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(CompoundWrite_t496419158 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier(&___Empty_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
