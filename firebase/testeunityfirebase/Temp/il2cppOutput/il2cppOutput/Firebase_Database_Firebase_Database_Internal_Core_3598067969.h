#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_O860860098.h"

// Firebase.Database.Internal.Core.Path
struct Path_t2568473163;
// Firebase.Database.Internal.Core.Operation.OperationSource
struct OperationSource_t1017554386;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.Operation.Operation
struct  Operation_t3598067969  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Core.Path Firebase.Database.Internal.Core.Operation.Operation::Path
	Path_t2568473163 * ___Path_0;
	// Firebase.Database.Internal.Core.Operation.OperationSource Firebase.Database.Internal.Core.Operation.Operation::Source
	OperationSource_t1017554386 * ___Source_1;
	// Firebase.Database.Internal.Core.Operation.Operation/OperationType Firebase.Database.Internal.Core.Operation.Operation::Type
	int32_t ___Type_2;

public:
	inline static int32_t get_offset_of_Path_0() { return static_cast<int32_t>(offsetof(Operation_t3598067969, ___Path_0)); }
	inline Path_t2568473163 * get_Path_0() const { return ___Path_0; }
	inline Path_t2568473163 ** get_address_of_Path_0() { return &___Path_0; }
	inline void set_Path_0(Path_t2568473163 * value)
	{
		___Path_0 = value;
		Il2CppCodeGenWriteBarrier(&___Path_0, value);
	}

	inline static int32_t get_offset_of_Source_1() { return static_cast<int32_t>(offsetof(Operation_t3598067969, ___Source_1)); }
	inline OperationSource_t1017554386 * get_Source_1() const { return ___Source_1; }
	inline OperationSource_t1017554386 ** get_address_of_Source_1() { return &___Source_1; }
	inline void set_Source_1(OperationSource_t1017554386 * value)
	{
		___Source_1 = value;
		Il2CppCodeGenWriteBarrier(&___Source_1, value);
	}

	inline static int32_t get_offset_of_Type_2() { return static_cast<int32_t>(offsetof(Operation_t3598067969, ___Type_2)); }
	inline int32_t get_Type_2() const { return ___Type_2; }
	inline int32_t* get_address_of_Type_2() { return &___Type_2; }
	inline void set_Type_2(int32_t value)
	{
		___Type_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
