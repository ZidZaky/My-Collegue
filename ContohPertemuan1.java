class Aktivasi{
	String nama;
	public static void main (String[] args){
		Mahasiswa mhs1 = new Mahasiswa("1201220003","Zidan Irfan Zaky");
		mhs1.viewDataMahasiswa();
		Mahasiswa mhs2 = new Mahasiswa("1201220001","Muhammad Ageng Sasmito","Wonogiri");
		mhs2.viewDataMahasiswa();
		Mahasiswa mhs3 = new Mahasiswa("1201222005","Evi Fitriya");
		mhs3.setAlamat("Surabaya");
		mhs3.viewDataMahasiswa();
		String alamatError = mhs2.getAlamat();
		System.out.println("Alamat Tidak Ditemukan di :" + alamatError + "\n");
	}
}

class Mahasiswa{
	//(instance variable)
	String nim="";
	String nama="";
	String alamat="";
	Integer tinggiBadan=0;
	Integer umur =0;

	//constructor = inisialisasi data
	Mahasiswa(String nim, String nama){
		this.nim = nim;
		this.nama = nama;
	}

	Mahasiswa(String nim, String nama, String alamat){
		this.nim = nim;
		this.nama = nama;
		this.alamat = alamat;
	}

	//view
	public void viewDataMahasiswa(){
		System.out.println("NIM		:"+nim);
		System.out.println("Nama		:"+nama);
		System.out.println("Alamat		:"+alamat+"\n");
	}

	//setter / mutator
	public void setAlamat(String alamatBaru){
		this.alamat = alamatBaru;
	}

	//getter / accessor
	public String getAlamat(){
		return alamat;
	}

}
