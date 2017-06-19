#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Ntlm.ChallengeResponse
struct  ChallengeResponse_t1073778084  : public Il2CppObject
{
public:
	// System.Boolean Mono.Security.Protocol.Ntlm.ChallengeResponse::_disposed
	bool ____disposed_2;
	// System.Byte[] Mono.Security.Protocol.Ntlm.ChallengeResponse::_challenge
	ByteU5BU5D_t3397334013* ____challenge_3;
	// System.Byte[] Mono.Security.Protocol.Ntlm.ChallengeResponse::_lmpwd
	ByteU5BU5D_t3397334013* ____lmpwd_4;
	// System.Byte[] Mono.Security.Protocol.Ntlm.ChallengeResponse::_ntpwd
	ByteU5BU5D_t3397334013* ____ntpwd_5;

public:
	inline static int32_t get_offset_of__disposed_2() { return static_cast<int32_t>(offsetof(ChallengeResponse_t1073778084, ____disposed_2)); }
	inline bool get__disposed_2() const { return ____disposed_2; }
	inline bool* get_address_of__disposed_2() { return &____disposed_2; }
	inline void set__disposed_2(bool value)
	{
		____disposed_2 = value;
	}

	inline static int32_t get_offset_of__challenge_3() { return static_cast<int32_t>(offsetof(ChallengeResponse_t1073778084, ____challenge_3)); }
	inline ByteU5BU5D_t3397334013* get__challenge_3() const { return ____challenge_3; }
	inline ByteU5BU5D_t3397334013** get_address_of__challenge_3() { return &____challenge_3; }
	inline void set__challenge_3(ByteU5BU5D_t3397334013* value)
	{
		____challenge_3 = value;
		Il2CppCodeGenWriteBarrier(&____challenge_3, value);
	}

	inline static int32_t get_offset_of__lmpwd_4() { return static_cast<int32_t>(offsetof(ChallengeResponse_t1073778084, ____lmpwd_4)); }
	inline ByteU5BU5D_t3397334013* get__lmpwd_4() const { return ____lmpwd_4; }
	inline ByteU5BU5D_t3397334013** get_address_of__lmpwd_4() { return &____lmpwd_4; }
	inline void set__lmpwd_4(ByteU5BU5D_t3397334013* value)
	{
		____lmpwd_4 = value;
		Il2CppCodeGenWriteBarrier(&____lmpwd_4, value);
	}

	inline static int32_t get_offset_of__ntpwd_5() { return static_cast<int32_t>(offsetof(ChallengeResponse_t1073778084, ____ntpwd_5)); }
	inline ByteU5BU5D_t3397334013* get__ntpwd_5() const { return ____ntpwd_5; }
	inline ByteU5BU5D_t3397334013** get_address_of__ntpwd_5() { return &____ntpwd_5; }
	inline void set__ntpwd_5(ByteU5BU5D_t3397334013* value)
	{
		____ntpwd_5 = value;
		Il2CppCodeGenWriteBarrier(&____ntpwd_5, value);
	}
};

struct ChallengeResponse_t1073778084_StaticFields
{
public:
	// System.Byte[] Mono.Security.Protocol.Ntlm.ChallengeResponse::magic
	ByteU5BU5D_t3397334013* ___magic_0;
	// System.Byte[] Mono.Security.Protocol.Ntlm.ChallengeResponse::nullEncMagic
	ByteU5BU5D_t3397334013* ___nullEncMagic_1;

public:
	inline static int32_t get_offset_of_magic_0() { return static_cast<int32_t>(offsetof(ChallengeResponse_t1073778084_StaticFields, ___magic_0)); }
	inline ByteU5BU5D_t3397334013* get_magic_0() const { return ___magic_0; }
	inline ByteU5BU5D_t3397334013** get_address_of_magic_0() { return &___magic_0; }
	inline void set_magic_0(ByteU5BU5D_t3397334013* value)
	{
		___magic_0 = value;
		Il2CppCodeGenWriteBarrier(&___magic_0, value);
	}

	inline static int32_t get_offset_of_nullEncMagic_1() { return static_cast<int32_t>(offsetof(ChallengeResponse_t1073778084_StaticFields, ___nullEncMagic_1)); }
	inline ByteU5BU5D_t3397334013* get_nullEncMagic_1() const { return ___nullEncMagic_1; }
	inline ByteU5BU5D_t3397334013** get_address_of_nullEncMagic_1() { return &___nullEncMagic_1; }
	inline void set_nullEncMagic_1(ByteU5BU5D_t3397334013* value)
	{
		___nullEncMagic_1 = value;
		Il2CppCodeGenWriteBarrier(&___nullEncMagic_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
