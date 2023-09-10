<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>
<%@ 
page import="com.CRUDOperations.servlet.editValues" 
import="com.servletPackage.servlet.UserData"
%>

<%
    HttpSession GetSession = request.getSession();
UserData user = (UserData) GetSession.getAttribute("userData");   
%>

<%
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
    <title>GadetStoreID | Profil</title>
</head>
<body>
    
    <div class="new-wadah">
        <div class="profil">
            <div class="label_profil">
                <h2>Profil</h2>
            </div>
           <img src="./Aset/user.png" alt="User Photo">
            <div class="data">
                <h4>Nama</h4>
                <p><%=user.getNamaUser()%></p>
                <hr>
                <h4>Username</h4>
                <p><%= user.getUserName() %></p>
                <hr>
                <h4>Email</h4>
                <p><%= user.getEmail()%></p>
                <hr>
                <h4>Telepon</h4>
                <p><%= user.getNoHP()%></p>
                <hr>
                <h4>Alamat</h4>
                <p><%= user.getAlamat()%></p>
                <hr>
                <div class="history">
                    <a href="transactionHistory.jsp"><button>History</button></a>
                </div>
                <div class="edit">
                    <a href="editValues.jsp"><button>Edit</button></a>
                </div>
                <div class="SBS7">
                    <a href="homepage.jsp"><button>Back</button></a>
                </div>
            </div>
        </div>
    </div>
</body>
</html>