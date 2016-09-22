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

// UnityStandardAssets.Vehicles.Car.CarController
struct CarController_t1026402524;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityStandardAssets.Vehicles.Car.CarController::.ctor()
extern "C"  void CarController__ctor_m902087607 (CarController_t1026402524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::.cctor()
extern "C"  void CarController__cctor_m2984302936 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.Vehicles.Car.CarController::get_Skidding()
extern "C"  bool CarController_get_Skidding_m1448854211 (CarController_t1026402524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::set_Skidding(System.Boolean)
extern "C"  void CarController_set_Skidding_m777532446 (CarController_t1026402524 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.Vehicles.Car.CarController::get_BrakeInput()
extern "C"  float CarController_get_BrakeInput_m1253588661 (CarController_t1026402524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::set_BrakeInput(System.Single)
extern "C"  void CarController_set_BrakeInput_m596662414 (CarController_t1026402524 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.Vehicles.Car.CarController::get_CurrentSteerAngle()
extern "C"  float CarController_get_CurrentSteerAngle_m678575653 (CarController_t1026402524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.Vehicles.Car.CarController::get_CurrentSpeed()
extern "C"  float CarController_get_CurrentSpeed_m4179766826 (CarController_t1026402524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.Vehicles.Car.CarController::get_MaxSpeed()
extern "C"  float CarController_get_MaxSpeed_m1203653407 (CarController_t1026402524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.Vehicles.Car.CarController::get_Revs()
extern "C"  float CarController_get_Revs_m4115617652 (CarController_t1026402524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::set_Revs(System.Single)
extern "C"  void CarController_set_Revs_m1500584721 (CarController_t1026402524 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.Vehicles.Car.CarController::get_AccelInput()
extern "C"  float CarController_get_AccelInput_m2543146042 (CarController_t1026402524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::set_AccelInput(System.Single)
extern "C"  void CarController_set_AccelInput_m3742429081 (CarController_t1026402524 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::Start()
extern "C"  void CarController_Start_m1626215155 (CarController_t1026402524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::GearChanging()
extern "C"  void CarController_GearChanging_m3864989633 (CarController_t1026402524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.Vehicles.Car.CarController::CurveFactor(System.Single)
extern "C"  float CarController_CurveFactor_m501476788 (Il2CppObject * __this /* static, unused */, float ___factor0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.Vehicles.Car.CarController::ULerp(System.Single,System.Single,System.Single)
extern "C"  float CarController_ULerp_m83875202 (Il2CppObject * __this /* static, unused */, float ___from0, float ___to1, float ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::CalculateGearFactor()
extern "C"  void CarController_CalculateGearFactor_m1694060107 (CarController_t1026402524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::CalculateRevs()
extern "C"  void CarController_CalculateRevs_m4262605341 (CarController_t1026402524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::Move(System.Single,System.Single,System.Single,System.Single)
extern "C"  void CarController_Move_m1380856694 (CarController_t1026402524 * __this, float ___steering0, float ___accel1, float ___footbrake2, float ___handbrake3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::CapSpeed()
extern "C"  void CarController_CapSpeed_m1447887726 (CarController_t1026402524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::ApplyDrive(System.Single,System.Single)
extern "C"  void CarController_ApplyDrive_m3824414215 (CarController_t1026402524 * __this, float ___accel0, float ___footbrake1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::SteerHelper()
extern "C"  void CarController_SteerHelper_m1531935796 (CarController_t1026402524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::AddDownForce()
extern "C"  void CarController_AddDownForce_m4246503897 (CarController_t1026402524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::CheckForWheelSpin()
extern "C"  void CarController_CheckForWheelSpin_m3702793597 (CarController_t1026402524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::TractionControl()
extern "C"  void CarController_TractionControl_m3456780820 (CarController_t1026402524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Car.CarController::AdjustTorque(System.Single)
extern "C"  void CarController_AdjustTorque_m3530238447 (CarController_t1026402524 * __this, float ___forwardSlip0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.Vehicles.Car.CarController::AnySkidSoundPlaying()
extern "C"  bool CarController_AnySkidSoundPlaying_m1431840323 (CarController_t1026402524 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
