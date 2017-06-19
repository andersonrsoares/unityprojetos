#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Configuration_System_Configuration_Configur1776195828.h"

// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t3473514151;
// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t2048066811;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.SettingElement
struct  SettingElement_t852147518  : public ConfigurationElement_t1776195828
{
public:

public:
};

struct SettingElement_t852147518_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Configuration.SettingElement::properties
	ConfigurationPropertyCollection_t3473514151 * ___properties_14;
	// System.Configuration.ConfigurationProperty System.Configuration.SettingElement::name_prop
	ConfigurationProperty_t2048066811 * ___name_prop_15;
	// System.Configuration.ConfigurationProperty System.Configuration.SettingElement::serialize_as_prop
	ConfigurationProperty_t2048066811 * ___serialize_as_prop_16;
	// System.Configuration.ConfigurationProperty System.Configuration.SettingElement::value_prop
	ConfigurationProperty_t2048066811 * ___value_prop_17;

public:
	inline static int32_t get_offset_of_properties_14() { return static_cast<int32_t>(offsetof(SettingElement_t852147518_StaticFields, ___properties_14)); }
	inline ConfigurationPropertyCollection_t3473514151 * get_properties_14() const { return ___properties_14; }
	inline ConfigurationPropertyCollection_t3473514151 ** get_address_of_properties_14() { return &___properties_14; }
	inline void set_properties_14(ConfigurationPropertyCollection_t3473514151 * value)
	{
		___properties_14 = value;
		Il2CppCodeGenWriteBarrier(&___properties_14, value);
	}

	inline static int32_t get_offset_of_name_prop_15() { return static_cast<int32_t>(offsetof(SettingElement_t852147518_StaticFields, ___name_prop_15)); }
	inline ConfigurationProperty_t2048066811 * get_name_prop_15() const { return ___name_prop_15; }
	inline ConfigurationProperty_t2048066811 ** get_address_of_name_prop_15() { return &___name_prop_15; }
	inline void set_name_prop_15(ConfigurationProperty_t2048066811 * value)
	{
		___name_prop_15 = value;
		Il2CppCodeGenWriteBarrier(&___name_prop_15, value);
	}

	inline static int32_t get_offset_of_serialize_as_prop_16() { return static_cast<int32_t>(offsetof(SettingElement_t852147518_StaticFields, ___serialize_as_prop_16)); }
	inline ConfigurationProperty_t2048066811 * get_serialize_as_prop_16() const { return ___serialize_as_prop_16; }
	inline ConfigurationProperty_t2048066811 ** get_address_of_serialize_as_prop_16() { return &___serialize_as_prop_16; }
	inline void set_serialize_as_prop_16(ConfigurationProperty_t2048066811 * value)
	{
		___serialize_as_prop_16 = value;
		Il2CppCodeGenWriteBarrier(&___serialize_as_prop_16, value);
	}

	inline static int32_t get_offset_of_value_prop_17() { return static_cast<int32_t>(offsetof(SettingElement_t852147518_StaticFields, ___value_prop_17)); }
	inline ConfigurationProperty_t2048066811 * get_value_prop_17() const { return ___value_prop_17; }
	inline ConfigurationProperty_t2048066811 ** get_address_of_value_prop_17() { return &___value_prop_17; }
	inline void set_value_prop_17(ConfigurationProperty_t2048066811 * value)
	{
		___value_prop_17 = value;
		Il2CppCodeGenWriteBarrier(&___value_prop_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
