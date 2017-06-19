#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Database.Internal.Connection.ConnectionAuthTokenProvider
struct ConnectionAuthTokenProvider_t3406713242;
// System.String
struct String_t;
// Google.Sharpen.ScheduledThreadPoolExecutor
struct ScheduledThreadPoolExecutor_t2537379786;
// Firebase.Database.Logger
struct Logger_t225270238;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Connection.ConnectionContext
struct  ConnectionContext_t671917741  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Connection.ConnectionAuthTokenProvider Firebase.Database.Internal.Connection.ConnectionContext::_authTokenProvider
	ConnectionAuthTokenProvider_t3406713242 * ____authTokenProvider_0;
	// System.String Firebase.Database.Internal.Connection.ConnectionContext::_clientSdkVersion
	String_t* ____clientSdkVersion_1;
	// Google.Sharpen.ScheduledThreadPoolExecutor Firebase.Database.Internal.Connection.ConnectionContext::_executorService
	ScheduledThreadPoolExecutor_t2537379786 * ____executorService_2;
	// Firebase.Database.Logger Firebase.Database.Internal.Connection.ConnectionContext::_logger
	Logger_t225270238 * ____logger_3;
	// System.Boolean Firebase.Database.Internal.Connection.ConnectionContext::_persistenceEnabled
	bool ____persistenceEnabled_4;
	// System.String Firebase.Database.Internal.Connection.ConnectionContext::_userAgent
	String_t* ____userAgent_5;

public:
	inline static int32_t get_offset_of__authTokenProvider_0() { return static_cast<int32_t>(offsetof(ConnectionContext_t671917741, ____authTokenProvider_0)); }
	inline ConnectionAuthTokenProvider_t3406713242 * get__authTokenProvider_0() const { return ____authTokenProvider_0; }
	inline ConnectionAuthTokenProvider_t3406713242 ** get_address_of__authTokenProvider_0() { return &____authTokenProvider_0; }
	inline void set__authTokenProvider_0(ConnectionAuthTokenProvider_t3406713242 * value)
	{
		____authTokenProvider_0 = value;
		Il2CppCodeGenWriteBarrier(&____authTokenProvider_0, value);
	}

	inline static int32_t get_offset_of__clientSdkVersion_1() { return static_cast<int32_t>(offsetof(ConnectionContext_t671917741, ____clientSdkVersion_1)); }
	inline String_t* get__clientSdkVersion_1() const { return ____clientSdkVersion_1; }
	inline String_t** get_address_of__clientSdkVersion_1() { return &____clientSdkVersion_1; }
	inline void set__clientSdkVersion_1(String_t* value)
	{
		____clientSdkVersion_1 = value;
		Il2CppCodeGenWriteBarrier(&____clientSdkVersion_1, value);
	}

	inline static int32_t get_offset_of__executorService_2() { return static_cast<int32_t>(offsetof(ConnectionContext_t671917741, ____executorService_2)); }
	inline ScheduledThreadPoolExecutor_t2537379786 * get__executorService_2() const { return ____executorService_2; }
	inline ScheduledThreadPoolExecutor_t2537379786 ** get_address_of__executorService_2() { return &____executorService_2; }
	inline void set__executorService_2(ScheduledThreadPoolExecutor_t2537379786 * value)
	{
		____executorService_2 = value;
		Il2CppCodeGenWriteBarrier(&____executorService_2, value);
	}

	inline static int32_t get_offset_of__logger_3() { return static_cast<int32_t>(offsetof(ConnectionContext_t671917741, ____logger_3)); }
	inline Logger_t225270238 * get__logger_3() const { return ____logger_3; }
	inline Logger_t225270238 ** get_address_of__logger_3() { return &____logger_3; }
	inline void set__logger_3(Logger_t225270238 * value)
	{
		____logger_3 = value;
		Il2CppCodeGenWriteBarrier(&____logger_3, value);
	}

	inline static int32_t get_offset_of__persistenceEnabled_4() { return static_cast<int32_t>(offsetof(ConnectionContext_t671917741, ____persistenceEnabled_4)); }
	inline bool get__persistenceEnabled_4() const { return ____persistenceEnabled_4; }
	inline bool* get_address_of__persistenceEnabled_4() { return &____persistenceEnabled_4; }
	inline void set__persistenceEnabled_4(bool value)
	{
		____persistenceEnabled_4 = value;
	}

	inline static int32_t get_offset_of__userAgent_5() { return static_cast<int32_t>(offsetof(ConnectionContext_t671917741, ____userAgent_5)); }
	inline String_t* get__userAgent_5() const { return ____userAgent_5; }
	inline String_t** get_address_of__userAgent_5() { return &____userAgent_5; }
	inline void set__userAgent_5(String_t* value)
	{
		____userAgent_5 = value;
		Il2CppCodeGenWriteBarrier(&____userAgent_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
