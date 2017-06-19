#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "Firebase_Database_Firebase_Database_Internal_Core_1909004847.h"

// Firebase.Database.Internal.Core.Operation.OperationSource
struct OperationSource_t1017554386;
// Firebase.Database.Internal.Core.View.QueryParams
struct QueryParams_t526937568;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.Operation.OperationSource
struct  OperationSource_t1017554386  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Core.View.QueryParams Firebase.Database.Internal.Core.Operation.OperationSource::_queryParams
	QueryParams_t526937568 * ____queryParams_2;
	// Firebase.Database.Internal.Core.Operation.OperationSource/Source Firebase.Database.Internal.Core.Operation.OperationSource::_source
	int32_t ____source_3;
	// System.Boolean Firebase.Database.Internal.Core.Operation.OperationSource::_tagged
	bool ____tagged_4;

public:
	inline static int32_t get_offset_of__queryParams_2() { return static_cast<int32_t>(offsetof(OperationSource_t1017554386, ____queryParams_2)); }
	inline QueryParams_t526937568 * get__queryParams_2() const { return ____queryParams_2; }
	inline QueryParams_t526937568 ** get_address_of__queryParams_2() { return &____queryParams_2; }
	inline void set__queryParams_2(QueryParams_t526937568 * value)
	{
		____queryParams_2 = value;
		Il2CppCodeGenWriteBarrier(&____queryParams_2, value);
	}

	inline static int32_t get_offset_of__source_3() { return static_cast<int32_t>(offsetof(OperationSource_t1017554386, ____source_3)); }
	inline int32_t get__source_3() const { return ____source_3; }
	inline int32_t* get_address_of__source_3() { return &____source_3; }
	inline void set__source_3(int32_t value)
	{
		____source_3 = value;
	}

	inline static int32_t get_offset_of__tagged_4() { return static_cast<int32_t>(offsetof(OperationSource_t1017554386, ____tagged_4)); }
	inline bool get__tagged_4() const { return ____tagged_4; }
	inline bool* get_address_of__tagged_4() { return &____tagged_4; }
	inline void set__tagged_4(bool value)
	{
		____tagged_4 = value;
	}
};

struct OperationSource_t1017554386_StaticFields
{
public:
	// Firebase.Database.Internal.Core.Operation.OperationSource Firebase.Database.Internal.Core.Operation.OperationSource::User
	OperationSource_t1017554386 * ___User_0;
	// Firebase.Database.Internal.Core.Operation.OperationSource Firebase.Database.Internal.Core.Operation.OperationSource::Server
	OperationSource_t1017554386 * ___Server_1;

public:
	inline static int32_t get_offset_of_User_0() { return static_cast<int32_t>(offsetof(OperationSource_t1017554386_StaticFields, ___User_0)); }
	inline OperationSource_t1017554386 * get_User_0() const { return ___User_0; }
	inline OperationSource_t1017554386 ** get_address_of_User_0() { return &___User_0; }
	inline void set_User_0(OperationSource_t1017554386 * value)
	{
		___User_0 = value;
		Il2CppCodeGenWriteBarrier(&___User_0, value);
	}

	inline static int32_t get_offset_of_Server_1() { return static_cast<int32_t>(offsetof(OperationSource_t1017554386_StaticFields, ___Server_1)); }
	inline OperationSource_t1017554386 * get_Server_1() const { return ___Server_1; }
	inline OperationSource_t1017554386 ** get_address_of_Server_1() { return &___Server_1; }
	inline void set_Server_1(OperationSource_t1017554386 * value)
	{
		___Server_1 = value;
		Il2CppCodeGenWriteBarrier(&___Server_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
