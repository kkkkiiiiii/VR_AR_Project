using System;
using System.Collections;
using System.Collections.Generic;
using Unity.Collections;
using UnityEngine;
using UnityEngine.XR.ARCore;
using UnityEngine.XR.ARFoundation;

public class ARFaceRegionManager : MonoBehaviour
{
    [SerializeField] private GameObject[] regionPrefabs;
    private ARFaceManager _faceManager;
    private ARSessionOrigin _sessionOrigin;

    private NativeArray<ARCoreFaceRegionData> _faceRegions;

    private void Awake()
    {
        _faceManager = GetComponent<ARFaceManager>();
        _sessionOrigin = GetComponent<ARSessionOrigin>();

        for (int i = 0; i < regionPrefabs.Length; i++)
        {
            regionPrefabs[i] = Instantiate(regionPrefabs[i], _sessionOrigin.trackablesParent);
        }
    }
    // Update is called once per frame
    void Update()
    {
        ARCoreFaceSubsystem subsystem = (ARCoreFaceSubsystem)_faceManager.subsystem;

        foreach (ARFace face in _faceManager.trackables)
        {
            subsystem.GetRegionPoses(face.trackableId, Allocator.Persistent, ref _faceRegions);    // 해당 얼굴에서 각 Face Region의 위치와 회전을 얻어 faceRegions NativeArray에 저장

            foreach (ARCoreFaceRegionData faceRegion in _faceRegions)
            {
                ARCoreFaceRegion regionType = faceRegion.region;

                regionPrefabs[(int)regionType].transform.localPosition = faceRegion.pose.position;    // Face Region 프리팹의 위치 변경
                regionPrefabs[(int)regionType].transform.localRotation = faceRegion.pose.rotation;    // Face Region 프리팹의 회전 변경
            }
        }
    }
}
