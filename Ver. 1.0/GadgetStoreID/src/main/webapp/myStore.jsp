<%@ page import="javax.servlet.http.HttpSession" %>
<%@ page import="com.servletPackage.servlet.DatabaseConnector"%>
<%@ page import="java.sql.*" %>
<%@ page import="java.util.*" %>
<%@ page import="com.servletPackage.servlet.Products" %>
<%@ page import="com.CRUDProducts.servlet.readProducts" %>

<%
    HttpSession GetSession = request.getSession();
    String username = (String) GetSession.getAttribute("username");
    
%>
<%
	readProducts rp = new readProducts();
%>

<!DOCTYPE html>
<html lang="en">
<head>
    <style>
        @import url('https://fonts.googleapis.com/css2?family=Lora:ital@1&display=swap');
    </style>
    <style>
        body{
             background-color: #E9E9E5;   
        }
    </style>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="css/style.css">
    <link rel="icon" href="./Aset/gadgets.png" type="image/x-icon">
    <title>GadetStoreID | MyStore</title>
</head>
<body>

    <div class="topnav">
        <img src="./Aset/sales.png" alt="">
        <div class="group">
          <img src="./Aset/Group 1.png" alt="">
        </div>
        <div class="kontol">
          <a href="homepage.jsp" class="active">Home</a>
          <a href="#">About us</a>
          <a href="#">Contact person</a>
        </div>
        <div class="dropdown">
          <button class="dropbtn">Product
            <i class="fa fa-caret-down"></i>
          </button>
          <div class="dropdown-content">
            <a href="productPage.jsp">Samsung</a>
            <a href="#">Oppo</a>
            <a href="#">Vivo</a>
          </div>
        </div>
        <div class="kontol">
            <a href="loginPage.jsp" onclick="return confirm('Anda Yakin Untuk LogOut?')">Login</a>
        </div>
        <div class="user">
          <a href="profileUser.jsp"><img src="./Aset/user.png" alt=""></a>
        </div>
        <p><%= username %></p>
    </div>

    <div class="samsul">
        <img src="./Aset/Samsung_Orig_Wordmark_BLUE_RGB.png" alt="">
    </div>
	<center>
            	<a href="insertProducts.jsp"><h1>New Gadget</h1></a>
   </center>
	
    <!-- konten -->
	
    <div class="kk">
        <div class="fold-4">
    <% 
    ArrayList<Products> productList = rp.getValues();
    for (Products product : productList) {
    %>
    <div class="product">
        <img src="./Aset/galaxy fold4.jpg" alt="">
        <div class="tm">
            <p><%= product.getNamaGadget() %></p>
            <div class="hg">
                <p>Rp.<%= product.getHarga() %>,-</p>
            </div>
            <div>
            <center>
            	<a href="editProducts.jsp">Edit Data</a>
            </center>
            </div>
        </div>
    </div>
    <% } %>
</div>



        
    </div>
    <br><br>
</body>
</html>