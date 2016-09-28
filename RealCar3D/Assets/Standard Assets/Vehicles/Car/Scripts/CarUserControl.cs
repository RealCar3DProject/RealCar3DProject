using System;
using Assets.Standard_Assets.Vehicles.Car.Scripts;
using UnityEngine;
using UnityStandardAssets.CrossPlatformInput;

namespace UnityStandardAssets.Vehicles.Car
{
    [RequireComponent(typeof(CarController))]
    public class CarUserControl : MonoBehaviour
    {
        public CarAIControl[] aiCars;

        public float handbrake;
        private float h;
        private float v;
        private CarController m_Car; // the car controller we want to use
        private float startTime = 10;
        private bool started;
        private void Awake()
        {
            m_Car = GetComponent<CarController>();
        }



        private void FixedUpdate()
        {


            if (startTime <= 0 && !started)
            {
                for (int i = 0; i < aiCars.Length; i++)
                {
                    aiCars[i].enabled = true;
                }

                started = true;
            }

            if (!CarManager.isPlaying)
            {

                startTime -= Time.deltaTime;

                h = InputController.instance.GetVertical();
                v =  InputController.instance.GetHorizontal();
                handbrake = InputController.instance.GetBreak();

            }
            else
            {
                handbrake = 1;
            }

#if !MOBILE_INPUT

            m_Car.Move(h, v, v, handbrake);
#else
            m_Car.Move(h, v, v, 0f);
#endif
        }
    }
}
