package com.servletPackage.servlet;

import java.io.*;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;


/**
 * Servlet implementation class LoginSession
 */
@WebServlet("/LoginSession")
public class LoginSession extends HttpServlet {
	private static final long serialVersionUID = 1L;

	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		try {
			Class.forName("com.mysql.cj.jdbc.Driver");
			Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3307/gadgetstoreid","root","");
		    String userName=request.getParameter("username");
		    String passWord=request.getParameter("password");
		    PreparedStatement ps=con.prepareStatement("select * from data_user where username = ?  and password = ?");
		    ps.setString(1, userName);
		    ps.setString(2, passWord);
		    ResultSet resultSet = ps.executeQuery();
		    if(resultSet.next()) {	
		    	UserData user = new UserData();
		        user.setId(resultSet.getInt("idUser"));
		        user.setUserName(resultSet.getString("username"));
		        user.setNamaUser(resultSet.getString("namaUser"));
		        user.setNoHP(resultSet.getString("noHp"));
		        user.setAlamat(resultSet.getString("alamatUser"));
		        user.setUserPassword(resultSet.getString("password"));
		        user.setKodeRole(resultSet.getInt("kodeRole"));
		        user.setEmail(resultSet.getString("email"));

		        request.getSession().setAttribute("userData", user);
		    	request.getSession().setAttribute("username", userName);
		    	request.getSession().setAttribute("loggedInUser", true);
		    	RequestDispatcher rd = request.getRequestDispatcher("homepage.jsp");
		    	rd.forward(request, response);
		    }else {
		    	request.setAttribute("loginFailed", true);
		        RequestDispatcher rd = request.getRequestDispatcher("loginPage.jsp");
		        rd.forward(request, response);
		    }
		
		} catch (ClassNotFoundException e) {
			e.printStackTrace();
		}catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
}
		
	
