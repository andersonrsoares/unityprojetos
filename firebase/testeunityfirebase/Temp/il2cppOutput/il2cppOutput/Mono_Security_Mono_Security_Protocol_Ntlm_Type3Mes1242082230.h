#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Mono_Security_Mono_Security_Protocol_Ntlm_MessageB3244136048.h"

// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Ntlm.Type3Message
struct  Type3Message_t1242082230  : public MessageBase_t3244136048
{
public:
	// System.Byte[] Mono.Security.Protocol.Ntlm.Type3Message::_challenge
	ByteU5BU5D_t3397334013* ____challenge_3;
	// System.String Mono.Security.Protocol.Ntlm.Type3Message::_host
	String_t* ____host_4;
	// System.String Mono.Security.Protocol.Ntlm.Type3Message::_domain
	String_t* ____domain_5;
	// System.String Mono.Security.Protocol.Ntlm.Type3Message::_username
	String_t* ____username_6;
	// System.String Mono.Security.Protocol.Ntlm.Type3Message::_password
	String_t* ____password_7;
	// System.Byte[] Mono.Security.Protocol.Ntlm.Type3Message::_lm
	ByteU5BU5D_t3397334013* ____lm_8;
	// System.Byte[] Mono.Security.Protocol.Ntlm.Type3Message::_nt
	ByteU5BU5D_t3397334013* ____nt_9;

public:
	inline static int32_t get_offset_of__challenge_3() { return static_cast<int32_t>(offsetof(Type3Message_t1242082230, ____challenge_3)); }
	inline ByteU5BU5D_t3397334013* get__challenge_3() const { return ____challenge_3; }
	inline ByteU5BU5D_t3397334013** get_address_of__challenge_3() { return &____challenge_3; }
	inline void set__challenge_3(ByteU5BU5D_t3397334013* value)
	{
		____challenge_3 = value;
		Il2CppCodeGenWriteBarrier(&____challenge_3, value);
	}

	inline static int32_t get_offset_of__host_4() { return static_cast<int32_t>(offsetof(Type3Message_t1242082230, ____host_4)); }
	inline String_t* get__host_4() const { return ____host_4; }
	inline String_t** get_address_of__host_4() { return &____host_4; }
	inline void set__host_4(String_t* value)
	{
		____host_4 = value;
		Il2CppCodeGenWriteBarrier(&____host_4, value);
	}

	inline static int32_t get_offset_of__domain_5() { return static_cast<int32_t>(offsetof(Type3Message_t1242082230, ____domain_5)); }
	inline String_t* get__domain_5() const { return ____domain_5; }
	inline String_t** get_address_of__domain_5() { return &____domain_5; }
	inline void set__domain_5(String_t* value)
	{
		____domain_5 = value;
		Il2CppCodeGenWriteBarrier(&____domain_5, value);
	}

	inline static int32_t get_offset_of__username_6() { return static_cast<int32_t>(offsetof(Type3Message_t1242082230, ____username_6)); }
	inline String_t* get__username_6() const { return ____username_6; }
	inline String_t** get_address_of__username_6() { return &____username_6; }
	inline void set__username_6(String_t* value)
	{
		____username_6 = value;
		Il2CppCodeGenWriteBarrier(&____username_6, value);
	}

	inline static int32_t get_offset_of__password_7() { return static_cast<int32_t>(offsetof(Type3Message_t1242082230, ____password_7)); }
	inline String_t* get__password_7() const { return ____password_7; }
	inline String_t** get_address_of__password_7() { return &____password_7; }
	inline void set__password_7(String_t* value)
	{
		____password_7 = value;
		Il2CppCodeGenWriteBarrier(&____password_7, value);
	}

	inline static int32_t get_offset_of__lm_8() { return static_cast<int32_t>(offsetof(Type3Message_t1242082230, ____lm_8)); }
	inline ByteU5BU5D_t3397334013* get__lm_8() const { return ____lm_8; }
	inline ByteU5BU5D_t3397334013** get_address_of__lm_8() { return &____lm_8; }
	inline void set__lm_8(ByteU5BU5D_t3397334013* value)
	{
		____lm_8 = value;
		Il2CppCodeGenWriteBarrier(&____lm_8, value);
	}

	inline static int32_t get_offset_of__nt_9() { return static_cast<int32_t>(offsetof(Type3Message_t1242082230, ____nt_9)); }
	inline ByteU5BU5D_t3397334013* get__nt_9() const { return ____nt_9; }
	inline ByteU5BU5D_t3397334013** get_address_of__nt_9() { return &____nt_9; }
	inline void set__nt_9(ByteU5BU5D_t3397334013* value)
	{
		____nt_9 = value;
		Il2CppCodeGenWriteBarrier(&____nt_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
