#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Assets.Standard_Assets.Vehicles.Car.Scripts.CarDataController
struct  CarDataController_t1367036510  : public Il2CppObject
{
public:
	// System.Int32 Assets.Standard_Assets.Vehicles.Car.Scripts.CarDataController::carID
	int32_t ___carID_0;
	// System.Int32 Assets.Standard_Assets.Vehicles.Car.Scripts.CarDataController::chosenCarId
	int32_t ___chosenCarId_1;
	// System.Boolean Assets.Standard_Assets.Vehicles.Car.Scripts.CarDataController::forwardCoolDown
	bool ___forwardCoolDown_2;
	// System.Boolean Assets.Standard_Assets.Vehicles.Car.Scripts.CarDataController::backwordCoolDown
	bool ___backwordCoolDown_3;
	// System.Boolean Assets.Standard_Assets.Vehicles.Car.Scripts.CarDataController::Break
	bool ___Break_4;
	// System.Single Assets.Standard_Assets.Vehicles.Car.Scripts.CarDataController::gyro
	float ___gyro_5;

public:
	inline static int32_t get_offset_of_carID_0() { return static_cast<int32_t>(offsetof(CarDataController_t1367036510, ___carID_0)); }
	inline int32_t get_carID_0() const { return ___carID_0; }
	inline int32_t* get_address_of_carID_0() { return &___carID_0; }
	inline void set_carID_0(int32_t value)
	{
		___carID_0 = value;
	}

	inline static int32_t get_offset_of_chosenCarId_1() { return static_cast<int32_t>(offsetof(CarDataController_t1367036510, ___chosenCarId_1)); }
	inline int32_t get_chosenCarId_1() const { return ___chosenCarId_1; }
	inline int32_t* get_address_of_chosenCarId_1() { return &___chosenCarId_1; }
	inline void set_chosenCarId_1(int32_t value)
	{
		___chosenCarId_1 = value;
	}

	inline static int32_t get_offset_of_forwardCoolDown_2() { return static_cast<int32_t>(offsetof(CarDataController_t1367036510, ___forwardCoolDown_2)); }
	inline bool get_forwardCoolDown_2() const { return ___forwardCoolDown_2; }
	inline bool* get_address_of_forwardCoolDown_2() { return &___forwardCoolDown_2; }
	inline void set_forwardCoolDown_2(bool value)
	{
		___forwardCoolDown_2 = value;
	}

	inline static int32_t get_offset_of_backwordCoolDown_3() { return static_cast<int32_t>(offsetof(CarDataController_t1367036510, ___backwordCoolDown_3)); }
	inline bool get_backwordCoolDown_3() const { return ___backwordCoolDown_3; }
	inline bool* get_address_of_backwordCoolDown_3() { return &___backwordCoolDown_3; }
	inline void set_backwordCoolDown_3(bool value)
	{
		___backwordCoolDown_3 = value;
	}

	inline static int32_t get_offset_of_Break_4() { return static_cast<int32_t>(offsetof(CarDataController_t1367036510, ___Break_4)); }
	inline bool get_Break_4() const { return ___Break_4; }
	inline bool* get_address_of_Break_4() { return &___Break_4; }
	inline void set_Break_4(bool value)
	{
		___Break_4 = value;
	}

	inline static int32_t get_offset_of_gyro_5() { return static_cast<int32_t>(offsetof(CarDataController_t1367036510, ___gyro_5)); }
	inline float get_gyro_5() const { return ___gyro_5; }
	inline float* get_address_of_gyro_5() { return &___gyro_5; }
	inline void set_gyro_5(float value)
	{
		___gyro_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
