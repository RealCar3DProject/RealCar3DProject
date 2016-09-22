#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Byn.Net.IWebRtcNetworkFactory
struct IWebRtcNetworkFactory_t628604004;
// System.Collections.Generic.List`1<Byn.Net.IBasicNetwork>
struct List_1_t2736426353;

#include "AssemblyU2DCSharpU2Dfirstpass_Byn_Common_UnitySing3060502299.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Byn.Net.WebRtcNetworkFactory
struct  WebRtcNetworkFactory_t2581609443  : public UnitySingleton_1_t3060502299
{
public:
	// Byn.Net.IWebRtcNetworkFactory Byn.Net.WebRtcNetworkFactory::mFactory
	Il2CppObject * ___mFactory_7;
	// System.Collections.Generic.List`1<Byn.Net.IBasicNetwork> Byn.Net.WebRtcNetworkFactory::mCreatedNetworks
	List_1_t2736426353 * ___mCreatedNetworks_8;

public:
	inline static int32_t get_offset_of_mFactory_7() { return static_cast<int32_t>(offsetof(WebRtcNetworkFactory_t2581609443, ___mFactory_7)); }
	inline Il2CppObject * get_mFactory_7() const { return ___mFactory_7; }
	inline Il2CppObject ** get_address_of_mFactory_7() { return &___mFactory_7; }
	inline void set_mFactory_7(Il2CppObject * value)
	{
		___mFactory_7 = value;
		Il2CppCodeGenWriteBarrier(&___mFactory_7, value);
	}

	inline static int32_t get_offset_of_mCreatedNetworks_8() { return static_cast<int32_t>(offsetof(WebRtcNetworkFactory_t2581609443, ___mCreatedNetworks_8)); }
	inline List_1_t2736426353 * get_mCreatedNetworks_8() const { return ___mCreatedNetworks_8; }
	inline List_1_t2736426353 ** get_address_of_mCreatedNetworks_8() { return &___mCreatedNetworks_8; }
	inline void set_mCreatedNetworks_8(List_1_t2736426353 * value)
	{
		___mCreatedNetworks_8 = value;
		Il2CppCodeGenWriteBarrier(&___mCreatedNetworks_8, value);
	}
};

struct WebRtcNetworkFactory_t2581609443_StaticFields
{
public:
	// System.Boolean Byn.Net.WebRtcNetworkFactory::sStaticInitTried
	bool ___sStaticInitTried_5;
	// System.Boolean Byn.Net.WebRtcNetworkFactory::sStaticInitSuccessful
	bool ___sStaticInitSuccessful_6;

public:
	inline static int32_t get_offset_of_sStaticInitTried_5() { return static_cast<int32_t>(offsetof(WebRtcNetworkFactory_t2581609443_StaticFields, ___sStaticInitTried_5)); }
	inline bool get_sStaticInitTried_5() const { return ___sStaticInitTried_5; }
	inline bool* get_address_of_sStaticInitTried_5() { return &___sStaticInitTried_5; }
	inline void set_sStaticInitTried_5(bool value)
	{
		___sStaticInitTried_5 = value;
	}

	inline static int32_t get_offset_of_sStaticInitSuccessful_6() { return static_cast<int32_t>(offsetof(WebRtcNetworkFactory_t2581609443_StaticFields, ___sStaticInitSuccessful_6)); }
	inline bool get_sStaticInitSuccessful_6() const { return ___sStaticInitSuccessful_6; }
	inline bool* get_address_of_sStaticInitSuccessful_6() { return &___sStaticInitSuccessful_6; }
	inline void set_sStaticInitSuccessful_6(bool value)
	{
		___sStaticInitSuccessful_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
