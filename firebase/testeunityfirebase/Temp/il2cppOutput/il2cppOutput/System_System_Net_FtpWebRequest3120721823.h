#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_System_Net_WebRequest1365124353.h"
#include "System_System_Net_FtpWebRequest_RequestState4256633122.h"

// System.String
struct String_t;
// System.Uri
struct Uri_t19570940;
// System.Net.ServicePoint
struct ServicePoint_t2765344313;
// System.IO.Stream
struct Stream_t3255436806;
// System.IO.StreamReader
struct StreamReader_t2360341767;
// System.Net.NetworkCredential
struct NetworkCredential_t1714133953;
// System.Net.IPHostEntry
struct IPHostEntry_t994738509;
// System.Net.IPEndPoint
struct IPEndPoint_t2615413766;
// System.Net.IWebProxy
struct IWebProxy_t3916853445;
// System.Object
struct Il2CppObject;
// System.Net.FtpAsyncResult
struct FtpAsyncResult_t770082413;
// System.Net.FtpWebResponse
struct FtpWebResponse_t2609078769;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t2756269959;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3986656710;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.FtpWebRequest
struct  FtpWebRequest_t3120721823  : public WebRequest_t1365124353
{
public:
	// System.Uri System.Net.FtpWebRequest::requestUri
	Uri_t19570940 * ___requestUri_19;
	// System.String System.Net.FtpWebRequest::file_name
	String_t* ___file_name_20;
	// System.Net.ServicePoint System.Net.FtpWebRequest::servicePoint
	ServicePoint_t2765344313 * ___servicePoint_21;
	// System.IO.Stream System.Net.FtpWebRequest::origDataStream
	Stream_t3255436806 * ___origDataStream_22;
	// System.IO.Stream System.Net.FtpWebRequest::dataStream
	Stream_t3255436806 * ___dataStream_23;
	// System.IO.Stream System.Net.FtpWebRequest::controlStream
	Stream_t3255436806 * ___controlStream_24;
	// System.IO.StreamReader System.Net.FtpWebRequest::controlReader
	StreamReader_t2360341767 * ___controlReader_25;
	// System.Net.NetworkCredential System.Net.FtpWebRequest::credentials
	NetworkCredential_t1714133953 * ___credentials_26;
	// System.Net.IPHostEntry System.Net.FtpWebRequest::hostEntry
	IPHostEntry_t994738509 * ___hostEntry_27;
	// System.Net.IPEndPoint System.Net.FtpWebRequest::localEndPoint
	IPEndPoint_t2615413766 * ___localEndPoint_28;
	// System.Net.IWebProxy System.Net.FtpWebRequest::proxy
	Il2CppObject * ___proxy_29;
	// System.Int32 System.Net.FtpWebRequest::timeout
	int32_t ___timeout_30;
	// System.Int32 System.Net.FtpWebRequest::rwTimeout
	int32_t ___rwTimeout_31;
	// System.Int64 System.Net.FtpWebRequest::offset
	int64_t ___offset_32;
	// System.Boolean System.Net.FtpWebRequest::binary
	bool ___binary_33;
	// System.Boolean System.Net.FtpWebRequest::enableSsl
	bool ___enableSsl_34;
	// System.Boolean System.Net.FtpWebRequest::usePassive
	bool ___usePassive_35;
	// System.Boolean System.Net.FtpWebRequest::keepAlive
	bool ___keepAlive_36;
	// System.String System.Net.FtpWebRequest::method
	String_t* ___method_37;
	// System.String System.Net.FtpWebRequest::renameTo
	String_t* ___renameTo_38;
	// System.Object System.Net.FtpWebRequest::locker
	Il2CppObject * ___locker_39;
	// System.Net.FtpWebRequest/RequestState System.Net.FtpWebRequest::requestState
	int32_t ___requestState_40;
	// System.Net.FtpAsyncResult System.Net.FtpWebRequest::asyncResult
	FtpAsyncResult_t770082413 * ___asyncResult_41;
	// System.Net.FtpWebResponse System.Net.FtpWebRequest::ftpResponse
	FtpWebResponse_t2609078769 * ___ftpResponse_42;
	// System.IO.Stream System.Net.FtpWebRequest::requestStream
	Stream_t3255436806 * ___requestStream_43;
	// System.String System.Net.FtpWebRequest::initial_path
	String_t* ___initial_path_44;
	// System.Net.Security.RemoteCertificateValidationCallback System.Net.FtpWebRequest::callback
	RemoteCertificateValidationCallback_t2756269959 * ___callback_46;

public:
	inline static int32_t get_offset_of_requestUri_19() { return static_cast<int32_t>(offsetof(FtpWebRequest_t3120721823, ___requestUri_19)); }
	inline Uri_t19570940 * get_requestUri_19() const { return ___requestUri_19; }
	inline Uri_t19570940 ** get_address_of_requestUri_19() { return &___requestUri_19; }
	inline void set_requestUri_19(Uri_t19570940 * value)
	{
		___requestUri_19 = value;
		Il2CppCodeGenWriteBarrier(&___requestUri_19, value);
	}

	inline static int32_t get_offset_of_file_name_20() { return static_cast<int32_t>(offsetof(FtpWebRequest_t3120721823, ___file_name_20)); }
	inline String_t* get_file_name_20() const { return ___file_name_20; }
	inline String_t** get_address_of_file_name_20() { return &___file_name_20; }
	inline void set_file_name_20(String_t* value)
	{
		___file_name_20 = value;
		Il2CppCodeGenWriteBarrier(&___file_name_20, value);
	}

	inline static int32_t get_offset_of_servicePoint_21() { return static_cast<int32_t>(offsetof(FtpWebRequest_t3120721823, ___servicePoint_21)); }
	inline ServicePoint_t2765344313 * get_servicePoint_21() const { return ___servicePoint_21; }
	inline ServicePoint_t2765344313 ** get_address_of_servicePoint_21() { return &___servicePoint_21; }
	inline void set_servicePoint_21(ServicePoint_t2765344313 * value)
	{
		___servicePoint_21 = value;
		Il2CppCodeGenWriteBarrier(&___servicePoint_21, value);
	}

	inline static int32_t get_offset_of_origDataStream_22() { return static_cast<int32_t>(offsetof(FtpWebRequest_t3120721823, ___origDataStream_22)); }
	inline Stream_t3255436806 * get_origDataStream_22() const { return ___origDataStream_22; }
	inline Stream_t3255436806 ** get_address_of_origDataStream_22() { return &___origDataStream_22; }
	inline void set_origDataStream_22(Stream_t3255436806 * value)
	{
		___origDataStream_22 = value;
		Il2CppCodeGenWriteBarrier(&___origDataStream_22, value);
	}

	inline static int32_t get_offset_of_dataStream_23() { return static_cast<int32_t>(offsetof(FtpWebRequest_t3120721823, ___dataStream_23)); }
	inline Stream_t3255436806 * get_dataStream_23() const { return ___dataStream_23; }
	inline Stream_t3255436806 ** get_address_of_dataStream_23() { return &___dataStream_23; }
	inline void set_dataStream_23(Stream_t3255436806 * value)
	{
		___dataStream_23 = value;
		Il2CppCodeGenWriteBarrier(&___dataStream_23, value);
	}

	inline static int32_t get_offset_of_controlStream_24() { return static_cast<int32_t>(offsetof(FtpWebRequest_t3120721823, ___controlStream_24)); }
	inline Stream_t3255436806 * get_controlStream_24() const { return ___controlStream_24; }
	inline Stream_t3255436806 ** get_address_of_controlStream_24() { return &___controlStream_24; }
	inline void set_controlStream_24(Stream_t3255436806 * value)
	{
		___controlStream_24 = value;
		Il2CppCodeGenWriteBarrier(&___controlStream_24, value);
	}

	inline static int32_t get_offset_of_controlReader_25() { return static_cast<int32_t>(offsetof(FtpWebRequest_t3120721823, ___controlReader_25)); }
	inline StreamReader_t2360341767 * get_controlReader_25() const { return ___controlReader_25; }
	inline StreamReader_t2360341767 ** get_address_of_controlReader_25() { return &___controlReader_25; }
	inline void set_controlReader_25(StreamReader_t2360341767 * value)
	{
		___controlReader_25 = value;
		Il2CppCodeGenWriteBarrier(&___controlReader_25, value);
	}

	inline static int32_t get_offset_of_credentials_26() { return static_cast<int32_t>(offsetof(FtpWebRequest_t3120721823, ___credentials_26)); }
	inline NetworkCredential_t1714133953 * get_credentials_26() const { return ___credentials_26; }
	inline NetworkCredential_t1714133953 ** get_address_of_credentials_26() { return &___credentials_26; }
	inline void set_credentials_26(NetworkCredential_t1714133953 * value)
	{
		___credentials_26 = value;
		Il2CppCodeGenWriteBarrier(&___credentials_26, value);
	}

	inline static int32_t get_offset_of_hostEntry_27() { return static_cast<int32_t>(offsetof(FtpWebRequest_t3120721823, ___hostEntry_27)); }
	inline IPHostEntry_t994738509 * get_hostEntry_27() const { return ___hostEntry_27; }
	inline IPHostEntry_t994738509 ** get_address_of_hostEntry_27() { return &___hostEntry_27; }
	inline void set_hostEntry_27(IPHostEntry_t994738509 * value)
	{
		___hostEntry_27 = value;
		Il2CppCodeGenWriteBarrier(&___hostEntry_27, value);
	}

	inline static int32_t get_offset_of_localEndPoint_28() { return static_cast<int32_t>(offsetof(FtpWebRequest_t3120721823, ___localEndPoint_28)); }
	inline IPEndPoint_t2615413766 * get_localEndPoint_28() const { return ___localEndPoint_28; }
	inline IPEndPoint_t2615413766 ** get_address_of_localEndPoint_28() { return &___localEndPoint_28; }
	inline void set_localEndPoint_28(IPEndPoint_t2615413766 * value)
	{
		___localEndPoint_28 = value;
		Il2CppCodeGenWriteBarrier(&___localEndPoint_28, value);
	}

	inline static int32_t get_offset_of_proxy_29() { return static_cast<int32_t>(offsetof(FtpWebRequest_t3120721823, ___proxy_29)); }
	inline Il2CppObject * get_proxy_29() const { return ___proxy_29; }
	inline Il2CppObject ** get_address_of_proxy_29() { return &___proxy_29; }
	inline void set_proxy_29(Il2CppObject * value)
	{
		___proxy_29 = value;
		Il2CppCodeGenWriteBarrier(&___proxy_29, value);
	}

	inline static int32_t get_offset_of_timeout_30() { return static_cast<int32_t>(offsetof(FtpWebRequest_t3120721823, ___timeout_30)); }
	inline int32_t get_timeout_30() const { return ___timeout_30; }
	inline int32_t* get_address_of_timeout_30() { return &___timeout_30; }
	inline void set_timeout_30(int32_t value)
	{
		___timeout_30 = value;
	}

	inline static int32_t get_offset_of_rwTimeout_31() { return static_cast<int32_t>(offsetof(FtpWebRequest_t3120721823, ___rwTimeout_31)); }
	inline int32_t get_rwTimeout_31() const { return ___rwTimeout_31; }
	inline int32_t* get_address_of_rwTimeout_31() { return &___rwTimeout_31; }
	inline void set_rwTimeout_31(int32_t value)
	{
		___rwTimeout_31 = value;
	}

	inline static int32_t get_offset_of_offset_32() { return static_cast<int32_t>(offsetof(FtpWebRequest_t3120721823, ___offset_32)); }
	inline int64_t get_offset_32() const { return ___offset_32; }
	inline int64_t* get_address_of_offset_32() { return &___offset_32; }
	inline void set_offset_32(int64_t value)
	{
		___offset_32 = value;
	}

	inline static int32_t get_offset_of_binary_33() { return static_cast<int32_t>(offsetof(FtpWebRequest_t3120721823, ___binary_33)); }
	inline bool get_binary_33() const { return ___binary_33; }
	inline bool* get_address_of_binary_33() { return &___binary_33; }
	inline void set_binary_33(bool value)
	{
		___binary_33 = value;
	}

	inline static int32_t get_offset_of_enableSsl_34() { return static_cast<int32_t>(offsetof(FtpWebRequest_t3120721823, ___enableSsl_34)); }
	inline bool get_enableSsl_34() const { return ___enableSsl_34; }
	inline bool* get_address_of_enableSsl_34() { return &___enableSsl_34; }
	inline void set_enableSsl_34(bool value)
	{
		___enableSsl_34 = value;
	}

	inline static int32_t get_offset_of_usePassive_35() { return static_cast<int32_t>(offsetof(FtpWebRequest_t3120721823, ___usePassive_35)); }
	inline bool get_usePassive_35() const { return ___usePassive_35; }
	inline bool* get_address_of_usePassive_35() { return &___usePassive_35; }
	inline void set_usePassive_35(bool value)
	{
		___usePassive_35 = value;
	}

	inline static int32_t get_offset_of_keepAlive_36() { return static_cast<int32_t>(offsetof(FtpWebRequest_t3120721823, ___keepAlive_36)); }
	inline bool get_keepAlive_36() const { return ___keepAlive_36; }
	inline bool* get_address_of_keepAlive_36() { return &___keepAlive_36; }
	inline void set_keepAlive_36(bool value)
	{
		___keepAlive_36 = value;
	}

	inline static int32_t get_offset_of_method_37() { return static_cast<int32_t>(offsetof(FtpWebRequest_t3120721823, ___method_37)); }
	inline String_t* get_method_37() const { return ___method_37; }
	inline String_t** get_address_of_method_37() { return &___method_37; }
	inline void set_method_37(String_t* value)
	{
		___method_37 = value;
		Il2CppCodeGenWriteBarrier(&___method_37, value);
	}

	inline static int32_t get_offset_of_renameTo_38() { return static_cast<int32_t>(offsetof(FtpWebRequest_t3120721823, ___renameTo_38)); }
	inline String_t* get_renameTo_38() const { return ___renameTo_38; }
	inline String_t** get_address_of_renameTo_38() { return &___renameTo_38; }
	inline void set_renameTo_38(String_t* value)
	{
		___renameTo_38 = value;
		Il2CppCodeGenWriteBarrier(&___renameTo_38, value);
	}

	inline static int32_t get_offset_of_locker_39() { return static_cast<int32_t>(offsetof(FtpWebRequest_t3120721823, ___locker_39)); }
	inline Il2CppObject * get_locker_39() const { return ___locker_39; }
	inline Il2CppObject ** get_address_of_locker_39() { return &___locker_39; }
	inline void set_locker_39(Il2CppObject * value)
	{
		___locker_39 = value;
		Il2CppCodeGenWriteBarrier(&___locker_39, value);
	}

	inline static int32_t get_offset_of_requestState_40() { return static_cast<int32_t>(offsetof(FtpWebRequest_t3120721823, ___requestState_40)); }
	inline int32_t get_requestState_40() const { return ___requestState_40; }
	inline int32_t* get_address_of_requestState_40() { return &___requestState_40; }
	inline void set_requestState_40(int32_t value)
	{
		___requestState_40 = value;
	}

	inline static int32_t get_offset_of_asyncResult_41() { return static_cast<int32_t>(offsetof(FtpWebRequest_t3120721823, ___asyncResult_41)); }
	inline FtpAsyncResult_t770082413 * get_asyncResult_41() const { return ___asyncResult_41; }
	inline FtpAsyncResult_t770082413 ** get_address_of_asyncResult_41() { return &___asyncResult_41; }
	inline void set_asyncResult_41(FtpAsyncResult_t770082413 * value)
	{
		___asyncResult_41 = value;
		Il2CppCodeGenWriteBarrier(&___asyncResult_41, value);
	}

	inline static int32_t get_offset_of_ftpResponse_42() { return static_cast<int32_t>(offsetof(FtpWebRequest_t3120721823, ___ftpResponse_42)); }
	inline FtpWebResponse_t2609078769 * get_ftpResponse_42() const { return ___ftpResponse_42; }
	inline FtpWebResponse_t2609078769 ** get_address_of_ftpResponse_42() { return &___ftpResponse_42; }
	inline void set_ftpResponse_42(FtpWebResponse_t2609078769 * value)
	{
		___ftpResponse_42 = value;
		Il2CppCodeGenWriteBarrier(&___ftpResponse_42, value);
	}

	inline static int32_t get_offset_of_requestStream_43() { return static_cast<int32_t>(offsetof(FtpWebRequest_t3120721823, ___requestStream_43)); }
	inline Stream_t3255436806 * get_requestStream_43() const { return ___requestStream_43; }
	inline Stream_t3255436806 ** get_address_of_requestStream_43() { return &___requestStream_43; }
	inline void set_requestStream_43(Stream_t3255436806 * value)
	{
		___requestStream_43 = value;
		Il2CppCodeGenWriteBarrier(&___requestStream_43, value);
	}

	inline static int32_t get_offset_of_initial_path_44() { return static_cast<int32_t>(offsetof(FtpWebRequest_t3120721823, ___initial_path_44)); }
	inline String_t* get_initial_path_44() const { return ___initial_path_44; }
	inline String_t** get_address_of_initial_path_44() { return &___initial_path_44; }
	inline void set_initial_path_44(String_t* value)
	{
		___initial_path_44 = value;
		Il2CppCodeGenWriteBarrier(&___initial_path_44, value);
	}

	inline static int32_t get_offset_of_callback_46() { return static_cast<int32_t>(offsetof(FtpWebRequest_t3120721823, ___callback_46)); }
	inline RemoteCertificateValidationCallback_t2756269959 * get_callback_46() const { return ___callback_46; }
	inline RemoteCertificateValidationCallback_t2756269959 ** get_address_of_callback_46() { return &___callback_46; }
	inline void set_callback_46(RemoteCertificateValidationCallback_t2756269959 * value)
	{
		___callback_46 = value;
		Il2CppCodeGenWriteBarrier(&___callback_46, value);
	}
};

struct FtpWebRequest_t3120721823_StaticFields
{
public:
	// System.String[] System.Net.FtpWebRequest::supportedCommands
	StringU5BU5D_t1642385972* ___supportedCommands_45;
	// System.Net.Security.RemoteCertificateValidationCallback System.Net.FtpWebRequest::<>f__am$cache1C
	RemoteCertificateValidationCallback_t2756269959 * ___U3CU3Ef__amU24cache1C_47;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Net.FtpWebRequest::<>f__switch$mapA
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24mapA_48;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Net.FtpWebRequest::<>f__switch$mapB
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24mapB_49;

public:
	inline static int32_t get_offset_of_supportedCommands_45() { return static_cast<int32_t>(offsetof(FtpWebRequest_t3120721823_StaticFields, ___supportedCommands_45)); }
	inline StringU5BU5D_t1642385972* get_supportedCommands_45() const { return ___supportedCommands_45; }
	inline StringU5BU5D_t1642385972** get_address_of_supportedCommands_45() { return &___supportedCommands_45; }
	inline void set_supportedCommands_45(StringU5BU5D_t1642385972* value)
	{
		___supportedCommands_45 = value;
		Il2CppCodeGenWriteBarrier(&___supportedCommands_45, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1C_47() { return static_cast<int32_t>(offsetof(FtpWebRequest_t3120721823_StaticFields, ___U3CU3Ef__amU24cache1C_47)); }
	inline RemoteCertificateValidationCallback_t2756269959 * get_U3CU3Ef__amU24cache1C_47() const { return ___U3CU3Ef__amU24cache1C_47; }
	inline RemoteCertificateValidationCallback_t2756269959 ** get_address_of_U3CU3Ef__amU24cache1C_47() { return &___U3CU3Ef__amU24cache1C_47; }
	inline void set_U3CU3Ef__amU24cache1C_47(RemoteCertificateValidationCallback_t2756269959 * value)
	{
		___U3CU3Ef__amU24cache1C_47 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1C_47, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapA_48() { return static_cast<int32_t>(offsetof(FtpWebRequest_t3120721823_StaticFields, ___U3CU3Ef__switchU24mapA_48)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24mapA_48() const { return ___U3CU3Ef__switchU24mapA_48; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24mapA_48() { return &___U3CU3Ef__switchU24mapA_48; }
	inline void set_U3CU3Ef__switchU24mapA_48(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24mapA_48 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24mapA_48, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapB_49() { return static_cast<int32_t>(offsetof(FtpWebRequest_t3120721823_StaticFields, ___U3CU3Ef__switchU24mapB_49)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24mapB_49() const { return ___U3CU3Ef__switchU24mapB_49; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24mapB_49() { return &___U3CU3Ef__switchU24mapB_49; }
	inline void set_U3CU3Ef__switchU24mapB_49(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24mapB_49 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24mapB_49, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
