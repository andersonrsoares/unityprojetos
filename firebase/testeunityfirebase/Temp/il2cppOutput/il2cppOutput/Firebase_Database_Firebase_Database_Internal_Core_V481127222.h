#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.IList`1<System.String>
struct IList_1_t2570160834;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.ValidationPath
struct  ValidationPath_t481127222  : public Il2CppObject
{
public:
	// System.Collections.Generic.IList`1<System.String> Firebase.Database.Internal.Core.ValidationPath::_parts
	Il2CppObject* ____parts_0;
	// System.Int32 Firebase.Database.Internal.Core.ValidationPath::_byteLength
	int32_t ____byteLength_1;

public:
	inline static int32_t get_offset_of__parts_0() { return static_cast<int32_t>(offsetof(ValidationPath_t481127222, ____parts_0)); }
	inline Il2CppObject* get__parts_0() const { return ____parts_0; }
	inline Il2CppObject** get_address_of__parts_0() { return &____parts_0; }
	inline void set__parts_0(Il2CppObject* value)
	{
		____parts_0 = value;
		Il2CppCodeGenWriteBarrier(&____parts_0, value);
	}

	inline static int32_t get_offset_of__byteLength_1() { return static_cast<int32_t>(offsetof(ValidationPath_t481127222, ____byteLength_1)); }
	inline int32_t get__byteLength_1() const { return ____byteLength_1; }
	inline int32_t* get_address_of__byteLength_1() { return &____byteLength_1; }
	inline void set__byteLength_1(int32_t value)
	{
		____byteLength_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
