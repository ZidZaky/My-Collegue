package com.CRUDOperations.servlet;

import java.io.IOException;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import com.servletPackage.servlet.DatabaseConnector;
import com.servletPackage.servlet.UserData;
/**
 * Servlet implementation class editUser
 */
@WebServlet("/editUser")
public class editUser extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public editUser() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		DatabaseConnector DBcon = new DatabaseConnector();
		Connection cons = DBcon.getCons();
		
		PreparedStatement ps = null;
	    
		try {
			int id = Integer.parseInt(request.getParameter("id"));
		    String userName=request.getParameter("Nama");
		    String email=request.getParameter("Email");
		    String passWord=request.getParameter("Re-password");
		    String noHp =request.getParameter("No.tlp");
		    String alamat=request.getParameter("Alamat");
		    int kodeRole = Integer.parseInt(request.getParameter("kodeRole"));
			String namaUser = request.getParameter("namaUser");
			
			String Querry = "UPDATE `data_user` SET `idUser` = ?, `username` = ?, `namaUser` = ?, "
					+ "`noHp` = ?, `alamatUser` = ?, `password` = ?,"
					+ "`email` = ? WHERE `data_user`.`idUser` = ?;";
			ps=cons.prepareStatement(Querry);
			ps.setInt(1, id);
			ps.setString(2, userName);
			ps.setString(3, namaUser);
			ps.setString(4, noHp);
			ps.setString(5, alamat);
			ps.setString(6, passWord);
			ps.setString(7, email);
			ps.setInt(8, id);
			int resultSet = ps.executeUpdate();	
			if(resultSet > 0) {
				PreparedStatement pss=cons.prepareStatement("select * from data_user where username = ?  and password = ?");
			    pss.setString(1, userName);
			    pss.setString(2, passWord);
			    ResultSet rs = pss.executeQuery();
			    if(rs.next()) {	
			    	UserData user = new UserData();
			        user.setId(rs.getInt("idUser"));
			        user.setUserName(rs.getString("username"));
			        user.setNamaUser(rs.getString("namaUser"));
			        user.setNoHP(rs.getString("noHp"));
			        user.setAlamat(rs.getString("alamatUser"));
			        user.setUserPassword(rs.getString("password"));
			        user.setKodeRole(rs.getInt("kodeRole"));
			        user.setEmail(rs.getString("email"));

			        request.getSession().setAttribute("userData", user);
			    	request.getSession().setAttribute("username", userName);
			    }
		    	request.getSession().setAttribute("username", userName);
		    	RequestDispatcher rd = request.getRequestDispatcher("profileUser.jsp");
		    	rd.forward(request, response);
		    }else {
		    	request.setAttribute("UpdateFailed", true);
		        RequestDispatcher rd = request.getRequestDispatcher("editValues.jsp");
		        rd.forward(request, response);
		    }
		
		} catch (Exception e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
			request.setAttribute("UpdateFailed", true);
			RequestDispatcher rd = request.getRequestDispatcher("editValues.jsp");
	        rd.forward(request, response);
		}
	}

}
