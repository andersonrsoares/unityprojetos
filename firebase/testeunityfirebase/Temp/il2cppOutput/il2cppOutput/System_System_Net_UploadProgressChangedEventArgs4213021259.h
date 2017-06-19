#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_System_ComponentModel_ProgressChangedEventAr711712958.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.UploadProgressChangedEventArgs
struct  UploadProgressChangedEventArgs_t4213021259  : public ProgressChangedEventArgs_t711712958
{
public:
	// System.Int64 System.Net.UploadProgressChangedEventArgs::received
	int64_t ___received_3;
	// System.Int64 System.Net.UploadProgressChangedEventArgs::sent
	int64_t ___sent_4;
	// System.Int64 System.Net.UploadProgressChangedEventArgs::total_recv
	int64_t ___total_recv_5;
	// System.Int64 System.Net.UploadProgressChangedEventArgs::total_send
	int64_t ___total_send_6;

public:
	inline static int32_t get_offset_of_received_3() { return static_cast<int32_t>(offsetof(UploadProgressChangedEventArgs_t4213021259, ___received_3)); }
	inline int64_t get_received_3() const { return ___received_3; }
	inline int64_t* get_address_of_received_3() { return &___received_3; }
	inline void set_received_3(int64_t value)
	{
		___received_3 = value;
	}

	inline static int32_t get_offset_of_sent_4() { return static_cast<int32_t>(offsetof(UploadProgressChangedEventArgs_t4213021259, ___sent_4)); }
	inline int64_t get_sent_4() const { return ___sent_4; }
	inline int64_t* get_address_of_sent_4() { return &___sent_4; }
	inline void set_sent_4(int64_t value)
	{
		___sent_4 = value;
	}

	inline static int32_t get_offset_of_total_recv_5() { return static_cast<int32_t>(offsetof(UploadProgressChangedEventArgs_t4213021259, ___total_recv_5)); }
	inline int64_t get_total_recv_5() const { return ___total_recv_5; }
	inline int64_t* get_address_of_total_recv_5() { return &___total_recv_5; }
	inline void set_total_recv_5(int64_t value)
	{
		___total_recv_5 = value;
	}

	inline static int32_t get_offset_of_total_send_6() { return static_cast<int32_t>(offsetof(UploadProgressChangedEventArgs_t4213021259, ___total_send_6)); }
	inline int64_t get_total_send_6() const { return ___total_send_6; }
	inline int64_t* get_address_of_total_send_6() { return &___total_send_6; }
	inline void set_total_send_6(int64_t value)
	{
		___total_send_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
