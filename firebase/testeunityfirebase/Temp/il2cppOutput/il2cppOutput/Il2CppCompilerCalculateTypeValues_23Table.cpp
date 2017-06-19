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
#include "System_System_Net_DigestHeaderParser1830709828.h"
#include "System_System_Net_DigestSession3531077550.h"
#include "System_System_Net_DigestClient4126467897.h"
#include "System_System_Net_Dns1335526197.h"
#include "System_System_Net_Dns_GetHostByNameCallback55979873.h"
#include "System_System_Net_Dns_ResolveCallback3862612227.h"
#include "System_System_Net_Dns_GetHostEntryNameCallback1577659696.h"
#include "System_System_Net_Dns_GetHostEntryIPCallback1650989718.h"
#include "System_System_Net_Dns_GetHostAddressesCallback1126586509.h"
#include "System_System_Net_DnsPermissionAttribute1386032806.h"
#include "System_System_Net_DnsPermission2027408546.h"
#include "System_System_Net_EndPoint4156119363.h"
#include "System_System_Net_EndPointListener822992745.h"
#include "System_System_Net_EndPointManager2629003506.h"
#include "System_System_Net_EndpointPermission1770171204.h"
#include "System_System_Net_FileWebRequestCreator1109072211.h"
#include "System_System_Net_FileWebRequest1571840111.h"
#include "System_System_Net_FileWebRequest_FileWebStream1952319648.h"
#include "System_System_Net_FileWebRequest_GetRequestStreamC3460684746.h"
#include "System_System_Net_FileWebRequest_GetResponseCallba3725471744.h"
#include "System_System_Net_FileWebResponse1934981865.h"
#include "System_System_Net_FtpAsyncResult770082413.h"
#include "System_System_Net_FtpDataStream3588258764.h"
#include "System_System_Net_FtpDataStream_WriteDelegate888270799.h"
#include "System_System_Net_FtpDataStream_ReadDelegate1559754630.h"
#include "System_System_Net_FtpRequestCreator3711983251.h"
#include "System_System_Net_FtpStatusCode1448112771.h"
#include "System_System_Net_FtpWebRequest3120721823.h"
#include "System_System_Net_FtpWebRequest_RequestState4256633122.h"
#include "System_System_Net_FtpStatus3714482970.h"
#include "System_System_Net_FtpWebResponse2609078769.h"
#include "System_System_Net_GlobalProxySelection2251180943.h"
#include "System_System_Net_GlobalProxySelection_EmptyWebPro3297389645.h"
#include "System_System_Net_HttpConnection1376630038.h"
#include "System_System_Net_HttpConnection_InputState645345234.h"
#include "System_System_Net_HttpConnection_LineState3023263642.h"
#include "System_System_Net_HttpListenerBasicIdentity2619879658.h"
#include "System_System_Net_HttpListenerContext506453093.h"
#include "System_System_Net_HttpListener4041012462.h"
#include "System_System_Net_HttpListenerException59594121.h"
#include "System_System_Net_HttpListenerPrefixCollection3802522018.h"
#include "System_System_Net_HttpListenerRequest3367008939.h"
#include "System_System_Net_HttpListenerResponse3926738757.h"
#include "System_System_Net_HttpRequestCreator1416559589.h"
#include "System_System_Net_HttpRequestHeader833350490.h"
#include "System_System_Net_HttpResponseHeader3045996200.h"
#include "System_System_Net_HttpStatusCode1898409641.h"
#include "System_System_Net_HttpStreamAsyncResult1095258651.h"
#include "System_System_Net_HttpUtility13082.h"
#include "System_System_Net_HttpVersion1276659706.h"
#include "System_System_Net_HttpWebRequest1951404513.h"
#include "System_System_Net_HttpWebResponse2828383075.h"
#include "System_System_Net_CookieParser1405985527.h"
#include "System_System_Net_IPAddress1399971723.h"
#include "System_System_Net_IPEndPoint2615413766.h"
#include "System_System_Net_IPHostEntry994738509.h"
#include "System_System_Net_IPv6Address2596635879.h"
#include "System_System_Net_ListenerAsyncResult2594852849.h"
#include "System_System_Net_ListenerPrefix577622550.h"
#include "System_System_Net_Mail_SmtpDeliveryMethod1749648319.h"
#include "System_System_Net_MonoHttpDate3791217207.h"
#include "System_System_Net_NetConfig1609737885.h"
#include "System_System_Net_NetworkAccess774279706.h"
#include "System_System_Net_NetworkCredential1714133953.h"
#include "System_System_Net_NetworkInformation_DuplicateAddr3969562151.h"
#include "System_System_Net_NetworkInformation_GatewayIPAddr3537717171.h"
#include "System_System_Net_NetworkInformation_Win32GatewayIP710370590.h"
#include "System_System_Net_NetworkInformation_LinuxGatewayI2323845969.h"
#include "System_System_Net_NetworkInformation_GatewayIPAddre153474369.h"
#include "System_System_Net_NetworkInformation_GatewayIPAddre565141533.h"
#include "System_System_Net_NetworkInformation_IcmpV4Statist1794928690.h"
#include "System_System_Net_NetworkInformation_MibIcmpV4Stat1600715310.h"
#include "System_System_Net_NetworkInformation_Win32IcmpV4St1426867275.h"
#include "System_System_Net_NetworkInformation_Win32_MIBICMP3825151335.h"
#include "System_System_Net_NetworkInformation_Win32_MIBICMPS683952994.h"
#include "System_System_Net_NetworkInformation_IcmpV6Statistic86748584.h"
#include "System_System_Net_NetworkInformation_MibIcmpV6Stat1370511724.h"
#include "System_System_Net_NetworkInformation_IcmpV6Message1543201493.h"
#include "System_System_Net_NetworkInformation_Win32IcmpV6St1196663689.h"
#include "System_System_Net_NetworkInformation_Win32_MIB_ICM2748725486.h"
#include "System_System_Net_NetworkInformation_Win32_MIBICMP3893422550.h"
#include "System_System_Net_NetworkInformation_IPAddressColl2986660307.h"
#include "System_System_Net_NetworkInformation_Win32IPAddres2117998352.h"
#include "System_System_Net_NetworkInformation_IPAddressInfo3688726299.h"
#include "System_System_Net_NetworkInformation_IPAddressInfo1702846383.h"
#include "System_System_Net_NetworkInformation_IPAddressInfor732454853.h"
#include "System_System_Net_NetworkInformation_IPAddressInfo1429877825.h"
#include "System_System_Net_NetworkInformation_IPGlobalProper430107897.h"
#include "System_System_Net_NetworkInformation_MibIPGlobalPr4104985615.h"
#include "System_System_Net_NetworkInformation_Win32IPGlobal2393043454.h"
#include "System_System_Net_NetworkInformation_Win32IPGlobal3054921274.h"
#include "System_System_Net_NetworkInformation_Win32IPGlobal3355732075.h"







#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2300 = { sizeof (DigestHeaderParser_t1830709828), -1, sizeof(DigestHeaderParser_t1830709828_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2300[5] = 
{
	DigestHeaderParser_t1830709828::get_offset_of_header_0(),
	DigestHeaderParser_t1830709828::get_offset_of_length_1(),
	DigestHeaderParser_t1830709828::get_offset_of_pos_2(),
	DigestHeaderParser_t1830709828_StaticFields::get_offset_of_keywords_3(),
	DigestHeaderParser_t1830709828::get_offset_of_values_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2301 = { sizeof (DigestSession_t3531077550), -1, sizeof(DigestSession_t3531077550_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2301[6] = 
{
	DigestSession_t3531077550_StaticFields::get_offset_of_rng_0(),
	DigestSession_t3531077550::get_offset_of_lastUse_1(),
	DigestSession_t3531077550::get_offset_of__nc_2(),
	DigestSession_t3531077550::get_offset_of_hash_3(),
	DigestSession_t3531077550::get_offset_of_parser_4(),
	DigestSession_t3531077550::get_offset_of__cnonce_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2302 = { sizeof (DigestClient_t4126467897), -1, sizeof(DigestClient_t4126467897_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2302[1] = 
{
	DigestClient_t4126467897_StaticFields::get_offset_of_cache_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2303 = { sizeof (Dns_t1335526197), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2304 = { sizeof (GetHostByNameCallback_t55979873), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2305 = { sizeof (ResolveCallback_t3862612227), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2306 = { sizeof (GetHostEntryNameCallback_t1577659696), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2307 = { sizeof (GetHostEntryIPCallback_t1650989718), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2308 = { sizeof (GetHostAddressesCallback_t1126586509), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2309 = { sizeof (DnsPermissionAttribute_t1386032806), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2310 = { sizeof (DnsPermission_t2027408546), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2310[2] = 
{
	0,
	DnsPermission_t2027408546::get_offset_of_m_noRestriction_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2311 = { sizeof (EndPoint_t4156119363), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2312 = { sizeof (EndPointListener_t822992745), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2312[8] = 
{
	EndPointListener_t822992745::get_offset_of_endpoint_0(),
	EndPointListener_t822992745::get_offset_of_sock_1(),
	EndPointListener_t822992745::get_offset_of_prefixes_2(),
	EndPointListener_t822992745::get_offset_of_unhandled_3(),
	EndPointListener_t822992745::get_offset_of_all_4(),
	EndPointListener_t822992745::get_offset_of_cert_5(),
	EndPointListener_t822992745::get_offset_of_key_6(),
	EndPointListener_t822992745::get_offset_of_secure_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2313 = { sizeof (EndPointManager_t2629003506), -1, sizeof(EndPointManager_t2629003506_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2313[1] = 
{
	EndPointManager_t2629003506_StaticFields::get_offset_of_ip_to_endpoints_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2314 = { sizeof (EndpointPermission_t1770171204), -1, sizeof(EndpointPermission_t1770171204_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2314[7] = 
{
	EndpointPermission_t1770171204_StaticFields::get_offset_of_dot_char_0(),
	EndpointPermission_t1770171204::get_offset_of_hostname_1(),
	EndpointPermission_t1770171204::get_offset_of_port_2(),
	EndpointPermission_t1770171204::get_offset_of_transport_3(),
	EndpointPermission_t1770171204::get_offset_of_resolved_4(),
	EndpointPermission_t1770171204::get_offset_of_hasWildcard_5(),
	EndpointPermission_t1770171204::get_offset_of_addresses_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2315 = { sizeof (FileWebRequestCreator_t1109072211), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2316 = { sizeof (FileWebRequest_t1571840111), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2316[15] = 
{
	FileWebRequest_t1571840111::get_offset_of_uri_6(),
	FileWebRequest_t1571840111::get_offset_of_webHeaders_7(),
	FileWebRequest_t1571840111::get_offset_of_credentials_8(),
	FileWebRequest_t1571840111::get_offset_of_connectionGroup_9(),
	FileWebRequest_t1571840111::get_offset_of_contentLength_10(),
	FileWebRequest_t1571840111::get_offset_of_fileAccess_11(),
	FileWebRequest_t1571840111::get_offset_of_method_12(),
	FileWebRequest_t1571840111::get_offset_of_proxy_13(),
	FileWebRequest_t1571840111::get_offset_of_preAuthenticate_14(),
	FileWebRequest_t1571840111::get_offset_of_timeout_15(),
	FileWebRequest_t1571840111::get_offset_of_requestStream_16(),
	FileWebRequest_t1571840111::get_offset_of_webResponse_17(),
	FileWebRequest_t1571840111::get_offset_of_requestEndEvent_18(),
	FileWebRequest_t1571840111::get_offset_of_requesting_19(),
	FileWebRequest_t1571840111::get_offset_of_asyncResponding_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2317 = { sizeof (FileWebStream_t1952319648), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2317[1] = 
{
	FileWebStream_t1952319648::get_offset_of_webRequest_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2318 = { sizeof (GetRequestStreamCallback_t3460684746), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2319 = { sizeof (GetResponseCallback_t3725471744), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2320 = { sizeof (FileWebResponse_t1934981865), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2320[5] = 
{
	FileWebResponse_t1934981865::get_offset_of_responseUri_1(),
	FileWebResponse_t1934981865::get_offset_of_fileStream_2(),
	FileWebResponse_t1934981865::get_offset_of_contentLength_3(),
	FileWebResponse_t1934981865::get_offset_of_webHeaders_4(),
	FileWebResponse_t1934981865::get_offset_of_disposed_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2321 = { sizeof (FtpAsyncResult_t770082413), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2321[9] = 
{
	FtpAsyncResult_t770082413::get_offset_of_response_0(),
	FtpAsyncResult_t770082413::get_offset_of_waitHandle_1(),
	FtpAsyncResult_t770082413::get_offset_of_exception_2(),
	FtpAsyncResult_t770082413::get_offset_of_callback_3(),
	FtpAsyncResult_t770082413::get_offset_of_stream_4(),
	FtpAsyncResult_t770082413::get_offset_of_state_5(),
	FtpAsyncResult_t770082413::get_offset_of_completed_6(),
	FtpAsyncResult_t770082413::get_offset_of_synch_7(),
	FtpAsyncResult_t770082413::get_offset_of_locker_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2322 = { sizeof (FtpDataStream_t3588258764), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2322[5] = 
{
	FtpDataStream_t3588258764::get_offset_of_request_2(),
	FtpDataStream_t3588258764::get_offset_of_networkStream_3(),
	FtpDataStream_t3588258764::get_offset_of_disposed_4(),
	FtpDataStream_t3588258764::get_offset_of_isRead_5(),
	FtpDataStream_t3588258764::get_offset_of_totalRead_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2323 = { sizeof (WriteDelegate_t888270799), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2324 = { sizeof (ReadDelegate_t1559754630), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2325 = { sizeof (FtpRequestCreator_t3711983251), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2326 = { sizeof (FtpStatusCode_t1448112771)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2326[38] = 
{
	FtpStatusCode_t1448112771::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2327 = { sizeof (FtpWebRequest_t3120721823), -1, sizeof(FtpWebRequest_t3120721823_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2327[44] = 
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
	FtpWebRequest_t3120721823::get_offset_of_requestUri_19(),
	FtpWebRequest_t3120721823::get_offset_of_file_name_20(),
	FtpWebRequest_t3120721823::get_offset_of_servicePoint_21(),
	FtpWebRequest_t3120721823::get_offset_of_origDataStream_22(),
	FtpWebRequest_t3120721823::get_offset_of_dataStream_23(),
	FtpWebRequest_t3120721823::get_offset_of_controlStream_24(),
	FtpWebRequest_t3120721823::get_offset_of_controlReader_25(),
	FtpWebRequest_t3120721823::get_offset_of_credentials_26(),
	FtpWebRequest_t3120721823::get_offset_of_hostEntry_27(),
	FtpWebRequest_t3120721823::get_offset_of_localEndPoint_28(),
	FtpWebRequest_t3120721823::get_offset_of_proxy_29(),
	FtpWebRequest_t3120721823::get_offset_of_timeout_30(),
	FtpWebRequest_t3120721823::get_offset_of_rwTimeout_31(),
	FtpWebRequest_t3120721823::get_offset_of_offset_32(),
	FtpWebRequest_t3120721823::get_offset_of_binary_33(),
	FtpWebRequest_t3120721823::get_offset_of_enableSsl_34(),
	FtpWebRequest_t3120721823::get_offset_of_usePassive_35(),
	FtpWebRequest_t3120721823::get_offset_of_keepAlive_36(),
	FtpWebRequest_t3120721823::get_offset_of_method_37(),
	FtpWebRequest_t3120721823::get_offset_of_renameTo_38(),
	FtpWebRequest_t3120721823::get_offset_of_locker_39(),
	FtpWebRequest_t3120721823::get_offset_of_requestState_40(),
	FtpWebRequest_t3120721823::get_offset_of_asyncResult_41(),
	FtpWebRequest_t3120721823::get_offset_of_ftpResponse_42(),
	FtpWebRequest_t3120721823::get_offset_of_requestStream_43(),
	FtpWebRequest_t3120721823::get_offset_of_initial_path_44(),
	FtpWebRequest_t3120721823_StaticFields::get_offset_of_supportedCommands_45(),
	FtpWebRequest_t3120721823::get_offset_of_callback_46(),
	FtpWebRequest_t3120721823_StaticFields::get_offset_of_U3CU3Ef__amU24cache1C_47(),
	FtpWebRequest_t3120721823_StaticFields::get_offset_of_U3CU3Ef__switchU24mapA_48(),
	FtpWebRequest_t3120721823_StaticFields::get_offset_of_U3CU3Ef__switchU24mapB_49(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2328 = { sizeof (RequestState_t4256633122)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2328[10] = 
{
	RequestState_t4256633122::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2329 = { sizeof (FtpStatus_t3714482970), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2329[2] = 
{
	FtpStatus_t3714482970::get_offset_of_statusCode_0(),
	FtpStatus_t3714482970::get_offset_of_statusDescription_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2330 = { sizeof (FtpWebResponse_t2609078769), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2330[12] = 
{
	FtpWebResponse_t2609078769::get_offset_of_stream_1(),
	FtpWebResponse_t2609078769::get_offset_of_uri_2(),
	FtpWebResponse_t2609078769::get_offset_of_statusCode_3(),
	FtpWebResponse_t2609078769::get_offset_of_lastModified_4(),
	FtpWebResponse_t2609078769::get_offset_of_bannerMessage_5(),
	FtpWebResponse_t2609078769::get_offset_of_welcomeMessage_6(),
	FtpWebResponse_t2609078769::get_offset_of_exitMessage_7(),
	FtpWebResponse_t2609078769::get_offset_of_statusDescription_8(),
	FtpWebResponse_t2609078769::get_offset_of_method_9(),
	FtpWebResponse_t2609078769::get_offset_of_disposed_10(),
	FtpWebResponse_t2609078769::get_offset_of_request_11(),
	FtpWebResponse_t2609078769::get_offset_of_contentLength_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2331 = { sizeof (GlobalProxySelection_t2251180943), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2332 = { sizeof (EmptyWebProxy_t3297389645), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2332[1] = 
{
	EmptyWebProxy_t3297389645::get_offset_of_credentials_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2333 = { sizeof (HttpConnection_t1376630038), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2333[19] = 
{
	0,
	HttpConnection_t1376630038::get_offset_of_sock_1(),
	HttpConnection_t1376630038::get_offset_of_stream_2(),
	HttpConnection_t1376630038::get_offset_of_epl_3(),
	HttpConnection_t1376630038::get_offset_of_ms_4(),
	HttpConnection_t1376630038::get_offset_of_buffer_5(),
	HttpConnection_t1376630038::get_offset_of_context_6(),
	HttpConnection_t1376630038::get_offset_of_current_line_7(),
	HttpConnection_t1376630038::get_offset_of_prefix_8(),
	HttpConnection_t1376630038::get_offset_of_i_stream_9(),
	HttpConnection_t1376630038::get_offset_of_o_stream_10(),
	HttpConnection_t1376630038::get_offset_of_chunked_11(),
	HttpConnection_t1376630038::get_offset_of_chunked_uses_12(),
	HttpConnection_t1376630038::get_offset_of_context_bound_13(),
	HttpConnection_t1376630038::get_offset_of_secure_14(),
	HttpConnection_t1376630038::get_offset_of_key_15(),
	HttpConnection_t1376630038::get_offset_of_input_state_16(),
	HttpConnection_t1376630038::get_offset_of_line_state_17(),
	HttpConnection_t1376630038::get_offset_of_position_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2334 = { sizeof (InputState_t645345234)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2334[3] = 
{
	InputState_t645345234::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2335 = { sizeof (LineState_t3023263642)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2335[4] = 
{
	LineState_t3023263642::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2336 = { sizeof (HttpListenerBasicIdentity_t2619879658), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2336[1] = 
{
	HttpListenerBasicIdentity_t2619879658::get_offset_of_password_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2337 = { sizeof (HttpListenerContext_t506453093), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2337[7] = 
{
	HttpListenerContext_t506453093::get_offset_of_request_0(),
	HttpListenerContext_t506453093::get_offset_of_response_1(),
	HttpListenerContext_t506453093::get_offset_of_user_2(),
	HttpListenerContext_t506453093::get_offset_of_cnc_3(),
	HttpListenerContext_t506453093::get_offset_of_error_4(),
	HttpListenerContext_t506453093::get_offset_of_err_status_5(),
	HttpListenerContext_t506453093::get_offset_of_Listener_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2338 = { sizeof (HttpListener_t4041012462), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2338[11] = 
{
	HttpListener_t4041012462::get_offset_of_auth_schemes_0(),
	HttpListener_t4041012462::get_offset_of_prefixes_1(),
	HttpListener_t4041012462::get_offset_of_auth_selector_2(),
	HttpListener_t4041012462::get_offset_of_realm_3(),
	HttpListener_t4041012462::get_offset_of_ignore_write_exceptions_4(),
	HttpListener_t4041012462::get_offset_of_unsafe_ntlm_auth_5(),
	HttpListener_t4041012462::get_offset_of_listening_6(),
	HttpListener_t4041012462::get_offset_of_disposed_7(),
	HttpListener_t4041012462::get_offset_of_registry_8(),
	HttpListener_t4041012462::get_offset_of_ctx_queue_9(),
	HttpListener_t4041012462::get_offset_of_wait_queue_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2339 = { sizeof (HttpListenerException_t59594121), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2340 = { sizeof (HttpListenerPrefixCollection_t3802522018), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2340[2] = 
{
	HttpListenerPrefixCollection_t3802522018::get_offset_of_prefixes_0(),
	HttpListenerPrefixCollection_t3802522018::get_offset_of_listener_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2341 = { sizeof (HttpListenerRequest_t3367008939), -1, sizeof(HttpListenerRequest_t3367008939_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2341[21] = 
{
	HttpListenerRequest_t3367008939::get_offset_of_accept_types_0(),
	HttpListenerRequest_t3367008939::get_offset_of_content_encoding_1(),
	HttpListenerRequest_t3367008939::get_offset_of_content_length_2(),
	HttpListenerRequest_t3367008939::get_offset_of_cl_set_3(),
	HttpListenerRequest_t3367008939::get_offset_of_cookies_4(),
	HttpListenerRequest_t3367008939::get_offset_of_headers_5(),
	HttpListenerRequest_t3367008939::get_offset_of_method_6(),
	HttpListenerRequest_t3367008939::get_offset_of_input_stream_7(),
	HttpListenerRequest_t3367008939::get_offset_of_version_8(),
	HttpListenerRequest_t3367008939::get_offset_of_query_string_9(),
	HttpListenerRequest_t3367008939::get_offset_of_raw_url_10(),
	HttpListenerRequest_t3367008939::get_offset_of_identifier_11(),
	HttpListenerRequest_t3367008939::get_offset_of_url_12(),
	HttpListenerRequest_t3367008939::get_offset_of_referrer_13(),
	HttpListenerRequest_t3367008939::get_offset_of_user_languages_14(),
	HttpListenerRequest_t3367008939::get_offset_of_context_15(),
	HttpListenerRequest_t3367008939::get_offset_of_is_chunked_16(),
	HttpListenerRequest_t3367008939_StaticFields::get_offset_of__100continue_17(),
	HttpListenerRequest_t3367008939_StaticFields::get_offset_of_no_body_methods_18(),
	HttpListenerRequest_t3367008939_StaticFields::get_offset_of_separators_19(),
	HttpListenerRequest_t3367008939_StaticFields::get_offset_of_U3CU3Ef__switchU24mapC_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2342 = { sizeof (HttpListenerResponse_t3926738757), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2342[17] = 
{
	HttpListenerResponse_t3926738757::get_offset_of_disposed_0(),
	HttpListenerResponse_t3926738757::get_offset_of_content_encoding_1(),
	HttpListenerResponse_t3926738757::get_offset_of_content_length_2(),
	HttpListenerResponse_t3926738757::get_offset_of_cl_set_3(),
	HttpListenerResponse_t3926738757::get_offset_of_content_type_4(),
	HttpListenerResponse_t3926738757::get_offset_of_cookies_5(),
	HttpListenerResponse_t3926738757::get_offset_of_headers_6(),
	HttpListenerResponse_t3926738757::get_offset_of_keep_alive_7(),
	HttpListenerResponse_t3926738757::get_offset_of_output_stream_8(),
	HttpListenerResponse_t3926738757::get_offset_of_version_9(),
	HttpListenerResponse_t3926738757::get_offset_of_location_10(),
	HttpListenerResponse_t3926738757::get_offset_of_status_code_11(),
	HttpListenerResponse_t3926738757::get_offset_of_status_description_12(),
	HttpListenerResponse_t3926738757::get_offset_of_chunked_13(),
	HttpListenerResponse_t3926738757::get_offset_of_context_14(),
	HttpListenerResponse_t3926738757::get_offset_of_HeadersSent_15(),
	HttpListenerResponse_t3926738757::get_offset_of_force_close_chunked_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2343 = { sizeof (HttpRequestCreator_t1416559589), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2344 = { sizeof (HttpRequestHeader_t833350490)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2344[42] = 
{
	HttpRequestHeader_t833350490::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2345 = { sizeof (HttpResponseHeader_t3045996200)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2345[31] = 
{
	HttpResponseHeader_t3045996200::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2346 = { sizeof (HttpStatusCode_t1898409641)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2346[47] = 
{
	HttpStatusCode_t1898409641::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2347 = { sizeof (HttpStreamAsyncResult_t1095258651), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2347[10] = 
{
	HttpStreamAsyncResult_t1095258651::get_offset_of_locker_0(),
	HttpStreamAsyncResult_t1095258651::get_offset_of_handle_1(),
	HttpStreamAsyncResult_t1095258651::get_offset_of_completed_2(),
	HttpStreamAsyncResult_t1095258651::get_offset_of_Buffer_3(),
	HttpStreamAsyncResult_t1095258651::get_offset_of_Offset_4(),
	HttpStreamAsyncResult_t1095258651::get_offset_of_Count_5(),
	HttpStreamAsyncResult_t1095258651::get_offset_of_Callback_6(),
	HttpStreamAsyncResult_t1095258651::get_offset_of_State_7(),
	HttpStreamAsyncResult_t1095258651::get_offset_of_SynchRead_8(),
	HttpStreamAsyncResult_t1095258651::get_offset_of_Error_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2348 = { sizeof (HttpUtility_t13082), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2349 = { sizeof (HttpVersion_t1276659706), -1, sizeof(HttpVersion_t1276659706_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2349[2] = 
{
	HttpVersion_t1276659706_StaticFields::get_offset_of_Version10_0(),
	HttpVersion_t1276659706_StaticFields::get_offset_of_Version11_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2350 = { sizeof (HttpWebRequest_t1951404513), -1, sizeof(HttpWebRequest_t1951404513_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2350[52] = 
{
	HttpWebRequest_t1951404513::get_offset_of_requestUri_6(),
	HttpWebRequest_t1951404513::get_offset_of_actualUri_7(),
	HttpWebRequest_t1951404513::get_offset_of_hostChanged_8(),
	HttpWebRequest_t1951404513::get_offset_of_allowAutoRedirect_9(),
	HttpWebRequest_t1951404513::get_offset_of_allowBuffering_10(),
	HttpWebRequest_t1951404513::get_offset_of_certificates_11(),
	HttpWebRequest_t1951404513::get_offset_of_connectionGroup_12(),
	HttpWebRequest_t1951404513::get_offset_of_contentLength_13(),
	HttpWebRequest_t1951404513::get_offset_of_continueDelegate_14(),
	HttpWebRequest_t1951404513::get_offset_of_cookieContainer_15(),
	HttpWebRequest_t1951404513::get_offset_of_credentials_16(),
	HttpWebRequest_t1951404513::get_offset_of_haveResponse_17(),
	HttpWebRequest_t1951404513::get_offset_of_haveRequest_18(),
	HttpWebRequest_t1951404513::get_offset_of_requestSent_19(),
	HttpWebRequest_t1951404513::get_offset_of_webHeaders_20(),
	HttpWebRequest_t1951404513::get_offset_of_keepAlive_21(),
	HttpWebRequest_t1951404513::get_offset_of_maxAutoRedirect_22(),
	HttpWebRequest_t1951404513::get_offset_of_mediaType_23(),
	HttpWebRequest_t1951404513::get_offset_of_method_24(),
	HttpWebRequest_t1951404513::get_offset_of_initialMethod_25(),
	HttpWebRequest_t1951404513::get_offset_of_pipelined_26(),
	HttpWebRequest_t1951404513::get_offset_of_preAuthenticate_27(),
	HttpWebRequest_t1951404513::get_offset_of_usedPreAuth_28(),
	HttpWebRequest_t1951404513::get_offset_of_version_29(),
	HttpWebRequest_t1951404513::get_offset_of_actualVersion_30(),
	HttpWebRequest_t1951404513::get_offset_of_proxy_31(),
	HttpWebRequest_t1951404513::get_offset_of_sendChunked_32(),
	HttpWebRequest_t1951404513::get_offset_of_servicePoint_33(),
	HttpWebRequest_t1951404513::get_offset_of_timeout_34(),
	HttpWebRequest_t1951404513::get_offset_of_writeStream_35(),
	HttpWebRequest_t1951404513::get_offset_of_webResponse_36(),
	HttpWebRequest_t1951404513::get_offset_of_asyncWrite_37(),
	HttpWebRequest_t1951404513::get_offset_of_asyncRead_38(),
	HttpWebRequest_t1951404513::get_offset_of_abortHandler_39(),
	HttpWebRequest_t1951404513::get_offset_of_aborted_40(),
	HttpWebRequest_t1951404513::get_offset_of_gotRequestStream_41(),
	HttpWebRequest_t1951404513::get_offset_of_redirects_42(),
	HttpWebRequest_t1951404513::get_offset_of_expectContinue_43(),
	HttpWebRequest_t1951404513::get_offset_of_authCompleted_44(),
	HttpWebRequest_t1951404513::get_offset_of_bodyBuffer_45(),
	HttpWebRequest_t1951404513::get_offset_of_bodyBufferLength_46(),
	HttpWebRequest_t1951404513::get_offset_of_getResponseCalled_47(),
	HttpWebRequest_t1951404513::get_offset_of_saved_exc_48(),
	HttpWebRequest_t1951404513::get_offset_of_locker_49(),
	HttpWebRequest_t1951404513::get_offset_of_is_ntlm_auth_50(),
	HttpWebRequest_t1951404513::get_offset_of_finished_reading_51(),
	HttpWebRequest_t1951404513::get_offset_of_WebConnection_52(),
	HttpWebRequest_t1951404513::get_offset_of_auto_decomp_53(),
	HttpWebRequest_t1951404513::get_offset_of_maxResponseHeadersLength_54(),
	HttpWebRequest_t1951404513_StaticFields::get_offset_of_defaultMaxResponseHeadersLength_55(),
	HttpWebRequest_t1951404513::get_offset_of_readWriteTimeout_56(),
	HttpWebRequest_t1951404513::get_offset_of_unsafe_auth_blah_57(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2351 = { sizeof (HttpWebResponse_t2828383075), -1, sizeof(HttpWebResponse_t2828383075_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2351[14] = 
{
	HttpWebResponse_t2828383075::get_offset_of_uri_1(),
	HttpWebResponse_t2828383075::get_offset_of_webHeaders_2(),
	HttpWebResponse_t2828383075::get_offset_of_cookieCollection_3(),
	HttpWebResponse_t2828383075::get_offset_of_method_4(),
	HttpWebResponse_t2828383075::get_offset_of_version_5(),
	HttpWebResponse_t2828383075::get_offset_of_statusCode_6(),
	HttpWebResponse_t2828383075::get_offset_of_statusDescription_7(),
	HttpWebResponse_t2828383075::get_offset_of_contentLength_8(),
	HttpWebResponse_t2828383075::get_offset_of_contentType_9(),
	HttpWebResponse_t2828383075::get_offset_of_cookie_container_10(),
	HttpWebResponse_t2828383075::get_offset_of_disposed_11(),
	HttpWebResponse_t2828383075::get_offset_of_stream_12(),
	HttpWebResponse_t2828383075::get_offset_of_cookieExpiresFormats_13(),
	HttpWebResponse_t2828383075_StaticFields::get_offset_of_U3CU3Ef__switchU24mapD_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2352 = { sizeof (CookieParser_t1405985527), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2352[3] = 
{
	CookieParser_t1405985527::get_offset_of_header_0(),
	CookieParser_t1405985527::get_offset_of_pos_1(),
	CookieParser_t1405985527::get_offset_of_length_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2353 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2354 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2355 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2356 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2357 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2358 = { sizeof (IPAddress_t1399971723), -1, sizeof(IPAddress_t1399971723_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2358[12] = 
{
	IPAddress_t1399971723::get_offset_of_m_Address_0(),
	IPAddress_t1399971723::get_offset_of_m_Family_1(),
	IPAddress_t1399971723::get_offset_of_m_Numbers_2(),
	IPAddress_t1399971723::get_offset_of_m_ScopeId_3(),
	IPAddress_t1399971723_StaticFields::get_offset_of_Any_4(),
	IPAddress_t1399971723_StaticFields::get_offset_of_Broadcast_5(),
	IPAddress_t1399971723_StaticFields::get_offset_of_Loopback_6(),
	IPAddress_t1399971723_StaticFields::get_offset_of_None_7(),
	IPAddress_t1399971723_StaticFields::get_offset_of_IPv6Any_8(),
	IPAddress_t1399971723_StaticFields::get_offset_of_IPv6Loopback_9(),
	IPAddress_t1399971723_StaticFields::get_offset_of_IPv6None_10(),
	IPAddress_t1399971723::get_offset_of_m_HashCode_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2359 = { sizeof (IPEndPoint_t2615413766), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2359[4] = 
{
	0,
	0,
	IPEndPoint_t2615413766::get_offset_of_address_2(),
	IPEndPoint_t2615413766::get_offset_of_port_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2360 = { sizeof (IPHostEntry_t994738509), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2360[3] = 
{
	IPHostEntry_t994738509::get_offset_of_addressList_0(),
	IPHostEntry_t994738509::get_offset_of_aliases_1(),
	IPHostEntry_t994738509::get_offset_of_hostName_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2361 = { sizeof (IPv6Address_t2596635879), -1, sizeof(IPv6Address_t2596635879_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2361[5] = 
{
	IPv6Address_t2596635879::get_offset_of_address_0(),
	IPv6Address_t2596635879::get_offset_of_prefixLength_1(),
	IPv6Address_t2596635879::get_offset_of_scopeId_2(),
	IPv6Address_t2596635879_StaticFields::get_offset_of_Loopback_3(),
	IPv6Address_t2596635879_StaticFields::get_offset_of_Unspecified_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2362 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2363 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2364 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2365 = { sizeof (ListenerAsyncResult_t2594852849), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2365[9] = 
{
	ListenerAsyncResult_t2594852849::get_offset_of_handle_0(),
	ListenerAsyncResult_t2594852849::get_offset_of_synch_1(),
	ListenerAsyncResult_t2594852849::get_offset_of_completed_2(),
	ListenerAsyncResult_t2594852849::get_offset_of_cb_3(),
	ListenerAsyncResult_t2594852849::get_offset_of_state_4(),
	ListenerAsyncResult_t2594852849::get_offset_of_exception_5(),
	ListenerAsyncResult_t2594852849::get_offset_of_context_6(),
	ListenerAsyncResult_t2594852849::get_offset_of_locker_7(),
	ListenerAsyncResult_t2594852849::get_offset_of_forward_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2366 = { sizeof (ListenerPrefix_t577622550), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2366[7] = 
{
	ListenerPrefix_t577622550::get_offset_of_original_0(),
	ListenerPrefix_t577622550::get_offset_of_host_1(),
	ListenerPrefix_t577622550::get_offset_of_port_2(),
	ListenerPrefix_t577622550::get_offset_of_path_3(),
	ListenerPrefix_t577622550::get_offset_of_secure_4(),
	ListenerPrefix_t577622550::get_offset_of_addresses_5(),
	ListenerPrefix_t577622550::get_offset_of_Listener_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2367 = { sizeof (SmtpDeliveryMethod_t1749648319)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2367[4] = 
{
	SmtpDeliveryMethod_t1749648319::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2368 = { sizeof (MonoHttpDate_t3791217207), -1, sizeof(MonoHttpDate_t3791217207_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2368[4] = 
{
	MonoHttpDate_t3791217207_StaticFields::get_offset_of_rfc1123_date_0(),
	MonoHttpDate_t3791217207_StaticFields::get_offset_of_rfc850_date_1(),
	MonoHttpDate_t3791217207_StaticFields::get_offset_of_asctime_date_2(),
	MonoHttpDate_t3791217207_StaticFields::get_offset_of_formats_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2369 = { sizeof (NetConfig_t1609737885), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2369[2] = 
{
	NetConfig_t1609737885::get_offset_of_ipv6Enabled_0(),
	NetConfig_t1609737885::get_offset_of_MaxResponseHeadersLength_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2370 = { sizeof (NetworkAccess_t774279706)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2370[3] = 
{
	NetworkAccess_t774279706::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2371 = { sizeof (NetworkCredential_t1714133953), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2371[3] = 
{
	NetworkCredential_t1714133953::get_offset_of_userName_0(),
	NetworkCredential_t1714133953::get_offset_of_password_1(),
	NetworkCredential_t1714133953::get_offset_of_domain_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2372 = { sizeof (DuplicateAddressDetectionState_t3969562151)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2372[6] = 
{
	DuplicateAddressDetectionState_t3969562151::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2373 = { sizeof (GatewayIPAddressInformationCollection_t3537717171), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2373[1] = 
{
	GatewayIPAddressInformationCollection_t3537717171::get_offset_of_list_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2374 = { sizeof (Win32GatewayIPAddressInformationCollection_t710370590), -1, sizeof(Win32GatewayIPAddressInformationCollection_t710370590_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2374[2] = 
{
	Win32GatewayIPAddressInformationCollection_t710370590_StaticFields::get_offset_of_Empty_1(),
	Win32GatewayIPAddressInformationCollection_t710370590::get_offset_of_is_readonly_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2375 = { sizeof (LinuxGatewayIPAddressInformationCollection_t2323845969), -1, sizeof(LinuxGatewayIPAddressInformationCollection_t2323845969_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2375[2] = 
{
	LinuxGatewayIPAddressInformationCollection_t2323845969_StaticFields::get_offset_of_Empty_1(),
	LinuxGatewayIPAddressInformationCollection_t2323845969::get_offset_of_is_readonly_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2376 = { sizeof (GatewayIPAddressInformation_t153474369), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2377 = { sizeof (GatewayIPAddressInformationImpl_t565141533), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2377[1] = 
{
	GatewayIPAddressInformationImpl_t565141533::get_offset_of_address_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2378 = { sizeof (IcmpV4Statistics_t1794928690), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2379 = { sizeof (MibIcmpV4Statistics_t1600715310), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2379[1] = 
{
	MibIcmpV4Statistics_t1600715310::get_offset_of_dic_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2380 = { sizeof (Win32IcmpV4Statistics_t1426867275), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2380[2] = 
{
	Win32IcmpV4Statistics_t1426867275::get_offset_of_iin_0(),
	Win32IcmpV4Statistics_t1426867275::get_offset_of_iout_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2381 = { sizeof (Win32_MIBICMPINFO_t3825151335)+ sizeof (Il2CppObject), sizeof(Win32_MIBICMPINFO_t3825151335 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2381[2] = 
{
	Win32_MIBICMPINFO_t3825151335::get_offset_of_InStats_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Win32_MIBICMPINFO_t3825151335::get_offset_of_OutStats_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2382 = { sizeof (Win32_MIBICMPSTATS_t683952994)+ sizeof (Il2CppObject), sizeof(Win32_MIBICMPSTATS_t683952994 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2382[13] = 
{
	Win32_MIBICMPSTATS_t683952994::get_offset_of_Msgs_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Win32_MIBICMPSTATS_t683952994::get_offset_of_Errors_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Win32_MIBICMPSTATS_t683952994::get_offset_of_DestUnreachs_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Win32_MIBICMPSTATS_t683952994::get_offset_of_TimeExcds_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Win32_MIBICMPSTATS_t683952994::get_offset_of_ParmProbs_4() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Win32_MIBICMPSTATS_t683952994::get_offset_of_SrcQuenchs_5() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Win32_MIBICMPSTATS_t683952994::get_offset_of_Redirects_6() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Win32_MIBICMPSTATS_t683952994::get_offset_of_Echos_7() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Win32_MIBICMPSTATS_t683952994::get_offset_of_EchoReps_8() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Win32_MIBICMPSTATS_t683952994::get_offset_of_Timestamps_9() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Win32_MIBICMPSTATS_t683952994::get_offset_of_TimestampReps_10() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Win32_MIBICMPSTATS_t683952994::get_offset_of_AddrMasks_11() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Win32_MIBICMPSTATS_t683952994::get_offset_of_AddrMaskReps_12() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2383 = { sizeof (IcmpV6Statistics_t86748584), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2384 = { sizeof (MibIcmpV6Statistics_t1370511724), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2384[1] = 
{
	MibIcmpV6Statistics_t1370511724::get_offset_of_dic_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2385 = { sizeof (IcmpV6MessageTypes_t1543201493), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2385[15] = 
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
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2386 = { sizeof (Win32IcmpV6Statistics_t1196663689), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2386[2] = 
{
	Win32IcmpV6Statistics_t1196663689::get_offset_of_iin_0(),
	Win32IcmpV6Statistics_t1196663689::get_offset_of_iout_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2387 = { sizeof (Win32_MIB_ICMP_EX_t2748725486)+ sizeof (Il2CppObject), sizeof(Win32_MIB_ICMP_EX_t2748725486_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2387[2] = 
{
	Win32_MIB_ICMP_EX_t2748725486::get_offset_of_InStats_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Win32_MIB_ICMP_EX_t2748725486::get_offset_of_OutStats_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2388 = { sizeof (Win32_MIBICMPSTATS_EX_t3893422550)+ sizeof (Il2CppObject), sizeof(Win32_MIBICMPSTATS_EX_t3893422550_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2388[3] = 
{
	Win32_MIBICMPSTATS_EX_t3893422550::get_offset_of_Msgs_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Win32_MIBICMPSTATS_EX_t3893422550::get_offset_of_Errors_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Win32_MIBICMPSTATS_EX_t3893422550::get_offset_of_Counts_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2389 = { sizeof (IPAddressCollection_t2986660307), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2389[1] = 
{
	IPAddressCollection_t2986660307::get_offset_of_list_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2390 = { sizeof (Win32IPAddressCollection_t2117998352), -1, sizeof(Win32IPAddressCollection_t2117998352_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2390[2] = 
{
	Win32IPAddressCollection_t2117998352_StaticFields::get_offset_of_Empty_1(),
	Win32IPAddressCollection_t2117998352::get_offset_of_is_readonly_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2391 = { sizeof (IPAddressInformationCollection_t3688726299), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2391[1] = 
{
	IPAddressInformationCollection_t3688726299::get_offset_of_list_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2392 = { sizeof (IPAddressInformationImplCollection_t1702846383), -1, sizeof(IPAddressInformationImplCollection_t1702846383_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2392[2] = 
{
	IPAddressInformationImplCollection_t1702846383_StaticFields::get_offset_of_Empty_1(),
	IPAddressInformationImplCollection_t1702846383::get_offset_of_is_readonly_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2393 = { sizeof (IPAddressInformation_t732454853), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2394 = { sizeof (IPAddressInformationImpl_t1429877825), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2394[3] = 
{
	IPAddressInformationImpl_t1429877825::get_offset_of_address_0(),
	IPAddressInformationImpl_t1429877825::get_offset_of_is_dns_eligible_1(),
	IPAddressInformationImpl_t1429877825::get_offset_of_is_transient_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2395 = { sizeof (IPGlobalProperties_t430107897), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2396 = { sizeof (MibIPGlobalProperties_t4104985615), -1, sizeof(MibIPGlobalProperties_t4104985615_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2396[9] = 
{
	0,
	0,
	MibIPGlobalProperties_t4104985615::get_offset_of_StatisticsFile_2(),
	MibIPGlobalProperties_t4104985615::get_offset_of_StatisticsFileIPv6_3(),
	MibIPGlobalProperties_t4104985615::get_offset_of_TcpFile_4(),
	MibIPGlobalProperties_t4104985615::get_offset_of_Tcp6File_5(),
	MibIPGlobalProperties_t4104985615::get_offset_of_UdpFile_6(),
	MibIPGlobalProperties_t4104985615::get_offset_of_Udp6File_7(),
	MibIPGlobalProperties_t4104985615_StaticFields::get_offset_of_wsChars_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2397 = { sizeof (Win32IPGlobalProperties_t2393043454), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2397[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2398 = { sizeof (Win32_IN6_ADDR_t3054921274)+ sizeof (Il2CppObject), sizeof(Win32_IN6_ADDR_t3054921274_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2398[1] = 
{
	Win32_IN6_ADDR_t3054921274::get_offset_of_Bytes_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2399 = { sizeof (Win32_MIB_TCPROW_t3355732075), sizeof(Win32_MIB_TCPROW_t3355732075_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2399[5] = 
{
	Win32_MIB_TCPROW_t3355732075::get_offset_of_State_0(),
	Win32_MIB_TCPROW_t3355732075::get_offset_of_LocalAddr_1(),
	Win32_MIB_TCPROW_t3355732075::get_offset_of_LocalPort_2(),
	Win32_MIB_TCPROW_t3355732075::get_offset_of_RemoteAddr_3(),
	Win32_MIB_TCPROW_t3355732075::get_offset_of_RemotePort_4(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
