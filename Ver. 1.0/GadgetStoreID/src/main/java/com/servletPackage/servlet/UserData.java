package com.servletPackage.servlet;

public class UserData {
	private int id;
	private String namaUser;
	private String userName;
	private String noHP;
	private String alamat;
	private int kodeRole;
	private String userPassword;
	private String email;
	
	public String getNamaUser() {
		return namaUser;
	}
	public void setNamaUser(String namaUser) {
		this.namaUser = namaUser;
	}
	public String getUserName() {
		return userName;
	}
	public void setUserName(String userName) {
		this.userName = userName;
	}
	public String getUserPassword() {
		return userPassword;
	}
	public void setUserPassword(String userPassword) {
		this.userPassword = userPassword;
	}	
	public int getId() {
		return id;
	}
	public void setId(int id) {
		this.id = id;
	}
	public String getNoHP() {
		return noHP;
	}
	public void setNoHP(String noHP) {
		this.noHP = noHP;
	}
	public String getAlamat() {
		return alamat;
	}
	public void setAlamat(String alamat) {
		this.alamat = alamat;
	}
	public int getKodeRole() {
		return kodeRole;
	}
	public void setKodeRole(int kodeRole) {
		this.kodeRole = kodeRole;
	}
	public String getEmail() {
		return email;
	}
	public void setEmail(String email) {
		this.email = email;
	}
}
