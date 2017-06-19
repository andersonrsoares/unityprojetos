#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Firebase_Database_Firebase_Database_Internal_Core_3598067969.h"

// Firebase.Database.Internal.Core.CompoundWrite
struct CompoundWrite_t496419158;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.Operation.Merge
struct  Merge_t4207088346  : public Operation_t3598067969
{
public:
	// Firebase.Database.Internal.Core.CompoundWrite Firebase.Database.Internal.Core.Operation.Merge::_children
	CompoundWrite_t496419158 * ____children_3;

public:
	inline static int32_t get_offset_of__children_3() { return static_cast<int32_t>(offsetof(Merge_t4207088346, ____children_3)); }
	inline CompoundWrite_t496419158 * get__children_3() const { return ____children_3; }
	inline CompoundWrite_t496419158 ** get_address_of__children_3() { return &____children_3; }
	inline void set__children_3(CompoundWrite_t496419158 * value)
	{
		____children_3 = value;
		Il2CppCodeGenWriteBarrier(&____children_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
