#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.Collections.Generic.Queue`1<System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>>
struct Queue_1_t279829387;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir
struct  SynchronizationContextBehavoir_t99138606  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.Queue`1<System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>> Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir::callbackQueue
	Queue_1_t279829387 * ___callbackQueue_2;

public:
	inline static int32_t get_offset_of_callbackQueue_2() { return static_cast<int32_t>(offsetof(SynchronizationContextBehavoir_t99138606, ___callbackQueue_2)); }
	inline Queue_1_t279829387 * get_callbackQueue_2() const { return ___callbackQueue_2; }
	inline Queue_1_t279829387 ** get_address_of_callbackQueue_2() { return &___callbackQueue_2; }
	inline void set_callbackQueue_2(Queue_1_t279829387 * value)
	{
		___callbackQueue_2 = value;
		Il2CppCodeGenWriteBarrier(&___callbackQueue_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
