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

// WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper/ExceptionDelegate
struct ExceptionDelegate_t908296300;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper/ExceptionDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void ExceptionDelegate__ctor_m1160779021 (ExceptionDelegate_t908296300 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper/ExceptionDelegate::Invoke(System.String)
extern "C"  void ExceptionDelegate_Invoke_m259776323 (ExceptionDelegate_t908296300 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper/ExceptionDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ExceptionDelegate_BeginInvoke_m3481467520 (ExceptionDelegate_t908296300 * __this, String_t* ___message0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebRtcCSharp.WebRtcSwigPINVOKE/SWIGExceptionHelper/ExceptionDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void ExceptionDelegate_EndInvoke_m2765166515 (ExceptionDelegate_t908296300 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
