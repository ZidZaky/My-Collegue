package com.CRUDProducts.servlet;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.*;

import com.servletPackage.servlet.*;

public class readProducts {
	
	public static void main(String[] args) {
		readProducts rv = new readProducts();
		rv.getValues();
	}
	
	public ArrayList<Products> getValues() {
		DatabaseConnector DBcon = new DatabaseConnector();
		Connection cons = DBcon.getCons();
		
		PreparedStatement ps = null;
		ResultSet rs = null;
		
		 int idGadget;
		 String namaGadget;
		 int harga;
		 int stock;
		 String descProduct;
		
		ArrayList<Products> ListProducts = new ArrayList<Products>();
		
		try {
			String Querry = "select * from data_gadget";
			ps=cons.prepareStatement(Querry);
			rs=ps.executeQuery();
			while(rs.next()) {
				Products pr = new Products();
				idGadget = Integer.parseInt(rs.getString("idUnitHp"));
				namaGadget = rs.getString("namaGadget");
				harga = Integer.parseInt(rs.getString("harga"));
				stock = Integer.parseInt(rs.getString("stok"));
				descProduct = rs.getString("deskripsiProduk");
				
				
                pr.setId(idGadget);
                pr.setDescProduct(descProduct);
                pr.setHarga(harga);
				pr.setNamaGadget(namaGadget);
				pr.setStock(stock);
                
				ListProducts.add(pr);
			}
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		return ListProducts;
		
	};
}
