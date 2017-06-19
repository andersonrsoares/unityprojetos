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
// System.UriParser
struct UriParser_t1012511323;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriData
struct  UriData_t1854747180  : public Il2CppObject
{
public:
	// System.Uri System.UriData::uri
	Uri_t19570940 * ___uri_0;
	// System.UriParser System.UriData::parser
	UriParser_t1012511323 * ___parser_1;
	// System.String System.UriData::absolute_path
	String_t* ___absolute_path_2;
	// System.String System.UriData::absolute_uri
	String_t* ___absolute_uri_3;
	// System.String System.UriData::absolute_uri_unescaped
	String_t* ___absolute_uri_unescaped_4;
	// System.String System.UriData::authority
	String_t* ___authority_5;
	// System.String System.UriData::fragment
	String_t* ___fragment_6;
	// System.String System.UriData::host
	String_t* ___host_7;
	// System.String System.UriData::path_and_query
	String_t* ___path_and_query_8;
	// System.String System.UriData::strong_port
	String_t* ___strong_port_9;
	// System.String System.UriData::query
	String_t* ___query_10;
	// System.String System.UriData::user_info
	String_t* ___user_info_11;

public:
	inline static int32_t get_offset_of_uri_0() { return static_cast<int32_t>(offsetof(UriData_t1854747180, ___uri_0)); }
	inline Uri_t19570940 * get_uri_0() const { return ___uri_0; }
	inline Uri_t19570940 ** get_address_of_uri_0() { return &___uri_0; }
	inline void set_uri_0(Uri_t19570940 * value)
	{
		___uri_0 = value;
		Il2CppCodeGenWriteBarrier(&___uri_0, value);
	}

	inline static int32_t get_offset_of_parser_1() { return static_cast<int32_t>(offsetof(UriData_t1854747180, ___parser_1)); }
	inline UriParser_t1012511323 * get_parser_1() const { return ___parser_1; }
	inline UriParser_t1012511323 ** get_address_of_parser_1() { return &___parser_1; }
	inline void set_parser_1(UriParser_t1012511323 * value)
	{
		___parser_1 = value;
		Il2CppCodeGenWriteBarrier(&___parser_1, value);
	}

	inline static int32_t get_offset_of_absolute_path_2() { return static_cast<int32_t>(offsetof(UriData_t1854747180, ___absolute_path_2)); }
	inline String_t* get_absolute_path_2() const { return ___absolute_path_2; }
	inline String_t** get_address_of_absolute_path_2() { return &___absolute_path_2; }
	inline void set_absolute_path_2(String_t* value)
	{
		___absolute_path_2 = value;
		Il2CppCodeGenWriteBarrier(&___absolute_path_2, value);
	}

	inline static int32_t get_offset_of_absolute_uri_3() { return static_cast<int32_t>(offsetof(UriData_t1854747180, ___absolute_uri_3)); }
	inline String_t* get_absolute_uri_3() const { return ___absolute_uri_3; }
	inline String_t** get_address_of_absolute_uri_3() { return &___absolute_uri_3; }
	inline void set_absolute_uri_3(String_t* value)
	{
		___absolute_uri_3 = value;
		Il2CppCodeGenWriteBarrier(&___absolute_uri_3, value);
	}

	inline static int32_t get_offset_of_absolute_uri_unescaped_4() { return static_cast<int32_t>(offsetof(UriData_t1854747180, ___absolute_uri_unescaped_4)); }
	inline String_t* get_absolute_uri_unescaped_4() const { return ___absolute_uri_unescaped_4; }
	inline String_t** get_address_of_absolute_uri_unescaped_4() { return &___absolute_uri_unescaped_4; }
	inline void set_absolute_uri_unescaped_4(String_t* value)
	{
		___absolute_uri_unescaped_4 = value;
		Il2CppCodeGenWriteBarrier(&___absolute_uri_unescaped_4, value);
	}

	inline static int32_t get_offset_of_authority_5() { return static_cast<int32_t>(offsetof(UriData_t1854747180, ___authority_5)); }
	inline String_t* get_authority_5() const { return ___authority_5; }
	inline String_t** get_address_of_authority_5() { return &___authority_5; }
	inline void set_authority_5(String_t* value)
	{
		___authority_5 = value;
		Il2CppCodeGenWriteBarrier(&___authority_5, value);
	}

	inline static int32_t get_offset_of_fragment_6() { return static_cast<int32_t>(offsetof(UriData_t1854747180, ___fragment_6)); }
	inline String_t* get_fragment_6() const { return ___fragment_6; }
	inline String_t** get_address_of_fragment_6() { return &___fragment_6; }
	inline void set_fragment_6(String_t* value)
	{
		___fragment_6 = value;
		Il2CppCodeGenWriteBarrier(&___fragment_6, value);
	}

	inline static int32_t get_offset_of_host_7() { return static_cast<int32_t>(offsetof(UriData_t1854747180, ___host_7)); }
	inline String_t* get_host_7() const { return ___host_7; }
	inline String_t** get_address_of_host_7() { return &___host_7; }
	inline void set_host_7(String_t* value)
	{
		___host_7 = value;
		Il2CppCodeGenWriteBarrier(&___host_7, value);
	}

	inline static int32_t get_offset_of_path_and_query_8() { return static_cast<int32_t>(offsetof(UriData_t1854747180, ___path_and_query_8)); }
	inline String_t* get_path_and_query_8() const { return ___path_and_query_8; }
	inline String_t** get_address_of_path_and_query_8() { return &___path_and_query_8; }
	inline void set_path_and_query_8(String_t* value)
	{
		___path_and_query_8 = value;
		Il2CppCodeGenWriteBarrier(&___path_and_query_8, value);
	}

	inline static int32_t get_offset_of_strong_port_9() { return static_cast<int32_t>(offsetof(UriData_t1854747180, ___strong_port_9)); }
	inline String_t* get_strong_port_9() const { return ___strong_port_9; }
	inline String_t** get_address_of_strong_port_9() { return &___strong_port_9; }
	inline void set_strong_port_9(String_t* value)
	{
		___strong_port_9 = value;
		Il2CppCodeGenWriteBarrier(&___strong_port_9, value);
	}

	inline static int32_t get_offset_of_query_10() { return static_cast<int32_t>(offsetof(UriData_t1854747180, ___query_10)); }
	inline String_t* get_query_10() const { return ___query_10; }
	inline String_t** get_address_of_query_10() { return &___query_10; }
	inline void set_query_10(String_t* value)
	{
		___query_10 = value;
		Il2CppCodeGenWriteBarrier(&___query_10, value);
	}

	inline static int32_t get_offset_of_user_info_11() { return static_cast<int32_t>(offsetof(UriData_t1854747180, ___user_info_11)); }
	inline String_t* get_user_info_11() const { return ___user_info_11; }
	inline String_t** get_address_of_user_info_11() { return &___user_info_11; }
	inline void set_user_info_11(String_t* value)
	{
		___user_info_11 = value;
		Il2CppCodeGenWriteBarrier(&___user_info_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
