#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t1880931879;
// System.EventHandler`1<Firebase.FirebaseApp/FirebaseHandler/ApplicationFocusChangedEventArgs>
struct EventHandler_1_t3924069827;
// Firebase.FirebaseApp/FirebaseHandler/LogMessageDelegate
struct LogMessageDelegate_t1988210674;
// System.Action
struct Action_t3226471752;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.FirebaseApp/FirebaseHandler
struct  FirebaseHandler_t2907300047  : public MonoBehaviour_t1158329972
{
public:
	// System.EventHandler`1<System.EventArgs> Firebase.FirebaseApp/FirebaseHandler::Updated
	EventHandler_1_t1880931879 * ___Updated_3;
	// System.EventHandler`1<Firebase.FirebaseApp/FirebaseHandler/ApplicationFocusChangedEventArgs> Firebase.FirebaseApp/FirebaseHandler::ApplicationFocusChanged
	EventHandler_1_t3924069827 * ___ApplicationFocusChanged_4;

public:
	inline static int32_t get_offset_of_Updated_3() { return static_cast<int32_t>(offsetof(FirebaseHandler_t2907300047, ___Updated_3)); }
	inline EventHandler_1_t1880931879 * get_Updated_3() const { return ___Updated_3; }
	inline EventHandler_1_t1880931879 ** get_address_of_Updated_3() { return &___Updated_3; }
	inline void set_Updated_3(EventHandler_1_t1880931879 * value)
	{
		___Updated_3 = value;
		Il2CppCodeGenWriteBarrier(&___Updated_3, value);
	}

	inline static int32_t get_offset_of_ApplicationFocusChanged_4() { return static_cast<int32_t>(offsetof(FirebaseHandler_t2907300047, ___ApplicationFocusChanged_4)); }
	inline EventHandler_1_t3924069827 * get_ApplicationFocusChanged_4() const { return ___ApplicationFocusChanged_4; }
	inline EventHandler_1_t3924069827 ** get_address_of_ApplicationFocusChanged_4() { return &___ApplicationFocusChanged_4; }
	inline void set_ApplicationFocusChanged_4(EventHandler_1_t3924069827 * value)
	{
		___ApplicationFocusChanged_4 = value;
		Il2CppCodeGenWriteBarrier(&___ApplicationFocusChanged_4, value);
	}
};

struct FirebaseHandler_t2907300047_StaticFields
{
public:
	// UnityEngine.GameObject Firebase.FirebaseApp/FirebaseHandler::firebaseHandler
	GameObject_t1756533147 * ___firebaseHandler_2;
	// Firebase.FirebaseApp/FirebaseHandler/LogMessageDelegate Firebase.FirebaseApp/FirebaseHandler::<>f__mg$cache0
	LogMessageDelegate_t1988210674 * ___U3CU3Ef__mgU24cache0_5;
	// System.Action Firebase.FirebaseApp/FirebaseHandler::<>f__am$cache0
	Action_t3226471752 * ___U3CU3Ef__amU24cache0_6;

public:
	inline static int32_t get_offset_of_firebaseHandler_2() { return static_cast<int32_t>(offsetof(FirebaseHandler_t2907300047_StaticFields, ___firebaseHandler_2)); }
	inline GameObject_t1756533147 * get_firebaseHandler_2() const { return ___firebaseHandler_2; }
	inline GameObject_t1756533147 ** get_address_of_firebaseHandler_2() { return &___firebaseHandler_2; }
	inline void set_firebaseHandler_2(GameObject_t1756533147 * value)
	{
		___firebaseHandler_2 = value;
		Il2CppCodeGenWriteBarrier(&___firebaseHandler_2, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_5() { return static_cast<int32_t>(offsetof(FirebaseHandler_t2907300047_StaticFields, ___U3CU3Ef__mgU24cache0_5)); }
	inline LogMessageDelegate_t1988210674 * get_U3CU3Ef__mgU24cache0_5() const { return ___U3CU3Ef__mgU24cache0_5; }
	inline LogMessageDelegate_t1988210674 ** get_address_of_U3CU3Ef__mgU24cache0_5() { return &___U3CU3Ef__mgU24cache0_5; }
	inline void set_U3CU3Ef__mgU24cache0_5(LogMessageDelegate_t1988210674 * value)
	{
		___U3CU3Ef__mgU24cache0_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_5, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_6() { return static_cast<int32_t>(offsetof(FirebaseHandler_t2907300047_StaticFields, ___U3CU3Ef__amU24cache0_6)); }
	inline Action_t3226471752 * get_U3CU3Ef__amU24cache0_6() const { return ___U3CU3Ef__amU24cache0_6; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__amU24cache0_6() { return &___U3CU3Ef__amU24cache0_6; }
	inline void set_U3CU3Ef__amU24cache0_6(Action_t3226471752 * value)
	{
		___U3CU3Ef__amU24cache0_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
