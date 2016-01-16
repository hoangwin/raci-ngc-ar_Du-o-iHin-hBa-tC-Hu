<?php
//khi goi thi goi nhu ben duoi chu y da ta base co it nhat 5 phan tu
//http://gamethuanviet.com/racing_2d/SetGetData.php?type=select&username=Hello
//http://gamethuanviet.com/racing_2d/SetGetData.php?type=update&username=toanstt&Time=12&Level=31&Played=14&country=14a

$con = mysql_connect("localhost","gamethua_game","30xxxx");
if (!$con)
  {
	
	die('Could not connect: ' . mysql_error());
  }


$typeCommand =  $_GET['type'];

// some code
mysql_select_db("gamethua_thuanviet", $con);

if($typeCommand == "update")
{	
	$UpdateCommand = "INSERT INTO `racing_2d` (`UserName`, `Time`,`Level`, `Played`, `Country`)	" 
	."VALUES ('". $_GET["username"] 
	."'," . $_GET["Time"] 
	. "," .$_GET["Level"]  
	. "," .$_GET["Played"]  
	. ",'" . $_GET["country"] . "'"
	. ") ON DUPLICATE KEY UPDATE "
	. " `Time` = IF( `Time`>" . $_GET["Time"] . ", `Time`," . $_GET["Time"]. " ),"
	. " `Played` = IF( `Played` >" . $_GET["Played"] . ", `Played`," . $_GET["Played"]. " )";	
	//echo $UpdateCommand;
	$result = mysql_query($UpdateCommand);
	/*
	$file = 'people.txt';
	$current = file_get_contents($file);	
	$current .=  $UpdateCommand ;	
	file_put_contents($file, $current);
	*/
}else if($typeCommand == "select")
{
	$selectCommand = "SELECT * FROM `racing_2d` ORDER BY `Time` DESC LIMIT 0 , 10";
	//$Insert_UpdateCommand = "INSERT INTO `racing_2d` (`UserName`, `Time`, `Country`, `Unknow`) VALUES (`CaoGia`, 1,'VN','UnKnow') ON DUPLICATE KEY UPDATE `Time` = 1234"
	$result = mysql_query($selectCommand);
	echo mysql_num_rows ($result)."|";
	while($row = mysql_fetch_array($result))
	{
		echo $row['UserName'] . "|" . $row['Time']. "|" . $row['Level'];
		echo "|";
	}
	
	//user rank
	$selectCommand = "SELECT COUNT( * ) AS rank FROM  `racing_2d` WHERE  `Time` >= ( SELECT  `Time` FROM  `racing_2d` WHERE  `UserName` ='".$_GET["username"]. "')";
	
	//echo $selectCommand;
	$result = mysql_query($selectCommand);	
	while($row = mysql_fetch_array($result))
	{
		echo $row['rank']. "|";
	}
	//user info
	$username = $_GET["username"];
	$selectCommand = "SELECT *   FROM  `racing_2d` WHERE  `UserName` =  '".$username."'";
	//echo $selectCommand ;
	$result = mysql_query($selectCommand);
	while($row = mysql_fetch_array($result))
	{
		echo $row['UserName'] . "|" . $row['Time']. "|" . $row['Level'];
		echo "|";
	}
}

//end some code
mysql_close($con);
?> 


