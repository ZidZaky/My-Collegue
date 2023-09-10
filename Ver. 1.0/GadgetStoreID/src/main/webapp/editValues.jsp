<%@ page language="java" contentType="text/html; charset=ISO-8859-1" pageEncoding="ISO-8859-1"%>
<%@ page import="com.CRUDOperations.servlet.editValues"  import="com.servletPackage.servlet.UserData" %>
<%@ page import="javax.servlet.http.HttpSession" %>
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
            background-color: #F2F3EE;
        }
    </style>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="css/style.css">
    <link rel="icon" href="./Aset/gadgets.png" type="image/x-icon">
    <title>GadetStoreID | Edit Profil</title>
</head>
<script>
<% if (request.getAttribute("UpdateFailed") != null && (Boolean) request.getAttribute("UpdateFailed")) { %>
alert("Edit Failed. Please Fill in The Blank Correctly");
<% } %>
</script>
<body>
    <form action="editUser" method="post">
<div class="wadah">
    <div class="prof">
        <div class="back">
            <!-- <a href="profil.html"><h3>Back</h3></a> -->
        </div>
        <div class="jud">
            <h1>Edit Profil</h1>
        </div>
        <div class="input">
            <input type="hidden" id="id" placeholder="id" name="id" value="<%=user.getId()%>"><br><br>
            <input type="hidden" id="id" placeholder="id" name="namaUser" value="<%=user.getNamaUser()%>"><br><br>
            
            <div class="Nama">
                <p>Nama</p>
                <input type="text" id="Nama" placeholder="Nama" name="Nama" value="<%=user.getUserName()%>"><br><br>
            </div>
            <div class="Email">
                <p>Email</p>
                <input type="text" id="Email" placeholder="Email" name="Email" value="<%=user.getEmail()%>"><br><br>
            </div>
            <div class="password">
                <p>Password</p>
                <input type="password" id="password" Placeholder="Password" name="password" value="<%=user.getUserPassword()%>"><br><br>
            </div>
            <div class="confirm-password">
                <p>Re-password</p>
                <input type="password" id="Re-password" Placeholder="Re-Password" name="Re-password"><br><br>
            </div>
            <div class="no-tlp">
                <p>No.Telepon</p>
                <input type="text" id="No.tlp" Placeholder="No.tlp" name="No.tlp" value="<%=user.getNoHP()%>"><br><br>
            </div>
            <div class="Alamat">
                <p>Alamat</p>
                <textarea name="Alamat" id="Alamat" placeholder="Alamat" cols="10" rows="15" value="<%=user.getAlamat()%>"></textarea>
                <input type="hidden" id="kodeRole" placeholder="kodeRole" name="kodeRole" value="<%=user.getKodeRole()%>"><br><br>
            </div>
            <div class="SBS1">
                <a href="profil.html"><button>SAVE</button></a>
            </div>
            <div class="SBS3">
                <a href="profil.html"><button>Back</button></a>
            </div>
        </div>
        <div class="foto">
           
        <img src="./Aset/user.png" alt="Default Photo">

            <div class="SBS2">
                <input type="file" name="imageFile" accept=".jpg, .jpeg, .png" />
            </div>
            <!-- <button>Pilih file</button> -->
        </div>
    </div>
</div>
</form>
</body>
</html>