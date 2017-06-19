#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "System_System_NetPipeStyleUriParser327015879.h"
#include "System_System_Net_ProtocolViolationException4263317570.h"
#include "System_System_Net_RequestStream550151197.h"
#include "System_System_Net_ResponseStream3958753779.h"
#include "System_System_Net_Security_AuthenticatedStream1183414097.h"
#include "System_System_Net_Security_AuthenticationLevel2424130044.h"
#include "System_System_Net_Security_NegotiateStream2237235926.h"
#include "System_System_Net_Security_ProtectionLevel1119637425.h"
#include "System_System_Net_SecurityProtocolType3099771628.h"
#include "System_System_Net_Security_SslStream1853163792.h"
#include "System_System_Net_Security_SslStream_U3CBeginAuthe1358332250.h"
#include "System_System_Net_Security_SslStream_U3CBeginAuthen979041139.h"
#include "System_System_Net_Security_SslPolicyErrors1928581431.h"
#include "System_System_Net_ServicePoint2765344313.h"
#include "System_System_Net_ServicePointManager745663000.h"
#include "System_System_Net_ServicePointManager_SPKey1552752485.h"
#include "System_System_Net_ServicePointManager_ChainValidat1155887809.h"
#include "System_System_Net_SocketAddress838303055.h"
#include "System_System_Net_SocketPermissionAttribute1992289968.h"
#include "System_System_Net_SocketPermission3996943900.h"
#include "System_System_Net_Sockets_AddressFamily303362630.h"
#include "System_System_Net_Sockets_IOControlCode1541062490.h"
#include "System_System_Net_Sockets_IPv6MulticastOption1621622330.h"
#include "System_System_Net_Sockets_IPPacketInformation2752501689.h"
#include "System_System_Net_Sockets_LingerOption1165263720.h"
#include "System_System_Net_Sockets_MulticastOption2505469155.h"
#include "System_System_Net_Sockets_NetworkStream581172200.h"
#include "System_System_Net_Sockets_ProtocolFamily3611922670.h"
#include "System_System_Net_Sockets_ProtocolType2178963134.h"
#include "System_System_Net_Sockets_SelectMode3413969319.h"
#include "System_System_Net_Sockets_SendPacketsElement622643137.h"
#include "System_System_Net_Sockets_Socket3821512045.h"
#include "System_System_Net_Sockets_Socket_SocketOperation3328960782.h"
#include "System_System_Net_Sockets_Socket_WSABUF2199312694.h"
#include "System_System_Net_Sockets_Socket_SocketAsyncResult2959281146.h"
#include "System_System_Net_Sockets_Socket_Worker1317165246.h"
#include "System_System_Net_Sockets_Socket_SendFileAsyncResul676923523.h"
#include "System_System_Net_Sockets_Socket_SocketAsyncCall3737776727.h"
#include "System_System_Net_Sockets_Socket_SendFileHandler2613075220.h"
#include "System_System_Net_Sockets_SocketPolicyClient798815458.h"
#include "System_System_Net_Sockets_SocketAsyncEventArgs2815111766.h"
#include "System_System_Net_Sockets_SocketAsyncOperation985258694.h"
#include "System_System_Net_Sockets_SocketError307542793.h"
#include "System_System_Net_Sockets_SocketException1618573604.h"
#include "System_System_Net_Sockets_SocketFlags2353657790.h"
#include "System_System_Net_Sockets_SocketInformation527079125.h"
#include "System_System_Net_Sockets_SocketInformationOptions1711369089.h"
#include "System_System_Net_Sockets_SocketOptionLevel1505247880.h"
#include "System_System_Net_Sockets_SocketOptionName1089121285.h"
#include "System_System_Net_Sockets_SocketShutdown3247039417.h"
#include "System_System_Net_Sockets_SocketType1143498533.h"
#include "System_System_Net_Sockets_TcpClient408947970.h"
#include "System_System_Net_Sockets_TcpClient_Properties4286508698.h"
#include "System_System_Net_Sockets_TcpListener1551297625.h"
#include "System_System_Net_Sockets_TransmitFileOptions994250290.h"
#include "System_System_Net_Sockets_UdpClient1278197702.h"
#include "System_System_NetTcpStyleUriParser4124623308.h"
#include "System_System_Net_TransportType754098103.h"
#include "System_System_Net_WebAsyncResult905414499.h"
#include "System_System_Net_WebClient1432723993.h"
#include "System_System_Net_ReadState657568301.h"
#include "System_System_Net_WebConnection324679648.h"
#include "System_System_Net_WebConnection_AbortHelper2895113041.h"
#include "System_System_Net_WebConnectionData3550260432.h"
#include "System_System_Net_WebConnectionGroup3242458773.h"
#include "System_System_Net_WebConnectionStream1922483508.h"
#include "System_System_Net_WebException3368933679.h"
#include "System_System_Net_WebExceptionStatus1169373531.h"
#include "System_System_Net_WebHeaderCollection3028142837.h"
#include "System_System_Net_WebPermissionAttribute1695034971.h"
#include "System_System_Net_WebPermissionInfoType435897941.h"
#include "System_System_Net_WebPermissionInfo257172749.h"
#include "System_System_Net_WebPermission865754791.h"
#include "System_System_Net_WebProxy1169192840.h"
#include "System_System_Net_WebRequest1365124353.h"
#include "System_System_Net_WebRequestMethods3409058745.h"
#include "System_System_Net_WebRequestMethods_File2182764256.h"
#include "System_System_Net_WebRequestMethods_Ftp3867893612.h"
#include "System_System_Net_WebRequestMethods_Http3513576490.h"
#include "System_System_Net_WebResponse1895226051.h"
#include "System_System_NewsStyleUriParser2039531485.h"
#include "System_System_Security_Authentication_CipherAlgori2935150196.h"
#include "System_System_Security_Authentication_ExchangeAlgo1631635966.h"
#include "System_System_Security_Authentication_HashAlgorithm241092055.h"
#include "System_System_Security_Authentication_SslProtocols894678499.h"
#include "System_System_Security_Cryptography_AsnEncodedDataC912862782.h"
#include "System_System_Security_Cryptography_AsnDecodeStatu1962003286.h"
#include "System_System_Security_Cryptography_AsnEncodedData463456204.h"
#include "System_System_Security_Cryptography_AsnEncodedDataE884119648.h"
#include "System_System_Security_Cryptography_OidCollection3790243618.h"
#include "System_System_Security_Cryptography_Oid3221867120.h"
#include "System_System_Security_Cryptography_OidEnumerator3674631724.h"
#include "System_System_Security_Cryptography_X509Certificat2370524385.h"
#include "System_Mono_Security_X509_OSX509Certificates3584809896.h"
#include "System_Mono_Security_X509_OSX509Certificates_SecTr1984565408.h"
#include "System_System_Security_Cryptography_X509Certificates_P870392.h"
#include "System_System_Security_Cryptography_X509Certificat1570828128.h"
#include "System_System_Security_Cryptography_X509Certificat2183514610.h"
#include "System_System_Security_Cryptography_X509Certificate452415348.h"
#include "System_System_Security_Cryptography_X509Certificat2005802885.h"







#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2500 = { sizeof (NetPipeStyleUriParser_t327015879), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2501 = { sizeof (ProtocolViolationException_t4263317570), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2502 = { sizeof (RequestStream_t550151197), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2502[6] = 
{
	RequestStream_t550151197::get_offset_of_buffer_2(),
	RequestStream_t550151197::get_offset_of_offset_3(),
	RequestStream_t550151197::get_offset_of_length_4(),
	RequestStream_t550151197::get_offset_of_remaining_body_5(),
	RequestStream_t550151197::get_offset_of_disposed_6(),
	RequestStream_t550151197::get_offset_of_stream_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2503 = { sizeof (ResponseStream_t3958753779), -1, sizeof(ResponseStream_t3958753779_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2503[6] = 
{
	ResponseStream_t3958753779::get_offset_of_response_2(),
	ResponseStream_t3958753779::get_offset_of_ignore_errors_3(),
	ResponseStream_t3958753779::get_offset_of_disposed_4(),
	ResponseStream_t3958753779::get_offset_of_trailer_sent_5(),
	ResponseStream_t3958753779::get_offset_of_stream_6(),
	ResponseStream_t3958753779_StaticFields::get_offset_of_crlf_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2504 = { sizeof (AuthenticatedStream_t1183414097), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2504[2] = 
{
	AuthenticatedStream_t1183414097::get_offset_of_innerStream_2(),
	AuthenticatedStream_t1183414097::get_offset_of_leaveStreamOpen_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2505 = { sizeof (AuthenticationLevel_t2424130044)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2505[4] = 
{
	AuthenticationLevel_t2424130044::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2506 = { sizeof (NegotiateStream_t2237235926), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2506[2] = 
{
	NegotiateStream_t2237235926::get_offset_of_readTimeout_4(),
	NegotiateStream_t2237235926::get_offset_of_writeTimeout_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2507 = { sizeof (ProtectionLevel_t1119637425)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2507[4] = 
{
	ProtectionLevel_t1119637425::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2508 = { sizeof (SecurityProtocolType_t3099771628)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2508[3] = 
{
	SecurityProtocolType_t3099771628::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2509 = { sizeof (SslStream_t1853163792), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2509[3] = 
{
	SslStream_t1853163792::get_offset_of_ssl_stream_4(),
	SslStream_t1853163792::get_offset_of_validation_callback_5(),
	SslStream_t1853163792::get_offset_of_selection_callback_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2510 = { sizeof (U3CBeginAuthenticateAsClientU3Ec__AnonStorey7_t1358332250), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2510[2] = 
{
	U3CBeginAuthenticateAsClientU3Ec__AnonStorey7_t1358332250::get_offset_of_clientCertificates_0(),
	U3CBeginAuthenticateAsClientU3Ec__AnonStorey7_t1358332250::get_offset_of_U3CU3Ef__this_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2511 = { sizeof (U3CBeginAuthenticateAsServerU3Ec__AnonStorey8_t979041139), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2511[2] = 
{
	U3CBeginAuthenticateAsServerU3Ec__AnonStorey8_t979041139::get_offset_of_serverCertificate_0(),
	U3CBeginAuthenticateAsServerU3Ec__AnonStorey8_t979041139::get_offset_of_U3CU3Ef__this_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2512 = { sizeof (SslPolicyErrors_t1928581431)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2512[5] = 
{
	SslPolicyErrors_t1928581431::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2513 = { sizeof (ServicePoint_t2765344313), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2513[17] = 
{
	ServicePoint_t2765344313::get_offset_of_uri_0(),
	ServicePoint_t2765344313::get_offset_of_connectionLimit_1(),
	ServicePoint_t2765344313::get_offset_of_maxIdleTime_2(),
	ServicePoint_t2765344313::get_offset_of_currentConnections_3(),
	ServicePoint_t2765344313::get_offset_of_idleSince_4(),
	ServicePoint_t2765344313::get_offset_of_protocolVersion_5(),
	ServicePoint_t2765344313::get_offset_of_certificate_6(),
	ServicePoint_t2765344313::get_offset_of_clientCertificate_7(),
	ServicePoint_t2765344313::get_offset_of_host_8(),
	ServicePoint_t2765344313::get_offset_of_usesProxy_9(),
	ServicePoint_t2765344313::get_offset_of_groups_10(),
	ServicePoint_t2765344313::get_offset_of_sendContinue_11(),
	ServicePoint_t2765344313::get_offset_of_useConnect_12(),
	ServicePoint_t2765344313::get_offset_of_locker_13(),
	ServicePoint_t2765344313::get_offset_of_hostE_14(),
	ServicePoint_t2765344313::get_offset_of_useNagle_15(),
	ServicePoint_t2765344313::get_offset_of_endPointCallback_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2514 = { sizeof (ServicePointManager_t745663000), -1, sizeof(ServicePointManager_t745663000_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2514[14] = 
{
	0,
	0,
	0,
	ServicePointManager_t745663000_StaticFields::get_offset_of_servicePoints_3(),
	ServicePointManager_t745663000_StaticFields::get_offset_of_policy_4(),
	ServicePointManager_t745663000_StaticFields::get_offset_of_defaultConnectionLimit_5(),
	ServicePointManager_t745663000_StaticFields::get_offset_of_maxServicePointIdleTime_6(),
	ServicePointManager_t745663000_StaticFields::get_offset_of_maxServicePoints_7(),
	ServicePointManager_t745663000_StaticFields::get_offset_of__checkCRL_8(),
	ServicePointManager_t745663000_StaticFields::get_offset_of__securityProtocol_9(),
	ServicePointManager_t745663000_StaticFields::get_offset_of_expectContinue_10(),
	ServicePointManager_t745663000_StaticFields::get_offset_of_useNagle_11(),
	ServicePointManager_t745663000_StaticFields::get_offset_of_server_cert_cb_12(),
	ServicePointManager_t745663000_StaticFields::get_offset_of_manager_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2515 = { sizeof (SPKey_t1552752485), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2515[2] = 
{
	SPKey_t1552752485::get_offset_of_uri_0(),
	SPKey_t1552752485::get_offset_of_use_connect_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2516 = { sizeof (ChainValidationHelper_t1155887809), -1, sizeof(ChainValidationHelper_t1155887809_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2516[4] = 
{
	ChainValidationHelper_t1155887809::get_offset_of_sender_0(),
	ChainValidationHelper_t1155887809::get_offset_of_host_1(),
	ChainValidationHelper_t1155887809_StaticFields::get_offset_of_is_macosx_2(),
	ChainValidationHelper_t1155887809_StaticFields::get_offset_of_s_flags_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2517 = { sizeof (SocketAddress_t838303055), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2517[1] = 
{
	SocketAddress_t838303055::get_offset_of_data_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2518 = { sizeof (SocketPermissionAttribute_t1992289968), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2518[4] = 
{
	SocketPermissionAttribute_t1992289968::get_offset_of_m_access_2(),
	SocketPermissionAttribute_t1992289968::get_offset_of_m_host_3(),
	SocketPermissionAttribute_t1992289968::get_offset_of_m_port_4(),
	SocketPermissionAttribute_t1992289968::get_offset_of_m_transport_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2519 = { sizeof (SocketPermission_t3996943900), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2519[4] = 
{
	0,
	SocketPermission_t3996943900::get_offset_of_m_acceptList_1(),
	SocketPermission_t3996943900::get_offset_of_m_connectList_2(),
	SocketPermission_t3996943900::get_offset_of_m_noRestriction_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2520 = { sizeof (AddressFamily_t303362630)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2520[32] = 
{
	AddressFamily_t303362630::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2521 = { sizeof (IOControlCode_t1541062490)+ sizeof (Il2CppObject), sizeof(int64_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2521[35] = 
{
	IOControlCode_t1541062490::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2522 = { sizeof (IPv6MulticastOption_t1621622330), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2522[2] = 
{
	IPv6MulticastOption_t1621622330::get_offset_of_group_0(),
	IPv6MulticastOption_t1621622330::get_offset_of_ifIndex_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2523 = { sizeof (IPPacketInformation_t2752501689)+ sizeof (Il2CppObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2523[2] = 
{
	IPPacketInformation_t2752501689::get_offset_of_address_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	IPPacketInformation_t2752501689::get_offset_of_iface_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2524 = { sizeof (LingerOption_t1165263720), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2524[2] = 
{
	LingerOption_t1165263720::get_offset_of_enabled_0(),
	LingerOption_t1165263720::get_offset_of_seconds_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2525 = { sizeof (MulticastOption_t2505469155), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2525[3] = 
{
	MulticastOption_t2505469155::get_offset_of_group_0(),
	MulticastOption_t2505469155::get_offset_of_local_1(),
	MulticastOption_t2505469155::get_offset_of_iface_index_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2526 = { sizeof (NetworkStream_t581172200), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2526[6] = 
{
	NetworkStream_t581172200::get_offset_of_access_2(),
	NetworkStream_t581172200::get_offset_of_socket_3(),
	NetworkStream_t581172200::get_offset_of_owns_socket_4(),
	NetworkStream_t581172200::get_offset_of_readable_5(),
	NetworkStream_t581172200::get_offset_of_writeable_6(),
	NetworkStream_t581172200::get_offset_of_disposed_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2527 = { sizeof (ProtocolFamily_t3611922670)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2527[32] = 
{
	ProtocolFamily_t3611922670::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2528 = { sizeof (ProtocolType_t2178963134)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2528[26] = 
{
	ProtocolType_t2178963134::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2529 = { sizeof (SelectMode_t3413969319)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2529[4] = 
{
	SelectMode_t3413969319::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2530 = { sizeof (SendPacketsElement_t622643137), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2530[5] = 
{
	SendPacketsElement_t622643137::get_offset_of_U3CBufferU3Ek__BackingField_0(),
	SendPacketsElement_t622643137::get_offset_of_U3CCountU3Ek__BackingField_1(),
	SendPacketsElement_t622643137::get_offset_of_U3CEndOfPacketU3Ek__BackingField_2(),
	SendPacketsElement_t622643137::get_offset_of_U3CFilePathU3Ek__BackingField_3(),
	SendPacketsElement_t622643137::get_offset_of_U3COffsetU3Ek__BackingField_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2531 = { sizeof (Socket_t3821512045), -1, sizeof(Socket_t3821512045_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2531[23] = 
{
	Socket_t3821512045::get_offset_of_readQ_0(),
	Socket_t3821512045::get_offset_of_writeQ_1(),
	Socket_t3821512045::get_offset_of_islistening_2(),
	Socket_t3821512045::get_offset_of_useoverlappedIO_3(),
	Socket_t3821512045::get_offset_of_MinListenPort_4(),
	Socket_t3821512045::get_offset_of_MaxListenPort_5(),
	Socket_t3821512045_StaticFields::get_offset_of_ipv4Supported_6(),
	Socket_t3821512045_StaticFields::get_offset_of_ipv6Supported_7(),
	Socket_t3821512045::get_offset_of_linger_timeout_8(),
	Socket_t3821512045::get_offset_of_socket_9(),
	Socket_t3821512045::get_offset_of_address_family_10(),
	Socket_t3821512045::get_offset_of_socket_type_11(),
	Socket_t3821512045::get_offset_of_protocol_type_12(),
	Socket_t3821512045::get_offset_of_blocking_13(),
	Socket_t3821512045::get_offset_of_blocking_thread_14(),
	Socket_t3821512045::get_offset_of_isbound_15(),
	Socket_t3821512045_StaticFields::get_offset_of_current_bind_count_16(),
	Socket_t3821512045::get_offset_of_max_bind_count_17(),
	Socket_t3821512045::get_offset_of_connected_18(),
	Socket_t3821512045::get_offset_of_closed_19(),
	Socket_t3821512045::get_offset_of_disposed_20(),
	Socket_t3821512045::get_offset_of_seed_endpoint_21(),
	Socket_t3821512045_StaticFields::get_offset_of_check_socket_policy_22(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2532 = { sizeof (SocketOperation_t3328960782)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2532[15] = 
{
	SocketOperation_t3328960782::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2533 = { sizeof (WSABUF_t2199312694)+ sizeof (Il2CppObject), sizeof(WSABUF_t2199312694 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2533[2] = 
{
	WSABUF_t2199312694::get_offset_of_len_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	WSABUF_t2199312694::get_offset_of_buf_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2534 = { sizeof (SocketAsyncResult_t2959281146), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2534[25] = 
{
	SocketAsyncResult_t2959281146::get_offset_of_Sock_0(),
	SocketAsyncResult_t2959281146::get_offset_of_handle_1(),
	SocketAsyncResult_t2959281146::get_offset_of_state_2(),
	SocketAsyncResult_t2959281146::get_offset_of_callback_3(),
	SocketAsyncResult_t2959281146::get_offset_of_waithandle_4(),
	SocketAsyncResult_t2959281146::get_offset_of_delayedException_5(),
	SocketAsyncResult_t2959281146::get_offset_of_EndPoint_6(),
	SocketAsyncResult_t2959281146::get_offset_of_Buffer_7(),
	SocketAsyncResult_t2959281146::get_offset_of_Offset_8(),
	SocketAsyncResult_t2959281146::get_offset_of_Size_9(),
	SocketAsyncResult_t2959281146::get_offset_of_SockFlags_10(),
	SocketAsyncResult_t2959281146::get_offset_of_AcceptSocket_11(),
	SocketAsyncResult_t2959281146::get_offset_of_Addresses_12(),
	SocketAsyncResult_t2959281146::get_offset_of_Port_13(),
	SocketAsyncResult_t2959281146::get_offset_of_Buffers_14(),
	SocketAsyncResult_t2959281146::get_offset_of_ReuseSocket_15(),
	SocketAsyncResult_t2959281146::get_offset_of_acc_socket_16(),
	SocketAsyncResult_t2959281146::get_offset_of_total_17(),
	SocketAsyncResult_t2959281146::get_offset_of_completed_sync_18(),
	SocketAsyncResult_t2959281146::get_offset_of_completed_19(),
	SocketAsyncResult_t2959281146::get_offset_of_blocking_20(),
	SocketAsyncResult_t2959281146::get_offset_of_error_21(),
	SocketAsyncResult_t2959281146::get_offset_of_operation_22(),
	SocketAsyncResult_t2959281146::get_offset_of_ares_23(),
	SocketAsyncResult_t2959281146::get_offset_of_EndCalled_24(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2535 = { sizeof (Worker_t1317165246), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2535[3] = 
{
	Worker_t1317165246::get_offset_of_result_0(),
	Worker_t1317165246::get_offset_of_requireSocketSecurity_1(),
	Worker_t1317165246::get_offset_of_send_so_far_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2536 = { sizeof (SendFileAsyncResult_t676923523), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2536[2] = 
{
	SendFileAsyncResult_t676923523::get_offset_of_ares_0(),
	SendFileAsyncResult_t676923523::get_offset_of_d_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2537 = { sizeof (SocketAsyncCall_t3737776727), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2538 = { sizeof (SendFileHandler_t2613075220), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2539 = { sizeof (SocketPolicyClient_t798815458), -1, sizeof(SocketPolicyClient_t798815458_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2539[2] = 
{
	0,
	SocketPolicyClient_t798815458_StaticFields::get_offset_of_session_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2540 = { sizeof (SocketAsyncEventArgs_t2815111766), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2540[18] = 
{
	SocketAsyncEventArgs_t2815111766::get_offset_of__bufferList_1(),
	SocketAsyncEventArgs_t2815111766::get_offset_of_curSocket_2(),
	SocketAsyncEventArgs_t2815111766::get_offset_of_Completed_3(),
	SocketAsyncEventArgs_t2815111766::get_offset_of_U3CAcceptSocketU3Ek__BackingField_4(),
	SocketAsyncEventArgs_t2815111766::get_offset_of_U3CBufferU3Ek__BackingField_5(),
	SocketAsyncEventArgs_t2815111766::get_offset_of_U3CBytesTransferredU3Ek__BackingField_6(),
	SocketAsyncEventArgs_t2815111766::get_offset_of_U3CCountU3Ek__BackingField_7(),
	SocketAsyncEventArgs_t2815111766::get_offset_of_U3CDisconnectReuseSocketU3Ek__BackingField_8(),
	SocketAsyncEventArgs_t2815111766::get_offset_of_U3CLastOperationU3Ek__BackingField_9(),
	SocketAsyncEventArgs_t2815111766::get_offset_of_U3COffsetU3Ek__BackingField_10(),
	SocketAsyncEventArgs_t2815111766::get_offset_of_U3CRemoteEndPointU3Ek__BackingField_11(),
	SocketAsyncEventArgs_t2815111766::get_offset_of_U3CReceiveMessageFromPacketInfoU3Ek__BackingField_12(),
	SocketAsyncEventArgs_t2815111766::get_offset_of_U3CSendPacketsElementsU3Ek__BackingField_13(),
	SocketAsyncEventArgs_t2815111766::get_offset_of_U3CSendPacketsFlagsU3Ek__BackingField_14(),
	SocketAsyncEventArgs_t2815111766::get_offset_of_U3CSendPacketsSendSizeU3Ek__BackingField_15(),
	SocketAsyncEventArgs_t2815111766::get_offset_of_U3CSocketErrorU3Ek__BackingField_16(),
	SocketAsyncEventArgs_t2815111766::get_offset_of_U3CSocketFlagsU3Ek__BackingField_17(),
	SocketAsyncEventArgs_t2815111766::get_offset_of_U3CUserTokenU3Ek__BackingField_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2541 = { sizeof (SocketAsyncOperation_t985258694)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2541[11] = 
{
	SocketAsyncOperation_t985258694::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2542 = { sizeof (SocketError_t307542793)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2542[48] = 
{
	SocketError_t307542793::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2543 = { sizeof (SocketException_t1618573604), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2544 = { sizeof (SocketFlags_t2353657790)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2544[11] = 
{
	SocketFlags_t2353657790::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2545 = { sizeof (SocketInformation_t527079125)+ sizeof (Il2CppObject), sizeof(SocketInformation_t527079125_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2545[2] = 
{
	SocketInformation_t527079125::get_offset_of_options_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	SocketInformation_t527079125::get_offset_of_protocol_info_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2546 = { sizeof (SocketInformationOptions_t1711369089)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2546[5] = 
{
	SocketInformationOptions_t1711369089::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2547 = { sizeof (SocketOptionLevel_t1505247880)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2547[6] = 
{
	SocketOptionLevel_t1505247880::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2548 = { sizeof (SocketOptionName_t1089121285)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2548[44] = 
{
	SocketOptionName_t1089121285::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2549 = { sizeof (SocketShutdown_t3247039417)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2549[4] = 
{
	SocketShutdown_t3247039417::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2550 = { sizeof (SocketType_t1143498533)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2550[7] = 
{
	SocketType_t1143498533::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2551 = { sizeof (TcpClient_t408947970), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2551[11] = 
{
	TcpClient_t408947970::get_offset_of_stream_0(),
	TcpClient_t408947970::get_offset_of_active_1(),
	TcpClient_t408947970::get_offset_of_client_2(),
	TcpClient_t408947970::get_offset_of_disposed_3(),
	TcpClient_t408947970::get_offset_of_values_4(),
	TcpClient_t408947970::get_offset_of_recv_timeout_5(),
	TcpClient_t408947970::get_offset_of_send_timeout_6(),
	TcpClient_t408947970::get_offset_of_recv_buffer_size_7(),
	TcpClient_t408947970::get_offset_of_send_buffer_size_8(),
	TcpClient_t408947970::get_offset_of_linger_state_9(),
	TcpClient_t408947970::get_offset_of_no_delay_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2552 = { sizeof (Properties_t4286508698)+ sizeof (Il2CppObject), sizeof(uint32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2552[7] = 
{
	Properties_t4286508698::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2553 = { sizeof (TcpListener_t1551297625), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2553[3] = 
{
	TcpListener_t1551297625::get_offset_of_active_0(),
	TcpListener_t1551297625::get_offset_of_server_1(),
	TcpListener_t1551297625::get_offset_of_savedEP_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2554 = { sizeof (TransmitFileOptions_t994250290)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2554[7] = 
{
	TransmitFileOptions_t994250290::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2555 = { sizeof (UdpClient_t1278197702), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2555[5] = 
{
	UdpClient_t1278197702::get_offset_of_disposed_0(),
	UdpClient_t1278197702::get_offset_of_active_1(),
	UdpClient_t1278197702::get_offset_of_socket_2(),
	UdpClient_t1278197702::get_offset_of_family_3(),
	UdpClient_t1278197702::get_offset_of_recvbuffer_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2556 = { sizeof (NetTcpStyleUriParser_t4124623308), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2557 = { sizeof (TransportType_t754098103)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2557[6] = 
{
	TransportType_t754098103::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2558 = { sizeof (WebAsyncResult_t905414499), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2558[17] = 
{
	WebAsyncResult_t905414499::get_offset_of_handle_0(),
	WebAsyncResult_t905414499::get_offset_of_synch_1(),
	WebAsyncResult_t905414499::get_offset_of_isCompleted_2(),
	WebAsyncResult_t905414499::get_offset_of_cb_3(),
	WebAsyncResult_t905414499::get_offset_of_state_4(),
	WebAsyncResult_t905414499::get_offset_of_nbytes_5(),
	WebAsyncResult_t905414499::get_offset_of_innerAsyncResult_6(),
	WebAsyncResult_t905414499::get_offset_of_callbackDone_7(),
	WebAsyncResult_t905414499::get_offset_of_exc_8(),
	WebAsyncResult_t905414499::get_offset_of_response_9(),
	WebAsyncResult_t905414499::get_offset_of_writeStream_10(),
	WebAsyncResult_t905414499::get_offset_of_buffer_11(),
	WebAsyncResult_t905414499::get_offset_of_offset_12(),
	WebAsyncResult_t905414499::get_offset_of_size_13(),
	WebAsyncResult_t905414499::get_offset_of_locker_14(),
	WebAsyncResult_t905414499::get_offset_of_EndCalled_15(),
	WebAsyncResult_t905414499::get_offset_of_AsyncWriteAll_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2559 = { sizeof (WebClient_t1432723993), -1, sizeof(WebClient_t1432723993_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2559[24] = 
{
	WebClient_t1432723993_StaticFields::get_offset_of_urlEncodedCType_4(),
	WebClient_t1432723993_StaticFields::get_offset_of_hexBytes_5(),
	WebClient_t1432723993::get_offset_of_credentials_6(),
	WebClient_t1432723993::get_offset_of_headers_7(),
	WebClient_t1432723993::get_offset_of_responseHeaders_8(),
	WebClient_t1432723993::get_offset_of_baseAddress_9(),
	WebClient_t1432723993::get_offset_of_baseString_10(),
	WebClient_t1432723993::get_offset_of_queryString_11(),
	WebClient_t1432723993::get_offset_of_is_busy_12(),
	WebClient_t1432723993::get_offset_of_async_13(),
	WebClient_t1432723993::get_offset_of_async_thread_14(),
	WebClient_t1432723993::get_offset_of_encoding_15(),
	WebClient_t1432723993::get_offset_of_proxy_16(),
	WebClient_t1432723993::get_offset_of_DownloadDataCompleted_17(),
	WebClient_t1432723993::get_offset_of_DownloadFileCompleted_18(),
	WebClient_t1432723993::get_offset_of_DownloadProgressChanged_19(),
	WebClient_t1432723993::get_offset_of_DownloadStringCompleted_20(),
	WebClient_t1432723993::get_offset_of_OpenReadCompleted_21(),
	WebClient_t1432723993::get_offset_of_OpenWriteCompleted_22(),
	WebClient_t1432723993::get_offset_of_UploadDataCompleted_23(),
	WebClient_t1432723993::get_offset_of_UploadFileCompleted_24(),
	WebClient_t1432723993::get_offset_of_UploadProgressChanged_25(),
	WebClient_t1432723993::get_offset_of_UploadStringCompleted_26(),
	WebClient_t1432723993::get_offset_of_UploadValuesCompleted_27(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2560 = { sizeof (ReadState_t657568301)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2560[5] = 
{
	ReadState_t657568301::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2561 = { sizeof (WebConnection_t324679648), -1, sizeof(WebConnection_t324679648_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2561[32] = 
{
	WebConnection_t324679648::get_offset_of_sPoint_0(),
	WebConnection_t324679648::get_offset_of_nstream_1(),
	WebConnection_t324679648::get_offset_of_socket_2(),
	WebConnection_t324679648::get_offset_of_socketLock_3(),
	WebConnection_t324679648::get_offset_of_status_4(),
	WebConnection_t324679648::get_offset_of_initConn_5(),
	WebConnection_t324679648::get_offset_of_keepAlive_6(),
	WebConnection_t324679648::get_offset_of_buffer_7(),
	WebConnection_t324679648_StaticFields::get_offset_of_readDoneDelegate_8(),
	WebConnection_t324679648::get_offset_of_abortHandler_9(),
	WebConnection_t324679648::get_offset_of_abortHelper_10(),
	WebConnection_t324679648::get_offset_of_readState_11(),
	WebConnection_t324679648::get_offset_of_Data_12(),
	WebConnection_t324679648::get_offset_of_chunkedRead_13(),
	WebConnection_t324679648::get_offset_of_chunkStream_14(),
	WebConnection_t324679648::get_offset_of_queue_15(),
	WebConnection_t324679648::get_offset_of_reused_16(),
	WebConnection_t324679648::get_offset_of_position_17(),
	WebConnection_t324679648::get_offset_of_busy_18(),
	WebConnection_t324679648::get_offset_of_priority_request_19(),
	WebConnection_t324679648::get_offset_of_ntlm_credentials_20(),
	WebConnection_t324679648::get_offset_of_ntlm_authenticated_21(),
	WebConnection_t324679648::get_offset_of_unsafe_sharing_22(),
	WebConnection_t324679648::get_offset_of_ssl_23(),
	WebConnection_t324679648::get_offset_of_certsAvailable_24(),
	WebConnection_t324679648::get_offset_of_connect_exception_25(),
	WebConnection_t324679648_StaticFields::get_offset_of_classLock_26(),
	WebConnection_t324679648_StaticFields::get_offset_of_sslStream_27(),
	WebConnection_t324679648_StaticFields::get_offset_of_piClient_28(),
	WebConnection_t324679648_StaticFields::get_offset_of_piServer_29(),
	WebConnection_t324679648_StaticFields::get_offset_of_piTrustFailure_30(),
	WebConnection_t324679648_StaticFields::get_offset_of_method_GetSecurityPolicyFromNonMainThread_31(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2562 = { sizeof (AbortHelper_t2895113041), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2562[1] = 
{
	AbortHelper_t2895113041::get_offset_of_Connection_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2563 = { sizeof (WebConnectionData_t3550260432), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2563[7] = 
{
	WebConnectionData_t3550260432::get_offset_of_request_0(),
	WebConnectionData_t3550260432::get_offset_of_StatusCode_1(),
	WebConnectionData_t3550260432::get_offset_of_StatusDescription_2(),
	WebConnectionData_t3550260432::get_offset_of_Headers_3(),
	WebConnectionData_t3550260432::get_offset_of_Version_4(),
	WebConnectionData_t3550260432::get_offset_of_stream_5(),
	WebConnectionData_t3550260432::get_offset_of_Challenge_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2564 = { sizeof (WebConnectionGroup_t3242458773), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2564[5] = 
{
	WebConnectionGroup_t3242458773::get_offset_of_sPoint_0(),
	WebConnectionGroup_t3242458773::get_offset_of_name_1(),
	WebConnectionGroup_t3242458773::get_offset_of_connections_2(),
	WebConnectionGroup_t3242458773::get_offset_of_rnd_3(),
	WebConnectionGroup_t3242458773::get_offset_of_queue_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2565 = { sizeof (WebConnectionStream_t1922483508), -1, sizeof(WebConnectionStream_t1922483508_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2565[27] = 
{
	WebConnectionStream_t1922483508_StaticFields::get_offset_of_crlf_2(),
	WebConnectionStream_t1922483508::get_offset_of_isRead_3(),
	WebConnectionStream_t1922483508::get_offset_of_cnc_4(),
	WebConnectionStream_t1922483508::get_offset_of_request_5(),
	WebConnectionStream_t1922483508::get_offset_of_readBuffer_6(),
	WebConnectionStream_t1922483508::get_offset_of_readBufferOffset_7(),
	WebConnectionStream_t1922483508::get_offset_of_readBufferSize_8(),
	WebConnectionStream_t1922483508::get_offset_of_contentLength_9(),
	WebConnectionStream_t1922483508::get_offset_of_totalRead_10(),
	WebConnectionStream_t1922483508::get_offset_of_totalWritten_11(),
	WebConnectionStream_t1922483508::get_offset_of_nextReadCalled_12(),
	WebConnectionStream_t1922483508::get_offset_of_pendingReads_13(),
	WebConnectionStream_t1922483508::get_offset_of_pendingWrites_14(),
	WebConnectionStream_t1922483508::get_offset_of_pending_15(),
	WebConnectionStream_t1922483508::get_offset_of_allowBuffering_16(),
	WebConnectionStream_t1922483508::get_offset_of_sendChunked_17(),
	WebConnectionStream_t1922483508::get_offset_of_writeBuffer_18(),
	WebConnectionStream_t1922483508::get_offset_of_requestWritten_19(),
	WebConnectionStream_t1922483508::get_offset_of_headers_20(),
	WebConnectionStream_t1922483508::get_offset_of_disposed_21(),
	WebConnectionStream_t1922483508::get_offset_of_headersSent_22(),
	WebConnectionStream_t1922483508::get_offset_of_locker_23(),
	WebConnectionStream_t1922483508::get_offset_of_initRead_24(),
	WebConnectionStream_t1922483508::get_offset_of_read_eof_25(),
	WebConnectionStream_t1922483508::get_offset_of_complete_request_written_26(),
	WebConnectionStream_t1922483508::get_offset_of_read_timeout_27(),
	WebConnectionStream_t1922483508::get_offset_of_write_timeout_28(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2566 = { sizeof (WebException_t3368933679), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2566[2] = 
{
	WebException_t3368933679::get_offset_of_response_12(),
	WebException_t3368933679::get_offset_of_status_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2567 = { sizeof (WebExceptionStatus_t1169373531)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2567[22] = 
{
	WebExceptionStatus_t1169373531::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2568 = { sizeof (WebHeaderCollection_t3028142837), -1, sizeof(WebHeaderCollection_t3028142837_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2568[5] = 
{
	WebHeaderCollection_t3028142837_StaticFields::get_offset_of_restricted_12(),
	WebHeaderCollection_t3028142837_StaticFields::get_offset_of_multiValue_13(),
	WebHeaderCollection_t3028142837_StaticFields::get_offset_of_restricted_response_14(),
	WebHeaderCollection_t3028142837::get_offset_of_internallyCreated_15(),
	WebHeaderCollection_t3028142837_StaticFields::get_offset_of_allowed_chars_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2569 = { sizeof (WebPermissionAttribute_t1695034971), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2569[2] = 
{
	WebPermissionAttribute_t1695034971::get_offset_of_m_accept_2(),
	WebPermissionAttribute_t1695034971::get_offset_of_m_connect_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2570 = { sizeof (WebPermissionInfoType_t435897941)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2570[4] = 
{
	WebPermissionInfoType_t435897941::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2571 = { sizeof (WebPermissionInfo_t257172749), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2571[2] = 
{
	WebPermissionInfo_t257172749::get_offset_of__type_0(),
	WebPermissionInfo_t257172749::get_offset_of__info_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2572 = { sizeof (WebPermission_t865754791), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2572[3] = 
{
	WebPermission_t865754791::get_offset_of_m_acceptList_0(),
	WebPermission_t865754791::get_offset_of_m_connectList_1(),
	WebPermission_t865754791::get_offset_of_m_noRestriction_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2573 = { sizeof (WebProxy_t1169192840), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2573[5] = 
{
	WebProxy_t1169192840::get_offset_of_address_0(),
	WebProxy_t1169192840::get_offset_of_bypassOnLocal_1(),
	WebProxy_t1169192840::get_offset_of_bypassList_2(),
	WebProxy_t1169192840::get_offset_of_credentials_3(),
	WebProxy_t1169192840::get_offset_of_useDefaultCredentials_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2574 = { sizeof (WebRequest_t1365124353), -1, sizeof(WebRequest_t1365124353_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2574[5] = 
{
	WebRequest_t1365124353_StaticFields::get_offset_of_prefixes_1(),
	WebRequest_t1365124353_StaticFields::get_offset_of_isDefaultWebProxySet_2(),
	WebRequest_t1365124353_StaticFields::get_offset_of_defaultWebProxy_3(),
	WebRequest_t1365124353::get_offset_of_authentication_level_4(),
	WebRequest_t1365124353_StaticFields::get_offset_of_lockobj_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2575 = { sizeof (WebRequestMethods_t3409058745), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2576 = { sizeof (File_t2182764256), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2576[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2577 = { sizeof (Ftp_t3867893612), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2577[13] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2578 = { sizeof (Http_t3513576490), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2578[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2579 = { sizeof (WebResponse_t1895226051), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2580 = { sizeof (NewsStyleUriParser_t2039531485), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2581 = { sizeof (CipherAlgorithmType_t2935150196)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2581[10] = 
{
	CipherAlgorithmType_t2935150196::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2582 = { sizeof (ExchangeAlgorithmType_t1631635966)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2582[5] = 
{
	ExchangeAlgorithmType_t1631635966::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2583 = { sizeof (HashAlgorithmType_t241092055)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2583[4] = 
{
	HashAlgorithmType_t241092055::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2584 = { sizeof (SslProtocols_t894678499)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2584[6] = 
{
	SslProtocols_t894678499::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2585 = { sizeof (AsnEncodedDataCollection_t912862782), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2585[1] = 
{
	AsnEncodedDataCollection_t912862782::get_offset_of__list_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2586 = { sizeof (AsnDecodeStatus_t1962003286)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2586[7] = 
{
	AsnDecodeStatus_t1962003286::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2587 = { sizeof (AsnEncodedData_t463456204), -1, sizeof(AsnEncodedData_t463456204_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2587[3] = 
{
	AsnEncodedData_t463456204::get_offset_of__oid_0(),
	AsnEncodedData_t463456204::get_offset_of__raw_1(),
	AsnEncodedData_t463456204_StaticFields::get_offset_of_U3CU3Ef__switchU24map13_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2588 = { sizeof (AsnEncodedDataEnumerator_t884119648), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2588[2] = 
{
	AsnEncodedDataEnumerator_t884119648::get_offset_of__collection_0(),
	AsnEncodedDataEnumerator_t884119648::get_offset_of__position_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2589 = { sizeof (OidCollection_t3790243618), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2589[2] = 
{
	OidCollection_t3790243618::get_offset_of__list_0(),
	OidCollection_t3790243618::get_offset_of__readOnly_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2590 = { sizeof (Oid_t3221867120), -1, sizeof(Oid_t3221867120_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2590[24] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	Oid_t3221867120::get_offset_of__value_20(),
	Oid_t3221867120::get_offset_of__name_21(),
	Oid_t3221867120_StaticFields::get_offset_of_U3CU3Ef__switchU24map14_22(),
	Oid_t3221867120_StaticFields::get_offset_of_U3CU3Ef__switchU24map15_23(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2591 = { sizeof (OidEnumerator_t3674631724), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2591[2] = 
{
	OidEnumerator_t3674631724::get_offset_of__collection_0(),
	OidEnumerator_t3674631724::get_offset_of__position_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2592 = { sizeof (OpenFlags_t2370524385)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2592[6] = 
{
	OpenFlags_t2370524385::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2593 = { sizeof (OSX509Certificates_t3584809896), -1, sizeof(OSX509Certificates_t3584809896_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2593[1] = 
{
	OSX509Certificates_t3584809896_StaticFields::get_offset_of_sslsecpolicy_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2594 = { sizeof (SecTrustResult_t1984565408)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2594[9] = 
{
	SecTrustResult_t1984565408::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2595 = { sizeof (PublicKey_t870392), -1, sizeof(PublicKey_t870392_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2595[7] = 
{
	0,
	0,
	PublicKey_t870392::get_offset_of__key_2(),
	PublicKey_t870392::get_offset_of__keyValue_3(),
	PublicKey_t870392::get_offset_of__params_4(),
	PublicKey_t870392::get_offset_of__oid_5(),
	PublicKey_t870392_StaticFields::get_offset_of_U3CU3Ef__switchU24map16_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2596 = { sizeof (StoreLocation_t1570828128)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2596[3] = 
{
	StoreLocation_t1570828128::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2597 = { sizeof (StoreName_t2183514610)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2597[9] = 
{
	StoreName_t2183514610::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2598 = { sizeof (X500DistinguishedName_t452415348), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2598[2] = 
{
	0,
	X500DistinguishedName_t452415348::get_offset_of_name_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2599 = { sizeof (X500DistinguishedNameFlags_t2005802885)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2599[11] = 
{
	X500DistinguishedNameFlags_t2005802885::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
