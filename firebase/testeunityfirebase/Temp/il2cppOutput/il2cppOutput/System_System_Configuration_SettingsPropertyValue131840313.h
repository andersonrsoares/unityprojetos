#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Configuration.SettingsProperty
struct SettingsProperty_t1449509564;
// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.SettingsPropertyValue
struct  SettingsPropertyValue_t131840313  : public Il2CppObject
{
public:
	// System.Configuration.SettingsProperty System.Configuration.SettingsPropertyValue::property
	SettingsProperty_t1449509564 * ___property_0;
	// System.Object System.Configuration.SettingsPropertyValue::propertyValue
	Il2CppObject * ___propertyValue_1;
	// System.Object System.Configuration.SettingsPropertyValue::serializedValue
	Il2CppObject * ___serializedValue_2;
	// System.Boolean System.Configuration.SettingsPropertyValue::needSerializedValue
	bool ___needSerializedValue_3;
	// System.Boolean System.Configuration.SettingsPropertyValue::needPropertyValue
	bool ___needPropertyValue_4;
	// System.Boolean System.Configuration.SettingsPropertyValue::dirty
	bool ___dirty_5;
	// System.Boolean System.Configuration.SettingsPropertyValue::defaulted
	bool ___defaulted_6;
	// System.Boolean System.Configuration.SettingsPropertyValue::deserialized
	bool ___deserialized_7;

public:
	inline static int32_t get_offset_of_property_0() { return static_cast<int32_t>(offsetof(SettingsPropertyValue_t131840313, ___property_0)); }
	inline SettingsProperty_t1449509564 * get_property_0() const { return ___property_0; }
	inline SettingsProperty_t1449509564 ** get_address_of_property_0() { return &___property_0; }
	inline void set_property_0(SettingsProperty_t1449509564 * value)
	{
		___property_0 = value;
		Il2CppCodeGenWriteBarrier(&___property_0, value);
	}

	inline static int32_t get_offset_of_propertyValue_1() { return static_cast<int32_t>(offsetof(SettingsPropertyValue_t131840313, ___propertyValue_1)); }
	inline Il2CppObject * get_propertyValue_1() const { return ___propertyValue_1; }
	inline Il2CppObject ** get_address_of_propertyValue_1() { return &___propertyValue_1; }
	inline void set_propertyValue_1(Il2CppObject * value)
	{
		___propertyValue_1 = value;
		Il2CppCodeGenWriteBarrier(&___propertyValue_1, value);
	}

	inline static int32_t get_offset_of_serializedValue_2() { return static_cast<int32_t>(offsetof(SettingsPropertyValue_t131840313, ___serializedValue_2)); }
	inline Il2CppObject * get_serializedValue_2() const { return ___serializedValue_2; }
	inline Il2CppObject ** get_address_of_serializedValue_2() { return &___serializedValue_2; }
	inline void set_serializedValue_2(Il2CppObject * value)
	{
		___serializedValue_2 = value;
		Il2CppCodeGenWriteBarrier(&___serializedValue_2, value);
	}

	inline static int32_t get_offset_of_needSerializedValue_3() { return static_cast<int32_t>(offsetof(SettingsPropertyValue_t131840313, ___needSerializedValue_3)); }
	inline bool get_needSerializedValue_3() const { return ___needSerializedValue_3; }
	inline bool* get_address_of_needSerializedValue_3() { return &___needSerializedValue_3; }
	inline void set_needSerializedValue_3(bool value)
	{
		___needSerializedValue_3 = value;
	}

	inline static int32_t get_offset_of_needPropertyValue_4() { return static_cast<int32_t>(offsetof(SettingsPropertyValue_t131840313, ___needPropertyValue_4)); }
	inline bool get_needPropertyValue_4() const { return ___needPropertyValue_4; }
	inline bool* get_address_of_needPropertyValue_4() { return &___needPropertyValue_4; }
	inline void set_needPropertyValue_4(bool value)
	{
		___needPropertyValue_4 = value;
	}

	inline static int32_t get_offset_of_dirty_5() { return static_cast<int32_t>(offsetof(SettingsPropertyValue_t131840313, ___dirty_5)); }
	inline bool get_dirty_5() const { return ___dirty_5; }
	inline bool* get_address_of_dirty_5() { return &___dirty_5; }
	inline void set_dirty_5(bool value)
	{
		___dirty_5 = value;
	}

	inline static int32_t get_offset_of_defaulted_6() { return static_cast<int32_t>(offsetof(SettingsPropertyValue_t131840313, ___defaulted_6)); }
	inline bool get_defaulted_6() const { return ___defaulted_6; }
	inline bool* get_address_of_defaulted_6() { return &___defaulted_6; }
	inline void set_defaulted_6(bool value)
	{
		___defaulted_6 = value;
	}

	inline static int32_t get_offset_of_deserialized_7() { return static_cast<int32_t>(offsetof(SettingsPropertyValue_t131840313, ___deserialized_7)); }
	inline bool get_deserialized_7() const { return ___deserialized_7; }
	inline bool* get_address_of_deserialized_7() { return &___deserialized_7; }
	inline void set_deserialized_7(bool value)
	{
		___deserialized_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
