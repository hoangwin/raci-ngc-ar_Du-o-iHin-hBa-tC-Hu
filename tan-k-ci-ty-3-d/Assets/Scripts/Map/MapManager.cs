using UnityEngine;
using System.Collections;

public class MapManager : MonoBehaviour {

    public static int _MAP_SIZE_WIDTH = 26;
    public static int _MAP_SIZE_HEIGHT = 26;
    public static int _CELL_WIDTH = 2;
    public static int _CELL_HEIGHT = 2;
    
    private int[,] _arrayMap = new int[_MAP_SIZE_WIDTH, _MAP_SIZE_HEIGHT];
    public GameObject _wallPrefab;
    public GameObject _blockPrefab;
    public GameObject _rockPrefab;
    public GameObject _treePrefab;
    public GameObject _waterPrefab;

	// Use this for initialization
	void Start () {
        
        
        initLevel(1);

	}
	
	// Update is called once per frame
	void Update () {
	
	}
    public void initLevel(int level)
    {
        TextAsset mytxtData = (TextAsset)Resources.Load("levels/" + level.ToString());
        string txt = mytxtData.text;

        string[] strarray = txt.Split('\n');
        Debug.Log(strarray[0]);
        //test
        for (int i = -1; i <= _MAP_SIZE_HEIGHT; i++)
            for (int j = -1; j <= _MAP_SIZE_WIDTH; j++)
            {
                if (i >= 0 && i < _MAP_SIZE_HEIGHT && j >= 0 && j < _MAP_SIZE_WIDTH)
                {
                    _arrayMap[i, j] = 0;
                    char c = strarray[i][j];

                    if (c == '#')//gach
                    {
                        Quaternion rotation = Quaternion.Euler(0, 0, 0);
                        Vector3 pos = new Vector3(j * _CELL_WIDTH, 1, -i * _CELL_HEIGHT);
                        GameObject obj = Instantiate(_wallPrefab, pos, rotation) as GameObject;
                        obj.transform.position = pos;
                    }
                    else if (c == '@')//da
                    {
                        Quaternion rotation = Quaternion.Euler(0, 0, 0);
                        Vector3 pos = new Vector3(j * _CELL_WIDTH, 1, -i * _CELL_HEIGHT);
                        GameObject obj = Instantiate(_rockPrefab, pos, rotation) as GameObject;
                        obj.transform.position = pos;
                    }
                    else if (c == '%')//cay
                    {
                        Quaternion rotation = Quaternion.Euler(0, 0, 0);
                        Vector3 pos = new Vector3(j * _CELL_WIDTH, 1, -i * _CELL_HEIGHT);
                        GameObject obj = Instantiate(_treePrefab, pos, rotation) as GameObject;
                        obj.transform.position = pos;
                    }
                    else if (c == '~')//nuoc
                    {
                        Quaternion rotation = Quaternion.Euler(0, 0, 0);
                        Vector3 pos = new Vector3(j * _CELL_WIDTH, 1, -i * _CELL_HEIGHT);
                        GameObject obj = Instantiate(_waterPrefab, pos, rotation) as GameObject;
                        obj.transform.position = pos;
                    }
                    
                }
                else

                //if (i == 0 || i == (_MAP_SIZE_HEIGHT - 1) || j == 0 || j == (_MAP_SIZE_WIDTH - 1))
                {
                    Quaternion rotation = Quaternion.Euler(0, 0, 0);
                    Vector3 pos = new Vector3(j * _CELL_WIDTH, 1, -i * _CELL_HEIGHT);
                    GameObject obj = Instantiate(_blockPrefab, pos, rotation) as GameObject;
                    obj.transform.position = pos;
                }

            }
    }
    
}
