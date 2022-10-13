<!DOCTYPE html>
<!--
Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
Click nbfs://nbhost/SystemFileSystem/Templates/Project/PHP/PHPProject.php to edit this template
-->
<html>
    <head>
        <meta charset="UTF-8">
        <title></title>
    </head>
    <body>
        <?php
        class BangunDatar{
 
	// property class manusia
	public $luas;	
 
 	// method pada class manusia
	function luas($l){
		$this->luas=$l;
	}	
    }
// class turunan atau sub class dari class manusia
// kita menghubungkan class dengan syntax extends
class Keliling extends BangunDatar{
 
	// property class teman
	public $keliling;
 
 	// method pada class teman
	function keliling($kel){
		$this->keliling=$kel;
	}
}
// instansiasi class teman
$LuasdanKeliling = new Keliling;
 
// method beri nama adalah method pada class manusia, tapi kita bisa mengaksesnya karena telah menghubungkan class teman dengan class manusia
$LuasdanKeliling->luas(" Menghitung Luas bangun datar ");
$LuasdanKeliling->keliling(" Menghitung Keliling bangun datar ");
 
// menampilkan isi property
echo "" . $LuasdanKeliling->luas . "<br/>";
echo "" . $LuasdanKeliling->keliling;
 
        ?>
    </body>
</html>