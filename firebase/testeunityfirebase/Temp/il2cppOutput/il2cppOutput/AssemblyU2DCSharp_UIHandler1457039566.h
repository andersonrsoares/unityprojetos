#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "Firebase_App_Firebase_DependencyStatus2752419415.h"

// Firebase.Auth.FirebaseAuth
struct FirebaseAuth_t3105883899;
// Firebase.Auth.FirebaseUser
struct FirebaseUser_t4046966602;
// UnityEngine.GUISkin
struct GUISkin_t1436893342;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIHandler
struct  UIHandler_t1457039566  : public MonoBehaviour_t1158329972
{
public:
	// Firebase.Auth.FirebaseAuth UIHandler::auth
	FirebaseAuth_t3105883899 * ___auth_2;
	// Firebase.Auth.FirebaseUser UIHandler::user
	FirebaseUser_t4046966602 * ___user_3;
	// UnityEngine.GUISkin UIHandler::fb_GUISkin
	GUISkin_t1436893342 * ___fb_GUISkin_4;
	// System.String UIHandler::logText
	String_t* ___logText_5;
	// System.String UIHandler::email
	String_t* ___email_6;
	// System.String UIHandler::password
	String_t* ___password_7;
	// System.String UIHandler::displayName
	String_t* ___displayName_8;
	// System.Boolean UIHandler::usePasswordInput
	bool ___usePasswordInput_9;
	// UnityEngine.Vector2 UIHandler::controlsScrollViewVector
	Vector2_t2243707579  ___controlsScrollViewVector_10;
	// UnityEngine.Vector2 UIHandler::scrollViewVector
	Vector2_t2243707579  ___scrollViewVector_11;
	// System.Boolean UIHandler::UIEnabled
	bool ___UIEnabled_12;
	// Firebase.DependencyStatus UIHandler::dependencyStatus
	int32_t ___dependencyStatus_14;

public:
	inline static int32_t get_offset_of_auth_2() { return static_cast<int32_t>(offsetof(UIHandler_t1457039566, ___auth_2)); }
	inline FirebaseAuth_t3105883899 * get_auth_2() const { return ___auth_2; }
	inline FirebaseAuth_t3105883899 ** get_address_of_auth_2() { return &___auth_2; }
	inline void set_auth_2(FirebaseAuth_t3105883899 * value)
	{
		___auth_2 = value;
		Il2CppCodeGenWriteBarrier(&___auth_2, value);
	}

	inline static int32_t get_offset_of_user_3() { return static_cast<int32_t>(offsetof(UIHandler_t1457039566, ___user_3)); }
	inline FirebaseUser_t4046966602 * get_user_3() const { return ___user_3; }
	inline FirebaseUser_t4046966602 ** get_address_of_user_3() { return &___user_3; }
	inline void set_user_3(FirebaseUser_t4046966602 * value)
	{
		___user_3 = value;
		Il2CppCodeGenWriteBarrier(&___user_3, value);
	}

	inline static int32_t get_offset_of_fb_GUISkin_4() { return static_cast<int32_t>(offsetof(UIHandler_t1457039566, ___fb_GUISkin_4)); }
	inline GUISkin_t1436893342 * get_fb_GUISkin_4() const { return ___fb_GUISkin_4; }
	inline GUISkin_t1436893342 ** get_address_of_fb_GUISkin_4() { return &___fb_GUISkin_4; }
	inline void set_fb_GUISkin_4(GUISkin_t1436893342 * value)
	{
		___fb_GUISkin_4 = value;
		Il2CppCodeGenWriteBarrier(&___fb_GUISkin_4, value);
	}

	inline static int32_t get_offset_of_logText_5() { return static_cast<int32_t>(offsetof(UIHandler_t1457039566, ___logText_5)); }
	inline String_t* get_logText_5() const { return ___logText_5; }
	inline String_t** get_address_of_logText_5() { return &___logText_5; }
	inline void set_logText_5(String_t* value)
	{
		___logText_5 = value;
		Il2CppCodeGenWriteBarrier(&___logText_5, value);
	}

	inline static int32_t get_offset_of_email_6() { return static_cast<int32_t>(offsetof(UIHandler_t1457039566, ___email_6)); }
	inline String_t* get_email_6() const { return ___email_6; }
	inline String_t** get_address_of_email_6() { return &___email_6; }
	inline void set_email_6(String_t* value)
	{
		___email_6 = value;
		Il2CppCodeGenWriteBarrier(&___email_6, value);
	}

	inline static int32_t get_offset_of_password_7() { return static_cast<int32_t>(offsetof(UIHandler_t1457039566, ___password_7)); }
	inline String_t* get_password_7() const { return ___password_7; }
	inline String_t** get_address_of_password_7() { return &___password_7; }
	inline void set_password_7(String_t* value)
	{
		___password_7 = value;
		Il2CppCodeGenWriteBarrier(&___password_7, value);
	}

	inline static int32_t get_offset_of_displayName_8() { return static_cast<int32_t>(offsetof(UIHandler_t1457039566, ___displayName_8)); }
	inline String_t* get_displayName_8() const { return ___displayName_8; }
	inline String_t** get_address_of_displayName_8() { return &___displayName_8; }
	inline void set_displayName_8(String_t* value)
	{
		___displayName_8 = value;
		Il2CppCodeGenWriteBarrier(&___displayName_8, value);
	}

	inline static int32_t get_offset_of_usePasswordInput_9() { return static_cast<int32_t>(offsetof(UIHandler_t1457039566, ___usePasswordInput_9)); }
	inline bool get_usePasswordInput_9() const { return ___usePasswordInput_9; }
	inline bool* get_address_of_usePasswordInput_9() { return &___usePasswordInput_9; }
	inline void set_usePasswordInput_9(bool value)
	{
		___usePasswordInput_9 = value;
	}

	inline static int32_t get_offset_of_controlsScrollViewVector_10() { return static_cast<int32_t>(offsetof(UIHandler_t1457039566, ___controlsScrollViewVector_10)); }
	inline Vector2_t2243707579  get_controlsScrollViewVector_10() const { return ___controlsScrollViewVector_10; }
	inline Vector2_t2243707579 * get_address_of_controlsScrollViewVector_10() { return &___controlsScrollViewVector_10; }
	inline void set_controlsScrollViewVector_10(Vector2_t2243707579  value)
	{
		___controlsScrollViewVector_10 = value;
	}

	inline static int32_t get_offset_of_scrollViewVector_11() { return static_cast<int32_t>(offsetof(UIHandler_t1457039566, ___scrollViewVector_11)); }
	inline Vector2_t2243707579  get_scrollViewVector_11() const { return ___scrollViewVector_11; }
	inline Vector2_t2243707579 * get_address_of_scrollViewVector_11() { return &___scrollViewVector_11; }
	inline void set_scrollViewVector_11(Vector2_t2243707579  value)
	{
		___scrollViewVector_11 = value;
	}

	inline static int32_t get_offset_of_UIEnabled_12() { return static_cast<int32_t>(offsetof(UIHandler_t1457039566, ___UIEnabled_12)); }
	inline bool get_UIEnabled_12() const { return ___UIEnabled_12; }
	inline bool* get_address_of_UIEnabled_12() { return &___UIEnabled_12; }
	inline void set_UIEnabled_12(bool value)
	{
		___UIEnabled_12 = value;
	}

	inline static int32_t get_offset_of_dependencyStatus_14() { return static_cast<int32_t>(offsetof(UIHandler_t1457039566, ___dependencyStatus_14)); }
	inline int32_t get_dependencyStatus_14() const { return ___dependencyStatus_14; }
	inline int32_t* get_address_of_dependencyStatus_14() { return &___dependencyStatus_14; }
	inline void set_dependencyStatus_14(int32_t value)
	{
		___dependencyStatus_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
