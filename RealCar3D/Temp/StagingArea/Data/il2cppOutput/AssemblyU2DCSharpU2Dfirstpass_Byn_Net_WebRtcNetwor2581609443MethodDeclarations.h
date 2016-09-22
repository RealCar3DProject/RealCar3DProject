#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Byn.Net.WebRtcNetworkFactory
struct WebRtcNetworkFactory_t2581609443;
// Byn.Net.IBasicNetwork
struct IBasicNetwork_t3367305221;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1642385972;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Byn.Net.WebRtcNetworkFactory::.ctor()
extern "C"  void WebRtcNetworkFactory__ctor_m2616585088 (WebRtcNetworkFactory_t2581609443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Byn.Net.WebRtcNetworkFactory::.cctor()
extern "C"  void WebRtcNetworkFactory__cctor_m2004779375 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Byn.Net.WebRtcNetworkFactory::get_StaticInitSuccessful()
extern "C"  bool WebRtcNetworkFactory_get_StaticInitSuccessful_m545058859 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Byn.Net.WebRtcNetworkFactory::CheckNativeSupport()
extern "C"  bool WebRtcNetworkFactory_CheckNativeSupport_m4030637542 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Byn.Net.WebRtcNetworkFactory::LogNativeSupportInfo()
extern "C"  void WebRtcNetworkFactory_LogNativeSupportInfo_m533922058 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Byn.Net.WebRtcNetworkFactory::TryStaticInitialize()
extern "C"  void WebRtcNetworkFactory_TryStaticInitialize_m2406280191 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Byn.Net.WebRtcNetworkFactory::TryInitAndroid()
extern "C"  bool WebRtcNetworkFactory_TryInitAndroid_m3047090014 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Byn.Net.IBasicNetwork Byn.Net.WebRtcNetworkFactory::CreateDefault(System.String,System.String[])
extern "C"  Il2CppObject * WebRtcNetworkFactory_CreateDefault_m75539565 (WebRtcNetworkFactory_t2581609443 * __this, String_t* ___websocketUrl0, StringU5BU5D_t1642385972* ___urls1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Byn.Net.WebRtcNetworkFactory::OnDestroy()
extern "C"  void WebRtcNetworkFactory_OnDestroy_m2073018435 (WebRtcNetworkFactory_t2581609443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
