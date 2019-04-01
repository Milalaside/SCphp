<?php
/*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 $a = '|1 |2 |3 |4 |5';

$i=1;
while ($i<14)
{
	echo substr ($a,$i,1)."\r\n";
		$i=$i+3;
	}
	
	
	
	?>>>>>>>>>>>>>>>>
	 echo substr ($a,$i,3)."\r\n";
 $j=$j+3;

>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
$a = '|1 |15 |2 |230 |5 ';
$i=0;//i adalah posisi |
while ($i<strlen($a)){
$i = strpos($a,'|',$i);
$j = strpos($a,' ',$i);
//echo $i.'-'.$j."\r\n";
echo substr ($a,$i+1,$j-$i)."\r\n";
		$i=$i+3;
}
*/

 $a = '|1 |2 |3 |4 |5';
 $b = explode ('|',$a);


foreach ($b as $key => $value){
	echo "$value \r\n";


}







	
?>


