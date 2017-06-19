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

// Firebase.Database.Internal.Base64/Coder
struct  Coder_t4255634182  : public Il2CppObject
{
public:
	// System.Int32 Firebase.Database.Internal.Base64/Coder::Op
	int32_t ___Op_0;
	// System.Byte[] Firebase.Database.Internal.Base64/Coder::Output
	ByteU5BU5D_t3397334013* ___Output_1;

public:
	inline static int32_t get_offset_of_Op_0() { return static_cast<int32_t>(offsetof(Coder_t4255634182, ___Op_0)); }
	inline int32_t get_Op_0() const { return ___Op_0; }
	inline int32_t* get_address_of_Op_0() { return &___Op_0; }
	inline void set_Op_0(int32_t value)
	{
		___Op_0 = value;
	}

	inline static int32_t get_offset_of_Output_1() { return static_cast<int32_t>(offsetof(Coder_t4255634182, ___Output_1)); }
	inline ByteU5BU5D_t3397334013* get_Output_1() const { return ___Output_1; }
	inline ByteU5BU5D_t3397334013** get_address_of_Output_1() { return &___Output_1; }
	inline void set_Output_1(ByteU5BU5D_t3397334013* value)
	{
		___Output_1 = value;
		Il2CppCodeGenWriteBarrier(&___Output_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
