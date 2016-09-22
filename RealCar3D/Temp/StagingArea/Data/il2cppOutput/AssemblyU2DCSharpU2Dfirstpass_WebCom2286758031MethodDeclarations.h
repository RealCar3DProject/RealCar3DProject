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

// WebCom
struct WebCom_t2286758031;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Byn_Common_Byn_Net_NetworkEvent1041492056.h"
#include "mscorlib_System_String2029220233.h"

// System.Void WebCom::.ctor()
extern "C"  void WebCom__ctor_m3649803868 (WebCom_t2286758031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebCom::Setup()
extern "C"  void WebCom_Setup_m3079063587 (WebCom_t2286758031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebCom::Reset()
extern "C"  void WebCom_Reset_m1042936149 (WebCom_t2286758031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebCom::Cleanup()
extern "C"  void WebCom_Cleanup_m4132716176 (WebCom_t2286758031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebCom::OnDestroy()
extern "C"  void WebCom_OnDestroy_m1364438431 (WebCom_t2286758031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebCom::Start()
extern "C"  void WebCom_Start_m2602333092 (WebCom_t2286758031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebCom::FixedUpdate()
extern "C"  void WebCom_FixedUpdate_m1005836983 (WebCom_t2286758031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebCom::HandleNetwork()
extern "C"  void WebCom_HandleNetwork_m862889108 (WebCom_t2286758031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebCom::HandleIncommingMessage(Byn.Net.NetworkEvent&)
extern "C"  void WebCom_HandleIncommingMessage_m3571151600 (WebCom_t2286758031 * __this, NetworkEvent_t1041492056 * ___evt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebCom::SendString(System.String,System.Boolean)
extern "C"  void WebCom_SendString_m2968512072 (WebCom_t2286758031 * __this, String_t* ___msg0, bool ___reliable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebCom::JoinRoomButtonPressed()
extern "C"  void WebCom_JoinRoomButtonPressed_m798653085 (WebCom_t2286758031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebCom::OpenRoomButtonPressed()
extern "C"  void WebCom_OpenRoomButtonPressed_m715358291 (WebCom_t2286758031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebCom::InputOnEndEdit()
extern "C"  void WebCom_InputOnEndEdit_m3163392108 (WebCom_t2286758031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebCom::SendButtonPressed()
extern "C"  void WebCom_SendButtonPressed_m490213616 (WebCom_t2286758031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
