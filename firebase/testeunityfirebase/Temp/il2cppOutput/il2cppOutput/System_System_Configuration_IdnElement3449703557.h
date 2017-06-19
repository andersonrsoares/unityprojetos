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

// System.Configuration.IdnElement
struct  IdnElement_t3449703557  : public ConfigurationElement_t1776195828
{
public:

public:
};

struct IdnElement_t3449703557_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Configuration.IdnElement::properties
	ConfigurationPropertyCollection_t3473514151 * ___properties_14;
	// System.Configuration.ConfigurationProperty System.Configuration.IdnElement::enabled_prop
	ConfigurationProperty_t2048066811 * ___enabled_prop_15;

public:
	inline static int32_t get_offset_of_properties_14() { return static_cast<int32_t>(offsetof(IdnElement_t3449703557_StaticFields, ___properties_14)); }
	inline ConfigurationPropertyCollection_t3473514151 * get_properties_14() const { return ___properties_14; }
	inline ConfigurationPropertyCollection_t3473514151 ** get_address_of_properties_14() { return &___properties_14; }
	inline void set_properties_14(ConfigurationPropertyCollection_t3473514151 * value)
	{
		___properties_14 = value;
		Il2CppCodeGenWriteBarrier(&___properties_14, value);
	}

	inline static int32_t get_offset_of_enabled_prop_15() { return static_cast<int32_t>(offsetof(IdnElement_t3449703557_StaticFields, ___enabled_prop_15)); }
	inline ConfigurationProperty_t2048066811 * get_enabled_prop_15() const { return ___enabled_prop_15; }
	inline ConfigurationProperty_t2048066811 ** get_address_of_enabled_prop_15() { return &___enabled_prop_15; }
	inline void set_enabled_prop_15(ConfigurationProperty_t2048066811 * value)
	{
		___enabled_prop_15 = value;
		Il2CppCodeGenWriteBarrier(&___enabled_prop_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
