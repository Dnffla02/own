<?php
    $con = mysqli_connect('localhost','root','Qlalfdlsep1!','Local instance MySQL80');

    $sql = "SELECT * FROM userDb";
    $Result = mysqli_query($con,$query);
    echo mysql_connect_error();

    if($Result){
        alert("입력 완료");
    }else{
        alert("입력 실패");
    }
?>