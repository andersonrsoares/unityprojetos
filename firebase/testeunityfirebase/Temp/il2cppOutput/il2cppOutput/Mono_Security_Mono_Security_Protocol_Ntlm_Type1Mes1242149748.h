#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Mono_Security_Mono_Security_Protocol_Ntlm_MessageB3244136048.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Ntlm.Type1Message
struct  Type1Message_t1242149748  : public MessageBase_t3244136048
{
public:
	// System.String Mono.Security.Protocol.Ntlm.Type1Message::_host
	String_t* ____host_3;
	// System.String Mono.Security.Protocol.Ntlm.Type1Message::_domain
	String_t* ____domain_4;

public:
	inline static int32_t get_offset_of__host_3() { return static_cast<int32_t>(offsetof(Type1Message_t1242149748, ____host_3)); }
	inline String_t* get__host_3() const { return ____host_3; }
	inline String_t** get_address_of__host_3() { return &____host_3; }
	inline void set__host_3(String_t* value)
	{
		____host_3 = value;
		Il2CppCodeGenWriteBarrier(&____host_3, value);
	}

	inline static int32_t get_offset_of__domain_4() { return static_cast<int32_t>(offsetof(Type1Message_t1242149748, ____domain_4)); }
	inline String_t* get__domain_4() const { return ____domain_4; }
	inline String_t** get_address_of__domain_4() { return &____domain_4; }
	inline void set__domain_4(String_t* value)
	{
		____domain_4 = value;
		Il2CppCodeGenWriteBarrier(&____domain_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
