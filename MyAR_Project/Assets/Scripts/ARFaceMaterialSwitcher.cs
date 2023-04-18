using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;

public class ARFaceMaterialSwitcher : MonoBehaviour
{
    [SerializeField] private Material[] _materials;
    private ARFaceManager _faceManager;
    private int index = 0;
    void Start()
    {
        _faceManager = GetComponent<ARFaceManager>();
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.touchCount>0 && Input.GetTouch(0).phase == TouchPhase.Began)
        {
            index = (index + 1) % _materials.Length; // 인덱스 증가

            
            foreach (ARFace face in _faceManager.trackables)
            {
                face.GetComponent<MeshRenderer>().material = _materials[index];

            }
        }
    }
}
