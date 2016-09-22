#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// WebCom
struct WebCom_t2286758031;
// UnityStandardAssets.Vehicles.Car.CarController
struct CarController_t1026402524;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Vehicles.Car.CarUserControl
struct  CarUserControl_t1838667936  : public MonoBehaviour_t1158329972
{
public:
	// WebCom UnityStandardAssets.Vehicles.Car.CarUserControl::webCom
	WebCom_t2286758031 * ___webCom_2;
	// UnityStandardAssets.Vehicles.Car.CarController UnityStandardAssets.Vehicles.Car.CarUserControl::m_Car
	CarController_t1026402524 * ___m_Car_3;
	// System.Single UnityStandardAssets.Vehicles.Car.CarUserControl::forWard
	float ___forWard_4;
	// System.Single UnityStandardAssets.Vehicles.Car.CarUserControl::direction
	float ___direction_5;
	// System.String UnityStandardAssets.Vehicles.Car.CarUserControl::carData
	String_t* ___carData_6;

public:
	inline static int32_t get_offset_of_webCom_2() { return static_cast<int32_t>(offsetof(CarUserControl_t1838667936, ___webCom_2)); }
	inline WebCom_t2286758031 * get_webCom_2() const { return ___webCom_2; }
	inline WebCom_t2286758031 ** get_address_of_webCom_2() { return &___webCom_2; }
	inline void set_webCom_2(WebCom_t2286758031 * value)
	{
		___webCom_2 = value;
		Il2CppCodeGenWriteBarrier(&___webCom_2, value);
	}

	inline static int32_t get_offset_of_m_Car_3() { return static_cast<int32_t>(offsetof(CarUserControl_t1838667936, ___m_Car_3)); }
	inline CarController_t1026402524 * get_m_Car_3() const { return ___m_Car_3; }
	inline CarController_t1026402524 ** get_address_of_m_Car_3() { return &___m_Car_3; }
	inline void set_m_Car_3(CarController_t1026402524 * value)
	{
		___m_Car_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_Car_3, value);
	}

	inline static int32_t get_offset_of_forWard_4() { return static_cast<int32_t>(offsetof(CarUserControl_t1838667936, ___forWard_4)); }
	inline float get_forWard_4() const { return ___forWard_4; }
	inline float* get_address_of_forWard_4() { return &___forWard_4; }
	inline void set_forWard_4(float value)
	{
		___forWard_4 = value;
	}

	inline static int32_t get_offset_of_direction_5() { return static_cast<int32_t>(offsetof(CarUserControl_t1838667936, ___direction_5)); }
	inline float get_direction_5() const { return ___direction_5; }
	inline float* get_address_of_direction_5() { return &___direction_5; }
	inline void set_direction_5(float value)
	{
		___direction_5 = value;
	}

	inline static int32_t get_offset_of_carData_6() { return static_cast<int32_t>(offsetof(CarUserControl_t1838667936, ___carData_6)); }
	inline String_t* get_carData_6() const { return ___carData_6; }
	inline String_t** get_address_of_carData_6() { return &___carData_6; }
	inline void set_carData_6(String_t* value)
	{
		___carData_6 = value;
		Il2CppCodeGenWriteBarrier(&___carData_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
