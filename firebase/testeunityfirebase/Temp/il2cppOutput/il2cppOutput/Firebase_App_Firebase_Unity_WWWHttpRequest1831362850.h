#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Firebase_App_Firebase_Platform_FirebaseHttpRequest934394464.h"

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t3047564564;
// System.IO.MemoryStream
struct MemoryStream_t743994179;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Unity.WWWHttpRequest
struct  WWWHttpRequest_t1831362850  : public FirebaseHttpRequest_t934394464
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Firebase.Unity.WWWHttpRequest::_headers
	Dictionary_2_t3943999495 * ____headers_10;
	// System.Collections.Specialized.NameValueCollection Firebase.Unity.WWWHttpRequest::_responseheaders
	NameValueCollection_t3047564564 * ____responseheaders_11;
	// System.IO.MemoryStream Firebase.Unity.WWWHttpRequest::_requestBody
	MemoryStream_t743994179 * ____requestBody_12;
	// System.String Firebase.Unity.WWWHttpRequest::_error
	String_t* ____error_13;
	// System.Boolean Firebase.Unity.WWWHttpRequest::_executed
	bool ____executed_14;
	// System.Byte[] Firebase.Unity.WWWHttpRequest::_requestBodyBytes
	ByteU5BU5D_t3397334013* ____requestBodyBytes_15;
	// System.Byte[] Firebase.Unity.WWWHttpRequest::_responseBodyBytes
	ByteU5BU5D_t3397334013* ____responseBodyBytes_16;
	// System.Int32 Firebase.Unity.WWWHttpRequest::_responseCode
	int32_t ____responseCode_17;
	// System.Int64 Firebase.Unity.WWWHttpRequest::_responseLength
	int64_t ____responseLength_18;

public:
	inline static int32_t get_offset_of__headers_10() { return static_cast<int32_t>(offsetof(WWWHttpRequest_t1831362850, ____headers_10)); }
	inline Dictionary_2_t3943999495 * get__headers_10() const { return ____headers_10; }
	inline Dictionary_2_t3943999495 ** get_address_of__headers_10() { return &____headers_10; }
	inline void set__headers_10(Dictionary_2_t3943999495 * value)
	{
		____headers_10 = value;
		Il2CppCodeGenWriteBarrier(&____headers_10, value);
	}

	inline static int32_t get_offset_of__responseheaders_11() { return static_cast<int32_t>(offsetof(WWWHttpRequest_t1831362850, ____responseheaders_11)); }
	inline NameValueCollection_t3047564564 * get__responseheaders_11() const { return ____responseheaders_11; }
	inline NameValueCollection_t3047564564 ** get_address_of__responseheaders_11() { return &____responseheaders_11; }
	inline void set__responseheaders_11(NameValueCollection_t3047564564 * value)
	{
		____responseheaders_11 = value;
		Il2CppCodeGenWriteBarrier(&____responseheaders_11, value);
	}

	inline static int32_t get_offset_of__requestBody_12() { return static_cast<int32_t>(offsetof(WWWHttpRequest_t1831362850, ____requestBody_12)); }
	inline MemoryStream_t743994179 * get__requestBody_12() const { return ____requestBody_12; }
	inline MemoryStream_t743994179 ** get_address_of__requestBody_12() { return &____requestBody_12; }
	inline void set__requestBody_12(MemoryStream_t743994179 * value)
	{
		____requestBody_12 = value;
		Il2CppCodeGenWriteBarrier(&____requestBody_12, value);
	}

	inline static int32_t get_offset_of__error_13() { return static_cast<int32_t>(offsetof(WWWHttpRequest_t1831362850, ____error_13)); }
	inline String_t* get__error_13() const { return ____error_13; }
	inline String_t** get_address_of__error_13() { return &____error_13; }
	inline void set__error_13(String_t* value)
	{
		____error_13 = value;
		Il2CppCodeGenWriteBarrier(&____error_13, value);
	}

	inline static int32_t get_offset_of__executed_14() { return static_cast<int32_t>(offsetof(WWWHttpRequest_t1831362850, ____executed_14)); }
	inline bool get__executed_14() const { return ____executed_14; }
	inline bool* get_address_of__executed_14() { return &____executed_14; }
	inline void set__executed_14(bool value)
	{
		____executed_14 = value;
	}

	inline static int32_t get_offset_of__requestBodyBytes_15() { return static_cast<int32_t>(offsetof(WWWHttpRequest_t1831362850, ____requestBodyBytes_15)); }
	inline ByteU5BU5D_t3397334013* get__requestBodyBytes_15() const { return ____requestBodyBytes_15; }
	inline ByteU5BU5D_t3397334013** get_address_of__requestBodyBytes_15() { return &____requestBodyBytes_15; }
	inline void set__requestBodyBytes_15(ByteU5BU5D_t3397334013* value)
	{
		____requestBodyBytes_15 = value;
		Il2CppCodeGenWriteBarrier(&____requestBodyBytes_15, value);
	}

	inline static int32_t get_offset_of__responseBodyBytes_16() { return static_cast<int32_t>(offsetof(WWWHttpRequest_t1831362850, ____responseBodyBytes_16)); }
	inline ByteU5BU5D_t3397334013* get__responseBodyBytes_16() const { return ____responseBodyBytes_16; }
	inline ByteU5BU5D_t3397334013** get_address_of__responseBodyBytes_16() { return &____responseBodyBytes_16; }
	inline void set__responseBodyBytes_16(ByteU5BU5D_t3397334013* value)
	{
		____responseBodyBytes_16 = value;
		Il2CppCodeGenWriteBarrier(&____responseBodyBytes_16, value);
	}

	inline static int32_t get_offset_of__responseCode_17() { return static_cast<int32_t>(offsetof(WWWHttpRequest_t1831362850, ____responseCode_17)); }
	inline int32_t get__responseCode_17() const { return ____responseCode_17; }
	inline int32_t* get_address_of__responseCode_17() { return &____responseCode_17; }
	inline void set__responseCode_17(int32_t value)
	{
		____responseCode_17 = value;
	}

	inline static int32_t get_offset_of__responseLength_18() { return static_cast<int32_t>(offsetof(WWWHttpRequest_t1831362850, ____responseLength_18)); }
	inline int64_t get__responseLength_18() const { return ____responseLength_18; }
	inline int64_t* get_address_of__responseLength_18() { return &____responseLength_18; }
	inline void set__responseLength_18(int64_t value)
	{
		____responseLength_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
