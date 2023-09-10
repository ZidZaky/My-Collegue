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
    <link rel="stylesheet" href="css/style.css">
    <link rel="icon" href="./Aset/gadgets.png" type="image/x-icon">
    <title>GadetStoreID | Place Order</title>
</head>
<body>
<form action="confirmOrder.jsp" method="post">
<div class="wadah">
    <div class="prof">
    <input type="hidden" id="idTransaksi" placeholder="idTransaksi" name="idTransaksi" value="NULL"><br><br>
    <input type="text" id="id" placeholder="idUser" name="idUser" value="<%=user.getId()%>"><br><br>
        <h1>Place Order</h1>
        <p>Select Product</p>
        <select name="product">
        	
        	<%
        	readProducts rp = new readProducts(); 
    ArrayList<Products> productList = rp.getValues();
    for (Products product : productList) {
    %>
    <option value="<%=product.getId()%>"><%=product.getNamaGadget()%></option>
    <%} %>
        </select><br><br>
        <p>Jumlah Order</p>
        <input type="text" id="jumlah" placeholder="jumlah" name="jumlah"><br><br>
        <p>Jenis Pembayaran</p>
        <select name="Pembayaran">
        	<option>Cash</option>
        	<option>Kredit</option>
        </select>
        <br>
        <br>
        <a href="confirmOrder.jsp"><button>ORDER</button></a>
    </div>
</div>
</form>
</body>
</html>
