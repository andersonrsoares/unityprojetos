#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1642385972;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.MonoHttpDate
struct  MonoHttpDate_t3791217207  : public Il2CppObject
{
public:

public:
};

struct MonoHttpDate_t3791217207_StaticFields
{
public:
	// System.String System.Net.MonoHttpDate::rfc1123_date
	String_t* ___rfc1123_date_0;
	// System.String System.Net.MonoHttpDate::rfc850_date
	String_t* ___rfc850_date_1;
	// System.String System.Net.MonoHttpDate::asctime_date
	String_t* ___asctime_date_2;
	// System.String[] System.Net.MonoHttpDate::formats
	StringU5BU5D_t1642385972* ___formats_3;

public:
	inline static int32_t get_offset_of_rfc1123_date_0() { return static_cast<int32_t>(offsetof(MonoHttpDate_t3791217207_StaticFields, ___rfc1123_date_0)); }
	inline String_t* get_rfc1123_date_0() const { return ___rfc1123_date_0; }
	inline String_t** get_address_of_rfc1123_date_0() { return &___rfc1123_date_0; }
	inline void set_rfc1123_date_0(String_t* value)
	{
		___rfc1123_date_0 = value;
		Il2CppCodeGenWriteBarrier(&___rfc1123_date_0, value);
	}

	inline static int32_t get_offset_of_rfc850_date_1() { return static_cast<int32_t>(offsetof(MonoHttpDate_t3791217207_StaticFields, ___rfc850_date_1)); }
	inline String_t* get_rfc850_date_1() const { return ___rfc850_date_1; }
	inline String_t** get_address_of_rfc850_date_1() { return &___rfc850_date_1; }
	inline void set_rfc850_date_1(String_t* value)
	{
		___rfc850_date_1 = value;
		Il2CppCodeGenWriteBarrier(&___rfc850_date_1, value);
	}

	inline static int32_t get_offset_of_asctime_date_2() { return static_cast<int32_t>(offsetof(MonoHttpDate_t3791217207_StaticFields, ___asctime_date_2)); }
	inline String_t* get_asctime_date_2() const { return ___asctime_date_2; }
	inline String_t** get_address_of_asctime_date_2() { return &___asctime_date_2; }
	inline void set_asctime_date_2(String_t* value)
	{
		___asctime_date_2 = value;
		Il2CppCodeGenWriteBarrier(&___asctime_date_2, value);
	}

	inline static int32_t get_offset_of_formats_3() { return static_cast<int32_t>(offsetof(MonoHttpDate_t3791217207_StaticFields, ___formats_3)); }
	inline StringU5BU5D_t1642385972* get_formats_3() const { return ___formats_3; }
	inline StringU5BU5D_t1642385972** get_address_of_formats_3() { return &___formats_3; }
	inline void set_formats_3(StringU5BU5D_t1642385972* value)
	{
		___formats_3 = value;
		Il2CppCodeGenWriteBarrier(&___formats_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
