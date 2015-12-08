using UnityEngine;
using System.Collections;

public class Box : MonoBehaviour {
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
    }
    private void OnColliderEnter(Collider other)
    {
      //  Debug.Log("bbbb");
    }
}
