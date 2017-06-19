#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Firebase_Database_Firebase_Database_Internal_Snapsh394951299.h"

// Firebase.Database.Internal.Snapshot.CompoundHash/CompoundHashBuilder
struct CompoundHashBuilder_t1995558443;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Snapshot.CompoundHash/ChildVisitor206
struct  ChildVisitor206_t1476446587  : public ChildVisitor_t394951299
{
public:
	// Firebase.Database.Internal.Snapshot.CompoundHash/CompoundHashBuilder Firebase.Database.Internal.Snapshot.CompoundHash/ChildVisitor206::_state
	CompoundHashBuilder_t1995558443 * ____state_0;

public:
	inline static int32_t get_offset_of__state_0() { return static_cast<int32_t>(offsetof(ChildVisitor206_t1476446587, ____state_0)); }
	inline CompoundHashBuilder_t1995558443 * get__state_0() const { return ____state_0; }
	inline CompoundHashBuilder_t1995558443 ** get_address_of__state_0() { return &____state_0; }
	inline void set__state_0(CompoundHashBuilder_t1995558443 * value)
	{
		____state_0 = value;
		Il2CppCodeGenWriteBarrier(&____state_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
