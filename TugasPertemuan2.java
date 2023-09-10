import java.util.Scanner;

class Main{
	public static void main (String[] args){

        System.out.println("Data Diri Pegawai   : ");

		Pegawai Pegawai1 = new Pegawai(1015, "Naufal Farrizqy","Sidoarjo","Graphic Designer", "088989694349", 2020);
		Pegawai1.viewDataPegawai();

		Pegawai Pegawai2 = new Pegawai(1027, "Muhammad Baihaqy","Palu","Content Creator", "081232051414", 2021);
		Pegawai2.viewDataPegawai();

		Pegawai Pegawai3 = new Pegawai(1035, "Raihan Atmaja","Gresik","Back-end Developer", "08145678345");
		//Setter Tahun
		Pegawai3.settahunBergabung(2019);
		Pegawai3.viewDataPegawai();

		String AsalPegawai1 = Pegawai1.getAsalPegawai();
		String AsalPegawai2 = Pegawai2.getAsalPegawai();
		String AsalPegawai3 = Pegawai3.getAsalPegawai();

		String namaPegawai1 = Pegawai1.getNamaPegawai();
		String namaPegawai2 = Pegawai2.getNamaPegawai();
		String namaPegawai3 = Pegawai3.getNamaPegawai();

		Integer checker = 0;

		//membaca input
		Scanner input = new Scanner(System.in);
        System.out.print("Check Asal Pegawai : ");
        String myString = input.next();

        //Menampilkan Nama Sesuai Asal
        if (myString.equals(AsalPegawai1)) {
        	System.out.println(namaPegawai1 + " " + "Berasal Dari " + myString);
        } else if (myString.equals(AsalPegawai2)) {
        	System.out.println(namaPegawai2 + " " + "Berasal Dari " + myString);
        } else if (myString.equals(AsalPegawai3)) {
        	System.out.println(namaPegawai3 + " " + "Berasal Dari " + myString);
        } else {
        	System.out.println("Asal Tidak Ditemukan");
        	checker = 1;
        }

        //Menampilkan Data Pegawai Secara Lengkap
        if (checker == 0){
                System.out.print("Ingin menampilkan Lengkap Data Pegawai? :");
                String pilihan = input.next();
                if (pilihan.equals("ya")) {
                if (myString.equals(AsalPegawai1)) {
                	Pegawai1.viewDataLengkap();
                } else if (myString.equals(AsalPegawai2)) {
                	Pegawai2.viewDataLengkap();
                } else if (myString.equals(AsalPegawai3)) {
                	Pegawai3.viewDataLengkap();
                }
                System.out.println("Data Telah Ditampilkan");
                 } else {
                	System.out.println("Aplikasi Dihentikan");
                }}
	}
}

class Pegawai{
	//(instance variable)
	Integer id_Pegawai=0;
	String nama="";
	String asal="";
	String jabatan="";
	String telp ="";
	Integer tahunBergabung=0;

	//constructor = inisialisasi data
	Pegawai(Integer id_Pegawai, String nama, String asal, String jabatan, String telp, Integer tahunBergabung){
		this.id_Pegawai = id_Pegawai;
		this.nama = nama;
		this.asal = asal;
		this.jabatan = jabatan;
		this.telp = telp;
		this.tahunBergabung = tahunBergabung;
	}
	Pegawai(Integer id_Pegawai, String nama, String asal, String jabatan, String telp){
		this.id_Pegawai = id_Pegawai;
		this.nama = nama;
		this.asal = asal;
		this.jabatan = jabatan;
		this.telp = telp;
	}

	public void viewDataPegawai(){
		System.out.println("ID Pegawai			:"+id_Pegawai);
		System.out.println("Nama				:"+nama);
		System.out.println("Asal Daerah			:"+asal);
		System.out.println("Jabatan				:"+jabatan+"\n");
	}

	public void viewDataLengkap(){
		System.out.println("ID Pegawai			:"+id_Pegawai);
		System.out.println("Nama				:"+nama);
		System.out.println("Asal Daerah			:"+asal);
		System.out.println("Jabatan				:"+jabatan);
		System.out.println("No. Telp			:"+telp);
		System.out.println("Tahun Bergabung			:"+tahunBergabung + "\n");
	}

	//setter / mutator
	public void settahunBergabung(Integer tahunBergabung){
		this.tahunBergabung = tahunBergabung;
	}

	//getter / accessor
	public String getAsalPegawai(){
		return asal;
	}
	public String getNamaPegawai(){
		return nama;
	}

}