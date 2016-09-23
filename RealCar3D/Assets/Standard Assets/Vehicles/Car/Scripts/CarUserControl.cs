using System;
using Assets.Standard_Assets.Vehicles.Car.Scripts;
using UnityEngine;
using UnityStandardAssets.CrossPlatformInput;

namespace UnityStandardAssets.Vehicles.Car
{
    [RequireComponent(typeof(CarController))]
    public class CarUserControl : MonoBehaviour
    {
        public WebCom webCom;
        private CarController m_Car; // the car controller we want to use
        private float forWard = 0;
        private float direction = 0;
        private string carData;
        private void Awake()
        {
            m_Car = GetComponent<CarController>();
        }



        private void FixedUpdate()
        {

            float h = InputController.instance.GetVertical();
            float v = InputController.instance.GetHorizontal();

#if !MOBILE_INPUT
            float handbrake = InputController.instance.GetBreak();

            m_Car.Move(h, v, v, handbrake);
#else
            m_Car.Move(h, v, v, 0f);
#endif
        }
    }
}
