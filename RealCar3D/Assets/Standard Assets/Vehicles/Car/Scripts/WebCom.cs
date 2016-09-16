using System;
using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using Byn.Net;
using UnityEngine.UI;
using Random = UnityEngine.Random;

public class WebCom : MonoBehaviour
{
    public string uSignalingUrl = "wss://because-why-not.com:12777/chatapp";

    public string uStunServer = "stun:stun.l.google.com:19302";

    public Action<string> controllerData;

    public Text RandomText;

    private IBasicNetwork mNetwork = null;

    private string accessCode;

    private bool mIsServer = false;

    private List<ConnectionId> mConnections = new List<ConnectionId>();

    private void Setup()
    {

        mNetwork = WebRtcNetworkFactory.Instance.CreateDefault(uSignalingUrl, new string[] { uStunServer });
    }

    private void Reset()
    {
        mIsServer = false;
        mConnections = new List<ConnectionId>();
        Cleanup();
    }

    private void Cleanup()
    {
        mNetwork.Dispose();
        mNetwork = null;
    }

    private void OnDestroy()
    {
        if (mNetwork != null)
        {
            Cleanup();
        }
    }

    private void Start()
    {
        accessCode = Random.Range(1001, 10000).ToString();
        OpenRoomButtonPressed();
        RandomText.text = accessCode;
    }
    private void FixedUpdate()
    {
        //check each fixed update if we have got new events
        HandleNetwork();
    }

    private void HandleNetwork()
    {
        //check if the network was created
        if (mNetwork != null)
        {
            mNetwork.Update();

            NetworkEvent evt;

            while (mNetwork != null && mNetwork.Dequeue(out evt))
            {

                switch (evt.Type)
                {
                    case NetEventType.ServerInitialized:
                        {
                            mIsServer = true;

                        }
                        break;
                    case NetEventType.ServerInitFailed:
                        {

                            mIsServer = false;
                            Reset();
                        }
                        break;
                    case NetEventType.ServerClosed:
                        {
                            mIsServer = false;
                        }
                        break;
                    case NetEventType.NewConnection:
                        {
                            mConnections.Add(evt.ConnectionId);
                        }
                        break;
                    case NetEventType.ConnectionFailed:
                        {
                            Reset();
                        }
                        break;
                    case NetEventType.Disconnected:
                        {
                            mConnections.Remove(evt.ConnectionId);

                            if (mIsServer == false)
                            {
                                Reset();
                            }

                        }
                        break;
                    case NetEventType.ReliableMessageReceived:
                    case NetEventType.UnreliableMessageReceived:
                        {
                            HandleIncommingMessage(ref evt);
                        }
                        break;
                }
            }

            //finish this update by flushing the messages out if the network wasn't destroyed during update
            if (mNetwork != null)
                mNetwork.Flush();
        }
    }

    private void HandleIncommingMessage(ref NetworkEvent evt)
    {
        MessageDataBuffer buffer = (MessageDataBuffer)evt.MessageData;

        string msg = Encoding.UTF8.GetString(buffer.Buffer, 0, buffer.ContentLength);

        controllerData.Invoke(msg);

        if (mIsServer)
        {
            SendString(msg);
        }

        buffer.Dispose();
    }

    private void SendString(string msg, bool reliable = true)
    {

        byte[] msgData = Encoding.UTF8.GetBytes(msg);
        foreach (ConnectionId id in mConnections)
        {
            mNetwork.SendData(id, msgData, 0, msgData.Length, reliable);
        }
    }

    public void JoinRoomButtonPressed()
    {
        Setup();
        mNetwork.Connect("111");
    }

    private void OpenRoomButtonPressed()
    {
        Setup();
        mNetwork.StartServer(accessCode);
    }

    public void InputOnEndEdit()
    {
        if (Input.GetKey(KeyCode.Return))
        {
            SendButtonPressed();
        }
    }

    public void SendButtonPressed()
    {
        string msg = null; /*uMessageInput.text*/;

        ConnectionId conId;
        if (short.TryParse(msg, out conId.id))
        {
            mNetwork.Disconnect(conId);
        }

        if (mIsServer)
        {
            //Send data
            SendString("Dani");
        }
        else
        {

            SendString("Dani");
        }

    }
}
