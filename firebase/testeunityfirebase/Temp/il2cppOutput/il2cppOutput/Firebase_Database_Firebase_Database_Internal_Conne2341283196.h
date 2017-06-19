#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Google.Sharpen.ScheduledThreadPoolExecutor
struct ScheduledThreadPoolExecutor_t2537379786;
// Firebase.Database.Internal.Logging.LogWrapper
struct LogWrapper_t438307305;
// System.Random
struct Random_t1044426839;
// Google.Sharpen.Future`1<System.Object>
struct Future_1_t4121840302;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Connection.Util.RetryHelper
struct  RetryHelper_t2341283196  : public Il2CppObject
{
public:
	// Google.Sharpen.ScheduledThreadPoolExecutor Firebase.Database.Internal.Connection.Util.RetryHelper::_executorService
	ScheduledThreadPoolExecutor_t2537379786 * ____executorService_0;
	// System.Double Firebase.Database.Internal.Connection.Util.RetryHelper::_jitterFactor
	double ____jitterFactor_1;
	// Firebase.Database.Internal.Logging.LogWrapper Firebase.Database.Internal.Connection.Util.RetryHelper::_logger
	LogWrapper_t438307305 * ____logger_2;
	// System.Int64 Firebase.Database.Internal.Connection.Util.RetryHelper::_maxRetryDelay
	int64_t ____maxRetryDelay_3;
	// System.Int64 Firebase.Database.Internal.Connection.Util.RetryHelper::_minRetryDelayAfterFailure
	int64_t ____minRetryDelayAfterFailure_4;
	// System.Random Firebase.Database.Internal.Connection.Util.RetryHelper::_random
	Random_t1044426839 * ____random_5;
	// System.Double Firebase.Database.Internal.Connection.Util.RetryHelper::_retryExponent
	double ____retryExponent_6;
	// System.Int64 Firebase.Database.Internal.Connection.Util.RetryHelper::_currentRetryDelay
	int64_t ____currentRetryDelay_7;
	// System.Boolean Firebase.Database.Internal.Connection.Util.RetryHelper::_lastWasSuccess
	bool ____lastWasSuccess_8;
	// Google.Sharpen.Future`1<System.Object> Firebase.Database.Internal.Connection.Util.RetryHelper::_scheduledRetry
	Il2CppObject* ____scheduledRetry_9;

public:
	inline static int32_t get_offset_of__executorService_0() { return static_cast<int32_t>(offsetof(RetryHelper_t2341283196, ____executorService_0)); }
	inline ScheduledThreadPoolExecutor_t2537379786 * get__executorService_0() const { return ____executorService_0; }
	inline ScheduledThreadPoolExecutor_t2537379786 ** get_address_of__executorService_0() { return &____executorService_0; }
	inline void set__executorService_0(ScheduledThreadPoolExecutor_t2537379786 * value)
	{
		____executorService_0 = value;
		Il2CppCodeGenWriteBarrier(&____executorService_0, value);
	}

	inline static int32_t get_offset_of__jitterFactor_1() { return static_cast<int32_t>(offsetof(RetryHelper_t2341283196, ____jitterFactor_1)); }
	inline double get__jitterFactor_1() const { return ____jitterFactor_1; }
	inline double* get_address_of__jitterFactor_1() { return &____jitterFactor_1; }
	inline void set__jitterFactor_1(double value)
	{
		____jitterFactor_1 = value;
	}

	inline static int32_t get_offset_of__logger_2() { return static_cast<int32_t>(offsetof(RetryHelper_t2341283196, ____logger_2)); }
	inline LogWrapper_t438307305 * get__logger_2() const { return ____logger_2; }
	inline LogWrapper_t438307305 ** get_address_of__logger_2() { return &____logger_2; }
	inline void set__logger_2(LogWrapper_t438307305 * value)
	{
		____logger_2 = value;
		Il2CppCodeGenWriteBarrier(&____logger_2, value);
	}

	inline static int32_t get_offset_of__maxRetryDelay_3() { return static_cast<int32_t>(offsetof(RetryHelper_t2341283196, ____maxRetryDelay_3)); }
	inline int64_t get__maxRetryDelay_3() const { return ____maxRetryDelay_3; }
	inline int64_t* get_address_of__maxRetryDelay_3() { return &____maxRetryDelay_3; }
	inline void set__maxRetryDelay_3(int64_t value)
	{
		____maxRetryDelay_3 = value;
	}

	inline static int32_t get_offset_of__minRetryDelayAfterFailure_4() { return static_cast<int32_t>(offsetof(RetryHelper_t2341283196, ____minRetryDelayAfterFailure_4)); }
	inline int64_t get__minRetryDelayAfterFailure_4() const { return ____minRetryDelayAfterFailure_4; }
	inline int64_t* get_address_of__minRetryDelayAfterFailure_4() { return &____minRetryDelayAfterFailure_4; }
	inline void set__minRetryDelayAfterFailure_4(int64_t value)
	{
		____minRetryDelayAfterFailure_4 = value;
	}

	inline static int32_t get_offset_of__random_5() { return static_cast<int32_t>(offsetof(RetryHelper_t2341283196, ____random_5)); }
	inline Random_t1044426839 * get__random_5() const { return ____random_5; }
	inline Random_t1044426839 ** get_address_of__random_5() { return &____random_5; }
	inline void set__random_5(Random_t1044426839 * value)
	{
		____random_5 = value;
		Il2CppCodeGenWriteBarrier(&____random_5, value);
	}

	inline static int32_t get_offset_of__retryExponent_6() { return static_cast<int32_t>(offsetof(RetryHelper_t2341283196, ____retryExponent_6)); }
	inline double get__retryExponent_6() const { return ____retryExponent_6; }
	inline double* get_address_of__retryExponent_6() { return &____retryExponent_6; }
	inline void set__retryExponent_6(double value)
	{
		____retryExponent_6 = value;
	}

	inline static int32_t get_offset_of__currentRetryDelay_7() { return static_cast<int32_t>(offsetof(RetryHelper_t2341283196, ____currentRetryDelay_7)); }
	inline int64_t get__currentRetryDelay_7() const { return ____currentRetryDelay_7; }
	inline int64_t* get_address_of__currentRetryDelay_7() { return &____currentRetryDelay_7; }
	inline void set__currentRetryDelay_7(int64_t value)
	{
		____currentRetryDelay_7 = value;
	}

	inline static int32_t get_offset_of__lastWasSuccess_8() { return static_cast<int32_t>(offsetof(RetryHelper_t2341283196, ____lastWasSuccess_8)); }
	inline bool get__lastWasSuccess_8() const { return ____lastWasSuccess_8; }
	inline bool* get_address_of__lastWasSuccess_8() { return &____lastWasSuccess_8; }
	inline void set__lastWasSuccess_8(bool value)
	{
		____lastWasSuccess_8 = value;
	}

	inline static int32_t get_offset_of__scheduledRetry_9() { return static_cast<int32_t>(offsetof(RetryHelper_t2341283196, ____scheduledRetry_9)); }
	inline Il2CppObject* get__scheduledRetry_9() const { return ____scheduledRetry_9; }
	inline Il2CppObject** get_address_of__scheduledRetry_9() { return &____scheduledRetry_9; }
	inline void set__scheduledRetry_9(Il2CppObject* value)
	{
		____scheduledRetry_9 = value;
		Il2CppCodeGenWriteBarrier(&____scheduledRetry_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
