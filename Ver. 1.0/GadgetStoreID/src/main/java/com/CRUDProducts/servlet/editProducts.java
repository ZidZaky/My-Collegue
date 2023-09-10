package com.CRUDProducts.servlet;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

import com.servletPackage.servlet.DatabaseConnector;
import com.servletPackage.servlet.UserData;

public class editProducts {
	public UserData getValues(String id) {
		DatabaseConnector DBcon = new DatabaseConnector();
		Connection cons = DBcon.getCons();
		
		PreparedStatement ps = null;
		ResultSet rs = null;
		UserData user = new UserData();
		
		try {
			String Querry = "select * from userdata where idUser=?";
			ps=cons.prepareStatement(Querry);
			ps.setString(1, id);
			rs=ps.executeQuery();
			while(rs.next()) {
				
				user.setId(rs.getInt("idUser"));
				user.setUserName(rs.getString("userName"));
				user.setUserPassword(rs.getString("userPassword"));
				
			}
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		return user;
}
	
	public void changeValues(UserData users, int idBefore) {
		DatabaseConnector DBcon = new DatabaseConnector();
		Connection cons = DBcon.getCons();
		
		PreparedStatement ps = null;

		try {
			String Querry = "UPDATE userdata SET idUser=?, userName=?, userPassword=? WHERE idUser = ?;";
			ps=cons.prepareStatement(Querry);
			ps.setInt(1, users.getId());
			ps.setString(2, users.getUserName());
			ps.setString(3, users.getUserPassword());
			ps.setInt(4, idBefore);
			ps.executeUpdate();

		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();

		}

}
}