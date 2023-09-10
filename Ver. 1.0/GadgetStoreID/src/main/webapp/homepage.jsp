<%@ page import="javax.servlet.http.HttpSession" %>
<%@ page import="com.servletPackage.servlet.UserData" %>
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
             background-color: #E9E9E5;   
        }
    </style>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="css/style.css">
    <link rel="icon" href="./Aset/gadgets.png" type="image/x-icon">
    <title>GadetStoreID | Home</title>
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
    <%if(user.getKodeRole()==3){ %>
    <div class="kontol">
     <a href="myStore.jsp">My Store</a>
    </div>
    <%} %>
    <%if(user.getKodeRole()==1){ %>
    <div class="kontol">
     <a href="listUsers.jsp">List User</a>
    </div>
    <%} %>
    <div class="user">
      <a href="profileUser.jsp">
        <img src="./Aset/user.png" alt="User Photo">
	  </a>
    </div>
    <p><%= user.getUserName() %></p>
  </div>
    
  <div class="oop">
    <div class="alpa">
      <img src="./Aset/galaxy-z-fold4_highlights_kv_png-removebg-preview.png" alt="">
    </div>
    <div class="beta">
      <h1>SAMSUNG</h1>
      <h1 class="m">Galaxy Z Fold4</h1>
      <p>Samsung Galaxy Z Fold 4 adalah ponsel lipat revolusioner dengan desain inovatif.Dilengkapi dengan layar Dynamic AMOLED yang besar, Z Fold 4 menawarkan pengalaman multimedia yang luar biasa. Performanya kuat, dengan prosesor yang handal dan kapasitas RAM yang besar. Kamera berkualitas tinggi memungkinkan pengambilan foto dan video yang tajam. Fitur keamanan seperti pemindai sidik jari dan pemindai wajah melindungi privasi pengguna. Baterai yang kuat dan pengisian daya cepat memberikan daya tahan yang baik. Galaxy Z Fold 4 adalah pilihan yang sempurna bagi mereka yang menginginkan inovasi dan fleksibilitas dalam teknologi mobile.</p>
      <a href="https://www.samsung.com/id/smartphones/galaxy-z-fold4/">Click Here</a>
      <a href="https://www.samsung.com/id/smartphones/galaxy-z-fold4/"><img src="./Aset/right-arrow.png" alt=""></a>
    </div>
  </div>

      
</body>
</html>