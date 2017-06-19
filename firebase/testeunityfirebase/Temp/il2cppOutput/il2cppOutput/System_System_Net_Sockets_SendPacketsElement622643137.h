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
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SendPacketsElement
struct  SendPacketsElement_t622643137  : public Il2CppObject
{
public:
	// System.Byte[] System.Net.Sockets.SendPacketsElement::<Buffer>k__BackingField
	ByteU5BU5D_t3397334013* ___U3CBufferU3Ek__BackingField_0;
	// System.Int32 System.Net.Sockets.SendPacketsElement::<Count>k__BackingField
	int32_t ___U3CCountU3Ek__BackingField_1;
	// System.Boolean System.Net.Sockets.SendPacketsElement::<EndOfPacket>k__BackingField
	bool ___U3CEndOfPacketU3Ek__BackingField_2;
	// System.String System.Net.Sockets.SendPacketsElement::<FilePath>k__BackingField
	String_t* ___U3CFilePathU3Ek__BackingField_3;
	// System.Int32 System.Net.Sockets.SendPacketsElement::<Offset>k__BackingField
	int32_t ___U3COffsetU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CBufferU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SendPacketsElement_t622643137, ___U3CBufferU3Ek__BackingField_0)); }
	inline ByteU5BU5D_t3397334013* get_U3CBufferU3Ek__BackingField_0() const { return ___U3CBufferU3Ek__BackingField_0; }
	inline ByteU5BU5D_t3397334013** get_address_of_U3CBufferU3Ek__BackingField_0() { return &___U3CBufferU3Ek__BackingField_0; }
	inline void set_U3CBufferU3Ek__BackingField_0(ByteU5BU5D_t3397334013* value)
	{
		___U3CBufferU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CBufferU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CCountU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SendPacketsElement_t622643137, ___U3CCountU3Ek__BackingField_1)); }
	inline int32_t get_U3CCountU3Ek__BackingField_1() const { return ___U3CCountU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CCountU3Ek__BackingField_1() { return &___U3CCountU3Ek__BackingField_1; }
	inline void set_U3CCountU3Ek__BackingField_1(int32_t value)
	{
		___U3CCountU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CEndOfPacketU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SendPacketsElement_t622643137, ___U3CEndOfPacketU3Ek__BackingField_2)); }
	inline bool get_U3CEndOfPacketU3Ek__BackingField_2() const { return ___U3CEndOfPacketU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CEndOfPacketU3Ek__BackingField_2() { return &___U3CEndOfPacketU3Ek__BackingField_2; }
	inline void set_U3CEndOfPacketU3Ek__BackingField_2(bool value)
	{
		___U3CEndOfPacketU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CFilePathU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SendPacketsElement_t622643137, ___U3CFilePathU3Ek__BackingField_3)); }
	inline String_t* get_U3CFilePathU3Ek__BackingField_3() const { return ___U3CFilePathU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CFilePathU3Ek__BackingField_3() { return &___U3CFilePathU3Ek__BackingField_3; }
	inline void set_U3CFilePathU3Ek__BackingField_3(String_t* value)
	{
		___U3CFilePathU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CFilePathU3Ek__BackingField_3, value);
	}

	inline static int32_t get_offset_of_U3COffsetU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SendPacketsElement_t622643137, ___U3COffsetU3Ek__BackingField_4)); }
	inline int32_t get_U3COffsetU3Ek__BackingField_4() const { return ___U3COffsetU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3COffsetU3Ek__BackingField_4() { return &___U3COffsetU3Ek__BackingField_4; }
	inline void set_U3COffsetU3Ek__BackingField_4(int32_t value)
	{
		___U3COffsetU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
