#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Net.IPEndPoint
struct IPEndPoint_t2615413766;
// System.Net.Sockets.Socket
struct Socket_t3821512045;
// System.Collections.Hashtable
struct Hashtable_t909839986;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t4056456767;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t784058677;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.EndPointListener
struct  EndPointListener_t822992745  : public Il2CppObject
{
public:
	// System.Net.IPEndPoint System.Net.EndPointListener::endpoint
	IPEndPoint_t2615413766 * ___endpoint_0;
	// System.Net.Sockets.Socket System.Net.EndPointListener::sock
	Socket_t3821512045 * ___sock_1;
	// System.Collections.Hashtable System.Net.EndPointListener::prefixes
	Hashtable_t909839986 * ___prefixes_2;
	// System.Collections.ArrayList System.Net.EndPointListener::unhandled
	ArrayList_t4252133567 * ___unhandled_3;
	// System.Collections.ArrayList System.Net.EndPointListener::all
	ArrayList_t4252133567 * ___all_4;
	// System.Security.Cryptography.X509Certificates.X509Certificate2 System.Net.EndPointListener::cert
	X509Certificate2_t4056456767 * ___cert_5;
	// System.Security.Cryptography.AsymmetricAlgorithm System.Net.EndPointListener::key
	AsymmetricAlgorithm_t784058677 * ___key_6;
	// System.Boolean System.Net.EndPointListener::secure
	bool ___secure_7;

public:
	inline static int32_t get_offset_of_endpoint_0() { return static_cast<int32_t>(offsetof(EndPointListener_t822992745, ___endpoint_0)); }
	inline IPEndPoint_t2615413766 * get_endpoint_0() const { return ___endpoint_0; }
	inline IPEndPoint_t2615413766 ** get_address_of_endpoint_0() { return &___endpoint_0; }
	inline void set_endpoint_0(IPEndPoint_t2615413766 * value)
	{
		___endpoint_0 = value;
		Il2CppCodeGenWriteBarrier(&___endpoint_0, value);
	}

	inline static int32_t get_offset_of_sock_1() { return static_cast<int32_t>(offsetof(EndPointListener_t822992745, ___sock_1)); }
	inline Socket_t3821512045 * get_sock_1() const { return ___sock_1; }
	inline Socket_t3821512045 ** get_address_of_sock_1() { return &___sock_1; }
	inline void set_sock_1(Socket_t3821512045 * value)
	{
		___sock_1 = value;
		Il2CppCodeGenWriteBarrier(&___sock_1, value);
	}

	inline static int32_t get_offset_of_prefixes_2() { return static_cast<int32_t>(offsetof(EndPointListener_t822992745, ___prefixes_2)); }
	inline Hashtable_t909839986 * get_prefixes_2() const { return ___prefixes_2; }
	inline Hashtable_t909839986 ** get_address_of_prefixes_2() { return &___prefixes_2; }
	inline void set_prefixes_2(Hashtable_t909839986 * value)
	{
		___prefixes_2 = value;
		Il2CppCodeGenWriteBarrier(&___prefixes_2, value);
	}

	inline static int32_t get_offset_of_unhandled_3() { return static_cast<int32_t>(offsetof(EndPointListener_t822992745, ___unhandled_3)); }
	inline ArrayList_t4252133567 * get_unhandled_3() const { return ___unhandled_3; }
	inline ArrayList_t4252133567 ** get_address_of_unhandled_3() { return &___unhandled_3; }
	inline void set_unhandled_3(ArrayList_t4252133567 * value)
	{
		___unhandled_3 = value;
		Il2CppCodeGenWriteBarrier(&___unhandled_3, value);
	}

	inline static int32_t get_offset_of_all_4() { return static_cast<int32_t>(offsetof(EndPointListener_t822992745, ___all_4)); }
	inline ArrayList_t4252133567 * get_all_4() const { return ___all_4; }
	inline ArrayList_t4252133567 ** get_address_of_all_4() { return &___all_4; }
	inline void set_all_4(ArrayList_t4252133567 * value)
	{
		___all_4 = value;
		Il2CppCodeGenWriteBarrier(&___all_4, value);
	}

	inline static int32_t get_offset_of_cert_5() { return static_cast<int32_t>(offsetof(EndPointListener_t822992745, ___cert_5)); }
	inline X509Certificate2_t4056456767 * get_cert_5() const { return ___cert_5; }
	inline X509Certificate2_t4056456767 ** get_address_of_cert_5() { return &___cert_5; }
	inline void set_cert_5(X509Certificate2_t4056456767 * value)
	{
		___cert_5 = value;
		Il2CppCodeGenWriteBarrier(&___cert_5, value);
	}

	inline static int32_t get_offset_of_key_6() { return static_cast<int32_t>(offsetof(EndPointListener_t822992745, ___key_6)); }
	inline AsymmetricAlgorithm_t784058677 * get_key_6() const { return ___key_6; }
	inline AsymmetricAlgorithm_t784058677 ** get_address_of_key_6() { return &___key_6; }
	inline void set_key_6(AsymmetricAlgorithm_t784058677 * value)
	{
		___key_6 = value;
		Il2CppCodeGenWriteBarrier(&___key_6, value);
	}

	inline static int32_t get_offset_of_secure_7() { return static_cast<int32_t>(offsetof(EndPointListener_t822992745, ___secure_7)); }
	inline bool get_secure_7() const { return ___secure_7; }
	inline bool* get_address_of_secure_7() { return &___secure_7; }
	inline void set_secure_7(bool value)
	{
		___secure_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
