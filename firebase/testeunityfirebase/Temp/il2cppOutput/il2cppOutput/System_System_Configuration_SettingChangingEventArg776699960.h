#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_System_ComponentModel_CancelEventArgs1976499267.h"

// System.String
struct String_t;
// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.SettingChangingEventArgs
struct  SettingChangingEventArgs_t776699960  : public CancelEventArgs_t1976499267
{
public:
	// System.String System.Configuration.SettingChangingEventArgs::settingName
	String_t* ___settingName_2;
	// System.String System.Configuration.SettingChangingEventArgs::settingClass
	String_t* ___settingClass_3;
	// System.String System.Configuration.SettingChangingEventArgs::settingKey
	String_t* ___settingKey_4;
	// System.Object System.Configuration.SettingChangingEventArgs::newValue
	Il2CppObject * ___newValue_5;

public:
	inline static int32_t get_offset_of_settingName_2() { return static_cast<int32_t>(offsetof(SettingChangingEventArgs_t776699960, ___settingName_2)); }
	inline String_t* get_settingName_2() const { return ___settingName_2; }
	inline String_t** get_address_of_settingName_2() { return &___settingName_2; }
	inline void set_settingName_2(String_t* value)
	{
		___settingName_2 = value;
		Il2CppCodeGenWriteBarrier(&___settingName_2, value);
	}

	inline static int32_t get_offset_of_settingClass_3() { return static_cast<int32_t>(offsetof(SettingChangingEventArgs_t776699960, ___settingClass_3)); }
	inline String_t* get_settingClass_3() const { return ___settingClass_3; }
	inline String_t** get_address_of_settingClass_3() { return &___settingClass_3; }
	inline void set_settingClass_3(String_t* value)
	{
		___settingClass_3 = value;
		Il2CppCodeGenWriteBarrier(&___settingClass_3, value);
	}

	inline static int32_t get_offset_of_settingKey_4() { return static_cast<int32_t>(offsetof(SettingChangingEventArgs_t776699960, ___settingKey_4)); }
	inline String_t* get_settingKey_4() const { return ___settingKey_4; }
	inline String_t** get_address_of_settingKey_4() { return &___settingKey_4; }
	inline void set_settingKey_4(String_t* value)
	{
		___settingKey_4 = value;
		Il2CppCodeGenWriteBarrier(&___settingKey_4, value);
	}

	inline static int32_t get_offset_of_newValue_5() { return static_cast<int32_t>(offsetof(SettingChangingEventArgs_t776699960, ___newValue_5)); }
	inline Il2CppObject * get_newValue_5() const { return ___newValue_5; }
	inline Il2CppObject ** get_address_of_newValue_5() { return &___newValue_5; }
	inline void set_newValue_5(Il2CppObject * value)
	{
		___newValue_5 = value;
		Il2CppCodeGenWriteBarrier(&___newValue_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
