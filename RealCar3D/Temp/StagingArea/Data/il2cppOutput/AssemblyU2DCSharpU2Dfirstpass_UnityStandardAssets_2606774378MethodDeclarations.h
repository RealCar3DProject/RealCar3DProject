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

// UnityStandardAssets.Vehicles.Car.CarAudio
struct CarAudio_t2606774378;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_AudioClip1932558630.h"

// System.Void UnityStandardAssets.Vehicles.Car.CarAudio::.ctor()
extern "C"  void CarAudio__ctor_m3864728713 (CarAudio_t2606774378 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarAudio::StartSound()
extern "C"  void CarAudio_StartSound_m1597010096 (CarAudio_t2606774378 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarAudio::StopSound()
extern "C"  void CarAudio_StopSound_m3156077880 (CarAudio_t2606774378 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarAudio::Update()
extern "C"  void CarAudio_Update_m463022902 (CarAudio_t2606774378 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource UnityStandardAssets.Vehicles.Car.CarAudio::SetUpEngineAudioSource(UnityEngine.AudioClip)
extern "C"  AudioSource_t1135106623 * CarAudio_SetUpEngineAudioSource_m789260443 (CarAudio_t2606774378 * __this, AudioClip_t1932558630 * ___clip0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.Vehicles.Car.CarAudio::ULerp(System.Single,System.Single,System.Single)
extern "C"  float CarAudio_ULerp_m1589087788 (Il2CppObject * __this /* static, unused */, float ___from0, float ___to1, float ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
