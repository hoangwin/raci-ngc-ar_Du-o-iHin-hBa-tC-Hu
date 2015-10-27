using UnityEngine;
using System.Collections;
using System.Collections.Generic;
public class HintList : MonoBehaviour {
    public Hint hintFrefab;
	// Use this for initialization
    private List<Hint> hintList = new List<Hint>();
    public void generationHintList(Level level, IntVector2 size)
    {
        IntVector2 vec = new IntVector2();
        for (int i = 0; i < level.HintArray.Length / 2; i++) 
        {
            vec.x = level.HintArray[i*2 +1];
            vec.z = level.HintArray[i*2];
            CreateAHint(vec, size);
        }
        
    }
    private Hint CreateAHint(IntVector2 coordinates, IntVector2 size)
    {
        Hint hint = Instantiate(hintFrefab) as Hint;        
        hint.coordinates = coordinates;
        hint.name = "Hint" + coordinates.x + ", " + coordinates.z;
        hint.transform.parent = transform;
        hint.transform.localPosition = new Vector3(coordinates.x - size.x * 0.5f + 0.5f, 0f, -coordinates.z - size.z * 0.5f + 0.5f);
        return hint;
    }
}
