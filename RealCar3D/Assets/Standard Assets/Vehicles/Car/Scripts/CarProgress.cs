using UnityEngine;

public class CarProgress : MonoBehaviour
{
    [HideInInspector]
    public string labsTimer;

    public int carLaps;
    public float minutes;
    public float seconds;
    private float timer;

    private void FixedUpdate()
    {
        timer += Time.deltaTime;

        minutes = Mathf.FloorToInt(timer / 60F);
        seconds = Mathf.FloorToInt(timer - minutes * 60);


    }

    public void MakeLab()
    {
        carLaps++;
    }
}
