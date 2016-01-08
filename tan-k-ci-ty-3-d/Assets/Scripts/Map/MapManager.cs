using UnityEngine;
using System.Collections;

public class MapManager : MonoBehaviour
{

    public static int _MAP_SIZE_WIDTH = 26;
    public static int _MAP_SIZE_HEIGHT = 26;
    public static int _CELL_WIDTH = 2;
    public static int _CELL_HEIGHT = 2;

    public static Box.Type[,] _arrayMap = new Box.Type[_MAP_SIZE_HEIGHT, _MAP_SIZE_WIDTH];
    public static GameObject[,] _arrayMapObject = new GameObject[_MAP_SIZE_HEIGHT, _MAP_SIZE_WIDTH];
    public GameObject _wallPrefab;
    public GameObject _blockPrefab;
    public GameObject _rockPrefab;
    public GameObject _treePrefab;
    public GameObject _waterPrefab;
    public static MapManager m_Instance;


    public Color[] _DefaultCOlorGround;
    public Color[] _DefaultCOlor_bound;
    public Color[] _DefaultCOlor_Item;
    public Material _ItemMaterial;
    public Material _GroundMaterial;
    public Material _BoundMaterial;
    // Use this for initialization
    void Start()
    {
      

     
        m_Instance = this;
        MapManager.m_Instance.changeBackGround(1);

    }

    // Update is called once per frame
    void Update()
    {

    }
    public void changeBackGround(int index)
    {

        if (index < 13)
        {
            //   Debug.Log("11111111111");
            _ItemMaterial.color = _DefaultCOlor_Item[0];
            _GroundMaterial.color = _DefaultCOlorGround[0];
            _BoundMaterial.color = _DefaultCOlor_bound[0];
        }
        else if (index < 25)
        {
            //  Debug.Log("222222222");
            _ItemMaterial.color = _DefaultCOlor_Item[1];
            _GroundMaterial.color = _DefaultCOlorGround[1];
            _BoundMaterial.color = _DefaultCOlor_bound[1];
        }
        else
        {
            //  Debug.Log("333333333333");
            _ItemMaterial.color = _DefaultCOlor_Item[2];
            _GroundMaterial.color = _DefaultCOlorGround[2];
            _BoundMaterial.color = _DefaultCOlor_bound[2];
        }


    }
    public void InitSHOVEL()//11-23 ->14,25
    {
        Destroy(_arrayMapObject[23, 11]);
        Destroy(_arrayMapObject[23, 12]);
        Destroy(_arrayMapObject[23, 13]);
        Destroy(_arrayMapObject[23, 14]);
        Destroy(_arrayMapObject[24, 11]);
        Destroy(_arrayMapObject[24, 14]);
        Destroy(_arrayMapObject[25, 11]);
        Destroy(_arrayMapObject[25, 14]);
        creaTeRock(23, 11);
        creaTeRock(23, 12);
        creaTeRock(23, 13);
        creaTeRock(23, 14);
        creaTeRock(24, 11);
        creaTeRock(24, 14);
        creaTeRock(25, 11);
        creaTeRock(25, 14);

    }
    public void EndSHOVEL()
    {
        Destroy(_arrayMapObject[23, 11]);
        Destroy(_arrayMapObject[23, 12]);
        Destroy(_arrayMapObject[23, 13]);
        Destroy(_arrayMapObject[23, 14]);
        Destroy(_arrayMapObject[24, 11]);
        Destroy(_arrayMapObject[24, 14]);
        Destroy(_arrayMapObject[25, 11]);
        Destroy(_arrayMapObject[25, 14]);
        createWallk(23, 11);
        createWallk(23, 12);
        createWallk(23, 13);
        createWallk(23, 14);
        createWallk(24, 11);
        createWallk(24, 14);
        createWallk(25, 11);
        createWallk(25, 14);
    }

    public void EffectShovel()
    {
        StopCoroutine(IEffectShovel());
        StartCoroutine(IEffectShovel());
    }
    private IEnumerator IEffectShovel()
    {
        InitSHOVEL();
        yield return new WaitForSeconds(20);
        EndSHOVEL();
    }

    public void creaTeRock(int i, int j)//i = row,j = col
    {

        Quaternion rotation = Quaternion.Euler(0, 0, 0);
        Vector3 pos = new Vector3(j * _CELL_HEIGHT, 1, -i * _CELL_WIDTH);
        GameObject obj = Instantiate(_rockPrefab, pos, rotation) as GameObject;
        obj.transform.position = pos;
        obj.GetComponent<SuperBox>().setRowCol(j, i);
        _arrayMap[i, j] = Box.Type.ROCK;
        obj.transform.parent = this.transform;
        _arrayMapObject[i, j] = obj;
    }
    public void createWallk(int i, int j)//i = row,j = col
    {
        Quaternion rotation = Quaternion.Euler(0, 0, 0);
        Vector3 pos = new Vector3(j * _CELL_HEIGHT, 1, -i * _CELL_WIDTH);
        GameObject obj = Instantiate(_wallPrefab, pos, rotation) as GameObject;
        obj.transform.position = pos;
        _arrayMap[i, j] = Box.Type.WALL;
        obj.GetComponent<SuperBox>().setRowCol(j, i);        
        obj.transform.parent = this.transform;
        _arrayMapObject[i, j] = obj;
    }
    public void initLevel(int level)
    {
        TextAsset mytxtData = (TextAsset)Resources.Load("levels/" + level.ToString());
        string txt = mytxtData.text;

        string[] strarray = txt.Split('\n');
        Debug.Log(strarray[0]);
        //test
        GameObject obj = null;
        for (int i = -1; i <= _MAP_SIZE_HEIGHT; i++)
            for (int j = -1; j <= _MAP_SIZE_WIDTH; j++)
            {
                if (i >= 0 && i < _MAP_SIZE_HEIGHT && j >= 0 && j < _MAP_SIZE_WIDTH)
                {
                    obj = null;
                    _arrayMap[i, j] = Box.Type.NONE;
                    char c = strarray[i][j];
                    Quaternion rotation = Quaternion.Euler(0, 0, 0);
                    Vector3 pos = new Vector3(j * _CELL_HEIGHT, 1, -i * _CELL_WIDTH);
                    if (c == '#')//gach
                    {
                        obj = Instantiate(_wallPrefab, pos, rotation) as GameObject;
                        obj.transform.position = pos;
                        _arrayMap[i, j] = Box.Type.WALL;
                        obj.GetComponent<SuperBox>().setRowCol(j, i);
                    }
                    else if (c == '@')//da
                    {
                        obj = Instantiate(_rockPrefab, pos, rotation) as GameObject;
                        obj.transform.position = pos;
                        _arrayMap[i, j] = Box.Type.ROCK;
                        obj.GetComponent<SuperBox>().setRowCol(j, i);
                    }
                    else if (c == '%')//cay
                    {
                        obj = Instantiate(_treePrefab, pos, rotation) as GameObject;
                        obj.transform.position = pos;
                        _arrayMap[i, j] = Box.Type.NONE; //chu y cho nay vi ay gan giong voi NONE
                    }
                    else if (c == '~')//nuoc
                    {
                        obj = Instantiate(_waterPrefab, pos, rotation) as GameObject;
                        pos = new Vector3(j * _CELL_HEIGHT, 0, -i * _CELL_WIDTH);
                        obj.transform.position = pos;
                        _arrayMap[i, j] = Box.Type.WATER;
                    }

                    if (obj != null)
                    {
                       // Debug.Log(obj);
                        
                        obj.transform.parent = this.transform;
                        _arrayMapObject[i, j] = obj;
                    }
                }
                else

                //if (i == 0 || i == (_MAP_SIZE_HEIGHT - 1) || j == 0 || j == (_MAP_SIZE_WIDTH - 1))
                {
                    Quaternion rotation = Quaternion.Euler(0, 0, 0);
                    Vector3 pos = new Vector3(j * _CELL_WIDTH, 1, -i * _CELL_HEIGHT);
                    obj = Instantiate(_blockPrefab, pos, rotation) as GameObject;
                    obj.transform.position = pos;
                    obj.transform.parent = this.transform;
                }
            }
    }
    public void DestroyAllMap()
    {
        foreach (Transform child in this.transform)
        {
            Destroy(child.gameObject);
        }
        //test
       // for (int i = -1; i <= _MAP_SIZE_HEIGHT; i++)
        //    for (int j = -1; j <= _MAP_SIZE_WIDTH; j++)
         //   {
          //      Destroy(this.transform.gh);

            //}
    }

}
