using UnityEngine;
using System.Collections;

public class Box : MonoBehaviour {

    public SuperBox m_SuperBox;
    //public GameObject m_ChildBox_TOPLEFT;
    //public GameObject m_ChildBox_TOPRIGHT;
    //public GameObject m_ChildBox_BOTTOMLEFT;
    //public GameObject m_ChildBox_BOTTOMRIGHT;
    public enum Type
    {
        NONE,
        WALL,
        ROCK,
        TREE,
        WATER,
        EARGLE
    }
	// Use this for initialization
    public Type type;

	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
    public void destroy()
    {
        // Debug.Log("aaaaa");
        Destroy(this.gameObject);
        if (m_SuperBox != null)
            m_SuperBox.DestroyOneChildBox();
    }
   


    //  private void OnColliderEnter(Collider other)
    //  {
    //  Debug.Log("bbbb");
    //  }
}
