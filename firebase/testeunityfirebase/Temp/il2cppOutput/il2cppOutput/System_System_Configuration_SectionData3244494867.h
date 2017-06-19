#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "System_System_Configuration_AllowDefinition2210296086.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.SectionData
struct  SectionData_t3244494867  : public Il2CppObject
{
public:
	// System.String System.Configuration.SectionData::SectionName
	String_t* ___SectionName_0;
	// System.String System.Configuration.SectionData::TypeName
	String_t* ___TypeName_1;
	// System.Boolean System.Configuration.SectionData::AllowLocation
	bool ___AllowLocation_2;
	// System.Configuration.AllowDefinition System.Configuration.SectionData::AllowDefinition
	int32_t ___AllowDefinition_3;
	// System.String System.Configuration.SectionData::FileName
	String_t* ___FileName_4;
	// System.Boolean System.Configuration.SectionData::RequirePermission
	bool ___RequirePermission_5;

public:
	inline static int32_t get_offset_of_SectionName_0() { return static_cast<int32_t>(offsetof(SectionData_t3244494867, ___SectionName_0)); }
	inline String_t* get_SectionName_0() const { return ___SectionName_0; }
	inline String_t** get_address_of_SectionName_0() { return &___SectionName_0; }
	inline void set_SectionName_0(String_t* value)
	{
		___SectionName_0 = value;
		Il2CppCodeGenWriteBarrier(&___SectionName_0, value);
	}

	inline static int32_t get_offset_of_TypeName_1() { return static_cast<int32_t>(offsetof(SectionData_t3244494867, ___TypeName_1)); }
	inline String_t* get_TypeName_1() const { return ___TypeName_1; }
	inline String_t** get_address_of_TypeName_1() { return &___TypeName_1; }
	inline void set_TypeName_1(String_t* value)
	{
		___TypeName_1 = value;
		Il2CppCodeGenWriteBarrier(&___TypeName_1, value);
	}

	inline static int32_t get_offset_of_AllowLocation_2() { return static_cast<int32_t>(offsetof(SectionData_t3244494867, ___AllowLocation_2)); }
	inline bool get_AllowLocation_2() const { return ___AllowLocation_2; }
	inline bool* get_address_of_AllowLocation_2() { return &___AllowLocation_2; }
	inline void set_AllowLocation_2(bool value)
	{
		___AllowLocation_2 = value;
	}

	inline static int32_t get_offset_of_AllowDefinition_3() { return static_cast<int32_t>(offsetof(SectionData_t3244494867, ___AllowDefinition_3)); }
	inline int32_t get_AllowDefinition_3() const { return ___AllowDefinition_3; }
	inline int32_t* get_address_of_AllowDefinition_3() { return &___AllowDefinition_3; }
	inline void set_AllowDefinition_3(int32_t value)
	{
		___AllowDefinition_3 = value;
	}

	inline static int32_t get_offset_of_FileName_4() { return static_cast<int32_t>(offsetof(SectionData_t3244494867, ___FileName_4)); }
	inline String_t* get_FileName_4() const { return ___FileName_4; }
	inline String_t** get_address_of_FileName_4() { return &___FileName_4; }
	inline void set_FileName_4(String_t* value)
	{
		___FileName_4 = value;
		Il2CppCodeGenWriteBarrier(&___FileName_4, value);
	}

	inline static int32_t get_offset_of_RequirePermission_5() { return static_cast<int32_t>(offsetof(SectionData_t3244494867, ___RequirePermission_5)); }
	inline bool get_RequirePermission_5() const { return ___RequirePermission_5; }
	inline bool* get_address_of_RequirePermission_5() { return &___RequirePermission_5; }
	inline void set_RequirePermission_5(bool value)
	{
		___RequirePermission_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
