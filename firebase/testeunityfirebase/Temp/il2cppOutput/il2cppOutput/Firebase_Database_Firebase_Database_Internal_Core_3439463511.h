#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Firebase_Database_Firebase_Database_Internal_Core_3598067969.h"

// Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<System.Nullable`1<System.Boolean>>
struct ImmutableTree_1_t368550071;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.Operation.AckUserWrite
struct  AckUserWrite_t3439463511  : public Operation_t3598067969
{
public:
	// Firebase.Database.Internal.Core.Utilities.ImmutableTree`1<System.Nullable`1<System.Boolean>> Firebase.Database.Internal.Core.Operation.AckUserWrite::_affectedTree
	ImmutableTree_1_t368550071 * ____affectedTree_3;
	// System.Boolean Firebase.Database.Internal.Core.Operation.AckUserWrite::_revert
	bool ____revert_4;

public:
	inline static int32_t get_offset_of__affectedTree_3() { return static_cast<int32_t>(offsetof(AckUserWrite_t3439463511, ____affectedTree_3)); }
	inline ImmutableTree_1_t368550071 * get__affectedTree_3() const { return ____affectedTree_3; }
	inline ImmutableTree_1_t368550071 ** get_address_of__affectedTree_3() { return &____affectedTree_3; }
	inline void set__affectedTree_3(ImmutableTree_1_t368550071 * value)
	{
		____affectedTree_3 = value;
		Il2CppCodeGenWriteBarrier(&____affectedTree_3, value);
	}

	inline static int32_t get_offset_of__revert_4() { return static_cast<int32_t>(offsetof(AckUserWrite_t3439463511, ____revert_4)); }
	inline bool get__revert_4() const { return ____revert_4; }
	inline bool* get_address_of__revert_4() { return &____revert_4; }
	inline void set__revert_4(bool value)
	{
		____revert_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
