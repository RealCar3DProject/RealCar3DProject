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
// Assets.Standard_Assets.Vehicles.Car.Scripts.InputController
struct InputController_t3965144620;
// Assets.Standard_Assets.Vehicles.Car.Scripts.CarDataController
struct CarDataController_t1367036510;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Assets.Standard_Assets.Vehicles.Car.Scripts.InputController
struct  InputController_t3965144620  : public MonoBehaviour_t1158329972
{
public:
	// WebCom Assets.Standard_Assets.Vehicles.Car.Scripts.InputController::webCom
	WebCom_t2286758031 * ___webCom_2;
	// System.Single Assets.Standard_Assets.Vehicles.Car.Scripts.InputController::horizontalInput
	float ___horizontalInput_4;
	// System.Single Assets.Standard_Assets.Vehicles.Car.Scripts.InputController::verticalInput
	float ___verticalInput_5;

public:
	inline static int32_t get_offset_of_webCom_2() { return static_cast<int32_t>(offsetof(InputController_t3965144620, ___webCom_2)); }
	inline WebCom_t2286758031 * get_webCom_2() const { return ___webCom_2; }
	inline WebCom_t2286758031 ** get_address_of_webCom_2() { return &___webCom_2; }
	inline void set_webCom_2(WebCom_t2286758031 * value)
	{
		___webCom_2 = value;
		Il2CppCodeGenWriteBarrier(&___webCom_2, value);
	}

	inline static int32_t get_offset_of_horizontalInput_4() { return static_cast<int32_t>(offsetof(InputController_t3965144620, ___horizontalInput_4)); }
	inline float get_horizontalInput_4() const { return ___horizontalInput_4; }
	inline float* get_address_of_horizontalInput_4() { return &___horizontalInput_4; }
	inline void set_horizontalInput_4(float value)
	{
		___horizontalInput_4 = value;
	}

	inline static int32_t get_offset_of_verticalInput_5() { return static_cast<int32_t>(offsetof(InputController_t3965144620, ___verticalInput_5)); }
	inline float get_verticalInput_5() const { return ___verticalInput_5; }
	inline float* get_address_of_verticalInput_5() { return &___verticalInput_5; }
	inline void set_verticalInput_5(float value)
	{
		___verticalInput_5 = value;
	}
};

struct InputController_t3965144620_StaticFields
{
public:
	// Assets.Standard_Assets.Vehicles.Car.Scripts.InputController Assets.Standard_Assets.Vehicles.Car.Scripts.InputController::instance
	InputController_t3965144620 * ___instance_3;
	// Assets.Standard_Assets.Vehicles.Car.Scripts.CarDataController Assets.Standard_Assets.Vehicles.Car.Scripts.InputController::carDataController
	CarDataController_t1367036510 * ___carDataController_6;

public:
	inline static int32_t get_offset_of_instance_3() { return static_cast<int32_t>(offsetof(InputController_t3965144620_StaticFields, ___instance_3)); }
	inline InputController_t3965144620 * get_instance_3() const { return ___instance_3; }
	inline InputController_t3965144620 ** get_address_of_instance_3() { return &___instance_3; }
	inline void set_instance_3(InputController_t3965144620 * value)
	{
		___instance_3 = value;
		Il2CppCodeGenWriteBarrier(&___instance_3, value);
	}

	inline static int32_t get_offset_of_carDataController_6() { return static_cast<int32_t>(offsetof(InputController_t3965144620_StaticFields, ___carDataController_6)); }
	inline CarDataController_t1367036510 * get_carDataController_6() const { return ___carDataController_6; }
	inline CarDataController_t1367036510 ** get_address_of_carDataController_6() { return &___carDataController_6; }
	inline void set_carDataController_6(CarDataController_t1367036510 * value)
	{
		___carDataController_6 = value;
		Il2CppCodeGenWriteBarrier(&___carDataController_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
