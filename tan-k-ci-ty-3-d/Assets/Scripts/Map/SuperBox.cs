using UnityEngine;
using System.Collections;

public class SuperBox : MonoBehaviour {

	// Use this for initialization
    public int m_CountChildBox = 4;
	void Start () {
	
	}
	public void DestroyOneChildBox()
    {
        m_CountChildBox--;
        if (m_CountChildBox == 0)
            Destroy(this.gameObject);
    }

	// Update is called once per frame
	void Update () {
	
	}
}
