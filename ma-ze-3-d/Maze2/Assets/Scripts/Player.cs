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
    public MazeDirection directionKeyWating;
    private MazeCell targetCell;
    public GameObject cubeBoby;//using when
    public GameObject realBoby;//using when
	public void SetLocation (MazeCell cell) {		
	
       // anim.Play("WALK");//.SetBool("ISWALK", true);
       // isCanmove = false;
       // int step =Mathf.Abs( cell.coordinates.x - currentCell.coordinates.x + cell.coordinates.z - currentCell.coordinates.z);
       // Debug.Log(step);
        //iTween.MoveTo(gameObject, iTween.Hash("position", cell.transform.localPosition, "easetype", iTween.EaseType.linear, "time", step*0.6f + 0.2f,"onComplete", "walkCompleted"));

		


        anim.Play("WALK");//.SetBool("ISWALK", true);
        isCanmove = false;
        float distance = Vector3.Distance(transform.position, cell.transform.position); ;// Mathf.Abs(cell.coordinates.x - currentCell.coordinates.x + cell.coordinates.z - currentCell.coordinates.z);
      //  Debug.Log(distance);
        iTween.MoveTo(gameObject, iTween.Hash("position", cell.transform.localPosition, "easetype", iTween.EaseType.linear, "time", distance * 0.4f , "onComplete", "walkCompleted"));
        
		
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
	private void Move1(MazeDirection direction,bool playsound)
    {        
          MazeCell nextcell =  Maze.instance.getLongNextMazeCell(currentCell, direction);
          directionKeyWating = MazeDirection.None;// khong 
          setRotation(direction);
          currentDirection = direction;
          if (nextcell != null)
          {              
              SetLocation(nextcell);
              targetCell = nextcell;
          }
        if(playsound)
        {
            SoundEngine.playLoop(SoundEngine.instance.move);
        }
          
    }
    private void moveContinue(MazeDirection _direction)// khi dang di chuyen ma co nut nhan
    {
        if((currentDirection == MazeDirection.North && _direction == MazeDirection.South ) ||
            (currentDirection == MazeDirection.South && _direction == MazeDirection.North ) ||
            (currentDirection == MazeDirection.East && _direction == MazeDirection.West ) ||
            (currentDirection == MazeDirection.West && _direction == MazeDirection.East ) )
        {
            
            MazeCell tempCurrentcell = Maze.instance.findCell(transform.position);
            MazeCell nextcell = currentCell;//.instance.getLongNextMazeCell(currentCell, _direction);
            // directionKeyWating = MazeDirection.None;// khong 
            setRotation(_direction);
            if (nextcell != null)
            {
                currentCell = tempCurrentcell;
                SetLocation(nextcell);
                targetCell = nextcell;               
            }
            // dung la
        }
        
       
    }
    public void setRotation(MazeDirection direction)
    {
        if (direction == MazeDirection.North)

            iTween.RotateTo(HandleCharacter, iTween.Hash("y", 0, "time", 0.5));//"oncomplete", "EndRotation"

        if (direction == MazeDirection.East)
            iTween.RotateTo(HandleCharacter, iTween.Hash("y", 90, "time", 0.5));//"oncomplete", "EndRotation"

        if (direction == MazeDirection.South)
            iTween.RotateTo(HandleCharacter, iTween.Hash("y", 180, "time", 0.5));//"oncomplete", "EndRotation"

        if (direction == MazeDirection.West)
            iTween.RotateTo(HandleCharacter, iTween.Hash("y", -90, "time", 0.5));//"oncomplete", "EndRotation"
        
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
       
    }

	private void Look (MazeDirection direction) {
		transform.localRotation = direction.ToRotation();
		currentDirection = direction;
	}

    bool chektouch;
	private void Update () {
        chektouch = (TJoyStick.stateTouch == TJoyStick.TOUCH_STASE.STATE_DOWN && TJoyStick.timePress > 0f &&  TJoyStick.timePress <0.3f);
        chektouch = chektouch || (TJoyStick.stateTouch == TJoyStick.TOUCH_STASE.STATE_UP);
        chektouch = chektouch || (TJoyStick.stateTouch == TJoyStick.TOUCH_STASE.STATE_DRAG && TJoyStick.timePress < 0.3);
        if (chektouch)
            return;
         TJoyStick4Way way =  TJoyStick.Get4Way();
     //  Debug.Log(way);
       if (Input.GetKeyDown(KeyCode.W) || Input.GetKeyDown(KeyCode.UpArrow) || way == TJoyStick4Way.UP)
        {
            if (isCanmove)
                Move1(MazeDirection.North,true);
            else
            {
                //float distance = Vector3.Distance(transform.position, currentCell.transform.position);               
                //if (distance < 0.7f) 
                directionKeyWating = MazeDirection.North;
                moveContinue(MazeDirection.North);
                //kiem tra can luu lai key hay khong
                return;
            }
        }
       else if (Input.GetKeyDown(KeyCode.D) || Input.GetKeyDown(KeyCode.RightArrow) || way == TJoyStick4Way.RIGHT)
        {
            if (isCanmove)
                Move1(MazeDirection.East, true);
               else
            {
                //float distance = Vector3.Distance(transform.position, currentCell.transform.position);                
                //if (distance < 0.7f) 
                directionKeyWating = MazeDirection.East;
                moveContinue(MazeDirection.East);
                //kiem tra can luu lai key hay khong
                return;
            }
        }
       else if (Input.GetKeyDown(KeyCode.S) || Input.GetKeyDown(KeyCode.DownArrow) || way == TJoyStick4Way.DOWN)
        {
            if (isCanmove)
                Move1(MazeDirection.South, true);
               else
            {
                //float distance = Vector3.Distance(transform.position, currentCell.transform.position);                
                //if (distance < 0.7f) 
                directionKeyWating = MazeDirection.South;
                moveContinue(MazeDirection.South);
                //kiem tra can luu lai key hay khong
                return;
            }
        }
       else if (Input.GetKeyDown(KeyCode.A) || Input.GetKeyDown(KeyCode.LeftArrow) || way == TJoyStick4Way.LEFT)
        {
            if (isCanmove)
                Move1(MazeDirection.West, true);
               else
            {
                //float distance = Vector3.Distance(transform.position, currentCell.transform.position);                
                //if (distance < 0.7f)
                directionKeyWating = MazeDirection.West;
                moveContinue(MazeDirection.West);
                //kiem tra can luu lai key hay khong
                return;
            }
        }
        else if (Input.GetKeyDown(KeyCode.Q))
        {//chuyen goc nhin
            Look(currentDirection.GetNextCounterclockwise());
        }
        else if (Input.GetKeyDown(KeyCode.E))
        {//chuyen goc nhin
            Look(currentDirection.GetNextClockwise());
        }
	}
    public void walkCompleted()
    {
        isCanmove = true;
        currentCell = targetCell;
        if (checkWin())
        {
            anim.Play("IDE");//.SetBool("ISWALK", true);
            SoundEngine.stop();
        }
        else
        {
            if (directionKeyWating != MazeDirection.None)
            {
                Move1(directionKeyWating, false);
            }
            else
            {
                anim.Play("IDE");//.SetBool("ISWALK", true);
                SoundEngine.stop();
            }
        }
        
    }
    private bool checkWin()
    {

        if (currentCell.coordinates.x == Maze.instance.coordinateEnd.x && currentCell.coordinates.z == Maze.instance.coordinateEnd.y)
        {
         //   Debug.Log("WIN" + ScoreCOntrol.level +"," +ScoreCOntrol.mcurrentLevel);
            SoundEngine.play(SoundEngine.instance.win);
            if (ScoreCOntrol.mcurrentLevel >= ScoreCOntrol.level.NUM)
            {
                ScoreCOntrol.level.NUM++;
                ScoreCOntrol.level.Save();
            }
           
            int _Star =GameManager.instance.hintCount == 0? 1 : GameManager.instance.hintCount;
            GameManager.instance.starGameOver.sprite = GameManager.instance.sprBigStart[_Star-1];
            GameManager.instance.textGameOver.text = ScoreCOntrol.mcurrentLevel.ToString();

            ScoreCOntrol.levelArray.Set(ScoreCOntrol.mcurrentLevel, _Star);
            ScoreCOntrol.levelArray.Save();
            ScoreCOntrol.mcurrentLevel++;

            GameManager.instance.setUI(GameManager.instance.panelWIN);
            return true;
        }
        return false;
    }
    public void initBeginPlayAnim()
    {
        StartCoroutine(WaitAndBeginAnim(1.0F));
        
    }

    
    private IEnumerator  WaitAndBeginAnim(float waitTime)
    {
        isCanmove = false;
        yield return new WaitForSeconds(waitTime);
        print("WaitAndPrint " + Time.time);
        anim.Play("WALK");//.SetBool("ISWALK", true);
        GameManager.instance.setUI(null);
        iTween.MoveTo(gameObject, iTween.Hash("position", currentCell.transform.localPosition, "easetype", iTween.EaseType.linear, "time", 2.0f, "onComplete", "BeginStep1Completed"));
        iTween.RotateTo(HandleCharacter, iTween.Hash("y", 0, "time", 0.5));//"oncomplete", "EndRotation"
        iTween.MoveTo(playerCamera, iTween.Hash("position", posCameraEnd.localPosition, "easetype", iTween.EaseType.linear, "time", 1.6f, "islocal", true));
        iTween.RotateTo(playerCamera, iTween.Hash("x", posCameraEnd.eulerAngles.x, "time", 1.6));//"oncomplete", "EndRotation"
    }
    private void BeginStep1Completed()
    {
        isCanmove = true;
        anim.Play("IDE");//.SetBool("ISWALK", true);
        GameManager.instance.setUI(GameManager.instance.panelUI);
     
    }
}