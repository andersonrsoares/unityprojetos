#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityPr155967584.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityC3722381418.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake2540099417.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake1820731088.h"

// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Mono.Security.Protocol.Tls.TlsServerSettings
struct TlsServerSettings_t403340211;
// Mono.Security.Protocol.Tls.TlsClientSettings
struct TlsClientSettings_t2311449551;
// Mono.Security.Protocol.Tls.SecurityParameters
struct SecurityParameters_t2290372928;
// Mono.Security.Protocol.Tls.CipherSuiteCollection
struct CipherSuiteCollection_t2431504453;
// Mono.Security.Protocol.Tls.TlsStream
struct TlsStream_t4089752859;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2510243513;
// Mono.Security.Protocol.Tls.RecordProtocol
struct RecordProtocol_t3166895267;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.Context
struct  Context_t4285182719  : public Il2CppObject
{
public:
	// Mono.Security.Protocol.Tls.SecurityProtocolType Mono.Security.Protocol.Tls.Context::securityProtocol
	int32_t ___securityProtocol_4;
	// System.Byte[] Mono.Security.Protocol.Tls.Context::sessionId
	ByteU5BU5D_t3397334013* ___sessionId_5;
	// Mono.Security.Protocol.Tls.SecurityCompressionType Mono.Security.Protocol.Tls.Context::compressionMethod
	int32_t ___compressionMethod_6;
	// Mono.Security.Protocol.Tls.TlsServerSettings Mono.Security.Protocol.Tls.Context::serverSettings
	TlsServerSettings_t403340211 * ___serverSettings_7;
	// Mono.Security.Protocol.Tls.TlsClientSettings Mono.Security.Protocol.Tls.Context::clientSettings
	TlsClientSettings_t2311449551 * ___clientSettings_8;
	// Mono.Security.Protocol.Tls.SecurityParameters Mono.Security.Protocol.Tls.Context::current
	SecurityParameters_t2290372928 * ___current_9;
	// Mono.Security.Protocol.Tls.SecurityParameters Mono.Security.Protocol.Tls.Context::negotiating
	SecurityParameters_t2290372928 * ___negotiating_10;
	// Mono.Security.Protocol.Tls.SecurityParameters Mono.Security.Protocol.Tls.Context::read
	SecurityParameters_t2290372928 * ___read_11;
	// Mono.Security.Protocol.Tls.SecurityParameters Mono.Security.Protocol.Tls.Context::write
	SecurityParameters_t2290372928 * ___write_12;
	// Mono.Security.Protocol.Tls.CipherSuiteCollection Mono.Security.Protocol.Tls.Context::supportedCiphers
	CipherSuiteCollection_t2431504453 * ___supportedCiphers_13;
	// Mono.Security.Protocol.Tls.Handshake.HandshakeType Mono.Security.Protocol.Tls.Context::lastHandshakeMsg
	uint8_t ___lastHandshakeMsg_14;
	// Mono.Security.Protocol.Tls.HandshakeState Mono.Security.Protocol.Tls.Context::handshakeState
	int32_t ___handshakeState_15;
	// System.Boolean Mono.Security.Protocol.Tls.Context::abbreviatedHandshake
	bool ___abbreviatedHandshake_16;
	// System.Boolean Mono.Security.Protocol.Tls.Context::receivedConnectionEnd
	bool ___receivedConnectionEnd_17;
	// System.Boolean Mono.Security.Protocol.Tls.Context::sentConnectionEnd
	bool ___sentConnectionEnd_18;
	// System.Boolean Mono.Security.Protocol.Tls.Context::protocolNegotiated
	bool ___protocolNegotiated_19;
	// System.UInt64 Mono.Security.Protocol.Tls.Context::writeSequenceNumber
	uint64_t ___writeSequenceNumber_20;
	// System.UInt64 Mono.Security.Protocol.Tls.Context::readSequenceNumber
	uint64_t ___readSequenceNumber_21;
	// System.Byte[] Mono.Security.Protocol.Tls.Context::clientRandom
	ByteU5BU5D_t3397334013* ___clientRandom_22;
	// System.Byte[] Mono.Security.Protocol.Tls.Context::serverRandom
	ByteU5BU5D_t3397334013* ___serverRandom_23;
	// System.Byte[] Mono.Security.Protocol.Tls.Context::randomCS
	ByteU5BU5D_t3397334013* ___randomCS_24;
	// System.Byte[] Mono.Security.Protocol.Tls.Context::randomSC
	ByteU5BU5D_t3397334013* ___randomSC_25;
	// System.Byte[] Mono.Security.Protocol.Tls.Context::masterSecret
	ByteU5BU5D_t3397334013* ___masterSecret_26;
	// System.Byte[] Mono.Security.Protocol.Tls.Context::clientWriteKey
	ByteU5BU5D_t3397334013* ___clientWriteKey_27;
	// System.Byte[] Mono.Security.Protocol.Tls.Context::serverWriteKey
	ByteU5BU5D_t3397334013* ___serverWriteKey_28;
	// System.Byte[] Mono.Security.Protocol.Tls.Context::clientWriteIV
	ByteU5BU5D_t3397334013* ___clientWriteIV_29;
	// System.Byte[] Mono.Security.Protocol.Tls.Context::serverWriteIV
	ByteU5BU5D_t3397334013* ___serverWriteIV_30;
	// Mono.Security.Protocol.Tls.TlsStream Mono.Security.Protocol.Tls.Context::handshakeMessages
	TlsStream_t4089752859 * ___handshakeMessages_31;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Protocol.Tls.Context::random
	RandomNumberGenerator_t2510243513 * ___random_32;
	// Mono.Security.Protocol.Tls.RecordProtocol Mono.Security.Protocol.Tls.Context::recordProtocol
	RecordProtocol_t3166895267 * ___recordProtocol_33;

public:
	inline static int32_t get_offset_of_securityProtocol_4() { return static_cast<int32_t>(offsetof(Context_t4285182719, ___securityProtocol_4)); }
	inline int32_t get_securityProtocol_4() const { return ___securityProtocol_4; }
	inline int32_t* get_address_of_securityProtocol_4() { return &___securityProtocol_4; }
	inline void set_securityProtocol_4(int32_t value)
	{
		___securityProtocol_4 = value;
	}

	inline static int32_t get_offset_of_sessionId_5() { return static_cast<int32_t>(offsetof(Context_t4285182719, ___sessionId_5)); }
	inline ByteU5BU5D_t3397334013* get_sessionId_5() const { return ___sessionId_5; }
	inline ByteU5BU5D_t3397334013** get_address_of_sessionId_5() { return &___sessionId_5; }
	inline void set_sessionId_5(ByteU5BU5D_t3397334013* value)
	{
		___sessionId_5 = value;
		Il2CppCodeGenWriteBarrier(&___sessionId_5, value);
	}

	inline static int32_t get_offset_of_compressionMethod_6() { return static_cast<int32_t>(offsetof(Context_t4285182719, ___compressionMethod_6)); }
	inline int32_t get_compressionMethod_6() const { return ___compressionMethod_6; }
	inline int32_t* get_address_of_compressionMethod_6() { return &___compressionMethod_6; }
	inline void set_compressionMethod_6(int32_t value)
	{
		___compressionMethod_6 = value;
	}

	inline static int32_t get_offset_of_serverSettings_7() { return static_cast<int32_t>(offsetof(Context_t4285182719, ___serverSettings_7)); }
	inline TlsServerSettings_t403340211 * get_serverSettings_7() const { return ___serverSettings_7; }
	inline TlsServerSettings_t403340211 ** get_address_of_serverSettings_7() { return &___serverSettings_7; }
	inline void set_serverSettings_7(TlsServerSettings_t403340211 * value)
	{
		___serverSettings_7 = value;
		Il2CppCodeGenWriteBarrier(&___serverSettings_7, value);
	}

	inline static int32_t get_offset_of_clientSettings_8() { return static_cast<int32_t>(offsetof(Context_t4285182719, ___clientSettings_8)); }
	inline TlsClientSettings_t2311449551 * get_clientSettings_8() const { return ___clientSettings_8; }
	inline TlsClientSettings_t2311449551 ** get_address_of_clientSettings_8() { return &___clientSettings_8; }
	inline void set_clientSettings_8(TlsClientSettings_t2311449551 * value)
	{
		___clientSettings_8 = value;
		Il2CppCodeGenWriteBarrier(&___clientSettings_8, value);
	}

	inline static int32_t get_offset_of_current_9() { return static_cast<int32_t>(offsetof(Context_t4285182719, ___current_9)); }
	inline SecurityParameters_t2290372928 * get_current_9() const { return ___current_9; }
	inline SecurityParameters_t2290372928 ** get_address_of_current_9() { return &___current_9; }
	inline void set_current_9(SecurityParameters_t2290372928 * value)
	{
		___current_9 = value;
		Il2CppCodeGenWriteBarrier(&___current_9, value);
	}

	inline static int32_t get_offset_of_negotiating_10() { return static_cast<int32_t>(offsetof(Context_t4285182719, ___negotiating_10)); }
	inline SecurityParameters_t2290372928 * get_negotiating_10() const { return ___negotiating_10; }
	inline SecurityParameters_t2290372928 ** get_address_of_negotiating_10() { return &___negotiating_10; }
	inline void set_negotiating_10(SecurityParameters_t2290372928 * value)
	{
		___negotiating_10 = value;
		Il2CppCodeGenWriteBarrier(&___negotiating_10, value);
	}

	inline static int32_t get_offset_of_read_11() { return static_cast<int32_t>(offsetof(Context_t4285182719, ___read_11)); }
	inline SecurityParameters_t2290372928 * get_read_11() const { return ___read_11; }
	inline SecurityParameters_t2290372928 ** get_address_of_read_11() { return &___read_11; }
	inline void set_read_11(SecurityParameters_t2290372928 * value)
	{
		___read_11 = value;
		Il2CppCodeGenWriteBarrier(&___read_11, value);
	}

	inline static int32_t get_offset_of_write_12() { return static_cast<int32_t>(offsetof(Context_t4285182719, ___write_12)); }
	inline SecurityParameters_t2290372928 * get_write_12() const { return ___write_12; }
	inline SecurityParameters_t2290372928 ** get_address_of_write_12() { return &___write_12; }
	inline void set_write_12(SecurityParameters_t2290372928 * value)
	{
		___write_12 = value;
		Il2CppCodeGenWriteBarrier(&___write_12, value);
	}

	inline static int32_t get_offset_of_supportedCiphers_13() { return static_cast<int32_t>(offsetof(Context_t4285182719, ___supportedCiphers_13)); }
	inline CipherSuiteCollection_t2431504453 * get_supportedCiphers_13() const { return ___supportedCiphers_13; }
	inline CipherSuiteCollection_t2431504453 ** get_address_of_supportedCiphers_13() { return &___supportedCiphers_13; }
	inline void set_supportedCiphers_13(CipherSuiteCollection_t2431504453 * value)
	{
		___supportedCiphers_13 = value;
		Il2CppCodeGenWriteBarrier(&___supportedCiphers_13, value);
	}

	inline static int32_t get_offset_of_lastHandshakeMsg_14() { return static_cast<int32_t>(offsetof(Context_t4285182719, ___lastHandshakeMsg_14)); }
	inline uint8_t get_lastHandshakeMsg_14() const { return ___lastHandshakeMsg_14; }
	inline uint8_t* get_address_of_lastHandshakeMsg_14() { return &___lastHandshakeMsg_14; }
	inline void set_lastHandshakeMsg_14(uint8_t value)
	{
		___lastHandshakeMsg_14 = value;
	}

	inline static int32_t get_offset_of_handshakeState_15() { return static_cast<int32_t>(offsetof(Context_t4285182719, ___handshakeState_15)); }
	inline int32_t get_handshakeState_15() const { return ___handshakeState_15; }
	inline int32_t* get_address_of_handshakeState_15() { return &___handshakeState_15; }
	inline void set_handshakeState_15(int32_t value)
	{
		___handshakeState_15 = value;
	}

	inline static int32_t get_offset_of_abbreviatedHandshake_16() { return static_cast<int32_t>(offsetof(Context_t4285182719, ___abbreviatedHandshake_16)); }
	inline bool get_abbreviatedHandshake_16() const { return ___abbreviatedHandshake_16; }
	inline bool* get_address_of_abbreviatedHandshake_16() { return &___abbreviatedHandshake_16; }
	inline void set_abbreviatedHandshake_16(bool value)
	{
		___abbreviatedHandshake_16 = value;
	}

	inline static int32_t get_offset_of_receivedConnectionEnd_17() { return static_cast<int32_t>(offsetof(Context_t4285182719, ___receivedConnectionEnd_17)); }
	inline bool get_receivedConnectionEnd_17() const { return ___receivedConnectionEnd_17; }
	inline bool* get_address_of_receivedConnectionEnd_17() { return &___receivedConnectionEnd_17; }
	inline void set_receivedConnectionEnd_17(bool value)
	{
		___receivedConnectionEnd_17 = value;
	}

	inline static int32_t get_offset_of_sentConnectionEnd_18() { return static_cast<int32_t>(offsetof(Context_t4285182719, ___sentConnectionEnd_18)); }
	inline bool get_sentConnectionEnd_18() const { return ___sentConnectionEnd_18; }
	inline bool* get_address_of_sentConnectionEnd_18() { return &___sentConnectionEnd_18; }
	inline void set_sentConnectionEnd_18(bool value)
	{
		___sentConnectionEnd_18 = value;
	}

	inline static int32_t get_offset_of_protocolNegotiated_19() { return static_cast<int32_t>(offsetof(Context_t4285182719, ___protocolNegotiated_19)); }
	inline bool get_protocolNegotiated_19() const { return ___protocolNegotiated_19; }
	inline bool* get_address_of_protocolNegotiated_19() { return &___protocolNegotiated_19; }
	inline void set_protocolNegotiated_19(bool value)
	{
		___protocolNegotiated_19 = value;
	}

	inline static int32_t get_offset_of_writeSequenceNumber_20() { return static_cast<int32_t>(offsetof(Context_t4285182719, ___writeSequenceNumber_20)); }
	inline uint64_t get_writeSequenceNumber_20() const { return ___writeSequenceNumber_20; }
	inline uint64_t* get_address_of_writeSequenceNumber_20() { return &___writeSequenceNumber_20; }
	inline void set_writeSequenceNumber_20(uint64_t value)
	{
		___writeSequenceNumber_20 = value;
	}

	inline static int32_t get_offset_of_readSequenceNumber_21() { return static_cast<int32_t>(offsetof(Context_t4285182719, ___readSequenceNumber_21)); }
	inline uint64_t get_readSequenceNumber_21() const { return ___readSequenceNumber_21; }
	inline uint64_t* get_address_of_readSequenceNumber_21() { return &___readSequenceNumber_21; }
	inline void set_readSequenceNumber_21(uint64_t value)
	{
		___readSequenceNumber_21 = value;
	}

	inline static int32_t get_offset_of_clientRandom_22() { return static_cast<int32_t>(offsetof(Context_t4285182719, ___clientRandom_22)); }
	inline ByteU5BU5D_t3397334013* get_clientRandom_22() const { return ___clientRandom_22; }
	inline ByteU5BU5D_t3397334013** get_address_of_clientRandom_22() { return &___clientRandom_22; }
	inline void set_clientRandom_22(ByteU5BU5D_t3397334013* value)
	{
		___clientRandom_22 = value;
		Il2CppCodeGenWriteBarrier(&___clientRandom_22, value);
	}

	inline static int32_t get_offset_of_serverRandom_23() { return static_cast<int32_t>(offsetof(Context_t4285182719, ___serverRandom_23)); }
	inline ByteU5BU5D_t3397334013* get_serverRandom_23() const { return ___serverRandom_23; }
	inline ByteU5BU5D_t3397334013** get_address_of_serverRandom_23() { return &___serverRandom_23; }
	inline void set_serverRandom_23(ByteU5BU5D_t3397334013* value)
	{
		___serverRandom_23 = value;
		Il2CppCodeGenWriteBarrier(&___serverRandom_23, value);
	}

	inline static int32_t get_offset_of_randomCS_24() { return static_cast<int32_t>(offsetof(Context_t4285182719, ___randomCS_24)); }
	inline ByteU5BU5D_t3397334013* get_randomCS_24() const { return ___randomCS_24; }
	inline ByteU5BU5D_t3397334013** get_address_of_randomCS_24() { return &___randomCS_24; }
	inline void set_randomCS_24(ByteU5BU5D_t3397334013* value)
	{
		___randomCS_24 = value;
		Il2CppCodeGenWriteBarrier(&___randomCS_24, value);
	}

	inline static int32_t get_offset_of_randomSC_25() { return static_cast<int32_t>(offsetof(Context_t4285182719, ___randomSC_25)); }
	inline ByteU5BU5D_t3397334013* get_randomSC_25() const { return ___randomSC_25; }
	inline ByteU5BU5D_t3397334013** get_address_of_randomSC_25() { return &___randomSC_25; }
	inline void set_randomSC_25(ByteU5BU5D_t3397334013* value)
	{
		___randomSC_25 = value;
		Il2CppCodeGenWriteBarrier(&___randomSC_25, value);
	}

	inline static int32_t get_offset_of_masterSecret_26() { return static_cast<int32_t>(offsetof(Context_t4285182719, ___masterSecret_26)); }
	inline ByteU5BU5D_t3397334013* get_masterSecret_26() const { return ___masterSecret_26; }
	inline ByteU5BU5D_t3397334013** get_address_of_masterSecret_26() { return &___masterSecret_26; }
	inline void set_masterSecret_26(ByteU5BU5D_t3397334013* value)
	{
		___masterSecret_26 = value;
		Il2CppCodeGenWriteBarrier(&___masterSecret_26, value);
	}

	inline static int32_t get_offset_of_clientWriteKey_27() { return static_cast<int32_t>(offsetof(Context_t4285182719, ___clientWriteKey_27)); }
	inline ByteU5BU5D_t3397334013* get_clientWriteKey_27() const { return ___clientWriteKey_27; }
	inline ByteU5BU5D_t3397334013** get_address_of_clientWriteKey_27() { return &___clientWriteKey_27; }
	inline void set_clientWriteKey_27(ByteU5BU5D_t3397334013* value)
	{
		___clientWriteKey_27 = value;
		Il2CppCodeGenWriteBarrier(&___clientWriteKey_27, value);
	}

	inline static int32_t get_offset_of_serverWriteKey_28() { return static_cast<int32_t>(offsetof(Context_t4285182719, ___serverWriteKey_28)); }
	inline ByteU5BU5D_t3397334013* get_serverWriteKey_28() const { return ___serverWriteKey_28; }
	inline ByteU5BU5D_t3397334013** get_address_of_serverWriteKey_28() { return &___serverWriteKey_28; }
	inline void set_serverWriteKey_28(ByteU5BU5D_t3397334013* value)
	{
		___serverWriteKey_28 = value;
		Il2CppCodeGenWriteBarrier(&___serverWriteKey_28, value);
	}

	inline static int32_t get_offset_of_clientWriteIV_29() { return static_cast<int32_t>(offsetof(Context_t4285182719, ___clientWriteIV_29)); }
	inline ByteU5BU5D_t3397334013* get_clientWriteIV_29() const { return ___clientWriteIV_29; }
	inline ByteU5BU5D_t3397334013** get_address_of_clientWriteIV_29() { return &___clientWriteIV_29; }
	inline void set_clientWriteIV_29(ByteU5BU5D_t3397334013* value)
	{
		___clientWriteIV_29 = value;
		Il2CppCodeGenWriteBarrier(&___clientWriteIV_29, value);
	}

	inline static int32_t get_offset_of_serverWriteIV_30() { return static_cast<int32_t>(offsetof(Context_t4285182719, ___serverWriteIV_30)); }
	inline ByteU5BU5D_t3397334013* get_serverWriteIV_30() const { return ___serverWriteIV_30; }
	inline ByteU5BU5D_t3397334013** get_address_of_serverWriteIV_30() { return &___serverWriteIV_30; }
	inline void set_serverWriteIV_30(ByteU5BU5D_t3397334013* value)
	{
		___serverWriteIV_30 = value;
		Il2CppCodeGenWriteBarrier(&___serverWriteIV_30, value);
	}

	inline static int32_t get_offset_of_handshakeMessages_31() { return static_cast<int32_t>(offsetof(Context_t4285182719, ___handshakeMessages_31)); }
	inline TlsStream_t4089752859 * get_handshakeMessages_31() const { return ___handshakeMessages_31; }
	inline TlsStream_t4089752859 ** get_address_of_handshakeMessages_31() { return &___handshakeMessages_31; }
	inline void set_handshakeMessages_31(TlsStream_t4089752859 * value)
	{
		___handshakeMessages_31 = value;
		Il2CppCodeGenWriteBarrier(&___handshakeMessages_31, value);
	}

	inline static int32_t get_offset_of_random_32() { return static_cast<int32_t>(offsetof(Context_t4285182719, ___random_32)); }
	inline RandomNumberGenerator_t2510243513 * get_random_32() const { return ___random_32; }
	inline RandomNumberGenerator_t2510243513 ** get_address_of_random_32() { return &___random_32; }
	inline void set_random_32(RandomNumberGenerator_t2510243513 * value)
	{
		___random_32 = value;
		Il2CppCodeGenWriteBarrier(&___random_32, value);
	}

	inline static int32_t get_offset_of_recordProtocol_33() { return static_cast<int32_t>(offsetof(Context_t4285182719, ___recordProtocol_33)); }
	inline RecordProtocol_t3166895267 * get_recordProtocol_33() const { return ___recordProtocol_33; }
	inline RecordProtocol_t3166895267 ** get_address_of_recordProtocol_33() { return &___recordProtocol_33; }
	inline void set_recordProtocol_33(RecordProtocol_t3166895267 * value)
	{
		___recordProtocol_33 = value;
		Il2CppCodeGenWriteBarrier(&___recordProtocol_33, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
