#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "System_Configuration_System_Configuration_Property1217826846.h"

// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t1776195828;
// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t2048066811;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.PropertyInformation
struct  PropertyInformation_t2089433965  : public Il2CppObject
{
public:
	// System.Boolean System.Configuration.PropertyInformation::isLocked
	bool ___isLocked_0;
	// System.Boolean System.Configuration.PropertyInformation::isModified
	bool ___isModified_1;
	// System.Int32 System.Configuration.PropertyInformation::lineNumber
	int32_t ___lineNumber_2;
	// System.String System.Configuration.PropertyInformation::source
	String_t* ___source_3;
	// System.Object System.Configuration.PropertyInformation::val
	Il2CppObject * ___val_4;
	// System.Configuration.PropertyValueOrigin System.Configuration.PropertyInformation::origin
	int32_t ___origin_5;
	// System.Configuration.ConfigurationElement System.Configuration.PropertyInformation::owner
	ConfigurationElement_t1776195828 * ___owner_6;
	// System.Configuration.ConfigurationProperty System.Configuration.PropertyInformation::property
	ConfigurationProperty_t2048066811 * ___property_7;

public:
	inline static int32_t get_offset_of_isLocked_0() { return static_cast<int32_t>(offsetof(PropertyInformation_t2089433965, ___isLocked_0)); }
	inline bool get_isLocked_0() const { return ___isLocked_0; }
	inline bool* get_address_of_isLocked_0() { return &___isLocked_0; }
	inline void set_isLocked_0(bool value)
	{
		___isLocked_0 = value;
	}

	inline static int32_t get_offset_of_isModified_1() { return static_cast<int32_t>(offsetof(PropertyInformation_t2089433965, ___isModified_1)); }
	inline bool get_isModified_1() const { return ___isModified_1; }
	inline bool* get_address_of_isModified_1() { return &___isModified_1; }
	inline void set_isModified_1(bool value)
	{
		___isModified_1 = value;
	}

	inline static int32_t get_offset_of_lineNumber_2() { return static_cast<int32_t>(offsetof(PropertyInformation_t2089433965, ___lineNumber_2)); }
	inline int32_t get_lineNumber_2() const { return ___lineNumber_2; }
	inline int32_t* get_address_of_lineNumber_2() { return &___lineNumber_2; }
	inline void set_lineNumber_2(int32_t value)
	{
		___lineNumber_2 = value;
	}

	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(PropertyInformation_t2089433965, ___source_3)); }
	inline String_t* get_source_3() const { return ___source_3; }
	inline String_t** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(String_t* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier(&___source_3, value);
	}

	inline static int32_t get_offset_of_val_4() { return static_cast<int32_t>(offsetof(PropertyInformation_t2089433965, ___val_4)); }
	inline Il2CppObject * get_val_4() const { return ___val_4; }
	inline Il2CppObject ** get_address_of_val_4() { return &___val_4; }
	inline void set_val_4(Il2CppObject * value)
	{
		___val_4 = value;
		Il2CppCodeGenWriteBarrier(&___val_4, value);
	}

	inline static int32_t get_offset_of_origin_5() { return static_cast<int32_t>(offsetof(PropertyInformation_t2089433965, ___origin_5)); }
	inline int32_t get_origin_5() const { return ___origin_5; }
	inline int32_t* get_address_of_origin_5() { return &___origin_5; }
	inline void set_origin_5(int32_t value)
	{
		___origin_5 = value;
	}

	inline static int32_t get_offset_of_owner_6() { return static_cast<int32_t>(offsetof(PropertyInformation_t2089433965, ___owner_6)); }
	inline ConfigurationElement_t1776195828 * get_owner_6() const { return ___owner_6; }
	inline ConfigurationElement_t1776195828 ** get_address_of_owner_6() { return &___owner_6; }
	inline void set_owner_6(ConfigurationElement_t1776195828 * value)
	{
		___owner_6 = value;
		Il2CppCodeGenWriteBarrier(&___owner_6, value);
	}

	inline static int32_t get_offset_of_property_7() { return static_cast<int32_t>(offsetof(PropertyInformation_t2089433965, ___property_7)); }
	inline ConfigurationProperty_t2048066811 * get_property_7() const { return ___property_7; }
	inline ConfigurationProperty_t2048066811 ** get_address_of_property_7() { return &___property_7; }
	inline void set_property_7(ConfigurationProperty_t2048066811 * value)
	{
		___property_7 = value;
		Il2CppCodeGenWriteBarrier(&___property_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
