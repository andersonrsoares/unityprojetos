#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_EventArgs3289624707.h"

// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Exception
struct Exception_t1927440687;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigurationSaveEventArgs
struct  ConfigurationSaveEventArgs_t3884867164  : public EventArgs_t3289624707
{
public:
	// System.String System.Configuration.ConfigurationSaveEventArgs::<StreamPath>k__BackingField
	String_t* ___U3CStreamPathU3Ek__BackingField_1;
	// System.Boolean System.Configuration.ConfigurationSaveEventArgs::<Start>k__BackingField
	bool ___U3CStartU3Ek__BackingField_2;
	// System.Object System.Configuration.ConfigurationSaveEventArgs::<Context>k__BackingField
	Il2CppObject * ___U3CContextU3Ek__BackingField_3;
	// System.Boolean System.Configuration.ConfigurationSaveEventArgs::<Failed>k__BackingField
	bool ___U3CFailedU3Ek__BackingField_4;
	// System.Exception System.Configuration.ConfigurationSaveEventArgs::<Exception>k__BackingField
	Exception_t1927440687 * ___U3CExceptionU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CStreamPathU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ConfigurationSaveEventArgs_t3884867164, ___U3CStreamPathU3Ek__BackingField_1)); }
	inline String_t* get_U3CStreamPathU3Ek__BackingField_1() const { return ___U3CStreamPathU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CStreamPathU3Ek__BackingField_1() { return &___U3CStreamPathU3Ek__BackingField_1; }
	inline void set_U3CStreamPathU3Ek__BackingField_1(String_t* value)
	{
		___U3CStreamPathU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CStreamPathU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of_U3CStartU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ConfigurationSaveEventArgs_t3884867164, ___U3CStartU3Ek__BackingField_2)); }
	inline bool get_U3CStartU3Ek__BackingField_2() const { return ___U3CStartU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CStartU3Ek__BackingField_2() { return &___U3CStartU3Ek__BackingField_2; }
	inline void set_U3CStartU3Ek__BackingField_2(bool value)
	{
		___U3CStartU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CContextU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ConfigurationSaveEventArgs_t3884867164, ___U3CContextU3Ek__BackingField_3)); }
	inline Il2CppObject * get_U3CContextU3Ek__BackingField_3() const { return ___U3CContextU3Ek__BackingField_3; }
	inline Il2CppObject ** get_address_of_U3CContextU3Ek__BackingField_3() { return &___U3CContextU3Ek__BackingField_3; }
	inline void set_U3CContextU3Ek__BackingField_3(Il2CppObject * value)
	{
		___U3CContextU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CContextU3Ek__BackingField_3, value);
	}

	inline static int32_t get_offset_of_U3CFailedU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ConfigurationSaveEventArgs_t3884867164, ___U3CFailedU3Ek__BackingField_4)); }
	inline bool get_U3CFailedU3Ek__BackingField_4() const { return ___U3CFailedU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CFailedU3Ek__BackingField_4() { return &___U3CFailedU3Ek__BackingField_4; }
	inline void set_U3CFailedU3Ek__BackingField_4(bool value)
	{
		___U3CFailedU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CExceptionU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ConfigurationSaveEventArgs_t3884867164, ___U3CExceptionU3Ek__BackingField_5)); }
	inline Exception_t1927440687 * get_U3CExceptionU3Ek__BackingField_5() const { return ___U3CExceptionU3Ek__BackingField_5; }
	inline Exception_t1927440687 ** get_address_of_U3CExceptionU3Ek__BackingField_5() { return &___U3CExceptionU3Ek__BackingField_5; }
	inline void set_U3CExceptionU3Ek__BackingField_5(Exception_t1927440687 * value)
	{
		___U3CExceptionU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CExceptionU3Ek__BackingField_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
