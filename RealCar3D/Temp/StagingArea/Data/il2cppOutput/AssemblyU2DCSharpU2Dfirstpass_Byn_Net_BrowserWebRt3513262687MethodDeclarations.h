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

// Byn.Net.BrowserWebRtcNetworkFactory
struct BrowserWebRtcNetworkFactory_t3513262687;
// Byn.Net.IBasicNetwork
struct IBasicNetwork_t3367305221;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1642385972;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Byn.Net.BrowserWebRtcNetworkFactory::.ctor()
extern "C"  void BrowserWebRtcNetworkFactory__ctor_m1271909048 (BrowserWebRtcNetworkFactory_t3513262687 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Byn.Net.IBasicNetwork Byn.Net.BrowserWebRtcNetworkFactory::CreateDefault(System.String,System.String[])
extern "C"  Il2CppObject * BrowserWebRtcNetworkFactory_CreateDefault_m3634541625 (BrowserWebRtcNetworkFactory_t3513262687 * __this, String_t* ___websocketUrl0, StringU5BU5D_t1642385972* ___iceUrls1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Byn.Net.BrowserWebRtcNetworkFactory::Dispose(System.Boolean)
extern "C"  void BrowserWebRtcNetworkFactory_Dispose_m3921888276 (BrowserWebRtcNetworkFactory_t3513262687 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Byn.Net.BrowserWebRtcNetworkFactory::Dispose()
extern "C"  void BrowserWebRtcNetworkFactory_Dispose_m904739847 (BrowserWebRtcNetworkFactory_t3513262687 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
