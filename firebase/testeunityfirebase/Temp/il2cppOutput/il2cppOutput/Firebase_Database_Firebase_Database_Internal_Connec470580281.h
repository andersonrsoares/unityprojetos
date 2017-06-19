#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Database.Internal.Logging.LogWrapper
struct LogWrapper_t438307305;
// Google.Sharpen.ScheduledThreadPoolExecutor
struct ScheduledThreadPoolExecutor_t2537379786;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Connection.Util.RetryHelper/Builder
struct  Builder_t470580281  : public Il2CppObject
{
public:
	// Firebase.Database.Internal.Logging.LogWrapper Firebase.Database.Internal.Connection.Util.RetryHelper/Builder::_logger
	LogWrapper_t438307305 * ____logger_0;
	// Google.Sharpen.ScheduledThreadPoolExecutor Firebase.Database.Internal.Connection.Util.RetryHelper/Builder::_service
	ScheduledThreadPoolExecutor_t2537379786 * ____service_1;
	// System.Double Firebase.Database.Internal.Connection.Util.RetryHelper/Builder::_jitterFactor
	double ____jitterFactor_2;
	// System.Int64 Firebase.Database.Internal.Connection.Util.RetryHelper/Builder::_minRetryDelayAfterFailure
	int64_t ____minRetryDelayAfterFailure_3;
	// System.Double Firebase.Database.Internal.Connection.Util.RetryHelper/Builder::_retryExponent
	double ____retryExponent_4;
	// System.Int64 Firebase.Database.Internal.Connection.Util.RetryHelper/Builder::_retryMaxDelay
	int64_t ____retryMaxDelay_5;

public:
	inline static int32_t get_offset_of__logger_0() { return static_cast<int32_t>(offsetof(Builder_t470580281, ____logger_0)); }
	inline LogWrapper_t438307305 * get__logger_0() const { return ____logger_0; }
	inline LogWrapper_t438307305 ** get_address_of__logger_0() { return &____logger_0; }
	inline void set__logger_0(LogWrapper_t438307305 * value)
	{
		____logger_0 = value;
		Il2CppCodeGenWriteBarrier(&____logger_0, value);
	}

	inline static int32_t get_offset_of__service_1() { return static_cast<int32_t>(offsetof(Builder_t470580281, ____service_1)); }
	inline ScheduledThreadPoolExecutor_t2537379786 * get__service_1() const { return ____service_1; }
	inline ScheduledThreadPoolExecutor_t2537379786 ** get_address_of__service_1() { return &____service_1; }
	inline void set__service_1(ScheduledThreadPoolExecutor_t2537379786 * value)
	{
		____service_1 = value;
		Il2CppCodeGenWriteBarrier(&____service_1, value);
	}

	inline static int32_t get_offset_of__jitterFactor_2() { return static_cast<int32_t>(offsetof(Builder_t470580281, ____jitterFactor_2)); }
	inline double get__jitterFactor_2() const { return ____jitterFactor_2; }
	inline double* get_address_of__jitterFactor_2() { return &____jitterFactor_2; }
	inline void set__jitterFactor_2(double value)
	{
		____jitterFactor_2 = value;
	}

	inline static int32_t get_offset_of__minRetryDelayAfterFailure_3() { return static_cast<int32_t>(offsetof(Builder_t470580281, ____minRetryDelayAfterFailure_3)); }
	inline int64_t get__minRetryDelayAfterFailure_3() const { return ____minRetryDelayAfterFailure_3; }
	inline int64_t* get_address_of__minRetryDelayAfterFailure_3() { return &____minRetryDelayAfterFailure_3; }
	inline void set__minRetryDelayAfterFailure_3(int64_t value)
	{
		____minRetryDelayAfterFailure_3 = value;
	}

	inline static int32_t get_offset_of__retryExponent_4() { return static_cast<int32_t>(offsetof(Builder_t470580281, ____retryExponent_4)); }
	inline double get__retryExponent_4() const { return ____retryExponent_4; }
	inline double* get_address_of__retryExponent_4() { return &____retryExponent_4; }
	inline void set__retryExponent_4(double value)
	{
		____retryExponent_4 = value;
	}

	inline static int32_t get_offset_of__retryMaxDelay_5() { return static_cast<int32_t>(offsetof(Builder_t470580281, ____retryMaxDelay_5)); }
	inline int64_t get__retryMaxDelay_5() const { return ____retryMaxDelay_5; }
	inline int64_t* get_address_of__retryMaxDelay_5() { return &____retryMaxDelay_5; }
	inline void set__retryMaxDelay_5(int64_t value)
	{
		____retryMaxDelay_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
