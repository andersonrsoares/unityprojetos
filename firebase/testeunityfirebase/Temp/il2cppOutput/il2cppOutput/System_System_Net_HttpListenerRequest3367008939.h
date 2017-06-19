#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Guid2533601593.h"

// System.String[]
struct StringU5BU5D_t1642385972;
// System.Text.Encoding
struct Encoding_t663144255;
// System.Net.CookieCollection
struct CookieCollection_t521422364;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t3028142837;
// System.String
struct String_t;
// System.IO.Stream
struct Stream_t3255436806;
// System.Version
struct Version_t1755874712;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t3047564564;
// System.Uri
struct Uri_t19570940;
// System.Net.HttpListenerContext
struct HttpListenerContext_t506453093;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3986656710;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.HttpListenerRequest
struct  HttpListenerRequest_t3367008939  : public Il2CppObject
{
public:
	// System.String[] System.Net.HttpListenerRequest::accept_types
	StringU5BU5D_t1642385972* ___accept_types_0;
	// System.Text.Encoding System.Net.HttpListenerRequest::content_encoding
	Encoding_t663144255 * ___content_encoding_1;
	// System.Int64 System.Net.HttpListenerRequest::content_length
	int64_t ___content_length_2;
	// System.Boolean System.Net.HttpListenerRequest::cl_set
	bool ___cl_set_3;
	// System.Net.CookieCollection System.Net.HttpListenerRequest::cookies
	CookieCollection_t521422364 * ___cookies_4;
	// System.Net.WebHeaderCollection System.Net.HttpListenerRequest::headers
	WebHeaderCollection_t3028142837 * ___headers_5;
	// System.String System.Net.HttpListenerRequest::method
	String_t* ___method_6;
	// System.IO.Stream System.Net.HttpListenerRequest::input_stream
	Stream_t3255436806 * ___input_stream_7;
	// System.Version System.Net.HttpListenerRequest::version
	Version_t1755874712 * ___version_8;
	// System.Collections.Specialized.NameValueCollection System.Net.HttpListenerRequest::query_string
	NameValueCollection_t3047564564 * ___query_string_9;
	// System.String System.Net.HttpListenerRequest::raw_url
	String_t* ___raw_url_10;
	// System.Guid System.Net.HttpListenerRequest::identifier
	Guid_t  ___identifier_11;
	// System.Uri System.Net.HttpListenerRequest::url
	Uri_t19570940 * ___url_12;
	// System.Uri System.Net.HttpListenerRequest::referrer
	Uri_t19570940 * ___referrer_13;
	// System.String[] System.Net.HttpListenerRequest::user_languages
	StringU5BU5D_t1642385972* ___user_languages_14;
	// System.Net.HttpListenerContext System.Net.HttpListenerRequest::context
	HttpListenerContext_t506453093 * ___context_15;
	// System.Boolean System.Net.HttpListenerRequest::is_chunked
	bool ___is_chunked_16;

public:
	inline static int32_t get_offset_of_accept_types_0() { return static_cast<int32_t>(offsetof(HttpListenerRequest_t3367008939, ___accept_types_0)); }
	inline StringU5BU5D_t1642385972* get_accept_types_0() const { return ___accept_types_0; }
	inline StringU5BU5D_t1642385972** get_address_of_accept_types_0() { return &___accept_types_0; }
	inline void set_accept_types_0(StringU5BU5D_t1642385972* value)
	{
		___accept_types_0 = value;
		Il2CppCodeGenWriteBarrier(&___accept_types_0, value);
	}

	inline static int32_t get_offset_of_content_encoding_1() { return static_cast<int32_t>(offsetof(HttpListenerRequest_t3367008939, ___content_encoding_1)); }
	inline Encoding_t663144255 * get_content_encoding_1() const { return ___content_encoding_1; }
	inline Encoding_t663144255 ** get_address_of_content_encoding_1() { return &___content_encoding_1; }
	inline void set_content_encoding_1(Encoding_t663144255 * value)
	{
		___content_encoding_1 = value;
		Il2CppCodeGenWriteBarrier(&___content_encoding_1, value);
	}

	inline static int32_t get_offset_of_content_length_2() { return static_cast<int32_t>(offsetof(HttpListenerRequest_t3367008939, ___content_length_2)); }
	inline int64_t get_content_length_2() const { return ___content_length_2; }
	inline int64_t* get_address_of_content_length_2() { return &___content_length_2; }
	inline void set_content_length_2(int64_t value)
	{
		___content_length_2 = value;
	}

	inline static int32_t get_offset_of_cl_set_3() { return static_cast<int32_t>(offsetof(HttpListenerRequest_t3367008939, ___cl_set_3)); }
	inline bool get_cl_set_3() const { return ___cl_set_3; }
	inline bool* get_address_of_cl_set_3() { return &___cl_set_3; }
	inline void set_cl_set_3(bool value)
	{
		___cl_set_3 = value;
	}

	inline static int32_t get_offset_of_cookies_4() { return static_cast<int32_t>(offsetof(HttpListenerRequest_t3367008939, ___cookies_4)); }
	inline CookieCollection_t521422364 * get_cookies_4() const { return ___cookies_4; }
	inline CookieCollection_t521422364 ** get_address_of_cookies_4() { return &___cookies_4; }
	inline void set_cookies_4(CookieCollection_t521422364 * value)
	{
		___cookies_4 = value;
		Il2CppCodeGenWriteBarrier(&___cookies_4, value);
	}

	inline static int32_t get_offset_of_headers_5() { return static_cast<int32_t>(offsetof(HttpListenerRequest_t3367008939, ___headers_5)); }
	inline WebHeaderCollection_t3028142837 * get_headers_5() const { return ___headers_5; }
	inline WebHeaderCollection_t3028142837 ** get_address_of_headers_5() { return &___headers_5; }
	inline void set_headers_5(WebHeaderCollection_t3028142837 * value)
	{
		___headers_5 = value;
		Il2CppCodeGenWriteBarrier(&___headers_5, value);
	}

	inline static int32_t get_offset_of_method_6() { return static_cast<int32_t>(offsetof(HttpListenerRequest_t3367008939, ___method_6)); }
	inline String_t* get_method_6() const { return ___method_6; }
	inline String_t** get_address_of_method_6() { return &___method_6; }
	inline void set_method_6(String_t* value)
	{
		___method_6 = value;
		Il2CppCodeGenWriteBarrier(&___method_6, value);
	}

	inline static int32_t get_offset_of_input_stream_7() { return static_cast<int32_t>(offsetof(HttpListenerRequest_t3367008939, ___input_stream_7)); }
	inline Stream_t3255436806 * get_input_stream_7() const { return ___input_stream_7; }
	inline Stream_t3255436806 ** get_address_of_input_stream_7() { return &___input_stream_7; }
	inline void set_input_stream_7(Stream_t3255436806 * value)
	{
		___input_stream_7 = value;
		Il2CppCodeGenWriteBarrier(&___input_stream_7, value);
	}

	inline static int32_t get_offset_of_version_8() { return static_cast<int32_t>(offsetof(HttpListenerRequest_t3367008939, ___version_8)); }
	inline Version_t1755874712 * get_version_8() const { return ___version_8; }
	inline Version_t1755874712 ** get_address_of_version_8() { return &___version_8; }
	inline void set_version_8(Version_t1755874712 * value)
	{
		___version_8 = value;
		Il2CppCodeGenWriteBarrier(&___version_8, value);
	}

	inline static int32_t get_offset_of_query_string_9() { return static_cast<int32_t>(offsetof(HttpListenerRequest_t3367008939, ___query_string_9)); }
	inline NameValueCollection_t3047564564 * get_query_string_9() const { return ___query_string_9; }
	inline NameValueCollection_t3047564564 ** get_address_of_query_string_9() { return &___query_string_9; }
	inline void set_query_string_9(NameValueCollection_t3047564564 * value)
	{
		___query_string_9 = value;
		Il2CppCodeGenWriteBarrier(&___query_string_9, value);
	}

	inline static int32_t get_offset_of_raw_url_10() { return static_cast<int32_t>(offsetof(HttpListenerRequest_t3367008939, ___raw_url_10)); }
	inline String_t* get_raw_url_10() const { return ___raw_url_10; }
	inline String_t** get_address_of_raw_url_10() { return &___raw_url_10; }
	inline void set_raw_url_10(String_t* value)
	{
		___raw_url_10 = value;
		Il2CppCodeGenWriteBarrier(&___raw_url_10, value);
	}

	inline static int32_t get_offset_of_identifier_11() { return static_cast<int32_t>(offsetof(HttpListenerRequest_t3367008939, ___identifier_11)); }
	inline Guid_t  get_identifier_11() const { return ___identifier_11; }
	inline Guid_t * get_address_of_identifier_11() { return &___identifier_11; }
	inline void set_identifier_11(Guid_t  value)
	{
		___identifier_11 = value;
	}

	inline static int32_t get_offset_of_url_12() { return static_cast<int32_t>(offsetof(HttpListenerRequest_t3367008939, ___url_12)); }
	inline Uri_t19570940 * get_url_12() const { return ___url_12; }
	inline Uri_t19570940 ** get_address_of_url_12() { return &___url_12; }
	inline void set_url_12(Uri_t19570940 * value)
	{
		___url_12 = value;
		Il2CppCodeGenWriteBarrier(&___url_12, value);
	}

	inline static int32_t get_offset_of_referrer_13() { return static_cast<int32_t>(offsetof(HttpListenerRequest_t3367008939, ___referrer_13)); }
	inline Uri_t19570940 * get_referrer_13() const { return ___referrer_13; }
	inline Uri_t19570940 ** get_address_of_referrer_13() { return &___referrer_13; }
	inline void set_referrer_13(Uri_t19570940 * value)
	{
		___referrer_13 = value;
		Il2CppCodeGenWriteBarrier(&___referrer_13, value);
	}

	inline static int32_t get_offset_of_user_languages_14() { return static_cast<int32_t>(offsetof(HttpListenerRequest_t3367008939, ___user_languages_14)); }
	inline StringU5BU5D_t1642385972* get_user_languages_14() const { return ___user_languages_14; }
	inline StringU5BU5D_t1642385972** get_address_of_user_languages_14() { return &___user_languages_14; }
	inline void set_user_languages_14(StringU5BU5D_t1642385972* value)
	{
		___user_languages_14 = value;
		Il2CppCodeGenWriteBarrier(&___user_languages_14, value);
	}

	inline static int32_t get_offset_of_context_15() { return static_cast<int32_t>(offsetof(HttpListenerRequest_t3367008939, ___context_15)); }
	inline HttpListenerContext_t506453093 * get_context_15() const { return ___context_15; }
	inline HttpListenerContext_t506453093 ** get_address_of_context_15() { return &___context_15; }
	inline void set_context_15(HttpListenerContext_t506453093 * value)
	{
		___context_15 = value;
		Il2CppCodeGenWriteBarrier(&___context_15, value);
	}

	inline static int32_t get_offset_of_is_chunked_16() { return static_cast<int32_t>(offsetof(HttpListenerRequest_t3367008939, ___is_chunked_16)); }
	inline bool get_is_chunked_16() const { return ___is_chunked_16; }
	inline bool* get_address_of_is_chunked_16() { return &___is_chunked_16; }
	inline void set_is_chunked_16(bool value)
	{
		___is_chunked_16 = value;
	}
};

struct HttpListenerRequest_t3367008939_StaticFields
{
public:
	// System.Byte[] System.Net.HttpListenerRequest::_100continue
	ByteU5BU5D_t3397334013* ____100continue_17;
	// System.String[] System.Net.HttpListenerRequest::no_body_methods
	StringU5BU5D_t1642385972* ___no_body_methods_18;
	// System.Char[] System.Net.HttpListenerRequest::separators
	CharU5BU5D_t1328083999* ___separators_19;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Net.HttpListenerRequest::<>f__switch$mapC
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24mapC_20;

public:
	inline static int32_t get_offset_of__100continue_17() { return static_cast<int32_t>(offsetof(HttpListenerRequest_t3367008939_StaticFields, ____100continue_17)); }
	inline ByteU5BU5D_t3397334013* get__100continue_17() const { return ____100continue_17; }
	inline ByteU5BU5D_t3397334013** get_address_of__100continue_17() { return &____100continue_17; }
	inline void set__100continue_17(ByteU5BU5D_t3397334013* value)
	{
		____100continue_17 = value;
		Il2CppCodeGenWriteBarrier(&____100continue_17, value);
	}

	inline static int32_t get_offset_of_no_body_methods_18() { return static_cast<int32_t>(offsetof(HttpListenerRequest_t3367008939_StaticFields, ___no_body_methods_18)); }
	inline StringU5BU5D_t1642385972* get_no_body_methods_18() const { return ___no_body_methods_18; }
	inline StringU5BU5D_t1642385972** get_address_of_no_body_methods_18() { return &___no_body_methods_18; }
	inline void set_no_body_methods_18(StringU5BU5D_t1642385972* value)
	{
		___no_body_methods_18 = value;
		Il2CppCodeGenWriteBarrier(&___no_body_methods_18, value);
	}

	inline static int32_t get_offset_of_separators_19() { return static_cast<int32_t>(offsetof(HttpListenerRequest_t3367008939_StaticFields, ___separators_19)); }
	inline CharU5BU5D_t1328083999* get_separators_19() const { return ___separators_19; }
	inline CharU5BU5D_t1328083999** get_address_of_separators_19() { return &___separators_19; }
	inline void set_separators_19(CharU5BU5D_t1328083999* value)
	{
		___separators_19 = value;
		Il2CppCodeGenWriteBarrier(&___separators_19, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapC_20() { return static_cast<int32_t>(offsetof(HttpListenerRequest_t3367008939_StaticFields, ___U3CU3Ef__switchU24mapC_20)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24mapC_20() const { return ___U3CU3Ef__switchU24mapC_20; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24mapC_20() { return &___U3CU3Ef__switchU24mapC_20; }
	inline void set_U3CU3Ef__switchU24mapC_20(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24mapC_20 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24mapC_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
