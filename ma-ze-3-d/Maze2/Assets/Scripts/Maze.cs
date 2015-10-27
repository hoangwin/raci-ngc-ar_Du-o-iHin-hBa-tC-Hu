using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class Maze : MonoBehaviour {

	public IntVector2 size;

	public MazeCell cellPrefab;

	public float generationStepDelay;

	
	public MazeWall wallPrefab;

	private MazeCell[,] cells;

    public HintList hintListPrefab;
    private HintList hintListInstance;

    public Target targetPrefab;   
    private Target targetInstance;

    Vector2 coordinateBegin;
    Vector2 coordinateEnd;

    public static Maze instance; 

	public IntVector2 RandomCoordinates {
		get {
			return new IntVector2(Random.Range(0, size.x), Random.Range(0, size.z));
		}
	}

	public bool ContainsCoordinates (IntVector2 coordinate) {
		return coordinate.x >= 0 && coordinate.x < size.x && coordinate.z >= 0 && coordinate.z < size.z;
	}

	public MazeCell GetCell (IntVector2 coordinates) {
		return cells[coordinates.x, coordinates.z];
	}




    //create new

    public IEnumerator Generate2()
    {
        WaitForSeconds delay = new WaitForSeconds(generationStepDelay);       
        

        Level level = new Level1();
        level.init();
        size.x = level.WIDTH;
        size.z = level.HEIGHT;

        coordinateBegin = level.POS_BEGIN;
        coordinateEnd = level.POS_END;

        cells = new MazeCell[size.x, size.z];
        hintListInstance = Instantiate(hintListPrefab) as HintList;
        hintListInstance.generationHintList(level,size);
        
        
        targetInstance = Instantiate(targetPrefab) as Target ;
        targetInstance.transform.localPosition = new Vector3(coordinateEnd.x - size.x * 0.5f + 0.5f, 0f, -coordinateEnd.y - size.z * 0.5f + 0.5f);
        


         for (int i = 0; i < level.HEIGHT; i++)//tao cell ban dau
        {            
            for (int j = 0; j <level.WIDTH; j++)
            {
                IntVector2 coordinates;
                coordinates.x = j;
                coordinates.z = i;
                CreateCell(coordinates);
            }
           
         }
        for (int i = level.HEIGHT-1; i >=0 ; i--)
        {
           
            for (int j = 0; j <level.WIDTH; j++)
            {
               int value = level.array2D[j, i];            
              DoNextGenerationStep2( i, j,value);
             // yield return delay;
            }
        
        }

      
        
        yield return delay;

    }

   

    private void DoNextGenerationStep2( int x, int y, int value)
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

	private MazeCell CreateCell (IntVector2 coordinates) {
		MazeCell newCell = Instantiate(cellPrefab) as MazeCell;
		cells[coordinates.x, coordinates.z] = newCell;
		newCell.coordinates = coordinates;
		newCell.name = "Maze Cell " + coordinates.x + ", " + coordinates.z;
		newCell.transform.parent = transform;
		newCell.transform.localPosition = new Vector3(coordinates.x - size.x * 0.5f + 0.5f, 0f, -coordinates.z - size.z * 0.5f + 0.5f);
		return newCell;
	}

	

	private void CreateWall (MazeCell cell, MazeCell otherCell, MazeDirection direction) {
		MazeWall wall = Instantiate(wallPrefab) as MazeWall;
		wall.Initialize(cell, otherCell, direction);
		//if (otherCell != null) {
		//	wall = Instantiate(wallPrefab) as MazeWall;
		//	wall.Initialize(otherCell, cell, direction.GetOpposite());
		//}
	}
    public void setPlayerBegin(Player player)
    {
        IntVector2 v = new IntVector2((int)coordinateBegin.x, (int) coordinateBegin.y);
        player.SetLocation(GetCell(v));//set get
    }
}