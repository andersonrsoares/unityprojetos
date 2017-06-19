#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Uri
struct Uri_t19570940;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// Firebase.Platform.Default.AppConfigExtensions
struct AppConfigExtensions_t2317624261;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct Dictionary_2_t2951825130;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Platform.Default.AppConfigExtensions
struct  AppConfigExtensions_t2317624261  : public Il2CppObject
{
public:

public:
};

struct AppConfigExtensions_t2317624261_StaticFields
{
public:
	// System.Uri Firebase.Platform.Default.AppConfigExtensions::DefaultUpdateUrl
	Uri_t19570940 * ___DefaultUpdateUrl_0;
	// System.String Firebase.Platform.Default.AppConfigExtensions::Default
	String_t* ___Default_1;
	// System.Object Firebase.Platform.Default.AppConfigExtensions::Sync
	Il2CppObject * ___Sync_2;
	// Firebase.Platform.Default.AppConfigExtensions Firebase.Platform.Default.AppConfigExtensions::_instance
	AppConfigExtensions_t2317624261 * ____instance_3;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.String,System.String>> Firebase.Platform.Default.AppConfigExtensions::SStringState
	Dictionary_2_t2951825130 * ___SStringState_4;

public:
	inline static int32_t get_offset_of_DefaultUpdateUrl_0() { return static_cast<int32_t>(offsetof(AppConfigExtensions_t2317624261_StaticFields, ___DefaultUpdateUrl_0)); }
	inline Uri_t19570940 * get_DefaultUpdateUrl_0() const { return ___DefaultUpdateUrl_0; }
	inline Uri_t19570940 ** get_address_of_DefaultUpdateUrl_0() { return &___DefaultUpdateUrl_0; }
	inline void set_DefaultUpdateUrl_0(Uri_t19570940 * value)
	{
		___DefaultUpdateUrl_0 = value;
		Il2CppCodeGenWriteBarrier(&___DefaultUpdateUrl_0, value);
	}

	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(AppConfigExtensions_t2317624261_StaticFields, ___Default_1)); }
	inline String_t* get_Default_1() const { return ___Default_1; }
	inline String_t** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(String_t* value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier(&___Default_1, value);
	}

	inline static int32_t get_offset_of_Sync_2() { return static_cast<int32_t>(offsetof(AppConfigExtensions_t2317624261_StaticFields, ___Sync_2)); }
	inline Il2CppObject * get_Sync_2() const { return ___Sync_2; }
	inline Il2CppObject ** get_address_of_Sync_2() { return &___Sync_2; }
	inline void set_Sync_2(Il2CppObject * value)
	{
		___Sync_2 = value;
		Il2CppCodeGenWriteBarrier(&___Sync_2, value);
	}

	inline static int32_t get_offset_of__instance_3() { return static_cast<int32_t>(offsetof(AppConfigExtensions_t2317624261_StaticFields, ____instance_3)); }
	inline AppConfigExtensions_t2317624261 * get__instance_3() const { return ____instance_3; }
	inline AppConfigExtensions_t2317624261 ** get_address_of__instance_3() { return &____instance_3; }
	inline void set__instance_3(AppConfigExtensions_t2317624261 * value)
	{
		____instance_3 = value;
		Il2CppCodeGenWriteBarrier(&____instance_3, value);
	}

	inline static int32_t get_offset_of_SStringState_4() { return static_cast<int32_t>(offsetof(AppConfigExtensions_t2317624261_StaticFields, ___SStringState_4)); }
	inline Dictionary_2_t2951825130 * get_SStringState_4() const { return ___SStringState_4; }
	inline Dictionary_2_t2951825130 ** get_address_of_SStringState_4() { return &___SStringState_4; }
	inline void set_SStringState_4(Dictionary_2_t2951825130 * value)
	{
		___SStringState_4 = value;
		Il2CppCodeGenWriteBarrier(&___SStringState_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
