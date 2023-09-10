<!DOCTYPE html>
<html lang="en">
<head>
    <style>
        @import url('https://fonts.googleapis.com/css2?family=Lora:ital@1&display=swap');
    </style>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="icon" href="/Aset/gadgets.png" type="image/x-icon">
    <link rel="stylesheet" href="css/style.css">
    <title>GadetStoreID | Registrasi</title>
    
</head>
<body  background="./Aset/laptop.jpg">
    <div class="container">

        <div class="border">

            <div class="register">
            <script>
        <%if (request.getAttribute("Registration") != null && !(Boolean) request.getAttribute("Registration")){%>
                    alert("Registration Failed, Username Taken ");	
                    <% } %>
        </script>
                <h2>Registrasi</h2>
                <form action="RegistrationSession" method="post">
                <input type="text" id="username" placeholder="username" name="username"><br><br>
                <input type="text" id="email address" placeholder="email address" name="email"><br><br>
                <input type="password" id="password" placeholder="password" name="password"><br><br>
                <a href="loginPage.jsp"><button>Confirm</button></a>
                </form>
            </div>

            <div class="reg">
                <p>Already registered? <a href="loginPage.jsp">Sign In</a></p>
            </div>

        </div>

    </div>
</body>
</html>