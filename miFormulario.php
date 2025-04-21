<?php
if (isset($_POST["btnenviar"])) 
{
   $nombre = $_POST["usuario"];
   $correo = $_POST["correo"];
   $contraseña = $_POST["contraseña"];
   $pais = $_POST["pais"];
   $color = $_POST["color"];
   $comida = $_POST["comida"];
   $fecha = $_POST["fecha"];
   $nombreac = $_POST["nombreac"];
   $emailac = $_POST["emailac"];
   $fechaac = $_POST["fechaac"];
   echo "<br> El nombre de usuario es: ".$nombre.
        "<br> El correo es: ".$correo.
        "<br> La contraseña es: ".$contraseña.
        "<br> El pais es: ".$pais.
        "<br> Su color favorito es: ".$color.
        "<br> Su comida del dia favorita es: ".$comida.
        "<br> Su fecha de nacimiento es: ".$fecha.
        "<br> El nombre de su acudiente es: ".$nombreac.
        "<br> El email de su acudiente es: ".$emailac.
        "<br> La fecha de nacimiento de su acudiente es: ".$fechaac;
}
if (isset($_POST["check1"])) 
{
        echo "<br>Usted acepto los terminos y condiciones";
}
        else 
        {
               echo "<br>Usted no acepto los terminos y condiciones";
        }
if (isset($_POST["check2"])) 
{
        echo "<br>Usted acepto la politica de cookies";
}
        else 
        {
               echo "<br>Usted no acepto la politica de cookies";
        }
if (isset($_POST["check3"])) 
{
        echo "<br>Usted acepto recibir noticias de la pagina";
}
        else 
        {
                echo "<br>Usted no acepto recibir noticias de la pagina";
        }
?>