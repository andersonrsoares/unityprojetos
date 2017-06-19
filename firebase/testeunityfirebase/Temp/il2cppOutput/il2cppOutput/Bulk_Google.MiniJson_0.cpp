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
#include "Google_MiniJson_U3CModuleU3E3783534214.h"
#include "Google_MiniJson_Google_MiniJSON_Json3279401392.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "Google_MiniJson_Google_MiniJSON_Json_Parser1529573252.h"
#include "mscorlib_System_Void1841601450.h"
#include "mscorlib_System_IO_StringReader1480123486.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "mscorlib_System_Char3454481338.h"
#include "mscorlib_System_Int322071877448.h"
#include "mscorlib_System_IO_TextReader1561828458.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_ge309261261.h"
#include "Google_MiniJson_Google_MiniJSON_Json_Parser_TOKEN3628901966.h"
#include "mscorlib_System_Collections_Generic_List_1_gen2058570427.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"
#include "mscorlib_System_Globalization_NumberStyles3408984435.h"
#include "mscorlib_System_Int64909078037.h"
#include "mscorlib_System_Double4078015681.h"
#include "mscorlib_System_Globalization_CultureInfo3500843524.h"
#include "Google_MiniJson_Google_MiniJSON_Json_Serializer3538635535.h"
#include "mscorlib_System_Single2076509932.h"
#include "mscorlib_System_UInt322149682021.h"
#include "mscorlib_System_SByte454417549.h"
#include "mscorlib_System_Byte3683104436.h"
#include "mscorlib_System_Int164041245914.h"
#include "mscorlib_System_UInt16986882611.h"
#include "mscorlib_System_UInt642909196914.h"
#include "mscorlib_System_Decimal724701077.h"

// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// Google.MiniJSON.Json/Parser
struct Parser_t1529573252;
// System.IO.StringReader
struct StringReader_t1480123486;
// System.IO.TextReader
struct TextReader_t1561828458;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t309261261;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2281509423;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t2058570427;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.Globalization.CultureInfo
struct CultureInfo_t3500843524;
// System.IFormatProvider
struct IFormatProvider_t2849799027;
// Google.MiniJSON.Json/Serializer
struct Serializer_t3538635535;
// System.Collections.IList
struct IList_t3321498491;
// System.Collections.IDictionary
struct IDictionary_t596158605;
extern Il2CppClass* StringReader_t1480123486_il2cpp_TypeInfo_var;
extern const uint32_t Parser__ctor_m2221651951_MetadataUsageId;
extern Il2CppClass* Char_t3454481338_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1102494086;
extern const uint32_t Parser_IsWordBreak_m3812142409_MetadataUsageId;
extern Il2CppClass* Parser_t1529573252_il2cpp_TypeInfo_var;
extern Il2CppClass* IDisposable_t2427283555_il2cpp_TypeInfo_var;
extern const uint32_t Parser_Parse_m3440061655_MetadataUsageId;
extern Il2CppClass* Dictionary_2_t309261261_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m2199215334_MethodInfo_var;
extern const MethodInfo* Dictionary_2_set_Item_m1358196493_MethodInfo_var;
extern const uint32_t Parser_ParseObject_m1011857145_MetadataUsageId;
extern Il2CppClass* List_1_t2058570427_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m310736118_MethodInfo_var;
extern const MethodInfo* List_1_Add_m4157722533_MethodInfo_var;
extern const uint32_t Parser_ParseArray_m1627022374_MetadataUsageId;
extern Il2CppClass* Boolean_t3825574718_il2cpp_TypeInfo_var;
extern const uint32_t Parser_ParseByToken_m240811363_MetadataUsageId;
extern Il2CppClass* StringBuilder_t1221177846_il2cpp_TypeInfo_var;
extern Il2CppClass* CharU5BU5D_t1328083999_il2cpp_TypeInfo_var;
extern Il2CppClass* Convert_t2607082565_il2cpp_TypeInfo_var;
extern const uint32_t Parser_ParseString_m540376954_MetadataUsageId;
extern Il2CppClass* CultureInfo_t3500843524_il2cpp_TypeInfo_var;
extern Il2CppClass* Int64_t909078037_il2cpp_TypeInfo_var;
extern Il2CppClass* Double_t4078015681_il2cpp_TypeInfo_var;
extern const uint32_t Parser_ParseNumber_m1365546976_MetadataUsageId;
extern const uint32_t Parser_EatWhitespace_m3233255902_MetadataUsageId;
extern const uint32_t Parser_get_PeekChar_m188703011_MetadataUsageId;
extern const uint32_t Parser_get_NextChar_m2266866267_MetadataUsageId;
extern const uint32_t Parser_get_NextWord_m2722360442_MetadataUsageId;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2609877245;
extern Il2CppCodeGenString* _stringLiteral3323263070;
extern Il2CppCodeGenString* _stringLiteral1743624307;
extern const uint32_t Parser_get_NextToken_m3763916013_MetadataUsageId;
extern const uint32_t Serializer__ctor_m3859286432_MetadataUsageId;
extern Il2CppClass* Serializer_t3538635535_il2cpp_TypeInfo_var;
extern const uint32_t Serializer_Serialize_m3363342071_MetadataUsageId;
extern Il2CppClass* IList_t3321498491_il2cpp_TypeInfo_var;
extern Il2CppClass* IDictionary_t596158605_il2cpp_TypeInfo_var;
extern const uint32_t Serializer_SerializeValue_m3209325657_MetadataUsageId;
extern Il2CppClass* IEnumerable_t2911409499_il2cpp_TypeInfo_var;
extern Il2CppClass* IEnumerator_t1466026749_il2cpp_TypeInfo_var;
extern const uint32_t Serializer_SerializeObject_m391004916_MetadataUsageId;
extern Il2CppClass* ICollection_t91669223_il2cpp_TypeInfo_var;
extern const uint32_t Serializer_SerializeArray_m781371264_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral3943473468;
extern Il2CppCodeGenString* _stringLiteral2088416310;
extern Il2CppCodeGenString* _stringLiteral1093630588;
extern Il2CppCodeGenString* _stringLiteral3419229416;
extern Il2CppCodeGenString* _stringLiteral3062999056;
extern Il2CppCodeGenString* _stringLiteral381169868;
extern Il2CppCodeGenString* _stringLiteral3869568110;
extern Il2CppCodeGenString* _stringLiteral2303484169;
extern Il2CppCodeGenString* _stringLiteral2424443666;
extern const uint32_t Serializer_SerializeString_m3717753767_MetadataUsageId;
extern Il2CppClass* Single_t2076509932_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32_t2071877448_il2cpp_TypeInfo_var;
extern Il2CppClass* UInt32_t2149682021_il2cpp_TypeInfo_var;
extern Il2CppClass* SByte_t454417549_il2cpp_TypeInfo_var;
extern Il2CppClass* Byte_t3683104436_il2cpp_TypeInfo_var;
extern Il2CppClass* Int16_t4041245914_il2cpp_TypeInfo_var;
extern Il2CppClass* UInt16_t986882611_il2cpp_TypeInfo_var;
extern Il2CppClass* UInt64_t2909196914_il2cpp_TypeInfo_var;
extern Il2CppClass* Decimal_t724701077_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral372029424;
extern const uint32_t Serializer_SerializeOther_m3521855290_MetadataUsageId;

// System.Char[]
struct CharU5BU5D_t1328083999  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m584589095_gshared (Dictionary_2_t2281509423 * __this, const MethodInfo* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
extern "C"  void Dictionary_2_set_Item_m1004257024_gshared (Dictionary_2_t2281509423 * __this, Il2CppObject * p0, Il2CppObject * p1, const MethodInfo* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C"  void List_1__ctor_m310736118_gshared (List_1_t2058570427 * __this, const MethodInfo* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C"  void List_1_Add_m4157722533_gshared (List_1_t2058570427 * __this, Il2CppObject * p0, const MethodInfo* method);

// System.Object Google.MiniJSON.Json/Parser::Parse(System.String)
extern "C"  Il2CppObject * Parser_Parse_m3440061655 (Il2CppObject * __this /* static, unused */, String_t* ___jsonString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Google.MiniJSON.Json/Serializer::Serialize(System.Object)
extern "C"  String_t* Serializer_Serialize_m3363342071 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m2551263788 (Il2CppObject * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringReader::.ctor(System.String)
extern "C"  void StringReader__ctor_m643998729 (StringReader_t1480123486 * __this, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::IsWhiteSpace(System.Char)
extern "C"  bool Char_IsWhiteSpace_m1507160293 (Il2CppObject * __this /* static, unused */, Il2CppChar p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.Char)
extern "C"  int32_t String_IndexOf_m2358239236 (String_t* __this, Il2CppChar p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.MiniJSON.Json/Parser::.ctor(System.String)
extern "C"  void Parser__ctor_m2221651951 (Parser_t1529573252 * __this, String_t* ___jsonString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Google.MiniJSON.Json/Parser::ParseValue()
extern "C"  Il2CppObject * Parser_ParseValue_m662543672 (Parser_t1529573252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextReader::Dispose()
extern "C"  void TextReader_Dispose_m4077464570 (TextReader_t1561828458 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
#define Dictionary_2__ctor_m2199215334(__this, method) ((  void (*) (Dictionary_2_t309261261 *, const MethodInfo*))Dictionary_2__ctor_m584589095_gshared)(__this, method)
// Google.MiniJSON.Json/Parser/TOKEN Google.MiniJSON.Json/Parser::get_NextToken()
extern "C"  int32_t Parser_get_NextToken_m3763916013 (Parser_t1529573252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Google.MiniJSON.Json/Parser::ParseString()
extern "C"  String_t* Parser_ParseString_m540376954 (Parser_t1529573252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1)
#define Dictionary_2_set_Item_m1358196493(__this, p0, p1, method) ((  void (*) (Dictionary_2_t309261261 *, String_t*, Il2CppObject *, const MethodInfo*))Dictionary_2_set_Item_m1004257024_gshared)(__this, p0, p1, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
#define List_1__ctor_m310736118(__this, method) ((  void (*) (List_1_t2058570427 *, const MethodInfo*))List_1__ctor_m310736118_gshared)(__this, method)
// System.Object Google.MiniJSON.Json/Parser::ParseByToken(Google.MiniJSON.Json/Parser/TOKEN)
extern "C"  Il2CppObject * Parser_ParseByToken_m240811363 (Parser_t1529573252 * __this, int32_t ___token0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
#define List_1_Add_m4157722533(__this, p0, method) ((  void (*) (List_1_t2058570427 *, Il2CppObject *, const MethodInfo*))List_1_Add_m4157722533_gshared)(__this, p0, method)
// System.Object Google.MiniJSON.Json/Parser::ParseNumber()
extern "C"  Il2CppObject * Parser_ParseNumber_m1365546976 (Parser_t1529573252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> Google.MiniJSON.Json/Parser::ParseObject()
extern "C"  Dictionary_2_t309261261 * Parser_ParseObject_m1011857145 (Parser_t1529573252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Object> Google.MiniJSON.Json/Parser::ParseArray()
extern "C"  List_1_t2058570427 * Parser_ParseArray_m1627022374 (Parser_t1529573252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor()
extern "C"  void StringBuilder__ctor_m3946851802 (StringBuilder_t1221177846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Google.MiniJSON.Json/Parser::get_NextChar()
extern "C"  Il2CppChar Parser_get_NextChar_m2266866267 (Parser_t1529573252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
extern "C"  StringBuilder_t1221177846 * StringBuilder_Append_m3618697540 (StringBuilder_t1221177846 * __this, Il2CppChar p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.Char[])
extern "C"  String_t* String_CreateString_m3818307083 (String_t* __this, CharU5BU5D_t1328083999* ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.String,System.Int32)
extern "C"  int32_t Convert_ToInt32_m3262696010 (Il2CppObject * __this /* static, unused */, String_t* p0, int32_t p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Google.MiniJSON.Json/Parser::get_NextWord()
extern "C"  String_t* Parser_get_NextWord_m2722360442 (Parser_t1529573252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
extern "C"  CultureInfo_t3500843524 * CultureInfo_get_InvariantCulture_m398972276 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int64::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Int64&)
extern "C"  bool Int64_TryParse_m3093198325 (Il2CppObject * __this /* static, unused */, String_t* p0, int32_t p1, Il2CppObject * p2, int64_t* p3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Double::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Double&)
extern "C"  bool Double_TryParse_m815528105 (Il2CppObject * __this /* static, unused */, String_t* p0, int32_t p1, Il2CppObject * p2, double* p3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Google.MiniJSON.Json/Parser::get_PeekChar()
extern "C"  Il2CppChar Parser_get_PeekChar_m188703011 (Parser_t1529573252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.Int32)
extern "C"  Il2CppChar Convert_ToChar_m3827339132 (Il2CppObject * __this /* static, unused */, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Google.MiniJSON.Json/Parser::IsWordBreak(System.Char)
extern "C"  bool Parser_IsWordBreak_m3812142409 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.MiniJSON.Json/Parser::EatWhitespace()
extern "C"  void Parser_EatWhitespace_m3233255902 (Parser_t1529573252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m1790663636 (Il2CppObject * __this /* static, unused */, String_t* p0, String_t* p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.MiniJSON.Json/Serializer::.ctor()
extern "C"  void Serializer__ctor_m3859286432 (Serializer_t3538635535 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.MiniJSON.Json/Serializer::SerializeValue(System.Object)
extern "C"  void Serializer_SerializeValue_m3209325657 (Serializer_t3538635535 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
extern "C"  StringBuilder_t1221177846 * StringBuilder_Append_m3636508479 (StringBuilder_t1221177846 * __this, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.MiniJSON.Json/Serializer::SerializeString(System.String)
extern "C"  void Serializer_SerializeString_m3717753767 (Serializer_t3538635535 * __this, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.MiniJSON.Json/Serializer::SerializeArray(System.Collections.IList)
extern "C"  void Serializer_SerializeArray_m781371264 (Serializer_t3538635535 * __this, Il2CppObject * ___anArray0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.MiniJSON.Json/Serializer::SerializeObject(System.Collections.IDictionary)
extern "C"  void Serializer_SerializeObject_m391004916 (Serializer_t3538635535 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.Char,System.Int32)
extern "C"  String_t* String_CreateString_m2556700934 (String_t* __this, Il2CppChar ___c0, int32_t ___count1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.MiniJSON.Json/Serializer::SerializeOther(System.Object)
extern "C"  void Serializer_SerializeOther_m3521855290 (Serializer_t3538635535 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char[] System.String::ToCharArray()
extern "C"  CharU5BU5D_t1328083999* String_ToCharArray_m870309954 (String_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Char)
extern "C"  int32_t Convert_ToInt32_m3683486440 (Il2CppObject * __this /* static, unused */, Il2CppChar p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Int32::ToString(System.String)
extern "C"  String_t* Int32_ToString_m1064459878 (int32_t* __this, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Single::ToString(System.String,System.IFormatProvider)
extern "C"  String_t* Single_ToString_m3667608664 (float* __this, String_t* p0, Il2CppObject * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
extern "C"  StringBuilder_t1221177846 * StringBuilder_Append_m3541816491 (StringBuilder_t1221177846 * __this, Il2CppObject * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.Object)
extern "C"  double Convert_ToDouble_m3751930225 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Double::ToString(System.String,System.IFormatProvider)
extern "C"  String_t* Double_ToString_m1474956491 (double* __this, String_t* p0, Il2CppObject * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Object Google.MiniJSON.Json::Deserialize(System.String)
extern "C"  Il2CppObject * Json_Deserialize_m1368408977 (Il2CppObject * __this /* static, unused */, String_t* ___json0, const MethodInfo* method)
{
	{
		String_t* L_0 = ___json0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return NULL;
	}

IL_0008:
	{
		String_t* L_1 = ___json0;
		Il2CppObject * L_2 = Parser_Parse_m3440061655(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String Google.MiniJSON.Json::Serialize(System.Object)
extern "C"  String_t* Json_Serialize_m172045766 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = ___obj0;
		String_t* L_1 = Serializer_Serialize_m3363342071(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Google.MiniJSON.Json/Parser::.ctor(System.String)
extern "C"  void Parser__ctor_m2221651951 (Parser_t1529573252 * __this, String_t* ___jsonString0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser__ctor_m2221651951_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___jsonString0;
		StringReader_t1480123486 * L_1 = (StringReader_t1480123486 *)il2cpp_codegen_object_new(StringReader_t1480123486_il2cpp_TypeInfo_var);
		StringReader__ctor_m643998729(L_1, L_0, /*hidden argument*/NULL);
		__this->set_json_0(L_1);
		return;
	}
}
// System.Boolean Google.MiniJSON.Json/Parser::IsWordBreak(System.Char)
extern "C"  bool Parser_IsWordBreak_m3812142409 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_IsWordBreak_m3812142409_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		Il2CppChar L_0 = ___c0;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3454481338_il2cpp_TypeInfo_var);
		bool L_1 = Char_IsWhiteSpace_m1507160293(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		Il2CppChar L_2 = ___c0;
		NullCheck(_stringLiteral1102494086);
		int32_t L_3 = String_IndexOf_m2358239236(_stringLiteral1102494086, L_2, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 1;
	}

IL_001f:
	{
		return (bool)G_B3_0;
	}
}
// System.Object Google.MiniJSON.Json/Parser::Parse(System.String)
extern "C"  Il2CppObject * Parser_Parse_m3440061655 (Il2CppObject * __this /* static, unused */, String_t* ___jsonString0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_Parse_m3440061655_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Parser_t1529573252 * V_0 = NULL;
	Il2CppObject * V_1 = NULL;
	Exception_t1927440687 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1927440687 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___jsonString0;
		Parser_t1529573252 * L_1 = (Parser_t1529573252 *)il2cpp_codegen_object_new(Parser_t1529573252_il2cpp_TypeInfo_var);
		Parser__ctor_m2221651951(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		Parser_t1529573252 * L_2 = V_0;
		NullCheck(L_2);
		Il2CppObject * L_3 = Parser_ParseValue_m662543672(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		IL2CPP_LEAVE(0x20, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		{
			Parser_t1529573252 * L_4 = V_0;
			if (!L_4)
			{
				goto IL_001f;
			}
		}

IL_0019:
		{
			Parser_t1529573252 * L_5 = V_0;
			NullCheck(L_5);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t2427283555_il2cpp_TypeInfo_var, L_5);
		}

IL_001f:
		{
			IL2CPP_END_FINALLY(19)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_JUMP_TBL(0x20, IL_0020)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
	}

IL_0020:
	{
		Il2CppObject * L_6 = V_1;
		return L_6;
	}
}
// System.Void Google.MiniJSON.Json/Parser::Dispose()
extern "C"  void Parser_Dispose_m2029958064 (Parser_t1529573252 * __this, const MethodInfo* method)
{
	{
		StringReader_t1480123486 * L_0 = __this->get_json_0();
		NullCheck(L_0);
		TextReader_Dispose_m4077464570(L_0, /*hidden argument*/NULL);
		__this->set_json_0((StringReader_t1480123486 *)NULL);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> Google.MiniJSON.Json/Parser::ParseObject()
extern "C"  Dictionary_2_t309261261 * Parser_ParseObject_m1011857145 (Parser_t1529573252 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_ParseObject_m1011857145_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t309261261 * V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		Dictionary_2_t309261261 * L_0 = (Dictionary_2_t309261261 *)il2cpp_codegen_object_new(Dictionary_2_t309261261_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2199215334(L_0, /*hidden argument*/Dictionary_2__ctor_m2199215334_MethodInfo_var);
		V_0 = L_0;
		StringReader_t1480123486 * L_1 = __this->get_json_0();
		NullCheck(L_1);
		VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_1);
	}

IL_0012:
	{
		int32_t L_2 = Parser_get_NextToken_m3763916013(__this, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		switch (L_3)
		{
			case 0:
			{
				goto IL_0037;
			}
			case 1:
			{
				goto IL_002b;
			}
			case 2:
			{
				goto IL_003e;
			}
		}
	}

IL_002b:
	{
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) == ((int32_t)6)))
		{
			goto IL_0039;
		}
	}
	{
		goto IL_0040;
	}

IL_0037:
	{
		return (Dictionary_2_t309261261 *)NULL;
	}

IL_0039:
	{
		goto IL_0012;
	}

IL_003e:
	{
		Dictionary_2_t309261261 * L_5 = V_0;
		return L_5;
	}

IL_0040:
	{
		String_t* L_6 = Parser_ParseString_m540376954(__this, /*hidden argument*/NULL);
		V_2 = L_6;
		String_t* L_7 = V_2;
		if (L_7)
		{
			goto IL_004f;
		}
	}
	{
		return (Dictionary_2_t309261261 *)NULL;
	}

IL_004f:
	{
		int32_t L_8 = Parser_get_NextToken_m3763916013(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_8) == ((int32_t)5)))
		{
			goto IL_005d;
		}
	}
	{
		return (Dictionary_2_t309261261 *)NULL;
	}

IL_005d:
	{
		StringReader_t1480123486 * L_9 = __this->get_json_0();
		NullCheck(L_9);
		VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_9);
		Dictionary_2_t309261261 * L_10 = V_0;
		String_t* L_11 = V_2;
		Il2CppObject * L_12 = Parser_ParseValue_m662543672(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Dictionary_2_set_Item_m1358196493(L_10, L_11, L_12, /*hidden argument*/Dictionary_2_set_Item_m1358196493_MethodInfo_var);
		goto IL_007b;
	}

IL_007b:
	{
		goto IL_0012;
	}
}
// System.Collections.Generic.List`1<System.Object> Google.MiniJSON.Json/Parser::ParseArray()
extern "C"  List_1_t2058570427 * Parser_ParseArray_m1627022374 (Parser_t1529573252 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_ParseArray_m1627022374_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t2058570427 * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	Il2CppObject * V_3 = NULL;
	{
		List_1_t2058570427 * L_0 = (List_1_t2058570427 *)il2cpp_codegen_object_new(List_1_t2058570427_il2cpp_TypeInfo_var);
		List_1__ctor_m310736118(L_0, /*hidden argument*/List_1__ctor_m310736118_MethodInfo_var);
		V_0 = L_0;
		StringReader_t1480123486 * L_1 = __this->get_json_0();
		NullCheck(L_1);
		VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_1);
		V_1 = (bool)1;
		goto IL_0061;
	}

IL_0019:
	{
		int32_t L_2 = Parser_get_NextToken_m3763916013(__this, /*hidden argument*/NULL);
		V_2 = L_2;
		int32_t L_3 = V_2;
		switch (((int32_t)((int32_t)L_3-(int32_t)4)))
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_0034;
			}
			case 2:
			{
				goto IL_0041;
			}
		}
	}

IL_0034:
	{
		int32_t L_4 = V_2;
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		goto IL_004d;
	}

IL_003f:
	{
		return (List_1_t2058570427 *)NULL;
	}

IL_0041:
	{
		goto IL_0061;
	}

IL_0046:
	{
		V_1 = (bool)0;
		goto IL_0061;
	}

IL_004d:
	{
		int32_t L_5 = V_2;
		Il2CppObject * L_6 = Parser_ParseByToken_m240811363(__this, L_5, /*hidden argument*/NULL);
		V_3 = L_6;
		List_1_t2058570427 * L_7 = V_0;
		Il2CppObject * L_8 = V_3;
		NullCheck(L_7);
		List_1_Add_m4157722533(L_7, L_8, /*hidden argument*/List_1_Add_m4157722533_MethodInfo_var);
		goto IL_0061;
	}

IL_0061:
	{
		bool L_9 = V_1;
		if (L_9)
		{
			goto IL_0019;
		}
	}
	{
		List_1_t2058570427 * L_10 = V_0;
		return L_10;
	}
}
// System.Object Google.MiniJSON.Json/Parser::ParseValue()
extern "C"  Il2CppObject * Parser_ParseValue_m662543672 (Parser_t1529573252 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = Parser_get_NextToken_m3763916013(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		Il2CppObject * L_2 = Parser_ParseByToken_m240811363(__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Object Google.MiniJSON.Json/Parser::ParseByToken(Google.MiniJSON.Json/Parser/TOKEN)
extern "C"  Il2CppObject * Parser_ParseByToken_m240811363 (Parser_t1529573252 * __this, int32_t ___token0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_ParseByToken_m240811363_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___token0;
		switch (((int32_t)((int32_t)L_0-(int32_t)7)))
		{
			case 0:
			{
				goto IL_0035;
			}
			case 1:
			{
				goto IL_003c;
			}
			case 2:
			{
				goto IL_0051;
			}
			case 3:
			{
				goto IL_0058;
			}
			case 4:
			{
				goto IL_005f;
			}
		}
	}
	{
		int32_t L_1 = ___token0;
		switch (((int32_t)((int32_t)L_1-(int32_t)1)))
		{
			case 0:
			{
				goto IL_0043;
			}
			case 1:
			{
				goto IL_0061;
			}
			case 2:
			{
				goto IL_004a;
			}
		}
	}
	{
		goto IL_0061;
	}

IL_0035:
	{
		String_t* L_2 = Parser_ParseString_m540376954(__this, /*hidden argument*/NULL);
		return L_2;
	}

IL_003c:
	{
		Il2CppObject * L_3 = Parser_ParseNumber_m1365546976(__this, /*hidden argument*/NULL);
		return L_3;
	}

IL_0043:
	{
		Dictionary_2_t309261261 * L_4 = Parser_ParseObject_m1011857145(__this, /*hidden argument*/NULL);
		return L_4;
	}

IL_004a:
	{
		List_1_t2058570427 * L_5 = Parser_ParseArray_m1627022374(__this, /*hidden argument*/NULL);
		return L_5;
	}

IL_0051:
	{
		bool L_6 = ((bool)1);
		Il2CppObject * L_7 = Box(Boolean_t3825574718_il2cpp_TypeInfo_var, &L_6);
		return L_7;
	}

IL_0058:
	{
		bool L_8 = ((bool)0);
		Il2CppObject * L_9 = Box(Boolean_t3825574718_il2cpp_TypeInfo_var, &L_8);
		return L_9;
	}

IL_005f:
	{
		return NULL;
	}

IL_0061:
	{
		return NULL;
	}
}
// System.String Google.MiniJSON.Json/Parser::ParseString()
extern "C"  String_t* Parser_ParseString_m540376954 (Parser_t1529573252 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_ParseString_m540376954_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t1221177846 * V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	bool V_2 = false;
	CharU5BU5D_t1328083999* V_3 = NULL;
	int32_t V_4 = 0;
	{
		StringBuilder_t1221177846 * L_0 = (StringBuilder_t1221177846 *)il2cpp_codegen_object_new(StringBuilder_t1221177846_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3946851802(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		StringReader_t1480123486 * L_1 = __this->get_json_0();
		NullCheck(L_1);
		VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_1);
		V_2 = (bool)1;
		goto IL_0166;
	}

IL_0019:
	{
		StringReader_t1480123486 * L_2 = __this->get_json_0();
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_0031;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_016c;
	}

IL_0031:
	{
		Il2CppChar L_4 = Parser_get_NextChar_m2266866267(__this, /*hidden argument*/NULL);
		V_1 = L_4;
		Il2CppChar L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)34))))
		{
			goto IL_004d;
		}
	}
	{
		Il2CppChar L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)92))))
		{
			goto IL_0054;
		}
	}
	{
		goto IL_0159;
	}

IL_004d:
	{
		V_2 = (bool)0;
		goto IL_0166;
	}

IL_0054:
	{
		StringReader_t1480123486 * L_7 = __this->get_json_0();
		NullCheck(L_7);
		int32_t L_8 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_7);
		if ((!(((uint32_t)L_8) == ((uint32_t)(-1)))))
		{
			goto IL_006c;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_0166;
	}

IL_006c:
	{
		Il2CppChar L_9 = Parser_get_NextChar_m2266866267(__this, /*hidden argument*/NULL);
		V_1 = L_9;
		Il2CppChar L_10 = V_1;
		switch (((int32_t)((int32_t)L_10-(int32_t)((int32_t)114))))
		{
			case 0:
			{
				goto IL_00f7;
			}
			case 1:
			{
				goto IL_008c;
			}
			case 2:
			{
				goto IL_0105;
			}
			case 3:
			{
				goto IL_0113;
			}
		}
	}

IL_008c:
	{
		Il2CppChar L_11 = V_1;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)34))))
		{
			goto IL_00c1;
		}
	}
	{
		Il2CppChar L_12 = V_1;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)47))))
		{
			goto IL_00c1;
		}
	}
	{
		Il2CppChar L_13 = V_1;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)92))))
		{
			goto IL_00c1;
		}
	}
	{
		Il2CppChar L_14 = V_1;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)98))))
		{
			goto IL_00ce;
		}
	}
	{
		Il2CppChar L_15 = V_1;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)102))))
		{
			goto IL_00db;
		}
	}
	{
		Il2CppChar L_16 = V_1;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)110))))
		{
			goto IL_00e9;
		}
	}
	{
		goto IL_0154;
	}

IL_00c1:
	{
		StringBuilder_t1221177846 * L_17 = V_0;
		Il2CppChar L_18 = V_1;
		NullCheck(L_17);
		StringBuilder_Append_m3618697540(L_17, L_18, /*hidden argument*/NULL);
		goto IL_0154;
	}

IL_00ce:
	{
		StringBuilder_t1221177846 * L_19 = V_0;
		NullCheck(L_19);
		StringBuilder_Append_m3618697540(L_19, 8, /*hidden argument*/NULL);
		goto IL_0154;
	}

IL_00db:
	{
		StringBuilder_t1221177846 * L_20 = V_0;
		NullCheck(L_20);
		StringBuilder_Append_m3618697540(L_20, ((int32_t)12), /*hidden argument*/NULL);
		goto IL_0154;
	}

IL_00e9:
	{
		StringBuilder_t1221177846 * L_21 = V_0;
		NullCheck(L_21);
		StringBuilder_Append_m3618697540(L_21, ((int32_t)10), /*hidden argument*/NULL);
		goto IL_0154;
	}

IL_00f7:
	{
		StringBuilder_t1221177846 * L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_Append_m3618697540(L_22, ((int32_t)13), /*hidden argument*/NULL);
		goto IL_0154;
	}

IL_0105:
	{
		StringBuilder_t1221177846 * L_23 = V_0;
		NullCheck(L_23);
		StringBuilder_Append_m3618697540(L_23, ((int32_t)9), /*hidden argument*/NULL);
		goto IL_0154;
	}

IL_0113:
	{
		V_3 = ((CharU5BU5D_t1328083999*)SZArrayNew(CharU5BU5D_t1328083999_il2cpp_TypeInfo_var, (uint32_t)4));
		V_4 = 0;
		goto IL_0132;
	}

IL_0122:
	{
		CharU5BU5D_t1328083999* L_24 = V_3;
		int32_t L_25 = V_4;
		Il2CppChar L_26 = Parser_get_NextChar_m2266866267(__this, /*hidden argument*/NULL);
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (Il2CppChar)L_26);
		int32_t L_27 = V_4;
		V_4 = ((int32_t)((int32_t)L_27+(int32_t)1));
	}

IL_0132:
	{
		int32_t L_28 = V_4;
		if ((((int32_t)L_28) < ((int32_t)4)))
		{
			goto IL_0122;
		}
	}
	{
		StringBuilder_t1221177846 * L_29 = V_0;
		CharU5BU5D_t1328083999* L_30 = V_3;
		String_t* L_31 = String_CreateString_m3818307083(NULL, L_30, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2607082565_il2cpp_TypeInfo_var);
		int32_t L_32 = Convert_ToInt32_m3262696010(NULL /*static, unused*/, L_31, ((int32_t)16), /*hidden argument*/NULL);
		NullCheck(L_29);
		StringBuilder_Append_m3618697540(L_29, (((int32_t)((uint16_t)L_32))), /*hidden argument*/NULL);
		goto IL_0154;
	}

IL_0154:
	{
		goto IL_0166;
	}

IL_0159:
	{
		StringBuilder_t1221177846 * L_33 = V_0;
		Il2CppChar L_34 = V_1;
		NullCheck(L_33);
		StringBuilder_Append_m3618697540(L_33, L_34, /*hidden argument*/NULL);
		goto IL_0166;
	}

IL_0166:
	{
		bool L_35 = V_2;
		if (L_35)
		{
			goto IL_0019;
		}
	}

IL_016c:
	{
		StringBuilder_t1221177846 * L_36 = V_0;
		NullCheck(L_36);
		String_t* L_37 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_36);
		return L_37;
	}
}
// System.Object Google.MiniJSON.Json/Parser::ParseNumber()
extern "C"  Il2CppObject * Parser_ParseNumber_m1365546976 (Parser_t1529573252 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_ParseNumber_m1365546976_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int64_t V_1 = 0;
	double V_2 = 0.0;
	{
		String_t* L_0 = Parser_get_NextWord_m2722360442(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2 = String_IndexOf_m2358239236(L_1, ((int32_t)46), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_004b;
		}
	}
	{
		String_t* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = String_IndexOf_m2358239236(L_3, ((int32_t)69), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_004b;
		}
	}
	{
		String_t* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = String_IndexOf_m2358239236(L_5, ((int32_t)101), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)(-1)))))
		{
			goto IL_004b;
		}
	}
	{
		String_t* L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t3500843524_il2cpp_TypeInfo_var);
		CultureInfo_t3500843524 * L_8 = CultureInfo_get_InvariantCulture_m398972276(NULL /*static, unused*/, /*hidden argument*/NULL);
		Int64_TryParse_m3093198325(NULL /*static, unused*/, L_7, ((int32_t)511), L_8, (&V_1), /*hidden argument*/NULL);
		int64_t L_9 = V_1;
		int64_t L_10 = L_9;
		Il2CppObject * L_11 = Box(Int64_t909078037_il2cpp_TypeInfo_var, &L_10);
		return L_11;
	}

IL_004b:
	{
		String_t* L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t3500843524_il2cpp_TypeInfo_var);
		CultureInfo_t3500843524 * L_13 = CultureInfo_get_InvariantCulture_m398972276(NULL /*static, unused*/, /*hidden argument*/NULL);
		Double_TryParse_m815528105(NULL /*static, unused*/, L_12, ((int32_t)511), L_13, (&V_2), /*hidden argument*/NULL);
		double L_14 = V_2;
		double L_15 = L_14;
		Il2CppObject * L_16 = Box(Double_t4078015681_il2cpp_TypeInfo_var, &L_15);
		return L_16;
	}
}
// System.Void Google.MiniJSON.Json/Parser::EatWhitespace()
extern "C"  void Parser_EatWhitespace_m3233255902 (Parser_t1529573252 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_EatWhitespace_m3233255902_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_0027;
	}

IL_0005:
	{
		StringReader_t1480123486 * L_0 = __this->get_json_0();
		NullCheck(L_0);
		VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_0);
		StringReader_t1480123486 * L_1 = __this->get_json_0();
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0027;
		}
	}
	{
		goto IL_0037;
	}

IL_0027:
	{
		Il2CppChar L_3 = Parser_get_PeekChar_m188703011(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3454481338_il2cpp_TypeInfo_var);
		bool L_4 = Char_IsWhiteSpace_m1507160293(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0005;
		}
	}

IL_0037:
	{
		return;
	}
}
// System.Char Google.MiniJSON.Json/Parser::get_PeekChar()
extern "C"  Il2CppChar Parser_get_PeekChar_m188703011 (Parser_t1529573252 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_get_PeekChar_m188703011_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringReader_t1480123486 * L_0 = __this->get_json_0();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2607082565_il2cpp_TypeInfo_var);
		Il2CppChar L_2 = Convert_ToChar_m3827339132(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Char Google.MiniJSON.Json/Parser::get_NextChar()
extern "C"  Il2CppChar Parser_get_NextChar_m2266866267 (Parser_t1529573252 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_get_NextChar_m2266866267_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringReader_t1480123486 * L_0 = __this->get_json_0();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2607082565_il2cpp_TypeInfo_var);
		Il2CppChar L_2 = Convert_ToChar_m3827339132(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String Google.MiniJSON.Json/Parser::get_NextWord()
extern "C"  String_t* Parser_get_NextWord_m2722360442 (Parser_t1529573252 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_get_NextWord_m2722360442_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t1221177846 * V_0 = NULL;
	{
		StringBuilder_t1221177846 * L_0 = (StringBuilder_t1221177846 *)il2cpp_codegen_object_new(StringBuilder_t1221177846_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3946851802(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_002e;
	}

IL_000b:
	{
		StringBuilder_t1221177846 * L_1 = V_0;
		Il2CppChar L_2 = Parser_get_NextChar_m2266866267(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		StringBuilder_Append_m3618697540(L_1, L_2, /*hidden argument*/NULL);
		StringReader_t1480123486 * L_3 = __this->get_json_0();
		NullCheck(L_3);
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_3);
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_002e;
		}
	}
	{
		goto IL_003e;
	}

IL_002e:
	{
		Il2CppChar L_5 = Parser_get_PeekChar_m188703011(__this, /*hidden argument*/NULL);
		bool L_6 = Parser_IsWordBreak_m3812142409(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_000b;
		}
	}

IL_003e:
	{
		StringBuilder_t1221177846 * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
		return L_8;
	}
}
// Google.MiniJSON.Json/Parser/TOKEN Google.MiniJSON.Json/Parser::get_NextToken()
extern "C"  int32_t Parser_get_NextToken_m3763916013 (Parser_t1529573252 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_get_NextToken_m3763916013_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	String_t* V_1 = NULL;
	{
		Parser_EatWhitespace_m3233255902(__this, /*hidden argument*/NULL);
		StringReader_t1480123486 * L_0 = __this->get_json_0();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_0);
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0019;
		}
	}
	{
		return (int32_t)(0);
	}

IL_0019:
	{
		Il2CppChar L_2 = Parser_get_PeekChar_m188703011(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		Il2CppChar L_3 = V_0;
		switch (((int32_t)((int32_t)L_3-(int32_t)((int32_t)44))))
		{
			case 0:
			{
				goto IL_00bc;
			}
			case 1:
			{
				goto IL_00ce;
			}
			case 2:
			{
				goto IL_0065;
			}
			case 3:
			{
				goto IL_0065;
			}
			case 4:
			{
				goto IL_00ce;
			}
			case 5:
			{
				goto IL_00ce;
			}
			case 6:
			{
				goto IL_00ce;
			}
			case 7:
			{
				goto IL_00ce;
			}
			case 8:
			{
				goto IL_00ce;
			}
			case 9:
			{
				goto IL_00ce;
			}
			case 10:
			{
				goto IL_00ce;
			}
			case 11:
			{
				goto IL_00ce;
			}
			case 12:
			{
				goto IL_00ce;
			}
			case 13:
			{
				goto IL_00ce;
			}
			case 14:
			{
				goto IL_00cc;
			}
		}
	}

IL_0065:
	{
		Il2CppChar L_4 = V_0;
		switch (((int32_t)((int32_t)L_4-(int32_t)((int32_t)91))))
		{
			case 0:
			{
				goto IL_00ac;
			}
			case 1:
			{
				goto IL_007a;
			}
			case 2:
			{
				goto IL_00ae;
			}
		}
	}

IL_007a:
	{
		Il2CppChar L_5 = V_0;
		switch (((int32_t)((int32_t)L_5-(int32_t)((int32_t)123))))
		{
			case 0:
			{
				goto IL_009c;
			}
			case 1:
			{
				goto IL_008f;
			}
			case 2:
			{
				goto IL_009e;
			}
		}
	}

IL_008f:
	{
		Il2CppChar L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)34))))
		{
			goto IL_00ca;
		}
	}
	{
		goto IL_00d0;
	}

IL_009c:
	{
		return (int32_t)(1);
	}

IL_009e:
	{
		StringReader_t1480123486 * L_7 = __this->get_json_0();
		NullCheck(L_7);
		VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_7);
		return (int32_t)(2);
	}

IL_00ac:
	{
		return (int32_t)(3);
	}

IL_00ae:
	{
		StringReader_t1480123486 * L_8 = __this->get_json_0();
		NullCheck(L_8);
		VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_8);
		return (int32_t)(4);
	}

IL_00bc:
	{
		StringReader_t1480123486 * L_9 = __this->get_json_0();
		NullCheck(L_9);
		VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_9);
		return (int32_t)(6);
	}

IL_00ca:
	{
		return (int32_t)(7);
	}

IL_00cc:
	{
		return (int32_t)(5);
	}

IL_00ce:
	{
		return (int32_t)(8);
	}

IL_00d0:
	{
		String_t* L_10 = Parser_get_NextWord_m2722360442(__this, /*hidden argument*/NULL);
		V_1 = L_10;
		String_t* L_11 = V_1;
		if (!L_11)
		{
			goto IL_011b;
		}
	}
	{
		String_t* L_12 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_13 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_12, _stringLiteral2609877245, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0112;
		}
	}
	{
		String_t* L_14 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_15 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_14, _stringLiteral3323263070, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_0115;
		}
	}
	{
		String_t* L_16 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_17 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_16, _stringLiteral1743624307, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_0118;
		}
	}
	{
		goto IL_011b;
	}

IL_0112:
	{
		return (int32_t)(((int32_t)10));
	}

IL_0115:
	{
		return (int32_t)(((int32_t)9));
	}

IL_0118:
	{
		return (int32_t)(((int32_t)11));
	}

IL_011b:
	{
		return (int32_t)(0);
	}
}
// System.Void Google.MiniJSON.Json/Serializer::.ctor()
extern "C"  void Serializer__ctor_m3859286432 (Serializer_t3538635535 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer__ctor_m3859286432_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		StringBuilder_t1221177846 * L_0 = (StringBuilder_t1221177846 *)il2cpp_codegen_object_new(StringBuilder_t1221177846_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3946851802(L_0, /*hidden argument*/NULL);
		__this->set_builder_0(L_0);
		return;
	}
}
// System.String Google.MiniJSON.Json/Serializer::Serialize(System.Object)
extern "C"  String_t* Serializer_Serialize_m3363342071 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_Serialize_m3363342071_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Serializer_t3538635535 * V_0 = NULL;
	{
		Serializer_t3538635535 * L_0 = (Serializer_t3538635535 *)il2cpp_codegen_object_new(Serializer_t3538635535_il2cpp_TypeInfo_var);
		Serializer__ctor_m3859286432(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Serializer_t3538635535 * L_1 = V_0;
		Il2CppObject * L_2 = ___obj0;
		NullCheck(L_1);
		Serializer_SerializeValue_m3209325657(L_1, L_2, /*hidden argument*/NULL);
		Serializer_t3538635535 * L_3 = V_0;
		NullCheck(L_3);
		StringBuilder_t1221177846 * L_4 = L_3->get_builder_0();
		NullCheck(L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		return L_5;
	}
}
// System.Void Google.MiniJSON.Json/Serializer::SerializeValue(System.Object)
extern "C"  void Serializer_SerializeValue_m3209325657 (Serializer_t3538635535 * __this, Il2CppObject * ___value0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_SerializeValue_m3209325657_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppObject * V_0 = NULL;
	Il2CppObject * V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t1221177846 * G_B7_0 = NULL;
	StringBuilder_t1221177846 * G_B6_0 = NULL;
	String_t* G_B8_0 = NULL;
	StringBuilder_t1221177846 * G_B8_1 = NULL;
	{
		Il2CppObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		StringBuilder_t1221177846 * L_1 = __this->get_builder_0();
		NullCheck(L_1);
		StringBuilder_Append_m3636508479(L_1, _stringLiteral1743624307, /*hidden argument*/NULL);
		goto IL_00c6;
	}

IL_001c:
	{
		Il2CppObject * L_2 = ___value0;
		String_t* L_3 = ((String_t*)IsInstSealed(L_2, String_t_il2cpp_TypeInfo_var));
		V_2 = L_3;
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		String_t* L_4 = V_2;
		Serializer_SerializeString_m3717753767(__this, L_4, /*hidden argument*/NULL);
		goto IL_00c6;
	}

IL_0035:
	{
		Il2CppObject * L_5 = ___value0;
		if (!((Il2CppObject *)IsInstSealed(L_5, Boolean_t3825574718_il2cpp_TypeInfo_var)))
		{
			goto IL_006b;
		}
	}
	{
		StringBuilder_t1221177846 * L_6 = __this->get_builder_0();
		Il2CppObject * L_7 = ___value0;
		G_B6_0 = L_6;
		if (!((*(bool*)((bool*)UnBox(L_7, Boolean_t3825574718_il2cpp_TypeInfo_var)))))
		{
			G_B7_0 = L_6;
			goto IL_005b;
		}
	}
	{
		G_B8_0 = _stringLiteral3323263070;
		G_B8_1 = G_B6_0;
		goto IL_0060;
	}

IL_005b:
	{
		G_B8_0 = _stringLiteral2609877245;
		G_B8_1 = G_B7_0;
	}

IL_0060:
	{
		NullCheck(G_B8_1);
		StringBuilder_Append_m3636508479(G_B8_1, G_B8_0, /*hidden argument*/NULL);
		goto IL_00c6;
	}

IL_006b:
	{
		Il2CppObject * L_8 = ___value0;
		Il2CppObject * L_9 = ((Il2CppObject *)IsInst(L_8, IList_t3321498491_il2cpp_TypeInfo_var));
		V_0 = L_9;
		if (!L_9)
		{
			goto IL_0084;
		}
	}
	{
		Il2CppObject * L_10 = V_0;
		Serializer_SerializeArray_m781371264(__this, L_10, /*hidden argument*/NULL);
		goto IL_00c6;
	}

IL_0084:
	{
		Il2CppObject * L_11 = ___value0;
		Il2CppObject * L_12 = ((Il2CppObject *)IsInst(L_11, IDictionary_t596158605_il2cpp_TypeInfo_var));
		V_1 = L_12;
		if (!L_12)
		{
			goto IL_009d;
		}
	}
	{
		Il2CppObject * L_13 = V_1;
		Serializer_SerializeObject_m391004916(__this, L_13, /*hidden argument*/NULL);
		goto IL_00c6;
	}

IL_009d:
	{
		Il2CppObject * L_14 = ___value0;
		if (!((Il2CppObject *)IsInstSealed(L_14, Char_t3454481338_il2cpp_TypeInfo_var)))
		{
			goto IL_00bf;
		}
	}
	{
		Il2CppObject * L_15 = ___value0;
		String_t* L_16 = String_CreateString_m2556700934(NULL, ((*(Il2CppChar*)((Il2CppChar*)UnBox(L_15, Char_t3454481338_il2cpp_TypeInfo_var)))), 1, /*hidden argument*/NULL);
		Serializer_SerializeString_m3717753767(__this, L_16, /*hidden argument*/NULL);
		goto IL_00c6;
	}

IL_00bf:
	{
		Il2CppObject * L_17 = ___value0;
		Serializer_SerializeOther_m3521855290(__this, L_17, /*hidden argument*/NULL);
	}

IL_00c6:
	{
		return;
	}
}
// System.Void Google.MiniJSON.Json/Serializer::SerializeObject(System.Collections.IDictionary)
extern "C"  void Serializer_SerializeObject_m391004916 (Serializer_t3538635535 * __this, Il2CppObject * ___obj0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_SerializeObject_m391004916_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Il2CppObject * V_1 = NULL;
	Il2CppObject * V_2 = NULL;
	Il2CppObject * V_3 = NULL;
	Exception_t1927440687 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1927440687 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (bool)1;
		StringBuilder_t1221177846 * L_0 = __this->get_builder_0();
		NullCheck(L_0);
		StringBuilder_Append_m3618697540(L_0, ((int32_t)123), /*hidden argument*/NULL);
		Il2CppObject * L_1 = ___obj0;
		NullCheck(L_1);
		Il2CppObject * L_2 = InterfaceFuncInvoker0< Il2CppObject * >::Invoke(4 /* System.Collections.ICollection System.Collections.IDictionary::get_Keys() */, IDictionary_t596158605_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		Il2CppObject * L_3 = InterfaceFuncInvoker0< Il2CppObject * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t2911409499_il2cpp_TypeInfo_var, L_2);
		V_2 = L_3;
	}

IL_001c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0065;
		}

IL_0021:
		{
			Il2CppObject * L_4 = V_2;
			NullCheck(L_4);
			Il2CppObject * L_5 = InterfaceFuncInvoker0< Il2CppObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_4);
			V_1 = L_5;
			bool L_6 = V_0;
			if (L_6)
			{
				goto IL_003c;
			}
		}

IL_002e:
		{
			StringBuilder_t1221177846 * L_7 = __this->get_builder_0();
			NullCheck(L_7);
			StringBuilder_Append_m3618697540(L_7, ((int32_t)44), /*hidden argument*/NULL);
		}

IL_003c:
		{
			Il2CppObject * L_8 = V_1;
			NullCheck(L_8);
			String_t* L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
			Serializer_SerializeString_m3717753767(__this, L_9, /*hidden argument*/NULL);
			StringBuilder_t1221177846 * L_10 = __this->get_builder_0();
			NullCheck(L_10);
			StringBuilder_Append_m3618697540(L_10, ((int32_t)58), /*hidden argument*/NULL);
			Il2CppObject * L_11 = ___obj0;
			Il2CppObject * L_12 = V_1;
			NullCheck(L_11);
			Il2CppObject * L_13 = InterfaceFuncInvoker1< Il2CppObject *, Il2CppObject * >::Invoke(2 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t596158605_il2cpp_TypeInfo_var, L_11, L_12);
			Serializer_SerializeValue_m3209325657(__this, L_13, /*hidden argument*/NULL);
			V_0 = (bool)0;
		}

IL_0065:
		{
			Il2CppObject * L_14 = V_2;
			NullCheck(L_14);
			bool L_15 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_14);
			if (L_15)
			{
				goto IL_0021;
			}
		}

IL_0070:
		{
			IL2CPP_LEAVE(0x89, FINALLY_0075);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1927440687 *)e.ex;
		goto FINALLY_0075;
	}

FINALLY_0075:
	{ // begin finally (depth: 1)
		{
			Il2CppObject * L_16 = V_2;
			Il2CppObject * L_17 = ((Il2CppObject *)IsInst(L_16, IDisposable_t2427283555_il2cpp_TypeInfo_var));
			V_3 = L_17;
			if (!L_17)
			{
				goto IL_0088;
			}
		}

IL_0082:
		{
			Il2CppObject * L_18 = V_3;
			NullCheck(L_18);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t2427283555_il2cpp_TypeInfo_var, L_18);
		}

IL_0088:
		{
			IL2CPP_END_FINALLY(117)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(117)
	{
		IL2CPP_JUMP_TBL(0x89, IL_0089)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1927440687 *)
	}

IL_0089:
	{
		StringBuilder_t1221177846 * L_19 = __this->get_builder_0();
		NullCheck(L_19);
		StringBuilder_Append_m3618697540(L_19, ((int32_t)125), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Google.MiniJSON.Json/Serializer::SerializeArray(System.Collections.IList)
extern "C"  void Serializer_SerializeArray_m781371264 (Serializer_t3538635535 * __this, Il2CppObject * ___anArray0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_SerializeArray_m781371264_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	Il2CppObject * V_2 = NULL;
	{
		StringBuilder_t1221177846 * L_0 = __this->get_builder_0();
		NullCheck(L_0);
		StringBuilder_Append_m3618697540(L_0, ((int32_t)91), /*hidden argument*/NULL);
		V_0 = (bool)1;
		V_1 = 0;
		goto IL_0040;
	}

IL_0017:
	{
		Il2CppObject * L_1 = ___anArray0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppObject * L_3 = InterfaceFuncInvoker1< Il2CppObject *, int32_t >::Invoke(2 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t3321498491_il2cpp_TypeInfo_var, L_1, L_2);
		V_2 = L_3;
		bool L_4 = V_0;
		if (L_4)
		{
			goto IL_0033;
		}
	}
	{
		StringBuilder_t1221177846 * L_5 = __this->get_builder_0();
		NullCheck(L_5);
		StringBuilder_Append_m3618697540(L_5, ((int32_t)44), /*hidden argument*/NULL);
	}

IL_0033:
	{
		Il2CppObject * L_6 = V_2;
		Serializer_SerializeValue_m3209325657(__this, L_6, /*hidden argument*/NULL);
		V_0 = (bool)0;
		int32_t L_7 = V_1;
		V_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0040:
	{
		int32_t L_8 = V_1;
		Il2CppObject * L_9 = ___anArray0;
		NullCheck(L_9);
		int32_t L_10 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t91669223_il2cpp_TypeInfo_var, L_9);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t1221177846 * L_11 = __this->get_builder_0();
		NullCheck(L_11);
		StringBuilder_Append_m3618697540(L_11, ((int32_t)93), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Google.MiniJSON.Json/Serializer::SerializeString(System.String)
extern "C"  void Serializer_SerializeString_m3717753767 (Serializer_t3538635535 * __this, String_t* ___str0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_SerializeString_m3717753767_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t1328083999* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	int32_t V_3 = 0;
	{
		StringBuilder_t1221177846 * L_0 = __this->get_builder_0();
		NullCheck(L_0);
		StringBuilder_Append_m3618697540(L_0, ((int32_t)34), /*hidden argument*/NULL);
		String_t* L_1 = ___str0;
		NullCheck(L_1);
		CharU5BU5D_t1328083999* L_2 = String_ToCharArray_m870309954(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_014a;
	}

IL_001c:
	{
		CharU5BU5D_t1328083999* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint16_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		Il2CppChar L_7 = V_2;
		switch (((int32_t)((int32_t)L_7-(int32_t)8)))
		{
			case 0:
			{
				goto IL_0081;
			}
			case 1:
			{
				goto IL_00d9;
			}
			case 2:
			{
				goto IL_00ad;
			}
			case 3:
			{
				goto IL_0040;
			}
			case 4:
			{
				goto IL_0097;
			}
			case 5:
			{
				goto IL_00c3;
			}
		}
	}

IL_0040:
	{
		Il2CppChar L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)34))))
		{
			goto IL_0055;
		}
	}
	{
		Il2CppChar L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)92))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_00ef;
	}

IL_0055:
	{
		StringBuilder_t1221177846 * L_10 = __this->get_builder_0();
		NullCheck(L_10);
		StringBuilder_Append_m3636508479(L_10, _stringLiteral3943473468, /*hidden argument*/NULL);
		goto IL_0146;
	}

IL_006b:
	{
		StringBuilder_t1221177846 * L_11 = __this->get_builder_0();
		NullCheck(L_11);
		StringBuilder_Append_m3636508479(L_11, _stringLiteral2088416310, /*hidden argument*/NULL);
		goto IL_0146;
	}

IL_0081:
	{
		StringBuilder_t1221177846 * L_12 = __this->get_builder_0();
		NullCheck(L_12);
		StringBuilder_Append_m3636508479(L_12, _stringLiteral1093630588, /*hidden argument*/NULL);
		goto IL_0146;
	}

IL_0097:
	{
		StringBuilder_t1221177846 * L_13 = __this->get_builder_0();
		NullCheck(L_13);
		StringBuilder_Append_m3636508479(L_13, _stringLiteral3419229416, /*hidden argument*/NULL);
		goto IL_0146;
	}

IL_00ad:
	{
		StringBuilder_t1221177846 * L_14 = __this->get_builder_0();
		NullCheck(L_14);
		StringBuilder_Append_m3636508479(L_14, _stringLiteral3062999056, /*hidden argument*/NULL);
		goto IL_0146;
	}

IL_00c3:
	{
		StringBuilder_t1221177846 * L_15 = __this->get_builder_0();
		NullCheck(L_15);
		StringBuilder_Append_m3636508479(L_15, _stringLiteral381169868, /*hidden argument*/NULL);
		goto IL_0146;
	}

IL_00d9:
	{
		StringBuilder_t1221177846 * L_16 = __this->get_builder_0();
		NullCheck(L_16);
		StringBuilder_Append_m3636508479(L_16, _stringLiteral3869568110, /*hidden argument*/NULL);
		goto IL_0146;
	}

IL_00ef:
	{
		Il2CppChar L_17 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2607082565_il2cpp_TypeInfo_var);
		int32_t L_18 = Convert_ToInt32_m3683486440(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		V_3 = L_18;
		int32_t L_19 = V_3;
		if ((((int32_t)L_19) < ((int32_t)((int32_t)32))))
		{
			goto IL_0118;
		}
	}
	{
		int32_t L_20 = V_3;
		if ((((int32_t)L_20) > ((int32_t)((int32_t)126))))
		{
			goto IL_0118;
		}
	}
	{
		StringBuilder_t1221177846 * L_21 = __this->get_builder_0();
		Il2CppChar L_22 = V_2;
		NullCheck(L_21);
		StringBuilder_Append_m3618697540(L_21, L_22, /*hidden argument*/NULL);
		goto IL_0141;
	}

IL_0118:
	{
		StringBuilder_t1221177846 * L_23 = __this->get_builder_0();
		NullCheck(L_23);
		StringBuilder_Append_m3636508479(L_23, _stringLiteral2303484169, /*hidden argument*/NULL);
		StringBuilder_t1221177846 * L_24 = __this->get_builder_0();
		String_t* L_25 = Int32_ToString_m1064459878((&V_3), _stringLiteral2424443666, /*hidden argument*/NULL);
		NullCheck(L_24);
		StringBuilder_Append_m3636508479(L_24, L_25, /*hidden argument*/NULL);
	}

IL_0141:
	{
		goto IL_0146;
	}

IL_0146:
	{
		int32_t L_26 = V_1;
		V_1 = ((int32_t)((int32_t)L_26+(int32_t)1));
	}

IL_014a:
	{
		int32_t L_27 = V_1;
		CharU5BU5D_t1328083999* L_28 = V_0;
		NullCheck(L_28);
		if ((((int32_t)L_27) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_28)->max_length)))))))
		{
			goto IL_001c;
		}
	}
	{
		StringBuilder_t1221177846 * L_29 = __this->get_builder_0();
		NullCheck(L_29);
		StringBuilder_Append_m3618697540(L_29, ((int32_t)34), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Google.MiniJSON.Json/Serializer::SerializeOther(System.Object)
extern "C"  void Serializer_SerializeOther_m3521855290 (Serializer_t3538635535 * __this, Il2CppObject * ___value0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_SerializeOther_m3521855290_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	double V_1 = 0.0;
	{
		Il2CppObject * L_0 = ___value0;
		if (!((Il2CppObject *)IsInstSealed(L_0, Single_t2076509932_il2cpp_TypeInfo_var)))
		{
			goto IL_0034;
		}
	}
	{
		StringBuilder_t1221177846 * L_1 = __this->get_builder_0();
		Il2CppObject * L_2 = ___value0;
		V_0 = ((*(float*)((float*)UnBox(L_2, Single_t2076509932_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t3500843524_il2cpp_TypeInfo_var);
		CultureInfo_t3500843524 * L_3 = CultureInfo_get_InvariantCulture_m398972276(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_4 = Single_ToString_m3667608664((&V_0), _stringLiteral372029424, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		StringBuilder_Append_m3636508479(L_1, L_4, /*hidden argument*/NULL);
		goto IL_00e9;
	}

IL_0034:
	{
		Il2CppObject * L_5 = ___value0;
		if (((Il2CppObject *)IsInstSealed(L_5, Int32_t2071877448_il2cpp_TypeInfo_var)))
		{
			goto IL_008c;
		}
	}
	{
		Il2CppObject * L_6 = ___value0;
		if (((Il2CppObject *)IsInstSealed(L_6, UInt32_t2149682021_il2cpp_TypeInfo_var)))
		{
			goto IL_008c;
		}
	}
	{
		Il2CppObject * L_7 = ___value0;
		if (((Il2CppObject *)IsInstSealed(L_7, Int64_t909078037_il2cpp_TypeInfo_var)))
		{
			goto IL_008c;
		}
	}
	{
		Il2CppObject * L_8 = ___value0;
		if (((Il2CppObject *)IsInstSealed(L_8, SByte_t454417549_il2cpp_TypeInfo_var)))
		{
			goto IL_008c;
		}
	}
	{
		Il2CppObject * L_9 = ___value0;
		if (((Il2CppObject *)IsInstSealed(L_9, Byte_t3683104436_il2cpp_TypeInfo_var)))
		{
			goto IL_008c;
		}
	}
	{
		Il2CppObject * L_10 = ___value0;
		if (((Il2CppObject *)IsInstSealed(L_10, Int16_t4041245914_il2cpp_TypeInfo_var)))
		{
			goto IL_008c;
		}
	}
	{
		Il2CppObject * L_11 = ___value0;
		if (((Il2CppObject *)IsInstSealed(L_11, UInt16_t986882611_il2cpp_TypeInfo_var)))
		{
			goto IL_008c;
		}
	}
	{
		Il2CppObject * L_12 = ___value0;
		if (!((Il2CppObject *)IsInstSealed(L_12, UInt64_t2909196914_il2cpp_TypeInfo_var)))
		{
			goto IL_009e;
		}
	}

IL_008c:
	{
		StringBuilder_t1221177846 * L_13 = __this->get_builder_0();
		Il2CppObject * L_14 = ___value0;
		NullCheck(L_13);
		StringBuilder_Append_m3541816491(L_13, L_14, /*hidden argument*/NULL);
		goto IL_00e9;
	}

IL_009e:
	{
		Il2CppObject * L_15 = ___value0;
		if (((Il2CppObject *)IsInstSealed(L_15, Double_t4078015681_il2cpp_TypeInfo_var)))
		{
			goto IL_00b4;
		}
	}
	{
		Il2CppObject * L_16 = ___value0;
		if (!((Il2CppObject *)IsInstSealed(L_16, Decimal_t724701077_il2cpp_TypeInfo_var)))
		{
			goto IL_00dd;
		}
	}

IL_00b4:
	{
		StringBuilder_t1221177846 * L_17 = __this->get_builder_0();
		Il2CppObject * L_18 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2607082565_il2cpp_TypeInfo_var);
		double L_19 = Convert_ToDouble_m3751930225(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		V_1 = L_19;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t3500843524_il2cpp_TypeInfo_var);
		CultureInfo_t3500843524 * L_20 = CultureInfo_get_InvariantCulture_m398972276(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_21 = Double_ToString_m1474956491((&V_1), _stringLiteral372029424, L_20, /*hidden argument*/NULL);
		NullCheck(L_17);
		StringBuilder_Append_m3636508479(L_17, L_21, /*hidden argument*/NULL);
		goto IL_00e9;
	}

IL_00dd:
	{
		Il2CppObject * L_22 = ___value0;
		NullCheck(L_22);
		String_t* L_23 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_22);
		Serializer_SerializeString_m3717753767(__this, L_23, /*hidden argument*/NULL);
	}

IL_00e9:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
