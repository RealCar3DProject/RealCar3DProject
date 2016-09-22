#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t356221433;
// System.Action`1<System.String>
struct Action_1_t1831019615;
// Byn.Net.IBasicNetwork
struct IBasicNetwork_t3367305221;
// System.Collections.Generic.List`1<Byn.Net.ConnectionId>
struct List_1_t877311631;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebCom
struct  WebCom_t2286758031  : public MonoBehaviour_t1158329972
{
public:
	// System.String WebCom::uSignalingUrl
	String_t* ___uSignalingUrl_2;
	// System.String WebCom::uStunServer
	String_t* ___uStunServer_3;
	// UnityEngine.UI.Text WebCom::RandomText
	Text_t356221433 * ___RandomText_4;
	// System.Action`1<System.String> WebCom::carData
	Action_1_t1831019615 * ___carData_5;
	// System.String WebCom::temp
	String_t* ___temp_6;
	// Byn.Net.IBasicNetwork WebCom::mNetwork
	Il2CppObject * ___mNetwork_7;
	// System.String WebCom::accessCode
	String_t* ___accessCode_8;
	// System.Boolean WebCom::mIsServer
	bool ___mIsServer_9;
	// System.Collections.Generic.List`1<Byn.Net.ConnectionId> WebCom::mConnections
	List_1_t877311631 * ___mConnections_10;

public:
	inline static int32_t get_offset_of_uSignalingUrl_2() { return static_cast<int32_t>(offsetof(WebCom_t2286758031, ___uSignalingUrl_2)); }
	inline String_t* get_uSignalingUrl_2() const { return ___uSignalingUrl_2; }
	inline String_t** get_address_of_uSignalingUrl_2() { return &___uSignalingUrl_2; }
	inline void set_uSignalingUrl_2(String_t* value)
	{
		___uSignalingUrl_2 = value;
		Il2CppCodeGenWriteBarrier(&___uSignalingUrl_2, value);
	}

	inline static int32_t get_offset_of_uStunServer_3() { return static_cast<int32_t>(offsetof(WebCom_t2286758031, ___uStunServer_3)); }
	inline String_t* get_uStunServer_3() const { return ___uStunServer_3; }
	inline String_t** get_address_of_uStunServer_3() { return &___uStunServer_3; }
	inline void set_uStunServer_3(String_t* value)
	{
		___uStunServer_3 = value;
		Il2CppCodeGenWriteBarrier(&___uStunServer_3, value);
	}

	inline static int32_t get_offset_of_RandomText_4() { return static_cast<int32_t>(offsetof(WebCom_t2286758031, ___RandomText_4)); }
	inline Text_t356221433 * get_RandomText_4() const { return ___RandomText_4; }
	inline Text_t356221433 ** get_address_of_RandomText_4() { return &___RandomText_4; }
	inline void set_RandomText_4(Text_t356221433 * value)
	{
		___RandomText_4 = value;
		Il2CppCodeGenWriteBarrier(&___RandomText_4, value);
	}

	inline static int32_t get_offset_of_carData_5() { return static_cast<int32_t>(offsetof(WebCom_t2286758031, ___carData_5)); }
	inline Action_1_t1831019615 * get_carData_5() const { return ___carData_5; }
	inline Action_1_t1831019615 ** get_address_of_carData_5() { return &___carData_5; }
	inline void set_carData_5(Action_1_t1831019615 * value)
	{
		___carData_5 = value;
		Il2CppCodeGenWriteBarrier(&___carData_5, value);
	}

	inline static int32_t get_offset_of_temp_6() { return static_cast<int32_t>(offsetof(WebCom_t2286758031, ___temp_6)); }
	inline String_t* get_temp_6() const { return ___temp_6; }
	inline String_t** get_address_of_temp_6() { return &___temp_6; }
	inline void set_temp_6(String_t* value)
	{
		___temp_6 = value;
		Il2CppCodeGenWriteBarrier(&___temp_6, value);
	}

	inline static int32_t get_offset_of_mNetwork_7() { return static_cast<int32_t>(offsetof(WebCom_t2286758031, ___mNetwork_7)); }
	inline Il2CppObject * get_mNetwork_7() const { return ___mNetwork_7; }
	inline Il2CppObject ** get_address_of_mNetwork_7() { return &___mNetwork_7; }
	inline void set_mNetwork_7(Il2CppObject * value)
	{
		___mNetwork_7 = value;
		Il2CppCodeGenWriteBarrier(&___mNetwork_7, value);
	}

	inline static int32_t get_offset_of_accessCode_8() { return static_cast<int32_t>(offsetof(WebCom_t2286758031, ___accessCode_8)); }
	inline String_t* get_accessCode_8() const { return ___accessCode_8; }
	inline String_t** get_address_of_accessCode_8() { return &___accessCode_8; }
	inline void set_accessCode_8(String_t* value)
	{
		___accessCode_8 = value;
		Il2CppCodeGenWriteBarrier(&___accessCode_8, value);
	}

	inline static int32_t get_offset_of_mIsServer_9() { return static_cast<int32_t>(offsetof(WebCom_t2286758031, ___mIsServer_9)); }
	inline bool get_mIsServer_9() const { return ___mIsServer_9; }
	inline bool* get_address_of_mIsServer_9() { return &___mIsServer_9; }
	inline void set_mIsServer_9(bool value)
	{
		___mIsServer_9 = value;
	}

	inline static int32_t get_offset_of_mConnections_10() { return static_cast<int32_t>(offsetof(WebCom_t2286758031, ___mConnections_10)); }
	inline List_1_t877311631 * get_mConnections_10() const { return ___mConnections_10; }
	inline List_1_t877311631 ** get_address_of_mConnections_10() { return &___mConnections_10; }
	inline void set_mConnections_10(List_1_t877311631 * value)
	{
		___mConnections_10 = value;
		Il2CppCodeGenWriteBarrier(&___mConnections_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
