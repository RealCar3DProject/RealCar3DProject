using UnityEngine;

namespace Assets.Standard_Assets.Vehicles.Car.Scripts
{

    enum Direction
    {
        Forward,
        Reverse
    }
    class InputController : MonoBehaviour
    {

        public WebCom webCom;

        public static InputController instance;

        private float horizontalInput;
        private float verticalInput;
        private static CarDataController carDataController;

        public void Awake()
        {
            instance = this.gameObject.GetComponent<InputController>();
            carDataController = new CarDataController();
            webCom.carData = GetData;
            Debug.Log(webCom.gameObject.name);
        }

        private void GetData(string data)
        {
            carDataController = JsonUtility.FromJson<CarDataController>(data);
        }

        public float GetHorizontal()
        {


            ForwardData(carDataController.forwardCoolDown);


            if (!carDataController.backwordCoolDown)
            {
                ReverseData(carDataController.backwordCoolDown);

            }

            if ((carDataController.backwordCoolDown && carDataController.forwardCoolDown))
            {
                horizontalInput = 0;
            }


            return horizontalInput;
        }

        public int GetBreak()
        {

            return carDataController.Break;
        }
        public float GetVertical()
        {
            return carDataController.gyro;
        }

        private void ForwardData(bool isForward)
        {
            if (!isForward)
            {
                horizontalInput += 0.3f;

            }

            horizontalInput = Mathf.Clamp(horizontalInput, 0, 1);
        }

        private void ReverseData(bool isForward)
        {
            if (!isForward)
            {
                horizontalInput -= 0.3f;
            }

            horizontalInput = Mathf.Clamp(horizontalInput, -1, 0);
        }
    }
}
