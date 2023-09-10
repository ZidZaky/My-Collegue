package com.DMLTransaction.servlet;

import java.sql.*;

import com.servletPackage.servlet.*;

public class insertTransaction {
	public void insertValues(String userName, String userPassword) {
		DatabaseConnector cons = new DatabaseConnector();
		Connection SecuredConnection = cons.getCons();
		
		PreparedStatement ps = null;
		
		try {
		String Query="insert into userdata(userName,userPassword) values(?,?)";
		ps = SecuredConnection.prepareStatement(Query);
		ps.setString(1, userName);
		ps.setString(2, userPassword);
		
		ps.executeUpdate();
		} catch (Exception e) {
			e.printStackTrace();
		}
	}
}
