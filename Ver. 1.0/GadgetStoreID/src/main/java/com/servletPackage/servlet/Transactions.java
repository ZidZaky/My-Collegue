package com.servletPackage.servlet;

public class Transactions {
	private int idTransaksi;
	private int idUser;
	private int idUnit;
	private int Jumlah;
	private int Total;
	private String date;
	private String jenisPembayaran;
	
	public int getIdTransaksi() {
		return idTransaksi;
	}
	public int getIdUser() {
		return idUser;
	}
	public void setIdUser(int idUser) {
		this.idUser = idUser;
	}
	public int getIdUnit() {
		return idUnit;
	}
	public void setIdUnit(int idUnit) {
		this.idUnit = idUnit;
	}
	public int getJumlah() {
		return Jumlah;
	}
	public void setJumlah(int jumlah) {
		Jumlah = jumlah;
	}
	public int getTotal() {
		return Total;
	}
	public void setTotal(int total) {
		Total = total;
	}
	public String getDate() {
		return date;
	}
	public void setDate(String date) {
		this.date = date;
	}
	public String getJenisPembayaran() {
		return jenisPembayaran;
	}
	public void setJenisPembayaran(String jenisPembayaran) {
		this.jenisPembayaran = jenisPembayaran;
	}
	
	
	
}
