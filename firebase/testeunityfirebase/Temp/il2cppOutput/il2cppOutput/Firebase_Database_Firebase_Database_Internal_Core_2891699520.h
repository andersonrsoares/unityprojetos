#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t2603311978;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.CompoundWrite/TreeVisitor234
struct  TreeVisitor234_t2891699520  : public Il2CppObject
{
public:
	// System.Boolean Firebase.Database.Internal.Core.CompoundWrite/TreeVisitor234::_exportFormat
	bool ____exportFormat_0;
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> Firebase.Database.Internal.Core.CompoundWrite/TreeVisitor234::_writes
	Il2CppObject* ____writes_1;

public:
	inline static int32_t get_offset_of__exportFormat_0() { return static_cast<int32_t>(offsetof(TreeVisitor234_t2891699520, ____exportFormat_0)); }
	inline bool get__exportFormat_0() const { return ____exportFormat_0; }
	inline bool* get_address_of__exportFormat_0() { return &____exportFormat_0; }
	inline void set__exportFormat_0(bool value)
	{
		____exportFormat_0 = value;
	}

	inline static int32_t get_offset_of__writes_1() { return static_cast<int32_t>(offsetof(TreeVisitor234_t2891699520, ____writes_1)); }
	inline Il2CppObject* get__writes_1() const { return ____writes_1; }
	inline Il2CppObject** get_address_of__writes_1() { return &____writes_1; }
	inline void set__writes_1(Il2CppObject* value)
	{
		____writes_1 = value;
		Il2CppCodeGenWriteBarrier(&____writes_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
