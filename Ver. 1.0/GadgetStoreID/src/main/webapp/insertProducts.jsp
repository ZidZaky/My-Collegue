<%@ page import="javax.servlet.http.HttpSession" %>
<%@ page import="com.servletPackage.servlet.UserData" %>
<%@ page import="java.sql.*" %>
<%@ page import="java.util.*" %>
<%@ page import="com.servletPackage.servlet.Products" %>
<%@ page import="com.CRUDProducts.servlet.readProducts" %>
<%
    HttpSession GetSession = request.getSession();
    UserData user = (UserData) GetSession.getAttribute("userData");
    
%>
<!DOCTYPE html>
<html lang="en">
<head>
    <style>
        @import url('https://fonts.googleapis.com/css2?family=Lora:ital@1&display=swap');
    </style>
    <style>
        body{
            background-color: #8ec4b6;
        }
    </style>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="style.css">
    <link rel="icon" href="./Aset/gadgets.png" type="image/x-icon">
    <title>GadetStoreID | New Products</title>
</head>
<body>
<form action="insertProducts" method="post" enctype="multipart/form-data">
<div class="wadah">
    <div class="prof">
    
        <h1>New Products</h1>
        <p>Product Name</p>
      	<input type="text" id="name" placeholder="name" name="name"><br><br>
      	<p>Merk Gadget</p>
      	<input type="text" id="merk" placeholder="merk" name="merk"><br><br>
      	<p>Harga Satuan</p>
      	<input type="text" id="harga" placeholder="harga" name="harga"><br><br>
        <p>Stok Gadget</p>
        <input type="text" id="stok" placeholder="stok" name="stok"><br><br>
        <p>Deskripsi Gadget</p>
      	<input type="text" id="desc" placeholder="desc" name="desc"><br><br>
      	<p>Input Gadget Photo</p>
      	<input type="file" name="imageFile" accept=".jpg, .jpeg, .png" />
        <a href="myStore.jsp"><button>Add Gadget</button></a>
    </div>
</div>
</form>
</body>
</html>
