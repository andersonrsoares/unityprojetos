#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Mono.Security.Protocol.Ntlm.MessageBase
struct MessageBase_t3244136048;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Http.NtlmSession
struct  NtlmSession_t1543192751  : public Il2CppObject
{
public:
	// Mono.Security.Protocol.Ntlm.MessageBase Mono.Http.NtlmSession::message
	MessageBase_t3244136048 * ___message_0;

public:
	inline static int32_t get_offset_of_message_0() { return static_cast<int32_t>(offsetof(NtlmSession_t1543192751, ___message_0)); }
	inline MessageBase_t3244136048 * get_message_0() const { return ___message_0; }
	inline MessageBase_t3244136048 ** get_address_of_message_0() { return &___message_0; }
	inline void set_message_0(MessageBase_t3244136048 * value)
	{
		___message_0 = value;
		Il2CppCodeGenWriteBarrier(&___message_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
