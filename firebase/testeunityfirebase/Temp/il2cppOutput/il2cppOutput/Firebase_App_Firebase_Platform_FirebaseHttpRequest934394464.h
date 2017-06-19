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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Platform.FirebaseHttpRequest
struct  FirebaseHttpRequest_t934394464  : public Il2CppObject
{
public:
	// System.Uri Firebase.Platform.FirebaseHttpRequest::_url
	Uri_t19570940 * ____url_0;
	// System.String Firebase.Platform.FirebaseHttpRequest::_action
	String_t* ____action_1;

public:
	inline static int32_t get_offset_of__url_0() { return static_cast<int32_t>(offsetof(FirebaseHttpRequest_t934394464, ____url_0)); }
	inline Uri_t19570940 * get__url_0() const { return ____url_0; }
	inline Uri_t19570940 ** get_address_of__url_0() { return &____url_0; }
	inline void set__url_0(Uri_t19570940 * value)
	{
		____url_0 = value;
		Il2CppCodeGenWriteBarrier(&____url_0, value);
	}

	inline static int32_t get_offset_of__action_1() { return static_cast<int32_t>(offsetof(FirebaseHttpRequest_t934394464, ____action_1)); }
	inline String_t* get__action_1() const { return ____action_1; }
	inline String_t** get_address_of__action_1() { return &____action_1; }
	inline void set__action_1(String_t* value)
	{
		____action_1 = value;
		Il2CppCodeGenWriteBarrier(&____action_1, value);
	}
};

struct FirebaseHttpRequest_t934394464_StaticFields
{
public:
	// System.String Firebase.Platform.FirebaseHttpRequest::HeaderContentLength
	String_t* ___HeaderContentLength_2;
	// System.String Firebase.Platform.FirebaseHttpRequest::HeaderContentType
	String_t* ___HeaderContentType_3;
	// System.String Firebase.Platform.FirebaseHttpRequest::HeaderRange
	String_t* ___HeaderRange_4;
	// System.String Firebase.Platform.FirebaseHttpRequest::HeaderUserAgent
	String_t* ___HeaderUserAgent_5;
	// System.String Firebase.Platform.FirebaseHttpRequest::HeaderStatus
	String_t* ___HeaderStatus_6;
	// System.Int32 Firebase.Platform.FirebaseHttpRequest::Timeout
	int32_t ___Timeout_7;
	// System.Int32 Firebase.Platform.FirebaseHttpRequest::StatusNetworkUnavailable
	int32_t ___StatusNetworkUnavailable_8;
	// System.Int32 Firebase.Platform.FirebaseHttpRequest::StatusOk
	int32_t ___StatusOk_9;

public:
	inline static int32_t get_offset_of_HeaderContentLength_2() { return static_cast<int32_t>(offsetof(FirebaseHttpRequest_t934394464_StaticFields, ___HeaderContentLength_2)); }
	inline String_t* get_HeaderContentLength_2() const { return ___HeaderContentLength_2; }
	inline String_t** get_address_of_HeaderContentLength_2() { return &___HeaderContentLength_2; }
	inline void set_HeaderContentLength_2(String_t* value)
	{
		___HeaderContentLength_2 = value;
		Il2CppCodeGenWriteBarrier(&___HeaderContentLength_2, value);
	}

	inline static int32_t get_offset_of_HeaderContentType_3() { return static_cast<int32_t>(offsetof(FirebaseHttpRequest_t934394464_StaticFields, ___HeaderContentType_3)); }
	inline String_t* get_HeaderContentType_3() const { return ___HeaderContentType_3; }
	inline String_t** get_address_of_HeaderContentType_3() { return &___HeaderContentType_3; }
	inline void set_HeaderContentType_3(String_t* value)
	{
		___HeaderContentType_3 = value;
		Il2CppCodeGenWriteBarrier(&___HeaderContentType_3, value);
	}

	inline static int32_t get_offset_of_HeaderRange_4() { return static_cast<int32_t>(offsetof(FirebaseHttpRequest_t934394464_StaticFields, ___HeaderRange_4)); }
	inline String_t* get_HeaderRange_4() const { return ___HeaderRange_4; }
	inline String_t** get_address_of_HeaderRange_4() { return &___HeaderRange_4; }
	inline void set_HeaderRange_4(String_t* value)
	{
		___HeaderRange_4 = value;
		Il2CppCodeGenWriteBarrier(&___HeaderRange_4, value);
	}

	inline static int32_t get_offset_of_HeaderUserAgent_5() { return static_cast<int32_t>(offsetof(FirebaseHttpRequest_t934394464_StaticFields, ___HeaderUserAgent_5)); }
	inline String_t* get_HeaderUserAgent_5() const { return ___HeaderUserAgent_5; }
	inline String_t** get_address_of_HeaderUserAgent_5() { return &___HeaderUserAgent_5; }
	inline void set_HeaderUserAgent_5(String_t* value)
	{
		___HeaderUserAgent_5 = value;
		Il2CppCodeGenWriteBarrier(&___HeaderUserAgent_5, value);
	}

	inline static int32_t get_offset_of_HeaderStatus_6() { return static_cast<int32_t>(offsetof(FirebaseHttpRequest_t934394464_StaticFields, ___HeaderStatus_6)); }
	inline String_t* get_HeaderStatus_6() const { return ___HeaderStatus_6; }
	inline String_t** get_address_of_HeaderStatus_6() { return &___HeaderStatus_6; }
	inline void set_HeaderStatus_6(String_t* value)
	{
		___HeaderStatus_6 = value;
		Il2CppCodeGenWriteBarrier(&___HeaderStatus_6, value);
	}

	inline static int32_t get_offset_of_Timeout_7() { return static_cast<int32_t>(offsetof(FirebaseHttpRequest_t934394464_StaticFields, ___Timeout_7)); }
	inline int32_t get_Timeout_7() const { return ___Timeout_7; }
	inline int32_t* get_address_of_Timeout_7() { return &___Timeout_7; }
	inline void set_Timeout_7(int32_t value)
	{
		___Timeout_7 = value;
	}

	inline static int32_t get_offset_of_StatusNetworkUnavailable_8() { return static_cast<int32_t>(offsetof(FirebaseHttpRequest_t934394464_StaticFields, ___StatusNetworkUnavailable_8)); }
	inline int32_t get_StatusNetworkUnavailable_8() const { return ___StatusNetworkUnavailable_8; }
	inline int32_t* get_address_of_StatusNetworkUnavailable_8() { return &___StatusNetworkUnavailable_8; }
	inline void set_StatusNetworkUnavailable_8(int32_t value)
	{
		___StatusNetworkUnavailable_8 = value;
	}

	inline static int32_t get_offset_of_StatusOk_9() { return static_cast<int32_t>(offsetof(FirebaseHttpRequest_t934394464_StaticFields, ___StatusOk_9)); }
	inline int32_t get_StatusOk_9() const { return ___StatusOk_9; }
	inline int32_t* get_address_of_StatusOk_9() { return &___StatusOk_9; }
	inline void set_StatusOk_9(int32_t value)
	{
		___StatusOk_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
