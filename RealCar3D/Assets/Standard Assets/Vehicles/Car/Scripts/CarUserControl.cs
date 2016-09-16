using System;
using UnityEngine;
using UnityStandardAssets.CrossPlatformInput;

namespace UnityStandardAssets.Vehicles.Car
{
    [RequireComponent(typeof(CarController))]
    public class CarUserControl : MonoBehaviour
    {
        public WebCom temp;
        private CarController m_Car; // the car controller we want to use

        private float forWard = 0;
        private float direction = 0;
        private void Awake()
        {
            // get the car controller
            m_Car = GetComponent<CarController>();
            temp.controllerData = ControllerData;
        }

        private void ControllerData(string s)
        {
            //TODO 
            string[] comands = s.Split(new[] { ' ' }, StringSplitOptions.RemoveEmptyEntries);



            if (s == "forward")
            {
                forWard += 0.3f;
            }
            else if (s == "backward")
            {
                forWard -= 0.3f;
            }

            forWard = Mathf.Clamp(forWard, -1, 1);

            if (comands[0] == "Gyro")
            {
                direction = float.Parse(comands[1]);
            }

        }


        private void FixedUpdate()
        {
            // pass the input to the car!
            float h = direction;//CrossPlatformInputManager.GetAxis("Horizontal");
            float v = forWard;//CrossPlatformInputManager.GetAxis("Vertical");
#if !MOBILE_INPUT
            float handbrake = CrossPlatformInputManager.GetAxis("Jump");
            m_Car.Move(h, v, v, handbrake);
#else
            m_Car.Move(h, v, v, 0f);
#endif
        }
    }
}
