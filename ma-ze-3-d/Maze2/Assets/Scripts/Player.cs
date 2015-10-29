using System.Collections;
using UnityEngine;

public class Player : MonoBehaviour {

    public GameObject playerCamera;
	public MazeCell currentCell;
	public MazeDirection currentDirection;
    public Animator anim;
    public GameObject HandleCharacter;
    public bool isCanmove = true;
    public Transform posCameraBegin;
    public Transform posCameraEnd;
	public void SetLocation (MazeCell cell) {		
		currentCell = cell;
        anim.Play("WALK");//.SetBool("ISWALK", true);
        isCanmove = false;
        iTween.MoveTo(gameObject, iTween.Hash("position", cell.transform.localPosition, "easetype", iTween.EaseType.linear, "time", 0.6f,"onComplete", "walkCompleted"));
		//transform.localPosition = cell.transform.localPosition;
		
	}
    public void SetLocationDirect(MazeCell cell)
    {
        currentCell = cell;       
       transform.localPosition = cell.transform.localPosition;
    }
    public void SetLocation(Vector3 tran)
    {
        
        transform.localPosition = tran;
    }
	
    private void Move2(MazeDirection direction)
    {
        if (!isCanmove)
            return;
       //currentCell
        if (direction == MazeDirection.North)
        {
            if((currentCell.value &1) == 0)//co duong di
            {
                IntVector2 coordinates = new IntVector2();
                coordinates.x = currentCell.coordinates.x;
                coordinates.z = currentCell.coordinates.z-1;
                MazeCell nextcell = Maze.instance.GetCell(coordinates);
                iTween.RotateTo(HandleCharacter, iTween.Hash("y", 0,  "time", 0.25));//"oncomplete", "EndRotation"
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
                iTween.RotateTo(HandleCharacter, iTween.Hash("y", 90, "time", 0.25));//"oncomplete", "EndRotation"
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
                iTween.RotateTo(HandleCharacter, iTween.Hash("y", 180, "time", 0.25));//"oncomplete", "EndRotation"
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
                iTween.RotateTo(HandleCharacter, iTween.Hash("y", -90, "time", 0.25));//"oncomplete", "EndRotation"
                SetLocation(nextcell);
            }

        }
        checkWin();
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
    public void walkCompleted()
    {
        isCanmove = true;
        anim.Play("IDE");//.SetBool("ISWALK", true);
    }
    private bool checkWin()
    {
        
       if(currentCell.coordinates.x==  Maze.instance.coordinateEnd.x &&currentCell.coordinates.z==  Maze.instance.coordinateEnd.y)
       {
           Debug.Log("WIN");
           return true;
       }
        return false;
    }
    public void initBeginPlayAnim()
    {
        StartCoroutine(WaitAndBeginAnim(2.0F));
        
    }

    
    private IEnumerator  WaitAndBeginAnim(float waitTime)
    {
        isCanmove = false;
        yield return new WaitForSeconds(waitTime);
        print("WaitAndPrint " + Time.time);
        anim.Play("WALK");//.SetBool("ISWALK", true);
        iTween.MoveTo(gameObject, iTween.Hash("position", currentCell.transform.localPosition, "easetype", iTween.EaseType.linear, "time", 3.0f, "onComplete", "BeginStep1Completed"));
        iTween.RotateTo(HandleCharacter, iTween.Hash("y", 0, "time", 0.5));//"oncomplete", "EndRotation"
        iTween.MoveTo(playerCamera, iTween.Hash("position", posCameraEnd.localPosition, "easetype", iTween.EaseType.linear, "time", 2.6f, "islocal", true));
        iTween.RotateTo(playerCamera, iTween.Hash("x", posCameraEnd.eulerAngles.x, "time", 2.6));//"oncomplete", "EndRotation"
    }
    private void BeginStep1Completed()
    {
        isCanmove = true;
        anim.Play("IDE");//.SetBool("ISWALK", true);
    }
}