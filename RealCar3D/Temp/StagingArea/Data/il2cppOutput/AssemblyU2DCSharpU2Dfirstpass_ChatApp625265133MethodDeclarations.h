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

// ChatApp
struct ChatApp_t625265133;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Byn_Common_Byn_Net_NetworkEvent1041492056.h"
#include "mscorlib_System_String2029220233.h"

// System.Void ChatApp::.ctor()
extern "C"  void ChatApp__ctor_m1800678910 (ChatApp_t625265133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatApp::Setup()
extern "C"  void ChatApp_Setup_m3697285405 (ChatApp_t625265133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatApp::Reset()
extern "C"  void ChatApp_Reset_m1448227875 (ChatApp_t625265133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatApp::Cleanup()
extern "C"  void ChatApp_Cleanup_m1425941082 (ChatApp_t625265133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatApp::OnDestroy()
extern "C"  void ChatApp_OnDestroy_m2644677961 (ChatApp_t625265133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatApp::FixedUpdate()
extern "C"  void ChatApp_FixedUpdate_m352954745 (ChatApp_t625265133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatApp::HandleNetwork()
extern "C"  void ChatApp_HandleNetwork_m1830097342 (ChatApp_t625265133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatApp::HandleIncommingMessage(Byn.Net.NetworkEvent&)
extern "C"  void ChatApp_HandleIncommingMessage_m3825579510 (ChatApp_t625265133 * __this, NetworkEvent_t1041492056 * ___evt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatApp::SendString(System.String,System.Boolean)
extern "C"  void ChatApp_SendString_m2585351046 (ChatApp_t625265133 * __this, String_t* ___msg0, bool ___reliable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatApp::JoinRoomButtonPressed()
extern "C"  void ChatApp_JoinRoomButtonPressed_m3427996091 (ChatApp_t625265133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatApp::OpenRoomButtonPressed()
extern "C"  void ChatApp_OpenRoomButtonPressed_m1214140313 (ChatApp_t625265133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatApp::InputOnEndEdit()
extern "C"  void ChatApp_InputOnEndEdit_m596354302 (ChatApp_t625265133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatApp::SendButtonPressed()
extern "C"  void ChatApp_SendButtonPressed_m3703060734 (ChatApp_t625265133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
