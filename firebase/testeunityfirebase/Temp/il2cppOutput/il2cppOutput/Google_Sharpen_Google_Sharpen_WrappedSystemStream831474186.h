#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_IO_Stream3255436806.h"

// Google.Sharpen.InputStream
struct InputStream_t39831546;
// Google.Sharpen.OutputStream
struct OutputStream_t3965982961;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Google.Sharpen.WrappedSystemStream
struct  WrappedSystemStream_t831474186  : public Stream_t3255436806
{
public:
	// Google.Sharpen.InputStream Google.Sharpen.WrappedSystemStream::ist
	InputStream_t39831546 * ___ist_2;
	// Google.Sharpen.OutputStream Google.Sharpen.WrappedSystemStream::ost
	OutputStream_t3965982961 * ___ost_3;
	// System.Int32 Google.Sharpen.WrappedSystemStream::position
	int32_t ___position_4;
	// System.Int32 Google.Sharpen.WrappedSystemStream::markedPosition
	int32_t ___markedPosition_5;

public:
	inline static int32_t get_offset_of_ist_2() { return static_cast<int32_t>(offsetof(WrappedSystemStream_t831474186, ___ist_2)); }
	inline InputStream_t39831546 * get_ist_2() const { return ___ist_2; }
	inline InputStream_t39831546 ** get_address_of_ist_2() { return &___ist_2; }
	inline void set_ist_2(InputStream_t39831546 * value)
	{
		___ist_2 = value;
		Il2CppCodeGenWriteBarrier(&___ist_2, value);
	}

	inline static int32_t get_offset_of_ost_3() { return static_cast<int32_t>(offsetof(WrappedSystemStream_t831474186, ___ost_3)); }
	inline OutputStream_t3965982961 * get_ost_3() const { return ___ost_3; }
	inline OutputStream_t3965982961 ** get_address_of_ost_3() { return &___ost_3; }
	inline void set_ost_3(OutputStream_t3965982961 * value)
	{
		___ost_3 = value;
		Il2CppCodeGenWriteBarrier(&___ost_3, value);
	}

	inline static int32_t get_offset_of_position_4() { return static_cast<int32_t>(offsetof(WrappedSystemStream_t831474186, ___position_4)); }
	inline int32_t get_position_4() const { return ___position_4; }
	inline int32_t* get_address_of_position_4() { return &___position_4; }
	inline void set_position_4(int32_t value)
	{
		___position_4 = value;
	}

	inline static int32_t get_offset_of_markedPosition_5() { return static_cast<int32_t>(offsetof(WrappedSystemStream_t831474186, ___markedPosition_5)); }
	inline int32_t get_markedPosition_5() const { return ___markedPosition_5; }
	inline int32_t* get_address_of_markedPosition_5() { return &___markedPosition_5; }
	inline void set_markedPosition_5(int32_t value)
	{
		___markedPosition_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
