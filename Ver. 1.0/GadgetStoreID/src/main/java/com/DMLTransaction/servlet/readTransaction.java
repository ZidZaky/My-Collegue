package com.DMLTransaction.servlet;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.*;

import com.servletPackage.servlet.*;

public class readTransaction {
	
	public static void main(String[] args) {
		readTransaction rv = new readTransaction();
		rv.getValues();
	}
	
	public Transactions getValues() {
		DatabaseConnector DBcon = new DatabaseConnector();
		Connection cons = DBcon.getCons();
		
		PreparedStatement ps = null;
		ResultSet rs = null;
		
		Transactions Trs = new Transactions();
		
		try {
			String Querry = "select * from transaction";
			ps=cons.prepareStatement(Querry);
			rs=ps.executeQuery();
			while(rs.next()) {
				

				Trs.setIdUnit(0);
				Trs.setDate(Querry);
				Trs.setIdUser(0);
				Trs.setJenisPembayaran(Querry);
				Trs.setJumlah(0);
				Trs.setTotal(0);
				
			}
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		return Trs;
		
	};
}
