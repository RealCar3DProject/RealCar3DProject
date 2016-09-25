using UnityEngine;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityStandardAssets.Cameras;
using UnityStandardAssets.Vehicles.Car;
public class CarManager : MonoBehaviour
{

    public int lapsCounter = 1;
    public GameObject finalScore;
    public GameObject ScoreText;
    public Text laps;
    public AutoCam mainCamera;
    public static bool isPlaying;
    private string labsTimer;

    private Dictionary<string, string> carsFinished;

    private void Start()
    {
        carsFinished = new Dictionary<string, string>();
        laps.text = string.Format("{0}/{1}", 0, lapsCounter);

    }
    private void OnTriggerEnter(Collider car)
    {
        var currentCar = car.transform.root;
        var currentCarProgress = currentCar.GetComponent<CarProgress>();
        currentCarProgress.MakeLab();

        if (car.CompareTag("AICar"))
        {
            if (lapsCounter - currentCarProgress.carLaps <= 0)
            {
                labsTimer = TimeToMinutes(currentCarProgress);
                if (!carsFinished.ContainsKey(currentCar.name))
                {
                    carsFinished.Add(currentCar.name, labsTimer);

                    if (isPlaying)
                    {
                        SetLeaderBoard(currentCar.name, labsTimer);
                    }

                    currentCar.GetComponent<CarAIControl>().m_Driving = false;
                }

            }
        }

        if (car.CompareTag("Player"))
        {

            laps.text = string.Format("{0}/{1}", currentCarProgress.carLaps, lapsCounter);

            if (lapsCounter - currentCarProgress.carLaps <= 0)
            {
                if (!carsFinished.ContainsKey(currentCar.name))
                {
                    isPlaying = true;
                    labsTimer = TimeToMinutes(currentCarProgress);
                    mainCamera.enabled = false;
                    carsFinished.Add(currentCar.name, labsTimer);
                    finalScore.SetActive(true);
                    SetFinalScore();
                }


            }
        }
    }


    private static string TimeToMinutes(CarProgress currentCarProgress)
    {
        float minutes = currentCarProgress.minutes;
        float seconds = currentCarProgress.seconds;

        string labsTimer = string.Format("{0:0}:{1:00}", minutes, seconds);
        return labsTimer;
    }

    private void SetFinalScore()
    {

        foreach (var score in carsFinished)
        {
            SetLeaderBoard(score.Key, score.Value);
        }
    }

    private void SetLeaderBoard(string key, string value)
    {
        GameObject go = GameObject.Instantiate(ScoreText);
        go.transform.SetParent(finalScore.transform);
        Text text = go.GetComponent<Text>();
        text.text = string.Format("Name: {0} Time:{1}", key, value);
    }

    private void OnDestroy()
    {
        isPlaying = false;
    }

}
