using UnityEngine;
using System.Collections;

public class SuperBox : MonoBehaviour {

	// Use this for initialization
    public int m_CountChildBox = 4;
    public int m_Col = 0;
    public int m_Row = 0;
	void Start () {
	
	}
    public void setRowCol(int _Col,int _Row)
    {
        m_Col = _Col;
        m_Row = _Row;
    }
	public void DestroyOneChildBox()
    {
        m_CountChildBox--;
        if (m_CountChildBox == 0)
        {
            Destroy(this.gameObject);            
            MapManager._arrayMap[m_Row,m_Col] = Box.Type.NONE;
         //   Debug.Log(MapManager._arrayMap);
        }
    }
    public void destroyEargle()
    {
        Quaternion turnRotation = Quaternion.Euler(0f, 0, 45f);
        // Apply this rotation to the rigidbody's rotation.
        transform.rotation = turnRotation;// (m_Rigidbody.rotation * turnRotation);
        GameOver.m_isWin = false;
        // TransitEffect.m_Instance.
        TransitEffect.m_Instance.BeginGameOver();
    }
    public void resetEargle()
    {
        Quaternion turnRotation = Quaternion.Euler(0, 0, 0f);
        // Apply this rotation to the rigidbody's rotation.
        transform.rotation = turnRotation;// (m_Rigidbody.rotation * turnRotation);
    }
    // Update is called once per frame
    void Update1 () {
	
	}
}
