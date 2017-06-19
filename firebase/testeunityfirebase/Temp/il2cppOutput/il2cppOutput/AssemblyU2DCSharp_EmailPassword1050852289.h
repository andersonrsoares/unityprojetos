#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "Firebase_App_Firebase_DependencyStatus2752419415.h"

// Firebase.Auth.FirebaseAuth
struct FirebaseAuth_t3105883899;
// UnityEngine.UI.InputField
struct InputField_t1631627530;
// UnityEngine.UI.Button
struct Button_t2872111280;
// UnityEngine.UI.Text
struct Text_t356221433;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.EventHandler`1<Firebase.Database.ValueChangedEventArgs>
struct EventHandler_1_t3816151702;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EmailPassword
struct  EmailPassword_t1050852289  : public MonoBehaviour_t1158329972
{
public:
	// Firebase.Auth.FirebaseAuth EmailPassword::auth
	FirebaseAuth_t3105883899 * ___auth_2;
	// UnityEngine.UI.InputField EmailPassword::UserNameInput
	InputField_t1631627530 * ___UserNameInput_3;
	// UnityEngine.UI.InputField EmailPassword::PasswordInput
	InputField_t1631627530 * ___PasswordInput_4;
	// UnityEngine.UI.Button EmailPassword::SignupButton
	Button_t2872111280 * ___SignupButton_5;
	// UnityEngine.UI.Button EmailPassword::LoginButton
	Button_t2872111280 * ___LoginButton_6;
	// UnityEngine.UI.Text EmailPassword::ErrorText
	Text_t356221433 * ___ErrorText_7;
	// Firebase.DependencyStatus EmailPassword::dependencyStatus
	int32_t ___dependencyStatus_8;
	// System.Collections.ArrayList EmailPassword::leaderBoard
	ArrayList_t4252133567 * ___leaderBoard_9;

public:
	inline static int32_t get_offset_of_auth_2() { return static_cast<int32_t>(offsetof(EmailPassword_t1050852289, ___auth_2)); }
	inline FirebaseAuth_t3105883899 * get_auth_2() const { return ___auth_2; }
	inline FirebaseAuth_t3105883899 ** get_address_of_auth_2() { return &___auth_2; }
	inline void set_auth_2(FirebaseAuth_t3105883899 * value)
	{
		___auth_2 = value;
		Il2CppCodeGenWriteBarrier(&___auth_2, value);
	}

	inline static int32_t get_offset_of_UserNameInput_3() { return static_cast<int32_t>(offsetof(EmailPassword_t1050852289, ___UserNameInput_3)); }
	inline InputField_t1631627530 * get_UserNameInput_3() const { return ___UserNameInput_3; }
	inline InputField_t1631627530 ** get_address_of_UserNameInput_3() { return &___UserNameInput_3; }
	inline void set_UserNameInput_3(InputField_t1631627530 * value)
	{
		___UserNameInput_3 = value;
		Il2CppCodeGenWriteBarrier(&___UserNameInput_3, value);
	}

	inline static int32_t get_offset_of_PasswordInput_4() { return static_cast<int32_t>(offsetof(EmailPassword_t1050852289, ___PasswordInput_4)); }
	inline InputField_t1631627530 * get_PasswordInput_4() const { return ___PasswordInput_4; }
	inline InputField_t1631627530 ** get_address_of_PasswordInput_4() { return &___PasswordInput_4; }
	inline void set_PasswordInput_4(InputField_t1631627530 * value)
	{
		___PasswordInput_4 = value;
		Il2CppCodeGenWriteBarrier(&___PasswordInput_4, value);
	}

	inline static int32_t get_offset_of_SignupButton_5() { return static_cast<int32_t>(offsetof(EmailPassword_t1050852289, ___SignupButton_5)); }
	inline Button_t2872111280 * get_SignupButton_5() const { return ___SignupButton_5; }
	inline Button_t2872111280 ** get_address_of_SignupButton_5() { return &___SignupButton_5; }
	inline void set_SignupButton_5(Button_t2872111280 * value)
	{
		___SignupButton_5 = value;
		Il2CppCodeGenWriteBarrier(&___SignupButton_5, value);
	}

	inline static int32_t get_offset_of_LoginButton_6() { return static_cast<int32_t>(offsetof(EmailPassword_t1050852289, ___LoginButton_6)); }
	inline Button_t2872111280 * get_LoginButton_6() const { return ___LoginButton_6; }
	inline Button_t2872111280 ** get_address_of_LoginButton_6() { return &___LoginButton_6; }
	inline void set_LoginButton_6(Button_t2872111280 * value)
	{
		___LoginButton_6 = value;
		Il2CppCodeGenWriteBarrier(&___LoginButton_6, value);
	}

	inline static int32_t get_offset_of_ErrorText_7() { return static_cast<int32_t>(offsetof(EmailPassword_t1050852289, ___ErrorText_7)); }
	inline Text_t356221433 * get_ErrorText_7() const { return ___ErrorText_7; }
	inline Text_t356221433 ** get_address_of_ErrorText_7() { return &___ErrorText_7; }
	inline void set_ErrorText_7(Text_t356221433 * value)
	{
		___ErrorText_7 = value;
		Il2CppCodeGenWriteBarrier(&___ErrorText_7, value);
	}

	inline static int32_t get_offset_of_dependencyStatus_8() { return static_cast<int32_t>(offsetof(EmailPassword_t1050852289, ___dependencyStatus_8)); }
	inline int32_t get_dependencyStatus_8() const { return ___dependencyStatus_8; }
	inline int32_t* get_address_of_dependencyStatus_8() { return &___dependencyStatus_8; }
	inline void set_dependencyStatus_8(int32_t value)
	{
		___dependencyStatus_8 = value;
	}

	inline static int32_t get_offset_of_leaderBoard_9() { return static_cast<int32_t>(offsetof(EmailPassword_t1050852289, ___leaderBoard_9)); }
	inline ArrayList_t4252133567 * get_leaderBoard_9() const { return ___leaderBoard_9; }
	inline ArrayList_t4252133567 ** get_address_of_leaderBoard_9() { return &___leaderBoard_9; }
	inline void set_leaderBoard_9(ArrayList_t4252133567 * value)
	{
		___leaderBoard_9 = value;
		Il2CppCodeGenWriteBarrier(&___leaderBoard_9, value);
	}
};

struct EmailPassword_t1050852289_StaticFields
{
public:
	// System.EventHandler`1<Firebase.Database.ValueChangedEventArgs> EmailPassword::<>f__am$cache0
	EventHandler_1_t3816151702 * ___U3CU3Ef__amU24cache0_10;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_10() { return static_cast<int32_t>(offsetof(EmailPassword_t1050852289_StaticFields, ___U3CU3Ef__amU24cache0_10)); }
	inline EventHandler_1_t3816151702 * get_U3CU3Ef__amU24cache0_10() const { return ___U3CU3Ef__amU24cache0_10; }
	inline EventHandler_1_t3816151702 ** get_address_of_U3CU3Ef__amU24cache0_10() { return &___U3CU3Ef__amU24cache0_10; }
	inline void set_U3CU3Ef__amU24cache0_10(EventHandler_1_t3816151702 * value)
	{
		___U3CU3Ef__amU24cache0_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
