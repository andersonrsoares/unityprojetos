#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;
// Firebase.Platform.IClockService
struct IClockService_t3133746056;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Platform.Security.ServiceCredential/Initializer
struct  Initializer_t3855616227  : public Il2CppObject
{
public:
	// System.String Firebase.Platform.Security.ServiceCredential/Initializer::<TokenServerUrl>k__BackingField
	String_t* ___U3CTokenServerUrlU3Ek__BackingField_0;
	// Firebase.Platform.IClockService Firebase.Platform.Security.ServiceCredential/Initializer::<Clock>k__BackingField
	Il2CppObject * ___U3CClockU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CTokenServerUrlU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Initializer_t3855616227, ___U3CTokenServerUrlU3Ek__BackingField_0)); }
	inline String_t* get_U3CTokenServerUrlU3Ek__BackingField_0() const { return ___U3CTokenServerUrlU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CTokenServerUrlU3Ek__BackingField_0() { return &___U3CTokenServerUrlU3Ek__BackingField_0; }
	inline void set_U3CTokenServerUrlU3Ek__BackingField_0(String_t* value)
	{
		___U3CTokenServerUrlU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CTokenServerUrlU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CClockU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Initializer_t3855616227, ___U3CClockU3Ek__BackingField_1)); }
	inline Il2CppObject * get_U3CClockU3Ek__BackingField_1() const { return ___U3CClockU3Ek__BackingField_1; }
	inline Il2CppObject ** get_address_of_U3CClockU3Ek__BackingField_1() { return &___U3CClockU3Ek__BackingField_1; }
	inline void set_U3CClockU3Ek__BackingField_1(Il2CppObject * value)
	{
		___U3CClockU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CClockU3Ek__BackingField_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
