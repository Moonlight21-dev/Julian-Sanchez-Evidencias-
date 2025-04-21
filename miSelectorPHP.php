
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Ejecicio PhP</title>
    <link rel="preconnect" href="https://fonts.googleapis.com">
    <link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
    <link href="https://fonts.googleapis.com/css2?family=Josefin+Sans:ital,wght@0,100..700;1,100..700&display=swap" rel="stylesheet">
    
</head>
<body style="font-family: Josefin Sans; font-size: 24px;" bgcolor= #85929e><center>
    <br><br><br>
    <form action="miSelectorPHP.php" method="POST">
        <h1>Opciones del Menu:</h1>
        <h3><p><center>1. Buenos Dias<br><br>2. Buenas Tardes<br><br>3. Buenas Noches</center></p></h3>
        <br>
        <p><center>Ingrese uno de los numeros del menu anterior
            <input type="number" name="menu">
        </center></p>

        <p><center><br>Seleccione una de las siguientes ciudades
            <select name="ciudad">
                <option value="bogota">Bogota</option>              
                <option value="cali">Cali</option>        
                <option value="medellin">Medellin</option>             
                <option value="barranquilla">Barranquilla</option>              
                <option value="santa_marta">Santa Marta</option>
            </select>

        Seleccione uno de los barrios de las ciudades
        <select name="barrios">
            <option value="barrio1">Barrio 1</option>              
            <option value="barrio2">Barrio 2</option>        
            <option value="barrio3">Barrio 3</option>             
            <option value="barrio4">Barrio 4</option>              
            <option value="barrio5">Barrio 5</option>
        </select>
        <button type="submit" name="btnoperar">Operar</button>
        </center></p>

    </form>

</body>
</html>
<?php
if(isset($_POST["btnoperar"]))
{
        $menu = $_POST["menu"];
        $ciudad = $_POST["ciudad"];
        $barrios = $_POST["barrios"];
    switch ($menu) 
    {
        case '1':
                echo "<br>Buenos dias<br>";
                break;

        case '2':

                echo "<br>Buenas tardes<br>";
                break;

        case '3':

                echo "<br>Buenas noches<br>";
                break;

        default:
                
                echo "<br>Numero no valido, ingrese un numero del 1 al 3<br>";
                
                 break;
    }

    switch ($ciudad) 
    {
        case "bogota":
        
                echo "<br>Bogota<br>";
                break;

        case "cali":

                echo "<br>Cali<br>";
                break;

        case "medellin":

                echo "<br>Medellin<br>";
                break;

        case "barranquilla":

                echo "<br>Barranquilla<br>";
                break;

        case "santa_marta":

                echo "<br>Santa Marta<br>";
                break;
    }
if ($ciudad == "bogota") 
{
        switch ($barrios)
         {
                case 'barrio1':
                        echo "<br>Cedritos<br>";
                        break;
                case 'barrio2':
                        echo "<br>San Victorino<br>";
                        break;
                case 'barrio3':
                        echo "<br>Venecia<br>";
                        break;
                case 'barrio4':
                        echo "<br>El Chico<br>";
                        break;
                case 'barrio5':                        
                        echo "<br>Bosa<br>";
                        break;
                
        }
        
}
else 
{
        if ($ciudad == "cali") 
{
        switch ($barrios)
         {
                case 'barrio1':
                        echo "<br>Palermo<br>";
                        break;
                case 'barrio2':
                        echo "<br>San Pedro<br>";
                        break;
                case 'barrio3':
                        echo "<br>La Merced<br>";
                        break;
                case 'barrio4':
                        echo "<br>Los Sauces<br>";
                        break;
                case 'barrio5':                        
                        echo "<br>La Cascada<br>";
                        break;
                
        } 
}
else 
{
        if ($ciudad == "medellin") 
{
        switch ($barrios)
         {
                case 'barrio1':
                        echo "<br>El Poblado<br>";
                        break;
                case 'barrio2':
                        echo "<br>La Candelaria<br>";
                        break;
                case 'barrio3':
                        echo "<br>Prado<br>";
                        break;
                case 'barrio4':
                        echo "<br>Laureles<br>";
                        break;
                case 'barrio5':                        
                        echo "<br>Aranjuez<br>";
                        break;
                
        }       
}
else
{
        if ($ciudad == "barranquilla") 
{
        switch ($barrios)
        {
                case 'barrio1':
                        echo "<br>El Prado<br>";
                        break;
                case 'barrio2':
                        echo "<br>Riomar<br>";
                        break;
                case 'barrio3':
                        echo "<br>La Concepción<br>";
                        break;
                case 'barrio4':
                        echo "<br>Siape<br>";
                        break;
                case 'barrio5':                        
                        echo "<br>El Golf<br>";
                        break;
                
        }       
}
else 
{
        if ($ciudad == "santa_marta") 
{
        switch ($barrios)
        {
                case 'barrio1':
                        echo "<br>El Rodadero<br>";
                        break;
                case 'barrio2':
                        echo "<br>Gaira<br>";
                        break;
                case 'barrio3':
                        echo "<br>Taganga<br>";
                        break;
                case 'barrio4':
                        echo "<br>Marina<br>";
                        break;
                case 'barrio5':                        
                        echo "<br>Libertador<br>";
                        break;
                
        }       
}
}
}
}      
}
}
?>
