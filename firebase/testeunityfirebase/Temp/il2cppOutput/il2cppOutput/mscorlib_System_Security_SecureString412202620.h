#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Runtime_ConstrainedExecution_Criti1920899984.h"

// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecureString
struct  SecureString_t412202620  : public CriticalFinalizerObject_t1920899984
{
public:
	// System.Int32 System.Security.SecureString::length
	int32_t ___length_2;
	// System.Boolean System.Security.SecureString::disposed
	bool ___disposed_3;
	// System.Boolean System.Security.SecureString::read_only
	bool ___read_only_4;
	// System.Byte[] System.Security.SecureString::data
	ByteU5BU5D_t3397334013* ___data_5;

public:
	inline static int32_t get_offset_of_length_2() { return static_cast<int32_t>(offsetof(SecureString_t412202620, ___length_2)); }
	inline int32_t get_length_2() const { return ___length_2; }
	inline int32_t* get_address_of_length_2() { return &___length_2; }
	inline void set_length_2(int32_t value)
	{
		___length_2 = value;
	}

	inline static int32_t get_offset_of_disposed_3() { return static_cast<int32_t>(offsetof(SecureString_t412202620, ___disposed_3)); }
	inline bool get_disposed_3() const { return ___disposed_3; }
	inline bool* get_address_of_disposed_3() { return &___disposed_3; }
	inline void set_disposed_3(bool value)
	{
		___disposed_3 = value;
	}

	inline static int32_t get_offset_of_read_only_4() { return static_cast<int32_t>(offsetof(SecureString_t412202620, ___read_only_4)); }
	inline bool get_read_only_4() const { return ___read_only_4; }
	inline bool* get_address_of_read_only_4() { return &___read_only_4; }
	inline void set_read_only_4(bool value)
	{
		___read_only_4 = value;
	}

	inline static int32_t get_offset_of_data_5() { return static_cast<int32_t>(offsetof(SecureString_t412202620, ___data_5)); }
	inline ByteU5BU5D_t3397334013* get_data_5() const { return ___data_5; }
	inline ByteU5BU5D_t3397334013** get_address_of_data_5() { return &___data_5; }
	inline void set_data_5(ByteU5BU5D_t3397334013* value)
	{
		___data_5 = value;
		Il2CppCodeGenWriteBarrier(&___data_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
