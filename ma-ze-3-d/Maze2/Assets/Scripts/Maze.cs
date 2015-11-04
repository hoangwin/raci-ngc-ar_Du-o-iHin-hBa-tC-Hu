using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class Maze : MonoBehaviour
{

    public IntVector2 size;

    public MazeCell cellPrefab;

    public float generationStepDelay;

    public MazeWall wallPrefab;

    private MazeCell[,] cells;

    public HintList hintListPrefab;
    private HintList hintListInstance = null;
   

    public Target targetPrefab;
    private Target targetInstance;

    public Vector2 coordinateBegin;
    public Vector2 coordinateEnd;

    public static Maze instance;



    public IntVector2 RandomCoordinates
    {
        get
        {
            return new IntVector2(Random.Range(0, size.x), Random.Range(0, size.z));
        }
    }

    public bool ContainsCoordinates(IntVector2 coordinate)
    {
        return coordinate.x >= 0 && coordinate.x < size.x && coordinate.z >= 0 && coordinate.z < size.z;
    }

    public MazeCell GetCell(IntVector2 coordinates)
    {
        return cells[coordinates.x, coordinates.z];
    }
    //create new

    public IEnumerator Generate2()
    {
        if (ScoreCOntrol.mcurrentLevel == 0)//chi de test
            ScoreCOntrol.mcurrentLevel = 1;
        WaitForSeconds delay = new WaitForSeconds(generationStepDelay);
        Level level = Level.initLevel(ScoreCOntrol.mcurrentMode ,ScoreCOntrol.mcurrentLevel);
        level.init();
        size.x = level.WIDTH;
        size.z = level.HEIGHT;

        coordinateBegin = level.POS_BEGIN;
        coordinateEnd = level.POS_END;

        cells = new MazeCell[size.x, size.z];
        if (hintListInstance == null)
            hintListInstance = Instantiate(hintListPrefab) as HintList;
        else
            hintListInstance.cleanAll();
        hintListInstance.generationHintList(level, size);
        hintListInstance.gameObject.SetActive(false);

        targetInstance = Instantiate(targetPrefab) as Target;
        targetInstance.transform.localPosition = new Vector3(coordinateEnd.x - size.x * 0.5f + 0.5f, 0f, -coordinateEnd.y - size.z * 0.5f + 0.5f);


        for (int i = 0; i < level.HEIGHT; i++)//tao cell ban dau
        {
            for (int j = 0; j < level.WIDTH; j++)
            {
                IntVector2 coordinates;
                coordinates.x = j;
                coordinates.z = i;
                CreateCell(coordinates);
            }

        }
        for (int i = level.HEIGHT - 1; i >= 0; i--)
        {

            for (int j = 0; j < level.WIDTH; j++)
            {
                int value = level.array2D[j, i];
                DoNextGenerationStep2(i, j, value);
                // yield return delay;
            }
        }
        yield return delay;

    }



    private void DoNextGenerationStep2(int x, int y, int value)
    {
        //IntVector2 coordinates = currentCell.coordinates + direction.ToIntVector2();// thay the bang x,y
        IntVector2 coordinates;
        IntVector2 coordinatesNeighbor;
        coordinates.x = x;
        coordinates.z = y;
        MazeCell currentCell = GetCell(coordinates);
        currentCell.value = value;
        //          cNorth1
        //   cWest8          cEast2
        //           cSouth4         
        MazeCell neighbor1, neighbor2, neighbor3, neighbor4;

        coordinatesNeighbor = coordinates + MazeDirections.ToIntVector2(MazeDirection.South);
        if (ContainsCoordinates(coordinatesNeighbor))
        {
            neighbor1 = GetCell(coordinatesNeighbor);
            if ((value & 4) != 0)
                CreateWall(currentCell, neighbor1, MazeDirection.South);
        }



        coordinatesNeighbor = coordinates + MazeDirections.ToIntVector2(MazeDirection.North);
        if (ContainsCoordinates(coordinatesNeighbor))
        {
            neighbor3 = GetCell(coordinatesNeighbor);
            if ((value & 1) != 0)
                CreateWall(currentCell, neighbor3, MazeDirection.North);
        }

        coordinatesNeighbor = coordinates + MazeDirections.ToIntVector2(MazeDirection.East);
        if (ContainsCoordinates(coordinatesNeighbor))
        {
            neighbor4 = GetCell(coordinatesNeighbor);
            if ((value & 2) != 0)
                CreateWall(currentCell, neighbor4, MazeDirection.East);
        }

        coordinatesNeighbor = coordinates + MazeDirections.ToIntVector2(MazeDirection.West);
        if (ContainsCoordinates(coordinatesNeighbor))
        {
            neighbor2 = GetCell(coordinatesNeighbor);
            if ((value & 8) != 0)
                CreateWall(currentCell, neighbor2, MazeDirection.West);
        }


    }
    //create new

    private MazeCell CreateCell(IntVector2 coordinates)
    {
        MazeCell newCell = Instantiate(cellPrefab) as MazeCell;
        cells[coordinates.x, coordinates.z] = newCell;
        newCell.coordinates = coordinates;
        newCell.name = "Maze Cell " + coordinates.x + ", " + coordinates.z;
        newCell.transform.parent = transform;
        newCell.transform.localPosition = new Vector3(coordinates.x - size.x * 0.5f + 0.5f, 0f, -coordinates.z - size.z * 0.5f + 0.5f);
        return newCell;
    }


    public MazeCell findCell(Vector3 pos)
    {
        IntVector2 coor;
        coor.x = (int)(pos.x + (size.x * 0.5f - 0.5f));
        coor.z = (int)(-pos.z - size.z * 0.5f + 0.5f);
        //Debug.Log(coor.x + "," + coor.z);
        return cells[coor.x, coor.z];

    }
    private void CreateWall(MazeCell cell, MazeCell otherCell, MazeDirection direction)
    {
        MazeWall wall = Instantiate(wallPrefab) as MazeWall;
        wall.Initialize(cell, otherCell, direction);
        //if (otherCell != null) {
        //	wall = Instantiate(wallPrefab) as MazeWall;
        //	wall.Initialize(otherCell, cell, direction.GetOpposite());
        //}
    }
    public void setPlayerBegin(Player player)//here
    {

        IntVector2 v = new IntVector2((int)coordinateBegin.x, (int)coordinateBegin.y);
        player.SetLocationDirect(GetCell(v));//set get
        player.SetLocation(GameManager.instance.platformInstance.posPlayerBegin.position);//set get//here
        player.HandleCharacter.transform.rotation = new Quaternion(0, 180, 0, 0);
        player.playerCamera.transform.position = player.posCameraBegin.position;
        player.playerCamera.transform.rotation = player.posCameraBegin.rotation;
        player.initBeginPlayAnim();
    }
    public MazeCell getLongNextMazeCell(MazeCell _currentCell, MazeDirection direction)//tim duong thang dai nhat khong co nga re
    {
        int offsetx = 0;
        int offsety = 0;
        if (direction == MazeDirection.North)

            offsety = -1;

        if (direction == MazeDirection.East)
            offsetx = 1;

        if (direction == MazeDirection.South)
            offsety = 1;

        if (direction == MazeDirection.West)
            offsetx = -1;


        MazeCell nextcell = null;
        bool needNeedMove = true;
        IntVector2 coordinates = new IntVector2();
        coordinates.x = _currentCell.coordinates.x;
        coordinates.z = _currentCell.coordinates.z;
        nextcell = Maze.instance.GetCell(coordinates);//bat dau tu hien tai
        while (needNeedMove)
        {
            coordinates.x += offsetx;
            coordinates.z += offsety;

            if (ContainsCoordinates(coordinates))
            {

                if (checkMoveDirection(nextcell, direction))//co the di chuyen
                {
                    nextcell = Maze.instance.GetCell(coordinates);
                    //kiem tra cac huong khac neu co mot huong khac co the di thi dung lai
                    if (checkMoveDirection(nextcell, MazeDirection.North) && direction != MazeDirection.North && direction != MazeDirection.South)//
                    {
                        //Debug.Log("aaa");
                        needNeedMove = false; //truong hop dung tuong
                    }
                    else if (checkMoveDirection(nextcell, MazeDirection.East) && direction != MazeDirection.East && direction != MazeDirection.West)//
                    {
                        //Debug.Log("bbb");
                        needNeedMove = false; //truong hop dung tuong
                    }
                    else if (checkMoveDirection(nextcell, MazeDirection.South) && direction != MazeDirection.South && direction != MazeDirection.North)//
                    {
                        //Debug.Log("ccc");
                        needNeedMove = false; //truong hop dung tuong
                    }
                    else if (checkMoveDirection(nextcell, MazeDirection.West) && direction != MazeDirection.West && direction != MazeDirection.East)//
                    {
                        //Debug.Log("ddd");
                        needNeedMove = false; //truong hop dung tuong
                    }
                }
                else
                {
                    needNeedMove = false; //truong hop dung tuong
                }
            }
            else
                needNeedMove = false;//vuot qua gioi han bien


        }
        if ((_currentCell.value & 1) == 0)//co duong di
        {



        }
        return nextcell;
    }
    private bool checkMoveDirection(MazeCell _currentCell, MazeDirection direction)
    {
        //currentCell
        if (direction == MazeDirection.North)
            if ((_currentCell.value & 1) == 0)//co duong di        
                return true;



        if (direction == MazeDirection.East)
            if ((_currentCell.value & 2) == 0)//co duong di            
                return true;


        if (direction == MazeDirection.South)
            if ((_currentCell.value & 4) == 0)//co duong di 
                return true;

        if (direction == MazeDirection.West)
            if ((_currentCell.value & 8) == 0)//co duong di            
                return true;

        return false;

    }
    public void destroyAll()
    {
        GameObject.DestroyObject(targetInstance.gameObject);
        GameObject.DestroyObject(this.gameObject);
        this.hintListInstance.cleanAll();
        GameObject.DestroyObject(this.hintListInstance.gameObject);
    }
    public void showHintList()
    {
        hintListInstance.gameObject.SetActive(true);
        StartCoroutine(stopShowHintList(4.0F));
    }

    private IEnumerator  stopShowHintList(float waitTime)
    {
        yield return new WaitForSeconds(waitTime);
        hintListInstance.gameObject.SetActive(false);
    }
}