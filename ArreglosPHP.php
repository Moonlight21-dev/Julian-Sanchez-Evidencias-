<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="preconnect" href="https://fonts.googleapis.com">
    <link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
    <link href="https://fonts.googleapis.com/css2?family=Josefin+Sans:ital,wght@0,100..700;1,100..700&display=swap" rel="stylesheet">
    <title>Document</title>
</head>
<body>
    <?php
    //Ejercicio arreglos 1
    $arreglo[0] = "enero";
    $arreglo[1] = "febrero";    
    $arreglo[2] = "marzo";
    $arreglo[3] = "abril"; 
    $arreglo[4] = "mayo";
    $arreglo[5] = "junio";
    $arreglo[6] = "julio";
    $arreglo[7] = "agosto";
    $arreglo[8] = "septiembre";
    $arreglo[9] = "octubre";
    $arreglo[10] = "noviembre";
    $arreglo[11] = "diciembre";
    $arreglo[12] = "enero";

for ($i = 0; $i < count( value: $arreglo); $i ++) {
    echo $arreglo[$i]."<br>";
}
?>
</body>
</html>