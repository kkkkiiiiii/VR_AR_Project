using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;
using UnityEngine.XR.ARFoundation;

public class LightController : MonoBehaviour
{
    [SerializeField] private ARCameraManager _arCameraManager;
    private new Light light; // component 클래스에 이미 light가 있음. new로 새롭게 정의

    private void Awake()
    {
        if (_arCameraManager == null)
        {
            Debug.LogError("ARCameraManager not found");
            Destroy(this);
        }

        light = GetComponent<Light>();
    }

    private void OnEnable()
    {
        // 새로운 카메라의 프레임이 수신될 때마다 호출되는 이벤트 메소드
        _arCameraManager.frameReceived += FrameChanged;
    }

    private void OnDisable()
    {
        // 메소드 등록 해제
        _arCameraManager.frameReceived -= FrameChanged;
    }

    private void FrameChanged(ARCameraFrameEventArgs args)
    {
        if (args.lightEstimation.averageBrightness.HasValue) // 광원의 평균 밝기
        {
            light.intensity = args.lightEstimation.averageBrightness.Value;
        }

        if (args.lightEstimation.averageColorTemperature.HasValue) // .평균 색 온도
        {
            light.colorTemperature = args.lightEstimation.averageColorTemperature.Value;
        }

        if (args.lightEstimation.colorCorrection.HasValue) // 색상 정보
        {
            light.color = args.lightEstimation.colorCorrection.Value;
        }

        if (args.lightEstimation.mainLightDirection.HasValue) // 장면의 주요 광원 방향
        {
            light.transform.rotation = Quaternion.LookRotation(-args.lightEstimation.mainLightDirection.Value);
        }

        if (args.lightEstimation.mainLightIntensityLumens.HasValue) // 루멘 단위의 주 광원
        {
            light.intensity = args.lightEstimation.averageIntensityInLumens.Value;
        }

        if (args.lightEstimation.ambientSphericalHarmonics.HasValue) // 레벨 2에서 구형 구조파를 사용해 주변 장면 조명 추정
        {
            RenderSettings.ambientMode = AmbientMode.Skybox;
            RenderSettings.ambientProbe = args.lightEstimation.ambientSphericalHarmonics.Value;
        }
    }
}
