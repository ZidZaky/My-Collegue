package com.servletPackage.servlet;

public class Products {
	private int id;
	private String namaGadget;
	private int harga;
	private int stock;
	private String descProduct;
	
	public int getId() {
		return id;
	}
	public void setId(int id) {
		this.id = id;
	}
	public String getNamaGadget() {
		return namaGadget;
	}
	public void setNamaGadget(String namaGadget) {
		this.namaGadget = namaGadget;
	}
	public int getHarga() {
		return harga;
	}
	public void setHarga(int harga) {
		this.harga = harga;
	}
	public int getStock() {
		return stock;
	}
	public void setStock(int stock) {
		this.stock = stock;
	}
	public String getDescProduct() {
		return descProduct;
	}
	public void setDescProduct(String descProduct) {
		this.descProduct = descProduct;
	}
}
