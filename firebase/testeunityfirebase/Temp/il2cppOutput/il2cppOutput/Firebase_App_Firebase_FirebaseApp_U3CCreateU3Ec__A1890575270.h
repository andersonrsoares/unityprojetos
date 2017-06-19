#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.AppOptions
struct AppOptions_t1641189195;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.FirebaseApp/<Create>c__AnonStorey1
struct  U3CCreateU3Ec__AnonStorey1_t1890575270  : public Il2CppObject
{
public:
	// Firebase.AppOptions Firebase.FirebaseApp/<Create>c__AnonStorey1::options
	AppOptions_t1641189195 * ___options_0;
	// System.String Firebase.FirebaseApp/<Create>c__AnonStorey1::name
	String_t* ___name_1;

public:
	inline static int32_t get_offset_of_options_0() { return static_cast<int32_t>(offsetof(U3CCreateU3Ec__AnonStorey1_t1890575270, ___options_0)); }
	inline AppOptions_t1641189195 * get_options_0() const { return ___options_0; }
	inline AppOptions_t1641189195 ** get_address_of_options_0() { return &___options_0; }
	inline void set_options_0(AppOptions_t1641189195 * value)
	{
		___options_0 = value;
		Il2CppCodeGenWriteBarrier(&___options_0, value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(U3CCreateU3Ec__AnonStorey1_t1890575270, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier(&___name_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
