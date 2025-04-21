<?php
$servidor="localhost";
$usuario="root";
$contraseña="";
$dasededatos="findme_db";

$enlace =mysqli_connect($servidor,$usuario,$contraseña,$dasededatos);

if (!$enlace) {
    die("Error de conexión: " . mysqli_connect_error());
}
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Registro</title>
</head>
<body style="background: url('bgmascotas.jpeg') no-repeat center center fixed; 
                 background-size: cover; text-align: center; font-family: Arial, sans-serif;">
    <div style="width: 50%; margin: auto; background: rgba(255, 255, 255, 0.85); 
    padding: 20px; border-radius: 15px; box-shadow: 0px 4px 10px rgba(0,0,0,0.2);">

<h2 style="color: #5a3d8a; text-shadow: 1px 1px 2px rgba(0,0,0,0.2);">📝 Registro</h2>

<form action="register.php" method="POST" style="font-size: 18px; color: #333;">
    <table align="center" cellpadding="10">
        <tr>
            <td colspan="2" align="center"><h3>¡Bienvenido a FindMe!</h3></td>
        </tr>
        <tr>
            <td colspan="2" align="center"><p>Por favor, complete el siguiente formulario para registrarse.</p></td>
        </tr>
    </table>
<table align="center" cellpadding="10">
    <tr>                              
        <td><b>Nombre completo:</b></td>
        <td><input type="text" name="Nombre" placeholder="Ingrese su nombre" required
                   style="width: 100%; padding: 8px; border-radius: 5px; border: 1px solid #ccc;"></td>
    </tr>    
    <tr>                              
        <td><b>Apellidos completos:</b></td>
        <td><input type="text" name="Apellido" placeholder="Ingrese sus apellidos" required
                   style="width: 100%; padding: 8px; border-radius: 5px; border: 1px solid #ccc;"></td>
    </tr>                       
    <tr>                              
        <td><b>E-mail:</b></td>
        <td><input type="email" name="Email" placeholder="Ingrese su correo" required
                   style="width: 100%; padding: 8px; border-radius: 5px; border: 1px solid #ccc;"></td>
    </tr>
    <tr>                              
        <td><b>Usuario:</b></td>
        <td><input type="text" name="User" placeholder="Ingrese su usuario" required
                   style="width: 100%; padding: 8px; border-radius: 5px; border: 1px solid #ccc;"></td>
    </tr>
    <tr>
        <td><b>Contraseña:</b></td>
        <td><input type="password" name="contraseña1" placeholder="Ingrese su contraseña" required
                   style="width: 100%; padding: 8px; border-radius: 5px; border: 1px solid #ccc;"></td>
    </tr> 
    <tr>
        <td><b>Confirmar contraseña:</b></td>
        <td><input type="password" name="contraseña2" placeholder="Repita su contraseña" required
                   style="width: 100%; padding: 8px; border-radius: 5px; border: 1px solid #ccc;"></td>
    </tr>                           
    <tr>
        <td colspan="2" align="center">
            <input type="submit" value="Registrarse" 
                   style="background: #5a3d8a; color: white; padding: 10px 20px; font-size: 16px; 
                          border: none; border-radius: 5px; cursor: pointer;">
        </td>
    </tr>
</table>
</form>
</div>

</body>
</html>

<?php

if ($_POST['contraseña1'] == $_POST['contraseña2']) {
    $nombre = $_POST['Nombre'];
    $email = $_POST['Email'];
    $user = $_POST['User'];
    $contraseña1 = $_POST['contraseña1'];
    $contraseña2 = $_POST['contraseña2'];
    $apellido = $_POST['Apellido'];

    $sql = "INSERT INTO usuario(nombre_usuario, apellido_usuario, user_usuario, contraseña_usuario) VALUES ('$nombre', '$email', '$user', '$contraseña2')";

    if (mysqli_query($enlace, $sql)) {
       // echo "<script>alert('Regist   ro exitoso');</script>";
       // echo "<script>window.location.href='InicioRegistroFindMe.html';</script>";
    } 
     else {
        echo "<script>alert('Error: " . mysqli_error($enlace) . "');</script>";
    }
}else 
{
    echo "<script>alert('Las contraseñas no coinciden');</script>";

}
    
?>
