<?php
class Asal{
    public function fungsi_asal(){
        echo "ini fungsi asal. \n";
  }
}
class Turunan extends Asal{
     public function fungsi_asal(){
         echo "ini fungsi turunan.";
   }
}
$objTurunan = new Turunan();
$objTurunan->fungsi_asal();
?>
