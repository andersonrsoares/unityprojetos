#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "System_System_Configuration_SettingsSerializeAs166605013.h"

// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Configuration.SettingsProvider
struct SettingsProvider_t2646068210;
// System.Object
struct Il2CppObject;
// System.Configuration.SettingsAttributeDictionary
struct SettingsAttributeDictionary_t1616311051;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.SettingsProperty
struct  SettingsProperty_t1449509564  : public Il2CppObject
{
public:
	// System.String System.Configuration.SettingsProperty::name
	String_t* ___name_0;
	// System.Type System.Configuration.SettingsProperty::propertyType
	Type_t * ___propertyType_1;
	// System.Configuration.SettingsProvider System.Configuration.SettingsProperty::provider
	SettingsProvider_t2646068210 * ___provider_2;
	// System.Boolean System.Configuration.SettingsProperty::isReadOnly
	bool ___isReadOnly_3;
	// System.Object System.Configuration.SettingsProperty::defaultValue
	Il2CppObject * ___defaultValue_4;
	// System.Configuration.SettingsSerializeAs System.Configuration.SettingsProperty::serializeAs
	int32_t ___serializeAs_5;
	// System.Configuration.SettingsAttributeDictionary System.Configuration.SettingsProperty::attributes
	SettingsAttributeDictionary_t1616311051 * ___attributes_6;
	// System.Boolean System.Configuration.SettingsProperty::throwOnErrorDeserializing
	bool ___throwOnErrorDeserializing_7;
	// System.Boolean System.Configuration.SettingsProperty::throwOnErrorSerializing
	bool ___throwOnErrorSerializing_8;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(SettingsProperty_t1449509564, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_propertyType_1() { return static_cast<int32_t>(offsetof(SettingsProperty_t1449509564, ___propertyType_1)); }
	inline Type_t * get_propertyType_1() const { return ___propertyType_1; }
	inline Type_t ** get_address_of_propertyType_1() { return &___propertyType_1; }
	inline void set_propertyType_1(Type_t * value)
	{
		___propertyType_1 = value;
		Il2CppCodeGenWriteBarrier(&___propertyType_1, value);
	}

	inline static int32_t get_offset_of_provider_2() { return static_cast<int32_t>(offsetof(SettingsProperty_t1449509564, ___provider_2)); }
	inline SettingsProvider_t2646068210 * get_provider_2() const { return ___provider_2; }
	inline SettingsProvider_t2646068210 ** get_address_of_provider_2() { return &___provider_2; }
	inline void set_provider_2(SettingsProvider_t2646068210 * value)
	{
		___provider_2 = value;
		Il2CppCodeGenWriteBarrier(&___provider_2, value);
	}

	inline static int32_t get_offset_of_isReadOnly_3() { return static_cast<int32_t>(offsetof(SettingsProperty_t1449509564, ___isReadOnly_3)); }
	inline bool get_isReadOnly_3() const { return ___isReadOnly_3; }
	inline bool* get_address_of_isReadOnly_3() { return &___isReadOnly_3; }
	inline void set_isReadOnly_3(bool value)
	{
		___isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_defaultValue_4() { return static_cast<int32_t>(offsetof(SettingsProperty_t1449509564, ___defaultValue_4)); }
	inline Il2CppObject * get_defaultValue_4() const { return ___defaultValue_4; }
	inline Il2CppObject ** get_address_of_defaultValue_4() { return &___defaultValue_4; }
	inline void set_defaultValue_4(Il2CppObject * value)
	{
		___defaultValue_4 = value;
		Il2CppCodeGenWriteBarrier(&___defaultValue_4, value);
	}

	inline static int32_t get_offset_of_serializeAs_5() { return static_cast<int32_t>(offsetof(SettingsProperty_t1449509564, ___serializeAs_5)); }
	inline int32_t get_serializeAs_5() const { return ___serializeAs_5; }
	inline int32_t* get_address_of_serializeAs_5() { return &___serializeAs_5; }
	inline void set_serializeAs_5(int32_t value)
	{
		___serializeAs_5 = value;
	}

	inline static int32_t get_offset_of_attributes_6() { return static_cast<int32_t>(offsetof(SettingsProperty_t1449509564, ___attributes_6)); }
	inline SettingsAttributeDictionary_t1616311051 * get_attributes_6() const { return ___attributes_6; }
	inline SettingsAttributeDictionary_t1616311051 ** get_address_of_attributes_6() { return &___attributes_6; }
	inline void set_attributes_6(SettingsAttributeDictionary_t1616311051 * value)
	{
		___attributes_6 = value;
		Il2CppCodeGenWriteBarrier(&___attributes_6, value);
	}

	inline static int32_t get_offset_of_throwOnErrorDeserializing_7() { return static_cast<int32_t>(offsetof(SettingsProperty_t1449509564, ___throwOnErrorDeserializing_7)); }
	inline bool get_throwOnErrorDeserializing_7() const { return ___throwOnErrorDeserializing_7; }
	inline bool* get_address_of_throwOnErrorDeserializing_7() { return &___throwOnErrorDeserializing_7; }
	inline void set_throwOnErrorDeserializing_7(bool value)
	{
		___throwOnErrorDeserializing_7 = value;
	}

	inline static int32_t get_offset_of_throwOnErrorSerializing_8() { return static_cast<int32_t>(offsetof(SettingsProperty_t1449509564, ___throwOnErrorSerializing_8)); }
	inline bool get_throwOnErrorSerializing_8() const { return ___throwOnErrorSerializing_8; }
	inline bool* get_address_of_throwOnErrorSerializing_8() { return &___throwOnErrorSerializing_8; }
	inline void set_throwOnErrorSerializing_8(bool value)
	{
		___throwOnErrorSerializing_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
