<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="preconnect" href="https://fonts.googleapis.com">
    <link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
    <link href="https://fonts.googleapis.com/css2?family=Josefin+Sans:ital,wght@0,100..700;1,100..700&display=swap" rel="stylesheet">
    <title>Vector Asociativo y Foreach</title>
</head>
<body style="font-family: Josefin Sans; font-size: 35px;" bgcolor= #633974><center>
    <br><br><br><br><br><br><br><br>
    <?php
    //Vector asociativo 
    $var1['nombre']= 'Me llamo Ramon Gonzales';
    $var1['edad']= 'Tengo 29 años';
    $var1['genero']= 'Soy hombre';
    
    foreach ($var1 as $valor)  //Para cada "$var1" como "$valor"; Lo que quiere decir que la variable $valor toma cada uno de los arreglos
    {
        echo $valor.'<br><br><br>';
        
    }  
    $localidades = array ('bosa','teusaquillo','restrepo');
    for ($i=0; $i <= 2 ; $i++) 
    { 
        echo $localidades[$i].'<br>';
    }  
      
    ?>
</body>
</html>