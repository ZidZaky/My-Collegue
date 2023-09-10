package com.CRUDProducts.servlet;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

import com.servletPackage.servlet.DatabaseConnector;
import com.servletPackage.servlet.UserData;

public class deleteProducts {
	public void deleteData(String id) {
		DatabaseConnector DBcon = new DatabaseConnector();
		Connection cons = DBcon.getCons();
		
		PreparedStatement ps = null;
		
		try {
			String Querry = "delete from userdata where idUser=?";
			ps=cons.prepareStatement(Querry);
			ps.setString(1, id);
			ps.executeUpdate();

		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
}
}
