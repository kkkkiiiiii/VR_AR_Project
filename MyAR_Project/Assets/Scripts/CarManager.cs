using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
public class CarManager : MonoBehaviour
{
    public GameObject indicator;
    public GameObject car;
    
    private ARRaycastManager _arManager;
    private GameObject _placedGameObject;
    // Start is called before the first frame update
    void Start()
    {
        // set false indicator
        indicator.SetActive(false);
        
        // AR Raycast Manager를 가져온다.
        _arManager = GetComponent<ARRaycastManager>();
    }

    // Update is called once per frame
    void Update()
    {
        DetectGround();
        
        // if indicator active true and touch?
        if (indicator.activeInHierarchy && Input.touchCount > 0)
        {
            // 첫 번째 터치 상태를 가져온다.
            Touch touch = Input.GetTouch(0);
            if (touch.phase == TouchPhase.Began)
            {
                if (_placedGameObject == null)
                {
                    _placedGameObject = Instantiate(car, indicator.transform.position, indicator.transform.rotation);
                }
                else
                {
                    _placedGameObject.transform.SetPositionAndRotation(indicator.transform.position, 
                        indicator.transform.rotation);
                }
            }
        }
    }

    void DetectGround()
    {
        // get center of screen
        Vector2 screenSize = new Vector2(Screen.width * 0.5f, Screen.height * 0.5f);
        
        // ARRaycast info
        List<ARRaycastHit> hitInfos = new List<ARRaycastHit>();
        
        // if plane detected?
        if (_arManager.Raycast(screenSize, hitInfos, TrackableType.Planes))
        {
            // active true indicator
            indicator.SetActive(true);
            // 표식 오브젝트의 위치 및 회전 값을 레이가 닿은 지점에 일치시킨다. 
            indicator.transform.position = hitInfos[0].pose.position;
            indicator.transform.rotation = hitInfos[0].pose.rotation;

            indicator.transform.position += indicator.transform.up * 0.1f;
        }
        else
        {
            indicator.SetActive(false);
        }
    }
}
