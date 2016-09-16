/* 
 * Copyright (C) 2015 Christoph Kutza
 * 
 * Please refer to the LICENSE file for license information
 */
using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.Text;
using System;
using Byn.Net;
using System.Collections.Generic;
using Byn.Common;

public class ChatApp : MonoBehaviour
{

    public string uSignalingUrl = "wss://because-why-not.com:12777/chatapp";

    public string uStunServer = "stun:stun.l.google.com:19302";

    public Text incomText;

    private IBasicNetwork mNetwork = null;

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

        incomText.text = msg;

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

    public void OpenRoomButtonPressed()
    {
        Setup();
        mNetwork.StartServer("111");
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
