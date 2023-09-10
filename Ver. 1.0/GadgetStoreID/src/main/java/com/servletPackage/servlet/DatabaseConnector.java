package com.servletPackage.servlet;

import java.sql.*;

public class DatabaseConnector {
	
	public static void main(String[] args) {
		DatabaseConnector DB = new DatabaseConnector();
		System.out.println(DB.getCons());
	}
	
	public Connection getCons() {
		Connection con = null;
		try {
			Class.forName("com.mysql.cj.jdbc.Driver");
			con = DriverManager.getConnection("jdbc:mysql://localhost:3307/gadgetstoreid","root","");
		} catch (Exception e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		return con; 
	
	}
}
