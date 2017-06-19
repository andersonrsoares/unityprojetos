#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Firebase.Database.Core.IEventTarget
struct IEventTarget_t170421798;
// Firebase.Database.Internal.Logging.LogWrapper
struct LogWrapper_t438307305;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Core.View.EventRaiser
struct  EventRaiser_t2009560  : public Il2CppObject
{
public:
	// Firebase.Database.Core.IEventTarget Firebase.Database.Internal.Core.View.EventRaiser::_eventTarget
	Il2CppObject * ____eventTarget_0;
	// Firebase.Database.Internal.Logging.LogWrapper Firebase.Database.Internal.Core.View.EventRaiser::_logger
	LogWrapper_t438307305 * ____logger_1;

public:
	inline static int32_t get_offset_of__eventTarget_0() { return static_cast<int32_t>(offsetof(EventRaiser_t2009560, ____eventTarget_0)); }
	inline Il2CppObject * get__eventTarget_0() const { return ____eventTarget_0; }
	inline Il2CppObject ** get_address_of__eventTarget_0() { return &____eventTarget_0; }
	inline void set__eventTarget_0(Il2CppObject * value)
	{
		____eventTarget_0 = value;
		Il2CppCodeGenWriteBarrier(&____eventTarget_0, value);
	}

	inline static int32_t get_offset_of__logger_1() { return static_cast<int32_t>(offsetof(EventRaiser_t2009560, ____logger_1)); }
	inline LogWrapper_t438307305 * get__logger_1() const { return ____logger_1; }
	inline LogWrapper_t438307305 ** get_address_of__logger_1() { return &____logger_1; }
	inline void set__logger_1(LogWrapper_t438307305 * value)
	{
		____logger_1 = value;
		Il2CppCodeGenWriteBarrier(&____logger_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
