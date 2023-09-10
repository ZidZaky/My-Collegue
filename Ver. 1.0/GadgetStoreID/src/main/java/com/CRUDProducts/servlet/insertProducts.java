package com.CRUDProducts.servlet;

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
 * Servlet implementation class insertProducts
 */
@WebServlet("/insertProducts")
public class insertProducts extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public insertProducts() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		try {
			Class.forName("com.mysql.cj.jdbc.Driver");
			Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3307/gadgetstoreid","root","");
		    PreparedStatement ps=con.prepareStatement("INSERT INTO `data_gadget` ( `namaGadget`, `merk`, `harga`, `stok`, `deskripsiProduk`) "
		    		+ "VALUES ( ?, ?, ?, ?, ?);");
		   
		    ps.setString(1, request.getParameter("name"));
		    ps.setString(2, request.getParameter("merk"));
		    ps.setString(3, request.getParameter("harga"));
		    ps.setString(4, request.getParameter("stok"));
		    ps.setString(5, request.getParameter("desc"));
		    int resultSet = ps.executeUpdate();
		    if(resultSet>0) {	
		    	RequestDispatcher rd = request.getRequestDispatcher("myStore.jsp");
		    	rd.forward(request, response);
		    }else {
		    	request.setAttribute("insertFailed", true);
		        RequestDispatcher rd = request.getRequestDispatcher("myStore.jsp");
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
