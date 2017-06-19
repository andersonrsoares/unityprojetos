#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_System_Configuration_SettingsProvider2646068210.h"
#include "System_System_Configuration_UserConfigLocationOpti3269576549.h"

// System.Type
struct Type_t;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Configuration.ExeConfigurationFileMap
struct ExeConfigurationFileMap_t1419586304;
// System.Configuration.SettingsPropertyValueCollection
struct SettingsPropertyValueCollection_t2006501273;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.CustomizableFileSettingsProvider
struct  CustomizableFileSettingsProvider_t13032082  : public SettingsProvider_t2646068210
{
public:
	// System.String System.Configuration.CustomizableFileSettingsProvider::app_name
	String_t* ___app_name_25;
	// System.Configuration.ExeConfigurationFileMap System.Configuration.CustomizableFileSettingsProvider::exeMapCurrent
	ExeConfigurationFileMap_t1419586304 * ___exeMapCurrent_26;
	// System.Configuration.ExeConfigurationFileMap System.Configuration.CustomizableFileSettingsProvider::exeMapPrev
	ExeConfigurationFileMap_t1419586304 * ___exeMapPrev_27;
	// System.Configuration.SettingsPropertyValueCollection System.Configuration.CustomizableFileSettingsProvider::values
	SettingsPropertyValueCollection_t2006501273 * ___values_28;

public:
	inline static int32_t get_offset_of_app_name_25() { return static_cast<int32_t>(offsetof(CustomizableFileSettingsProvider_t13032082, ___app_name_25)); }
	inline String_t* get_app_name_25() const { return ___app_name_25; }
	inline String_t** get_address_of_app_name_25() { return &___app_name_25; }
	inline void set_app_name_25(String_t* value)
	{
		___app_name_25 = value;
		Il2CppCodeGenWriteBarrier(&___app_name_25, value);
	}

	inline static int32_t get_offset_of_exeMapCurrent_26() { return static_cast<int32_t>(offsetof(CustomizableFileSettingsProvider_t13032082, ___exeMapCurrent_26)); }
	inline ExeConfigurationFileMap_t1419586304 * get_exeMapCurrent_26() const { return ___exeMapCurrent_26; }
	inline ExeConfigurationFileMap_t1419586304 ** get_address_of_exeMapCurrent_26() { return &___exeMapCurrent_26; }
	inline void set_exeMapCurrent_26(ExeConfigurationFileMap_t1419586304 * value)
	{
		___exeMapCurrent_26 = value;
		Il2CppCodeGenWriteBarrier(&___exeMapCurrent_26, value);
	}

	inline static int32_t get_offset_of_exeMapPrev_27() { return static_cast<int32_t>(offsetof(CustomizableFileSettingsProvider_t13032082, ___exeMapPrev_27)); }
	inline ExeConfigurationFileMap_t1419586304 * get_exeMapPrev_27() const { return ___exeMapPrev_27; }
	inline ExeConfigurationFileMap_t1419586304 ** get_address_of_exeMapPrev_27() { return &___exeMapPrev_27; }
	inline void set_exeMapPrev_27(ExeConfigurationFileMap_t1419586304 * value)
	{
		___exeMapPrev_27 = value;
		Il2CppCodeGenWriteBarrier(&___exeMapPrev_27, value);
	}

	inline static int32_t get_offset_of_values_28() { return static_cast<int32_t>(offsetof(CustomizableFileSettingsProvider_t13032082, ___values_28)); }
	inline SettingsPropertyValueCollection_t2006501273 * get_values_28() const { return ___values_28; }
	inline SettingsPropertyValueCollection_t2006501273 ** get_address_of_values_28() { return &___values_28; }
	inline void set_values_28(SettingsPropertyValueCollection_t2006501273 * value)
	{
		___values_28 = value;
		Il2CppCodeGenWriteBarrier(&___values_28, value);
	}
};

struct CustomizableFileSettingsProvider_t13032082_StaticFields
{
public:
	// System.Type System.Configuration.CustomizableFileSettingsProvider::webConfigurationFileMapType
	Type_t * ___webConfigurationFileMapType_3;
	// System.String System.Configuration.CustomizableFileSettingsProvider::userRoamingPath
	String_t* ___userRoamingPath_4;
	// System.String System.Configuration.CustomizableFileSettingsProvider::userLocalPath
	String_t* ___userLocalPath_5;
	// System.String System.Configuration.CustomizableFileSettingsProvider::userRoamingPathPrevVersion
	String_t* ___userRoamingPathPrevVersion_6;
	// System.String System.Configuration.CustomizableFileSettingsProvider::userLocalPathPrevVersion
	String_t* ___userLocalPathPrevVersion_7;
	// System.String System.Configuration.CustomizableFileSettingsProvider::userRoamingName
	String_t* ___userRoamingName_8;
	// System.String System.Configuration.CustomizableFileSettingsProvider::userLocalName
	String_t* ___userLocalName_9;
	// System.String System.Configuration.CustomizableFileSettingsProvider::userRoamingBasePath
	String_t* ___userRoamingBasePath_10;
	// System.String System.Configuration.CustomizableFileSettingsProvider::userLocalBasePath
	String_t* ___userLocalBasePath_11;
	// System.String System.Configuration.CustomizableFileSettingsProvider::CompanyName
	String_t* ___CompanyName_12;
	// System.String System.Configuration.CustomizableFileSettingsProvider::ProductName
	String_t* ___ProductName_13;
	// System.String System.Configuration.CustomizableFileSettingsProvider::ForceVersion
	String_t* ___ForceVersion_14;
	// System.String[] System.Configuration.CustomizableFileSettingsProvider::ProductVersion
	StringU5BU5D_t1642385972* ___ProductVersion_15;
	// System.Boolean System.Configuration.CustomizableFileSettingsProvider::isVersionMajor
	bool ___isVersionMajor_16;
	// System.Boolean System.Configuration.CustomizableFileSettingsProvider::isVersionMinor
	bool ___isVersionMinor_17;
	// System.Boolean System.Configuration.CustomizableFileSettingsProvider::isVersionBuild
	bool ___isVersionBuild_18;
	// System.Boolean System.Configuration.CustomizableFileSettingsProvider::isVersionRevision
	bool ___isVersionRevision_19;
	// System.Boolean System.Configuration.CustomizableFileSettingsProvider::isCompany
	bool ___isCompany_20;
	// System.Boolean System.Configuration.CustomizableFileSettingsProvider::isProduct
	bool ___isProduct_21;
	// System.Boolean System.Configuration.CustomizableFileSettingsProvider::isEvidence
	bool ___isEvidence_22;
	// System.Boolean System.Configuration.CustomizableFileSettingsProvider::userDefine
	bool ___userDefine_23;
	// System.Configuration.UserConfigLocationOption System.Configuration.CustomizableFileSettingsProvider::userConfig
	uint32_t ___userConfig_24;

public:
	inline static int32_t get_offset_of_webConfigurationFileMapType_3() { return static_cast<int32_t>(offsetof(CustomizableFileSettingsProvider_t13032082_StaticFields, ___webConfigurationFileMapType_3)); }
	inline Type_t * get_webConfigurationFileMapType_3() const { return ___webConfigurationFileMapType_3; }
	inline Type_t ** get_address_of_webConfigurationFileMapType_3() { return &___webConfigurationFileMapType_3; }
	inline void set_webConfigurationFileMapType_3(Type_t * value)
	{
		___webConfigurationFileMapType_3 = value;
		Il2CppCodeGenWriteBarrier(&___webConfigurationFileMapType_3, value);
	}

	inline static int32_t get_offset_of_userRoamingPath_4() { return static_cast<int32_t>(offsetof(CustomizableFileSettingsProvider_t13032082_StaticFields, ___userRoamingPath_4)); }
	inline String_t* get_userRoamingPath_4() const { return ___userRoamingPath_4; }
	inline String_t** get_address_of_userRoamingPath_4() { return &___userRoamingPath_4; }
	inline void set_userRoamingPath_4(String_t* value)
	{
		___userRoamingPath_4 = value;
		Il2CppCodeGenWriteBarrier(&___userRoamingPath_4, value);
	}

	inline static int32_t get_offset_of_userLocalPath_5() { return static_cast<int32_t>(offsetof(CustomizableFileSettingsProvider_t13032082_StaticFields, ___userLocalPath_5)); }
	inline String_t* get_userLocalPath_5() const { return ___userLocalPath_5; }
	inline String_t** get_address_of_userLocalPath_5() { return &___userLocalPath_5; }
	inline void set_userLocalPath_5(String_t* value)
	{
		___userLocalPath_5 = value;
		Il2CppCodeGenWriteBarrier(&___userLocalPath_5, value);
	}

	inline static int32_t get_offset_of_userRoamingPathPrevVersion_6() { return static_cast<int32_t>(offsetof(CustomizableFileSettingsProvider_t13032082_StaticFields, ___userRoamingPathPrevVersion_6)); }
	inline String_t* get_userRoamingPathPrevVersion_6() const { return ___userRoamingPathPrevVersion_6; }
	inline String_t** get_address_of_userRoamingPathPrevVersion_6() { return &___userRoamingPathPrevVersion_6; }
	inline void set_userRoamingPathPrevVersion_6(String_t* value)
	{
		___userRoamingPathPrevVersion_6 = value;
		Il2CppCodeGenWriteBarrier(&___userRoamingPathPrevVersion_6, value);
	}

	inline static int32_t get_offset_of_userLocalPathPrevVersion_7() { return static_cast<int32_t>(offsetof(CustomizableFileSettingsProvider_t13032082_StaticFields, ___userLocalPathPrevVersion_7)); }
	inline String_t* get_userLocalPathPrevVersion_7() const { return ___userLocalPathPrevVersion_7; }
	inline String_t** get_address_of_userLocalPathPrevVersion_7() { return &___userLocalPathPrevVersion_7; }
	inline void set_userLocalPathPrevVersion_7(String_t* value)
	{
		___userLocalPathPrevVersion_7 = value;
		Il2CppCodeGenWriteBarrier(&___userLocalPathPrevVersion_7, value);
	}

	inline static int32_t get_offset_of_userRoamingName_8() { return static_cast<int32_t>(offsetof(CustomizableFileSettingsProvider_t13032082_StaticFields, ___userRoamingName_8)); }
	inline String_t* get_userRoamingName_8() const { return ___userRoamingName_8; }
	inline String_t** get_address_of_userRoamingName_8() { return &___userRoamingName_8; }
	inline void set_userRoamingName_8(String_t* value)
	{
		___userRoamingName_8 = value;
		Il2CppCodeGenWriteBarrier(&___userRoamingName_8, value);
	}

	inline static int32_t get_offset_of_userLocalName_9() { return static_cast<int32_t>(offsetof(CustomizableFileSettingsProvider_t13032082_StaticFields, ___userLocalName_9)); }
	inline String_t* get_userLocalName_9() const { return ___userLocalName_9; }
	inline String_t** get_address_of_userLocalName_9() { return &___userLocalName_9; }
	inline void set_userLocalName_9(String_t* value)
	{
		___userLocalName_9 = value;
		Il2CppCodeGenWriteBarrier(&___userLocalName_9, value);
	}

	inline static int32_t get_offset_of_userRoamingBasePath_10() { return static_cast<int32_t>(offsetof(CustomizableFileSettingsProvider_t13032082_StaticFields, ___userRoamingBasePath_10)); }
	inline String_t* get_userRoamingBasePath_10() const { return ___userRoamingBasePath_10; }
	inline String_t** get_address_of_userRoamingBasePath_10() { return &___userRoamingBasePath_10; }
	inline void set_userRoamingBasePath_10(String_t* value)
	{
		___userRoamingBasePath_10 = value;
		Il2CppCodeGenWriteBarrier(&___userRoamingBasePath_10, value);
	}

	inline static int32_t get_offset_of_userLocalBasePath_11() { return static_cast<int32_t>(offsetof(CustomizableFileSettingsProvider_t13032082_StaticFields, ___userLocalBasePath_11)); }
	inline String_t* get_userLocalBasePath_11() const { return ___userLocalBasePath_11; }
	inline String_t** get_address_of_userLocalBasePath_11() { return &___userLocalBasePath_11; }
	inline void set_userLocalBasePath_11(String_t* value)
	{
		___userLocalBasePath_11 = value;
		Il2CppCodeGenWriteBarrier(&___userLocalBasePath_11, value);
	}

	inline static int32_t get_offset_of_CompanyName_12() { return static_cast<int32_t>(offsetof(CustomizableFileSettingsProvider_t13032082_StaticFields, ___CompanyName_12)); }
	inline String_t* get_CompanyName_12() const { return ___CompanyName_12; }
	inline String_t** get_address_of_CompanyName_12() { return &___CompanyName_12; }
	inline void set_CompanyName_12(String_t* value)
	{
		___CompanyName_12 = value;
		Il2CppCodeGenWriteBarrier(&___CompanyName_12, value);
	}

	inline static int32_t get_offset_of_ProductName_13() { return static_cast<int32_t>(offsetof(CustomizableFileSettingsProvider_t13032082_StaticFields, ___ProductName_13)); }
	inline String_t* get_ProductName_13() const { return ___ProductName_13; }
	inline String_t** get_address_of_ProductName_13() { return &___ProductName_13; }
	inline void set_ProductName_13(String_t* value)
	{
		___ProductName_13 = value;
		Il2CppCodeGenWriteBarrier(&___ProductName_13, value);
	}

	inline static int32_t get_offset_of_ForceVersion_14() { return static_cast<int32_t>(offsetof(CustomizableFileSettingsProvider_t13032082_StaticFields, ___ForceVersion_14)); }
	inline String_t* get_ForceVersion_14() const { return ___ForceVersion_14; }
	inline String_t** get_address_of_ForceVersion_14() { return &___ForceVersion_14; }
	inline void set_ForceVersion_14(String_t* value)
	{
		___ForceVersion_14 = value;
		Il2CppCodeGenWriteBarrier(&___ForceVersion_14, value);
	}

	inline static int32_t get_offset_of_ProductVersion_15() { return static_cast<int32_t>(offsetof(CustomizableFileSettingsProvider_t13032082_StaticFields, ___ProductVersion_15)); }
	inline StringU5BU5D_t1642385972* get_ProductVersion_15() const { return ___ProductVersion_15; }
	inline StringU5BU5D_t1642385972** get_address_of_ProductVersion_15() { return &___ProductVersion_15; }
	inline void set_ProductVersion_15(StringU5BU5D_t1642385972* value)
	{
		___ProductVersion_15 = value;
		Il2CppCodeGenWriteBarrier(&___ProductVersion_15, value);
	}

	inline static int32_t get_offset_of_isVersionMajor_16() { return static_cast<int32_t>(offsetof(CustomizableFileSettingsProvider_t13032082_StaticFields, ___isVersionMajor_16)); }
	inline bool get_isVersionMajor_16() const { return ___isVersionMajor_16; }
	inline bool* get_address_of_isVersionMajor_16() { return &___isVersionMajor_16; }
	inline void set_isVersionMajor_16(bool value)
	{
		___isVersionMajor_16 = value;
	}

	inline static int32_t get_offset_of_isVersionMinor_17() { return static_cast<int32_t>(offsetof(CustomizableFileSettingsProvider_t13032082_StaticFields, ___isVersionMinor_17)); }
	inline bool get_isVersionMinor_17() const { return ___isVersionMinor_17; }
	inline bool* get_address_of_isVersionMinor_17() { return &___isVersionMinor_17; }
	inline void set_isVersionMinor_17(bool value)
	{
		___isVersionMinor_17 = value;
	}

	inline static int32_t get_offset_of_isVersionBuild_18() { return static_cast<int32_t>(offsetof(CustomizableFileSettingsProvider_t13032082_StaticFields, ___isVersionBuild_18)); }
	inline bool get_isVersionBuild_18() const { return ___isVersionBuild_18; }
	inline bool* get_address_of_isVersionBuild_18() { return &___isVersionBuild_18; }
	inline void set_isVersionBuild_18(bool value)
	{
		___isVersionBuild_18 = value;
	}

	inline static int32_t get_offset_of_isVersionRevision_19() { return static_cast<int32_t>(offsetof(CustomizableFileSettingsProvider_t13032082_StaticFields, ___isVersionRevision_19)); }
	inline bool get_isVersionRevision_19() const { return ___isVersionRevision_19; }
	inline bool* get_address_of_isVersionRevision_19() { return &___isVersionRevision_19; }
	inline void set_isVersionRevision_19(bool value)
	{
		___isVersionRevision_19 = value;
	}

	inline static int32_t get_offset_of_isCompany_20() { return static_cast<int32_t>(offsetof(CustomizableFileSettingsProvider_t13032082_StaticFields, ___isCompany_20)); }
	inline bool get_isCompany_20() const { return ___isCompany_20; }
	inline bool* get_address_of_isCompany_20() { return &___isCompany_20; }
	inline void set_isCompany_20(bool value)
	{
		___isCompany_20 = value;
	}

	inline static int32_t get_offset_of_isProduct_21() { return static_cast<int32_t>(offsetof(CustomizableFileSettingsProvider_t13032082_StaticFields, ___isProduct_21)); }
	inline bool get_isProduct_21() const { return ___isProduct_21; }
	inline bool* get_address_of_isProduct_21() { return &___isProduct_21; }
	inline void set_isProduct_21(bool value)
	{
		___isProduct_21 = value;
	}

	inline static int32_t get_offset_of_isEvidence_22() { return static_cast<int32_t>(offsetof(CustomizableFileSettingsProvider_t13032082_StaticFields, ___isEvidence_22)); }
	inline bool get_isEvidence_22() const { return ___isEvidence_22; }
	inline bool* get_address_of_isEvidence_22() { return &___isEvidence_22; }
	inline void set_isEvidence_22(bool value)
	{
		___isEvidence_22 = value;
	}

	inline static int32_t get_offset_of_userDefine_23() { return static_cast<int32_t>(offsetof(CustomizableFileSettingsProvider_t13032082_StaticFields, ___userDefine_23)); }
	inline bool get_userDefine_23() const { return ___userDefine_23; }
	inline bool* get_address_of_userDefine_23() { return &___userDefine_23; }
	inline void set_userDefine_23(bool value)
	{
		___userDefine_23 = value;
	}

	inline static int32_t get_offset_of_userConfig_24() { return static_cast<int32_t>(offsetof(CustomizableFileSettingsProvider_t13032082_StaticFields, ___userConfig_24)); }
	inline uint32_t get_userConfig_24() const { return ___userConfig_24; }
	inline uint32_t* get_address_of_userConfig_24() { return &___userConfig_24; }
	inline void set_userConfig_24(uint32_t value)
	{
		___userConfig_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
