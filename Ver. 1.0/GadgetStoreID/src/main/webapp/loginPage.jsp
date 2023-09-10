<%@ page import="javax.servlet.http.HttpSession" %>
<%
    HttpSession GetSession = request.getSession();
%>
<!DOCTYPE html>
<html lang="en">
<head>
    <style>
        @import url('https://fonts.googleapis.com/css2?family=Lora:ital@1&display=swap');
    </style>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="css/style.css">
    <link rel="icon" href="./Aset/gadgets.png" type="image/x-icon">
    <title>GadetStoreID | Login</title>
    
</head>
<body background="./Aset/laptop.jpg">
<div class="container">
       
    <div class="border">

        <div class="login">  
            <script>
        <% if (request.getAttribute("loginFailed") != null && (Boolean) request.getAttribute("loginFailed")) { %>
            alert("Login Failed. Please check your username and password.");
        <% } %>
        <% if (request.getAttribute("Registration") != null && (Boolean) request.getAttribute("Registration")) { %>
        alert("Registration Successfull");
    <% } %>
    </script>
            <h2>Login</h2>
            <form action="LoginSession" method="post">
            <input type="text" id="username" placeholder="username" name="username"><br><br>
            <input type="password" id="password" placeholder="password" name="password"><br><br>
            <a href="homepage.jsp"><button>Login</button></a>
            
            </form>
        </div>

        <div class="reg">
            <p>Not registered? <a href="registrationPage.jsp">Create an account</a></p>
        </div>

    </div>

</div>
</body>
</html>