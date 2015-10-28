using UnityEngine;

public class Player : MonoBehaviour {

    public GameObject playerCamera;
	public MazeCell currentCell;
	public MazeDirection currentDirection;
    
	public void SetLocation (MazeCell cell) {		
		currentCell = cell;
		transform.localPosition = cell.transform.localPosition;
		
	}

	
    private void Move2(MazeDirection direction)
    {
       //currentCell
        if (direction == MazeDirection.North)
        {
            if((currentCell.value &1) == 0)//co duong di
            {
                IntVector2 coordinates = new IntVector2();
                coordinates.x = currentCell.coordinates.x;
                coordinates.z = currentCell.coordinates.z-1;
                MazeCell nextcell = Maze.instance.GetCell(coordinates);
                SetLocation(nextcell);
            }

        }
        if (direction == MazeDirection.East)
        {
            if ((currentCell.value & 2) == 0)//co duong di
            {
                IntVector2 coordinates = new IntVector2();
                coordinates.x = currentCell.coordinates.x +1;
                coordinates.z = currentCell.coordinates.z ;
                MazeCell nextcell = Maze.instance.GetCell(coordinates);
                SetLocation(nextcell);
            }

        }
        if (direction == MazeDirection.South)
        {
            if ((currentCell.value & 4) == 0)//co duong di
            {
                IntVector2 coordinates = new IntVector2();
                coordinates.x = currentCell.coordinates.x;
                coordinates.z = currentCell.coordinates.z + 1;
                MazeCell nextcell = Maze.instance.GetCell(coordinates);
                SetLocation(nextcell);
            }

        }
        if (direction == MazeDirection.West)
        {
            if ((currentCell.value & 8) == 0)//co duong di
            {
                IntVector2 coordinates = new IntVector2();
                coordinates.x = currentCell.coordinates.x -1;
                coordinates.z = currentCell.coordinates.z ;
                MazeCell nextcell = Maze.instance.GetCell(coordinates);
                SetLocation(nextcell);
            }

        }
    }

	private void Look (MazeDirection direction) {
		transform.localRotation = direction.ToRotation();
		currentDirection = direction;
	}

	private void Update () {
		if (Input.GetKeyDown(KeyCode.W) || Input.GetKeyDown(KeyCode.UpArrow)) {
            Move2(MazeDirection.North);
		}
		else if (Input.GetKeyDown(KeyCode.D) || Input.GetKeyDown(KeyCode.RightArrow)) {
            Move2(MazeDirection.East);
		}
		else if (Input.GetKeyDown(KeyCode.S) || Input.GetKeyDown(KeyCode.DownArrow)) {
            Move2(MazeDirection.South);
		}
		else if (Input.GetKeyDown(KeyCode.A) || Input.GetKeyDown(KeyCode.LeftArrow)) {
            Move2(MazeDirection.West);
		}
		else if (Input.GetKeyDown(KeyCode.Q)) {//chuyen goc nhin
			Look(currentDirection.GetNextCounterclockwise());
		}
        else if (Input.GetKeyDown(KeyCode.E)){//chuyen goc nhin
			Look(currentDirection.GetNextClockwise());
		}
	}
}