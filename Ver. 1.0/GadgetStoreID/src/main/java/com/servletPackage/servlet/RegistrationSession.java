package com.servletPackage.servlet;

import java.io.IOException;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.SQLException;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * Servlet implementation class RegistrationSession
 */
@WebServlet("/RegistrationSession")
public class RegistrationSession extends HttpServlet {
	private static final long serialVersionUID = 1L;
    
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		try {
			Class.forName("com.mysql.cj.jdbc.Driver");
			Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3307/gadgetstoreid","root","");
		    String userName=request.getParameter("username");
		    String password=request.getParameter("password");
		    String email=request.getParameter("email");
		    PreparedStatement ps=con.prepareStatement("INSERT INTO `data_user` (`idUser`, `username`, `namaUser`, `noHp`, `alamatUser`, `password`, `kodeRole`, `email`) VALUES (NULL, ?, NULL, NULL, NULL, ?, 2, ?);");
		    ps.setString(1, userName);
		    ps.setString(3, password);
		    ps.setString(2, email);
		    
		    int resultSet = ps.executeUpdate();
		    if(resultSet > 0) {	
		    	request.setAttribute("Registration", true);
		    	RequestDispatcher rd = request.getRequestDispatcher("loginPage.jsp");
		    	rd.forward(request, response);
		    }else {
				request.setAttribute("Registration", false);
		        RequestDispatcher rd = request.getRequestDispatcher("registrationPage.jsp");
		        rd.forward(request, response);
		    }
		
		} catch (ClassNotFoundException e) {
			e.printStackTrace();
		}catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
			request.setAttribute("Registration", false);
	        RequestDispatcher rd = request.getRequestDispatcher("registrationPage.jsp");
	        rd.forward(request, response);
		}
	}
}
