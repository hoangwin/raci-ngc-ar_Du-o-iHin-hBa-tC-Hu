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
        WALL,
        ROCK,
        TREE,
        WATER
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
       m_SuperBox.DestroyOneChildBox();
    }
  //  private void OnColliderEnter(Collider other)
  //  {
      //  Debug.Log("bbbb");
  //  }
}
