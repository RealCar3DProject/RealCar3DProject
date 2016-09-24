using System;
using UnityEngine;
using System.Collections;

public class VibrationController : MonoBehaviour
{

    public Action<string> vibrate;

    public void OnCollisionEnter(Collision collision)
    {
        Debug.Log(collision.gameObject.name);
    }

}
