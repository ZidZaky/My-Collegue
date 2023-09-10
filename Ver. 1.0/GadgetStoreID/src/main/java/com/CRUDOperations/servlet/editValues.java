package com.CRUDOperations.servlet;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

import com.servletPackage.servlet.DatabaseConnector;
import com.servletPackage.servlet.UserData;

public class editValues {
	public UserData getValuesUsername(String username) {
		DatabaseConnector DBcon = new DatabaseConnector();
		Connection cons = DBcon.getCons();
		
		PreparedStatement ps = null;
		ResultSet rs = null;
		UserData user = new UserData();
		
		try {
			String Querry = "select * from data_user where usename=?";
			ps=cons.prepareStatement(Querry);
			ps.setString(1, username);
			rs=ps.executeQuery();
			while(rs.next()) {
				
				user.setId(rs.getInt("idUser"));
				user.setUserName(rs.getString("usename"));
				user.setUserPassword(rs.getString("password"));
				user.setAlamat(rs.getString("alamatUser"));
				user.setEmail(rs.getString("email"));
				user.setNoHP(rs.getString("noHp"));
				user.setKodeRole(rs.getInt("kodeRole"));
				user.setNamaUser(rs.getString("namaUser"));
				
			}
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		return user;
}
}