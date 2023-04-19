using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.XR.ARFoundation;

public class LightEstimationText : MonoBehaviour
{
    [SerializeField] private ARCameraManager _arCameraManager;
    [SerializeField] private TextMeshProUGUI BrightnessValueTMP;
    [SerializeField] private TextMeshProUGUI ColorCorrectionValueTMP;

    private Light currentLight;

    private void Awake()
    {
        currentLight = GetComponent<Light>();
    }

    private void OnEnable()
    {
        _arCameraManager.frameReceived += FrameUpdate;
    }

    private void OnDisable()
    {
        _arCameraManager.frameReceived -= FrameUpdate;
    }

    private void FrameUpdate(ARCameraFrameEventArgs args) 
    {
        if (args.lightEstimation.averageBrightness.HasValue) // 광원의 평균 밝기
        {
            BrightnessValueTMP.text = $"Brightness : {args.lightEstimation.averageBrightness.Value}";
            currentLight.intensity = args.lightEstimation.averageBrightness.Value;
        }

        if (args.lightEstimation.colorCorrection.HasValue) // 색상 정보(RGBA)
        {
            ColorCorrectionValueTMP.text = $"Color : {args.lightEstimation.colorCorrection.Value}";
            currentLight.color = args.lightEstimation.colorCorrection.Value;
        }
    }
}
