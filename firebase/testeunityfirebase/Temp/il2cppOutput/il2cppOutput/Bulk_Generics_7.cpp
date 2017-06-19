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
#include "mscorlib_System_Array3829468939.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23132015601.h"
#include "mscorlib_System_Void1841601450.h"
#include "mscorlib_System_Int322071877448.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23749587448.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21008373517.h"
#include "mscorlib_System_Reflection_Emit_Label4243202660.h"

// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Object
struct Il2CppObject;
extern Il2CppClass* StringU5BU5D_t1642385972_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral372029431;
extern Il2CppCodeGenString* _stringLiteral811305474;
extern Il2CppCodeGenString* _stringLiteral372029425;
extern const uint32_t KeyValuePair_2_ToString_m910120950_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m1391611625_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m1190571640_MetadataUsageId;

// System.String[]
struct StringU5BU5D_t1642385972  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2075879042_gshared (KeyValuePair_2_t3132015601 * __this, int32_t p0, const MethodInfo* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m4270505802_gshared (KeyValuePair_2_t3132015601 * __this, int32_t p0, const MethodInfo* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2177183229_gshared (KeyValuePair_2_t3132015601 * __this, int32_t ___key0, int32_t ___value1, const MethodInfo* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m1683812983_gshared (KeyValuePair_2_t3132015601 * __this, const MethodInfo* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Value()
extern "C"  int32_t KeyValuePair_2_get_Value_m1136571287_gshared (KeyValuePair_2_t3132015601 * __this, const MethodInfo* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m910120950_gshared (KeyValuePair_2_t3132015601 * __this, const MethodInfo* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m1350990071_gshared (KeyValuePair_2_t3749587448 * __this, int32_t p0, const MethodInfo* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m2726037047_gshared (KeyValuePair_2_t3749587448 * __this, Il2CppObject * p0, const MethodInfo* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3201181706_gshared (KeyValuePair_2_t3749587448 * __this, int32_t ___key0, Il2CppObject * ___value1, const MethodInfo* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m1537018582_gshared (KeyValuePair_2_t3749587448 * __this, const MethodInfo* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
extern "C"  Il2CppObject * KeyValuePair_2_get_Value_m2897691047_gshared (KeyValuePair_2_t3749587448 * __this, const MethodInfo* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1391611625_gshared (KeyValuePair_2_t3749587448 * __this, const MethodInfo* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Reflection.Emit.Label>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m3756867396_gshared (KeyValuePair_2_t1008373517 * __this, int32_t p0, const MethodInfo* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Reflection.Emit.Label>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m4153446916_gshared (KeyValuePair_2_t1008373517 * __this, Label_t4243202660  p0, const MethodInfo* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Reflection.Emit.Label>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m1870434531_gshared (KeyValuePair_2_t1008373517 * __this, int32_t ___key0, Label_t4243202660  ___value1, const MethodInfo* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Reflection.Emit.Label>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m2216667373_gshared (KeyValuePair_2_t1008373517 * __this, const MethodInfo* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Reflection.Emit.Label>::get_Value()
extern "C"  Label_t4243202660  KeyValuePair_2_get_Value_m590593229_gshared (KeyValuePair_2_t1008373517 * __this, const MethodInfo* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Reflection.Emit.Label>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1190571640_gshared (KeyValuePair_2_t1008373517 * __this, const MethodInfo* method);

// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m2075879042(__this, p0, method) ((  void (*) (KeyValuePair_2_t3132015601 *, int32_t, const MethodInfo*))KeyValuePair_2_set_Key_m2075879042_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m4270505802(__this, p0, method) ((  void (*) (KeyValuePair_2_t3132015601 *, int32_t, const MethodInfo*))KeyValuePair_2_set_Value_m4270505802_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m2177183229(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t3132015601 *, int32_t, int32_t, const MethodInfo*))KeyValuePair_2__ctor_m2177183229_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Key()
#define KeyValuePair_2_get_Key_m1683812983(__this, method) ((  int32_t (*) (KeyValuePair_2_t3132015601 *, const MethodInfo*))KeyValuePair_2_get_Key_m1683812983_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Value()
#define KeyValuePair_2_get_Value_m1136571287(__this, method) ((  int32_t (*) (KeyValuePair_2_t3132015601 *, const MethodInfo*))KeyValuePair_2_get_Value_m1136571287_gshared)(__this, method)
// System.String System.Int32::ToString()
extern "C"  String_t* Int32_ToString_m2960866144 (int32_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String[])
extern "C"  String_t* String_Concat_m626692867 (Il2CppObject * __this /* static, unused */, StringU5BU5D_t1642385972* ___values0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::ToString()
#define KeyValuePair_2_ToString_m910120950(__this, method) ((  String_t* (*) (KeyValuePair_2_t3132015601 *, const MethodInfo*))KeyValuePair_2_ToString_m910120950_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m1350990071(__this, p0, method) ((  void (*) (KeyValuePair_2_t3749587448 *, int32_t, const MethodInfo*))KeyValuePair_2_set_Key_m1350990071_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m2726037047(__this, p0, method) ((  void (*) (KeyValuePair_2_t3749587448 *, Il2CppObject *, const MethodInfo*))KeyValuePair_2_set_Value_m2726037047_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m3201181706(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t3749587448 *, int32_t, Il2CppObject *, const MethodInfo*))KeyValuePair_2__ctor_m3201181706_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m1537018582(__this, method) ((  int32_t (*) (KeyValuePair_2_t3749587448 *, const MethodInfo*))KeyValuePair_2_get_Key_m1537018582_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m2897691047(__this, method) ((  Il2CppObject * (*) (KeyValuePair_2_t3749587448 *, const MethodInfo*))KeyValuePair_2_get_Value_m2897691047_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::ToString()
#define KeyValuePair_2_ToString_m1391611625(__this, method) ((  String_t* (*) (KeyValuePair_2_t3749587448 *, const MethodInfo*))KeyValuePair_2_ToString_m1391611625_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Reflection.Emit.Label>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m3756867396(__this, p0, method) ((  void (*) (KeyValuePair_2_t1008373517 *, int32_t, const MethodInfo*))KeyValuePair_2_set_Key_m3756867396_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Reflection.Emit.Label>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m4153446916(__this, p0, method) ((  void (*) (KeyValuePair_2_t1008373517 *, Label_t4243202660 , const MethodInfo*))KeyValuePair_2_set_Value_m4153446916_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Reflection.Emit.Label>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m1870434531(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t1008373517 *, int32_t, Label_t4243202660 , const MethodInfo*))KeyValuePair_2__ctor_m1870434531_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Reflection.Emit.Label>::get_Key()
#define KeyValuePair_2_get_Key_m2216667373(__this, method) ((  int32_t (*) (KeyValuePair_2_t1008373517 *, const MethodInfo*))KeyValuePair_2_get_Key_m2216667373_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Reflection.Emit.Label>::get_Value()
#define KeyValuePair_2_get_Value_m590593229(__this, method) ((  Label_t4243202660  (*) (KeyValuePair_2_t1008373517 *, const MethodInfo*))KeyValuePair_2_get_Value_m590593229_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Reflection.Emit.Label>::ToString()
#define KeyValuePair_2_ToString_m1190571640(__this, method) ((  String_t* (*) (KeyValuePair_2_t1008373517 *, const MethodInfo*))KeyValuePair_2_ToString_m1190571640_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2177183229_gshared (KeyValuePair_2_t3132015601 * __this, int32_t ___key0, int32_t ___value1, const MethodInfo* method)
{
	{
		int32_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m2075879042((KeyValuePair_2_t3132015601 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_1 = ___value1;
		KeyValuePair_2_set_Value_m4270505802((KeyValuePair_2_t3132015601 *)__this, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m2177183229_AdjustorThunk (Il2CppObject * __this, int32_t ___key0, int32_t ___value1, const MethodInfo* method)
{
	KeyValuePair_2_t3132015601 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3132015601 *>(__this + 1);
	KeyValuePair_2__ctor_m2177183229(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m1683812983_gshared (KeyValuePair_2_t3132015601 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Key_m1683812983_AdjustorThunk (Il2CppObject * __this, const MethodInfo* method)
{
	KeyValuePair_2_t3132015601 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3132015601 *>(__this + 1);
	return KeyValuePair_2_get_Key_m1683812983(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2075879042_gshared (KeyValuePair_2_t3132015601 * __this, int32_t ___value0, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m2075879042_AdjustorThunk (Il2CppObject * __this, int32_t ___value0, const MethodInfo* method)
{
	KeyValuePair_2_t3132015601 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3132015601 *>(__this + 1);
	KeyValuePair_2_set_Key_m2075879042(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Value()
extern "C"  int32_t KeyValuePair_2_get_Value_m1136571287_gshared (KeyValuePair_2_t3132015601 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_value_1();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Value_m1136571287_AdjustorThunk (Il2CppObject * __this, const MethodInfo* method)
{
	KeyValuePair_2_t3132015601 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3132015601 *>(__this + 1);
	return KeyValuePair_2_get_Value_m1136571287(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m4270505802_gshared (KeyValuePair_2_t3132015601 * __this, int32_t ___value0, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m4270505802_AdjustorThunk (Il2CppObject * __this, int32_t ___value0, const MethodInfo* method)
{
	KeyValuePair_2_t3132015601 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3132015601 *>(__this + 1);
	KeyValuePair_2_set_Value_m4270505802(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m910120950_gshared (KeyValuePair_2_t3132015601 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m910120950_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t1642385972* G_B2_1 = NULL;
	StringU5BU5D_t1642385972* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t1642385972* G_B1_1 = NULL;
	StringU5BU5D_t1642385972* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t1642385972* G_B3_2 = NULL;
	StringU5BU5D_t1642385972* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t1642385972* G_B5_1 = NULL;
	StringU5BU5D_t1642385972* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t1642385972* G_B4_1 = NULL;
	StringU5BU5D_t1642385972* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t1642385972* G_B6_2 = NULL;
	StringU5BU5D_t1642385972* G_B6_3 = NULL;
	{
		StringU5BU5D_t1642385972* L_0 = (StringU5BU5D_t1642385972*)((StringU5BU5D_t1642385972*)SZArrayNew(StringU5BU5D_t1642385972_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral372029431);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral372029431);
		StringU5BU5D_t1642385972* L_1 = (StringU5BU5D_t1642385972*)L_0;
		int32_t L_2 = KeyValuePair_2_get_Key_m1683812983((KeyValuePair_2_t3132015601 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		int32_t L_3 = KeyValuePair_2_get_Key_m1683812983((KeyValuePair_2_t3132015601 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (int32_t)L_3;
		String_t* L_4 = Int32_ToString_m2960866144((int32_t*)(&V_0), /*hidden argument*/NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t1642385972* L_6 = (StringU5BU5D_t1642385972*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral811305474);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral811305474);
		StringU5BU5D_t1642385972* L_7 = (StringU5BU5D_t1642385972*)L_6;
		int32_t L_8 = KeyValuePair_2_get_Value_m1136571287((KeyValuePair_2_t3132015601 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
	}
	{
		int32_t L_9 = KeyValuePair_2_get_Value_m1136571287((KeyValuePair_2_t3132015601 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (int32_t)L_9;
		String_t* L_10 = Int32_ToString_m2960866144((int32_t*)(&V_1), /*hidden argument*/NULL);
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t1642385972* L_12 = (StringU5BU5D_t1642385972*)G_B6_3;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral372029425);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral372029425);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m626692867(NULL /*static, unused*/, (StringU5BU5D_t1642385972*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m910120950_AdjustorThunk (Il2CppObject * __this, const MethodInfo* method)
{
	KeyValuePair_2_t3132015601 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3132015601 *>(__this + 1);
	return KeyValuePair_2_ToString_m910120950(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3201181706_gshared (KeyValuePair_2_t3749587448 * __this, int32_t ___key0, Il2CppObject * ___value1, const MethodInfo* method)
{
	{
		int32_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m1350990071((KeyValuePair_2_t3749587448 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Il2CppObject * L_1 = ___value1;
		KeyValuePair_2_set_Value_m2726037047((KeyValuePair_2_t3749587448 *)__this, (Il2CppObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m3201181706_AdjustorThunk (Il2CppObject * __this, int32_t ___key0, Il2CppObject * ___value1, const MethodInfo* method)
{
	KeyValuePair_2_t3749587448 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3749587448 *>(__this + 1);
	KeyValuePair_2__ctor_m3201181706(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m1537018582_gshared (KeyValuePair_2_t3749587448 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Key_m1537018582_AdjustorThunk (Il2CppObject * __this, const MethodInfo* method)
{
	KeyValuePair_2_t3749587448 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3749587448 *>(__this + 1);
	return KeyValuePair_2_get_Key_m1537018582(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m1350990071_gshared (KeyValuePair_2_t3749587448 * __this, int32_t ___value0, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m1350990071_AdjustorThunk (Il2CppObject * __this, int32_t ___value0, const MethodInfo* method)
{
	KeyValuePair_2_t3749587448 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3749587448 *>(__this + 1);
	KeyValuePair_2_set_Key_m1350990071(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
extern "C"  Il2CppObject * KeyValuePair_2_get_Value_m2897691047_gshared (KeyValuePair_2_t3749587448 * __this, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = (Il2CppObject *)__this->get_value_1();
		return L_0;
	}
}
extern "C"  Il2CppObject * KeyValuePair_2_get_Value_m2897691047_AdjustorThunk (Il2CppObject * __this, const MethodInfo* method)
{
	KeyValuePair_2_t3749587448 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3749587448 *>(__this + 1);
	return KeyValuePair_2_get_Value_m2897691047(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m2726037047_gshared (KeyValuePair_2_t3749587448 * __this, Il2CppObject * ___value0, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m2726037047_AdjustorThunk (Il2CppObject * __this, Il2CppObject * ___value0, const MethodInfo* method)
{
	KeyValuePair_2_t3749587448 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3749587448 *>(__this + 1);
	KeyValuePair_2_set_Value_m2726037047(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1391611625_gshared (KeyValuePair_2_t3749587448 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m1391611625_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Il2CppObject * V_1 = NULL;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t1642385972* G_B2_1 = NULL;
	StringU5BU5D_t1642385972* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t1642385972* G_B1_1 = NULL;
	StringU5BU5D_t1642385972* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t1642385972* G_B3_2 = NULL;
	StringU5BU5D_t1642385972* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t1642385972* G_B5_1 = NULL;
	StringU5BU5D_t1642385972* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t1642385972* G_B4_1 = NULL;
	StringU5BU5D_t1642385972* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t1642385972* G_B6_2 = NULL;
	StringU5BU5D_t1642385972* G_B6_3 = NULL;
	{
		StringU5BU5D_t1642385972* L_0 = (StringU5BU5D_t1642385972*)((StringU5BU5D_t1642385972*)SZArrayNew(StringU5BU5D_t1642385972_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral372029431);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral372029431);
		StringU5BU5D_t1642385972* L_1 = (StringU5BU5D_t1642385972*)L_0;
		int32_t L_2 = KeyValuePair_2_get_Key_m1537018582((KeyValuePair_2_t3749587448 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		int32_t L_3 = KeyValuePair_2_get_Key_m1537018582((KeyValuePair_2_t3749587448 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (int32_t)L_3;
		String_t* L_4 = Int32_ToString_m2960866144((int32_t*)(&V_0), /*hidden argument*/NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t1642385972* L_6 = (StringU5BU5D_t1642385972*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral811305474);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral811305474);
		StringU5BU5D_t1642385972* L_7 = (StringU5BU5D_t1642385972*)L_6;
		Il2CppObject * L_8 = KeyValuePair_2_get_Value_m2897691047((KeyValuePair_2_t3749587448 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
		if (!L_8)
		{
			G_B5_0 = 3;
			G_B5_1 = L_7;
			G_B5_2 = L_7;
			goto IL_0072;
		}
	}
	{
		Il2CppObject * L_9 = KeyValuePair_2_get_Value_m2897691047((KeyValuePair_2_t3749587448 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (Il2CppObject *)L_9;
		NullCheck((Il2CppObject *)(*(&V_1)));
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Il2CppObject *)(*(&V_1)));
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t1642385972* L_12 = (StringU5BU5D_t1642385972*)G_B6_3;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral372029425);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral372029425);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m626692867(NULL /*static, unused*/, (StringU5BU5D_t1642385972*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m1391611625_AdjustorThunk (Il2CppObject * __this, const MethodInfo* method)
{
	KeyValuePair_2_t3749587448 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3749587448 *>(__this + 1);
	return KeyValuePair_2_ToString_m1391611625(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Reflection.Emit.Label>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m1870434531_gshared (KeyValuePair_2_t1008373517 * __this, int32_t ___key0, Label_t4243202660  ___value1, const MethodInfo* method)
{
	{
		int32_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m3756867396((KeyValuePair_2_t1008373517 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Label_t4243202660  L_1 = ___value1;
		KeyValuePair_2_set_Value_m4153446916((KeyValuePair_2_t1008373517 *)__this, (Label_t4243202660 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m1870434531_AdjustorThunk (Il2CppObject * __this, int32_t ___key0, Label_t4243202660  ___value1, const MethodInfo* method)
{
	KeyValuePair_2_t1008373517 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1008373517 *>(__this + 1);
	KeyValuePair_2__ctor_m1870434531(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Reflection.Emit.Label>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m2216667373_gshared (KeyValuePair_2_t1008373517 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Key_m2216667373_AdjustorThunk (Il2CppObject * __this, const MethodInfo* method)
{
	KeyValuePair_2_t1008373517 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1008373517 *>(__this + 1);
	return KeyValuePair_2_get_Key_m2216667373(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Reflection.Emit.Label>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m3756867396_gshared (KeyValuePair_2_t1008373517 * __this, int32_t ___value0, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m3756867396_AdjustorThunk (Il2CppObject * __this, int32_t ___value0, const MethodInfo* method)
{
	KeyValuePair_2_t1008373517 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1008373517 *>(__this + 1);
	KeyValuePair_2_set_Key_m3756867396(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Reflection.Emit.Label>::get_Value()
extern "C"  Label_t4243202660  KeyValuePair_2_get_Value_m590593229_gshared (KeyValuePair_2_t1008373517 * __this, const MethodInfo* method)
{
	{
		Label_t4243202660  L_0 = (Label_t4243202660 )__this->get_value_1();
		return L_0;
	}
}
extern "C"  Label_t4243202660  KeyValuePair_2_get_Value_m590593229_AdjustorThunk (Il2CppObject * __this, const MethodInfo* method)
{
	KeyValuePair_2_t1008373517 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1008373517 *>(__this + 1);
	return KeyValuePair_2_get_Value_m590593229(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Reflection.Emit.Label>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m4153446916_gshared (KeyValuePair_2_t1008373517 * __this, Label_t4243202660  ___value0, const MethodInfo* method)
{
	{
		Label_t4243202660  L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m4153446916_AdjustorThunk (Il2CppObject * __this, Label_t4243202660  ___value0, const MethodInfo* method)
{
	KeyValuePair_2_t1008373517 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1008373517 *>(__this + 1);
	KeyValuePair_2_set_Value_m4153446916(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Reflection.Emit.Label>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1190571640_gshared (KeyValuePair_2_t1008373517 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m1190571640_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Label_t4243202660  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t G_B2_0 = 0;
	StringU5BU5D_t1642385972* G_B2_1 = NULL;
	StringU5BU5D_t1642385972* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t1642385972* G_B1_1 = NULL;
	StringU5BU5D_t1642385972* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t1642385972* G_B3_2 = NULL;
	StringU5BU5D_t1642385972* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t1642385972* G_B5_1 = NULL;
	StringU5BU5D_t1642385972* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t1642385972* G_B4_1 = NULL;
	StringU5BU5D_t1642385972* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t1642385972* G_B6_2 = NULL;
	StringU5BU5D_t1642385972* G_B6_3 = NULL;
	{
		StringU5BU5D_t1642385972* L_0 = (StringU5BU5D_t1642385972*)((StringU5BU5D_t1642385972*)SZArrayNew(StringU5BU5D_t1642385972_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral372029431);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral372029431);
		StringU5BU5D_t1642385972* L_1 = (StringU5BU5D_t1642385972*)L_0;
		int32_t L_2 = KeyValuePair_2_get_Key_m2216667373((KeyValuePair_2_t1008373517 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		int32_t L_3 = KeyValuePair_2_get_Key_m2216667373((KeyValuePair_2_t1008373517 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (int32_t)L_3;
		String_t* L_4 = Int32_ToString_m2960866144((int32_t*)(&V_0), /*hidden argument*/NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t1642385972* L_6 = (StringU5BU5D_t1642385972*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral811305474);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral811305474);
		StringU5BU5D_t1642385972* L_7 = (StringU5BU5D_t1642385972*)L_6;
		Label_t4243202660  L_8 = KeyValuePair_2_get_Value_m590593229((KeyValuePair_2_t1008373517 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
	}
	{
		Label_t4243202660  L_9 = KeyValuePair_2_get_Value_m590593229((KeyValuePair_2_t1008373517 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (Label_t4243202660 )L_9;
		Il2CppObject * L_10 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1));
		NullCheck((Il2CppObject *)L_10);
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Il2CppObject *)L_10);
		G_B6_0 = L_11;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		G_B6_0 = L_12;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t1642385972* L_13 = (StringU5BU5D_t1642385972*)G_B6_3;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral372029425);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral372029425);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m626692867(NULL /*static, unused*/, (StringU5BU5D_t1642385972*)L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m1190571640_AdjustorThunk (Il2CppObject * __this, const MethodInfo* method)
{
	KeyValuePair_2_t1008373517 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1008373517 *>(__this + 1);
	return KeyValuePair_2_ToString_m1190571640(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
