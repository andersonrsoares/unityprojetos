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

// System.Collections.ArrayList
struct ArrayList_t4252133567;
// UnityEngine.GUISkin
struct GUISkin_t1436893342;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIHandlerDatabase
struct  UIHandlerDatabase_t1454484439  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.ArrayList UIHandlerDatabase::leaderBoard
	ArrayList_t4252133567 * ___leaderBoard_2;
	// UnityEngine.Vector2 UIHandlerDatabase::scrollPosition
	Vector2_t2243707579  ___scrollPosition_3;
	// UnityEngine.Vector2 UIHandlerDatabase::controlsScrollViewVector
	Vector2_t2243707579  ___controlsScrollViewVector_4;
	// UnityEngine.GUISkin UIHandlerDatabase::fb_GUISkin
	GUISkin_t1436893342 * ___fb_GUISkin_5;
	// System.String UIHandlerDatabase::logText
	String_t* ___logText_7;
	// System.String UIHandlerDatabase::email
	String_t* ___email_8;
	// System.Int32 UIHandlerDatabase::score
	int32_t ___score_9;
	// UnityEngine.Vector2 UIHandlerDatabase::scrollViewVector
	Vector2_t2243707579  ___scrollViewVector_10;
	// System.Boolean UIHandlerDatabase::UIEnabled
	bool ___UIEnabled_11;
	// Firebase.DependencyStatus UIHandlerDatabase::dependencyStatus
	int32_t ___dependencyStatus_13;

public:
	inline static int32_t get_offset_of_leaderBoard_2() { return static_cast<int32_t>(offsetof(UIHandlerDatabase_t1454484439, ___leaderBoard_2)); }
	inline ArrayList_t4252133567 * get_leaderBoard_2() const { return ___leaderBoard_2; }
	inline ArrayList_t4252133567 ** get_address_of_leaderBoard_2() { return &___leaderBoard_2; }
	inline void set_leaderBoard_2(ArrayList_t4252133567 * value)
	{
		___leaderBoard_2 = value;
		Il2CppCodeGenWriteBarrier(&___leaderBoard_2, value);
	}

	inline static int32_t get_offset_of_scrollPosition_3() { return static_cast<int32_t>(offsetof(UIHandlerDatabase_t1454484439, ___scrollPosition_3)); }
	inline Vector2_t2243707579  get_scrollPosition_3() const { return ___scrollPosition_3; }
	inline Vector2_t2243707579 * get_address_of_scrollPosition_3() { return &___scrollPosition_3; }
	inline void set_scrollPosition_3(Vector2_t2243707579  value)
	{
		___scrollPosition_3 = value;
	}

	inline static int32_t get_offset_of_controlsScrollViewVector_4() { return static_cast<int32_t>(offsetof(UIHandlerDatabase_t1454484439, ___controlsScrollViewVector_4)); }
	inline Vector2_t2243707579  get_controlsScrollViewVector_4() const { return ___controlsScrollViewVector_4; }
	inline Vector2_t2243707579 * get_address_of_controlsScrollViewVector_4() { return &___controlsScrollViewVector_4; }
	inline void set_controlsScrollViewVector_4(Vector2_t2243707579  value)
	{
		___controlsScrollViewVector_4 = value;
	}

	inline static int32_t get_offset_of_fb_GUISkin_5() { return static_cast<int32_t>(offsetof(UIHandlerDatabase_t1454484439, ___fb_GUISkin_5)); }
	inline GUISkin_t1436893342 * get_fb_GUISkin_5() const { return ___fb_GUISkin_5; }
	inline GUISkin_t1436893342 ** get_address_of_fb_GUISkin_5() { return &___fb_GUISkin_5; }
	inline void set_fb_GUISkin_5(GUISkin_t1436893342 * value)
	{
		___fb_GUISkin_5 = value;
		Il2CppCodeGenWriteBarrier(&___fb_GUISkin_5, value);
	}

	inline static int32_t get_offset_of_logText_7() { return static_cast<int32_t>(offsetof(UIHandlerDatabase_t1454484439, ___logText_7)); }
	inline String_t* get_logText_7() const { return ___logText_7; }
	inline String_t** get_address_of_logText_7() { return &___logText_7; }
	inline void set_logText_7(String_t* value)
	{
		___logText_7 = value;
		Il2CppCodeGenWriteBarrier(&___logText_7, value);
	}

	inline static int32_t get_offset_of_email_8() { return static_cast<int32_t>(offsetof(UIHandlerDatabase_t1454484439, ___email_8)); }
	inline String_t* get_email_8() const { return ___email_8; }
	inline String_t** get_address_of_email_8() { return &___email_8; }
	inline void set_email_8(String_t* value)
	{
		___email_8 = value;
		Il2CppCodeGenWriteBarrier(&___email_8, value);
	}

	inline static int32_t get_offset_of_score_9() { return static_cast<int32_t>(offsetof(UIHandlerDatabase_t1454484439, ___score_9)); }
	inline int32_t get_score_9() const { return ___score_9; }
	inline int32_t* get_address_of_score_9() { return &___score_9; }
	inline void set_score_9(int32_t value)
	{
		___score_9 = value;
	}

	inline static int32_t get_offset_of_scrollViewVector_10() { return static_cast<int32_t>(offsetof(UIHandlerDatabase_t1454484439, ___scrollViewVector_10)); }
	inline Vector2_t2243707579  get_scrollViewVector_10() const { return ___scrollViewVector_10; }
	inline Vector2_t2243707579 * get_address_of_scrollViewVector_10() { return &___scrollViewVector_10; }
	inline void set_scrollViewVector_10(Vector2_t2243707579  value)
	{
		___scrollViewVector_10 = value;
	}

	inline static int32_t get_offset_of_UIEnabled_11() { return static_cast<int32_t>(offsetof(UIHandlerDatabase_t1454484439, ___UIEnabled_11)); }
	inline bool get_UIEnabled_11() const { return ___UIEnabled_11; }
	inline bool* get_address_of_UIEnabled_11() { return &___UIEnabled_11; }
	inline void set_UIEnabled_11(bool value)
	{
		___UIEnabled_11 = value;
	}

	inline static int32_t get_offset_of_dependencyStatus_13() { return static_cast<int32_t>(offsetof(UIHandlerDatabase_t1454484439, ___dependencyStatus_13)); }
	inline int32_t get_dependencyStatus_13() const { return ___dependencyStatus_13; }
	inline int32_t* get_address_of_dependencyStatus_13() { return &___dependencyStatus_13; }
	inline void set_dependencyStatus_13(int32_t value)
	{
		___dependencyStatus_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
