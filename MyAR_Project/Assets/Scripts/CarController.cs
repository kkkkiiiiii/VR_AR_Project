using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CarController : MonoBehaviour
{
    public GameObject[] bodyObject;
    public Color32[] colors;
    public float rotSpeed = 0.1f;

    private Material[] _carMats;
    
    void Start()
    {
        // carMats 배열을 자동차 body object 수만큼 초기화한다.
        _carMats = new Material[bodyObject.Length];
        
        // 자동차 bodyObject의 Material을 저장한다. 
        for (int i = 0; i < _carMats.Length; i++)
        {
            _carMats[i] = bodyObject[i].GetComponent<MeshRenderer>().material;
        }
        // colors 0번엔 원래 초기 색상을 저장한다.
        colors[0] = _carMats[0].color;
    }

    // Update is called once per frame
    void Update()
    {
        // if touchCount > 0
        if (Input.touchCount > 0)
        {
            Touch touch = Input.GetTouch(0);

            // 터치 상태가 moved라면?
            if (touch.phase == TouchPhase.Moved)
            {
                // 카메라에서 정면으로 레이를 발사해 부딪힌 대상이 6번레이어라면?
                Ray ray = new Ray(Camera.main.transform.position,
                    Camera.main.transform.forward);
                RaycastHit hitInfo;

                if (Physics.Raycast(ray, out hitInfo, Mathf.Infinity, 1<<6))
                {
                    Vector3 deltaPos = touch.deltaPosition;
                    
                    // 직전 프레임에서 현재 프레임까지의 X축 터치 이동량에 비례해 로컬 Y축 방향으로 회전시킨다.
                    transform.Rotate(transform.up, deltaPos.x * -1.0f * rotSpeed);
                }
            }
        }
    }

    public void ChangeColor(int num)
    {
        // 각 LOD material 색상을 버튼에 지정된 색상으로 변경한다.
        for (int i = 0; i < _carMats.Length; i++)
        {
            _carMats[i].color = colors[num];
        }
    }
}
