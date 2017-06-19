#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Firebase_Database_Firebase_Database_Internal_Base64255634182.h"

// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Base64/Encoder
struct  Encoder_t3204051639  : public Coder_t4255634182
{
public:
	// System.Byte[] Firebase.Database.Internal.Base64/Encoder::_alphabet
	ByteU5BU5D_t3397334013* ____alphabet_4;
	// System.Byte[] Firebase.Database.Internal.Base64/Encoder::_tail
	ByteU5BU5D_t3397334013* ____tail_5;
	// System.Boolean Firebase.Database.Internal.Base64/Encoder::DoCr
	bool ___DoCr_6;
	// System.Boolean Firebase.Database.Internal.Base64/Encoder::DoNewline
	bool ___DoNewline_7;
	// System.Boolean Firebase.Database.Internal.Base64/Encoder::DoPadding
	bool ___DoPadding_8;
	// System.Int32 Firebase.Database.Internal.Base64/Encoder::_count
	int32_t ____count_9;
	// System.Int32 Firebase.Database.Internal.Base64/Encoder::TailLen
	int32_t ___TailLen_10;

public:
	inline static int32_t get_offset_of__alphabet_4() { return static_cast<int32_t>(offsetof(Encoder_t3204051639, ____alphabet_4)); }
	inline ByteU5BU5D_t3397334013* get__alphabet_4() const { return ____alphabet_4; }
	inline ByteU5BU5D_t3397334013** get_address_of__alphabet_4() { return &____alphabet_4; }
	inline void set__alphabet_4(ByteU5BU5D_t3397334013* value)
	{
		____alphabet_4 = value;
		Il2CppCodeGenWriteBarrier(&____alphabet_4, value);
	}

	inline static int32_t get_offset_of__tail_5() { return static_cast<int32_t>(offsetof(Encoder_t3204051639, ____tail_5)); }
	inline ByteU5BU5D_t3397334013* get__tail_5() const { return ____tail_5; }
	inline ByteU5BU5D_t3397334013** get_address_of__tail_5() { return &____tail_5; }
	inline void set__tail_5(ByteU5BU5D_t3397334013* value)
	{
		____tail_5 = value;
		Il2CppCodeGenWriteBarrier(&____tail_5, value);
	}

	inline static int32_t get_offset_of_DoCr_6() { return static_cast<int32_t>(offsetof(Encoder_t3204051639, ___DoCr_6)); }
	inline bool get_DoCr_6() const { return ___DoCr_6; }
	inline bool* get_address_of_DoCr_6() { return &___DoCr_6; }
	inline void set_DoCr_6(bool value)
	{
		___DoCr_6 = value;
	}

	inline static int32_t get_offset_of_DoNewline_7() { return static_cast<int32_t>(offsetof(Encoder_t3204051639, ___DoNewline_7)); }
	inline bool get_DoNewline_7() const { return ___DoNewline_7; }
	inline bool* get_address_of_DoNewline_7() { return &___DoNewline_7; }
	inline void set_DoNewline_7(bool value)
	{
		___DoNewline_7 = value;
	}

	inline static int32_t get_offset_of_DoPadding_8() { return static_cast<int32_t>(offsetof(Encoder_t3204051639, ___DoPadding_8)); }
	inline bool get_DoPadding_8() const { return ___DoPadding_8; }
	inline bool* get_address_of_DoPadding_8() { return &___DoPadding_8; }
	inline void set_DoPadding_8(bool value)
	{
		___DoPadding_8 = value;
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(Encoder_t3204051639, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of_TailLen_10() { return static_cast<int32_t>(offsetof(Encoder_t3204051639, ___TailLen_10)); }
	inline int32_t get_TailLen_10() const { return ___TailLen_10; }
	inline int32_t* get_address_of_TailLen_10() { return &___TailLen_10; }
	inline void set_TailLen_10(int32_t value)
	{
		___TailLen_10 = value;
	}
};

struct Encoder_t3204051639_StaticFields
{
public:
	// System.Byte[] Firebase.Database.Internal.Base64/Encoder::Encode
	ByteU5BU5D_t3397334013* ___Encode_2;
	// System.Byte[] Firebase.Database.Internal.Base64/Encoder::EncodeWebsafe
	ByteU5BU5D_t3397334013* ___EncodeWebsafe_3;

public:
	inline static int32_t get_offset_of_Encode_2() { return static_cast<int32_t>(offsetof(Encoder_t3204051639_StaticFields, ___Encode_2)); }
	inline ByteU5BU5D_t3397334013* get_Encode_2() const { return ___Encode_2; }
	inline ByteU5BU5D_t3397334013** get_address_of_Encode_2() { return &___Encode_2; }
	inline void set_Encode_2(ByteU5BU5D_t3397334013* value)
	{
		___Encode_2 = value;
		Il2CppCodeGenWriteBarrier(&___Encode_2, value);
	}

	inline static int32_t get_offset_of_EncodeWebsafe_3() { return static_cast<int32_t>(offsetof(Encoder_t3204051639_StaticFields, ___EncodeWebsafe_3)); }
	inline ByteU5BU5D_t3397334013* get_EncodeWebsafe_3() const { return ___EncodeWebsafe_3; }
	inline ByteU5BU5D_t3397334013** get_address_of_EncodeWebsafe_3() { return &___EncodeWebsafe_3; }
	inline void set_EncodeWebsafe_3(ByteU5BU5D_t3397334013* value)
	{
		___EncodeWebsafe_3 = value;
		Il2CppCodeGenWriteBarrier(&___EncodeWebsafe_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
