<%@ page language="java" contentType="text/html; charset=ISO-8859-1" pageEncoding="ISO-8859-1"%>
<%@ page import="com.CRUDOperations.servlet.editValues"  
		 import="com.servletPackage.servlet.UserData"
		 import="javax.servlet.http.HttpSession"
		 import="com.servletPackage.servlet.DatabaseConnector"
		 import="java.sql.*" %>
<%
    HttpSession GetSession = request.getSession();
    String username = (String) GetSession.getAttribute("username");
    editValues editUser = new editValues();

	UserData user = editUser.getValuesUsername(username);
%>
<!DOCTYPE html>
<html>
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
    <title>GadetStoreID | Transaction History</title>
</head>
<body>
<form action="homepage.jsp" method="post">
<div class="wadah">
    <div class="prof">
        <h1>Transaction History</h1>
        <p>Id Transaksi</p>
        <input type="text" id="idTransaksi" placeholder="idTransaksi" name="idTransaksi" value="<%= request.getParameter("idTransaksi") %>" readonly><br><br>
    	<p>Id User</p>
    	<input type="text" id="id" placeholder="idUser" name="idUser" value="<%=user.getId()%>" readonly><br><br>
    	<p>Id Unit Gadget</p>
    	<input type="text" id="idUnitHp" placeholder="idUnitHp" name="idUnitHp" value="<%= request.getParameter("idUnitHp") %>" readonly><br><br>
        <p>Select Product</p>
        <input type="text" id="product" placeholder="product" name="product" value="<%= request.getParameter("product") %>" readonly><br><br>
        <p>Jumlah Order</p>
        <input type="text" id="jumlah" placeholder="jumlah" name="jumlah" value="<%= request.getParameter("jumlah") %>" readonly><br><br>
        <p>Jenis Pembayaran</p>
        <input type="text" id="id" placeholder="Pembayaran" name="Pembayaran" value="<%= request.getParameter("Pembayaran") %>" readonly><br><br>
        
        <br>
        <br>
        <a href="homepage.jsp"><button>Back</button></a>
    </div>
</div>
</form>
</body>
</html>