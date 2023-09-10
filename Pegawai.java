import java.util.*;
class DriverKepegawaian{
	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		//VMI = Virtual Method Invocation

		ArrayList<Pegawai> ap = new ArrayList<>();
		ap.add(new PegawaiKontrak("Bejo", "1", 50000));
		ap.add(new PegawaiKontrak("Siti", "2", 60000));
		ap.add(new PegawaiTetap("Joko", "3"));

		for (int a=0; a<ap.size(); a++){
			if (ap.get(a) instanceof PegawaiKontrak){
				System.out.print("Jumlah hari kerja");
				int jmlHari = Integer.parseInt(in.nextLine());

				System.out.print("Ramadhan [y/n]?");
				String ramadhan = in.nextLine();
				if (ramadhan.equals("y") || ramadhan.equals("Y")){
					ap.get(a).setJmlHariKerja(jmlHari, 100000);
				}else{
					ap.get(a).setJmlHariKerja(jmlHari);
				}

			}
			ap.get(a).hitungGaji();
			ap.get(a).slipGaji();
		}

	}

}

class Pegawai{
	private String nama;
	private String nip;
	
	private double gajiPokok;
	private double totalGaji;

	public Pegawai(String nama, String nip){
		this.nama=nama;
		this.nip=nip;
		this.gajiPokok = 5000000;
	}
	public void hitungGaji(){
		this.totalGaji=gajiPokok;
	}

	public void slipGaji(){
		System.out.println("Gaji Pegawai Milik Induk");
		System.out.println("Nama        : " + this.nama);
		System.out.println("NIP         : " + this.nip);
		System.out.println("Total Gaji  : " + this.totalGaji);
	}
	public void setTotalGaji(int totalGaji){
		this.totalGaji=totalGaji;
	}
	public double getTotalGaji(){
		return totalGaji;
	}
	public String getNama(){
		return nama;
	}
	public String getNip(){
		return nip;
	}
	public void setJmlHariKerja(int jmlHariKerja){
	}
	public void setJmlHariKerja(int jmlHariKerja, int honorHarian){
	}
}

class PegawaiKontrak extends Pegawai{
	private int jmlHariKerja;
	private int honorHarian;
	public PegawaiKontrak(String nama, String nip, int honorHarian){
		super(nama, nip);
		this.honorHarian=honorHarian;
	}
	public void setJmlHariKerja(int jmlHariKerja){
		this.jmlHariKerja=jmlHariKerja;
	}
	public void setJmlHariKerja(int jmlHariKerja, int honorHarian){
		this.jmlHariKerja = jmlHariKerja;
		this.honorHarian  = honorHarian;
	}

	public void hitungGaji(){
		this.setTotalGaji(jmlHariKerja * honorHarian);
	}

	public void slipGaji(){
		System.out.println("");
		System.out.println("Gaji Pegawai Kontrak Milik anak");
		System.out.println("Nama        : " + this.getNama());
		System.out.println("NIP         : " + this.getNip());
		System.out.println("Total Gaji  : " + this.getTotalGaji());
		System.out.println("Honor Harian: " + this.honorHarian + "/hari");
		System.out.println("Jumlah hari : " + this.jmlHariKerja);
	}

}

class PegawaiTetap extends Pegawai{
	public PegawaiTetap(String nama, String nip){
		super(nama, nip);
	}
}


/*
super.slipGaji()  ==> slip gaji milik Induk

this.slipGaji()	  ==> slip gaji milik kelas tsb
Jika dipanggil dari kelas induk==> punya induk
Jika dipanggil dari kelas anak
	a. kalau di anak di-OVERRIDE ==> punya anak
	b. di anak tidak ada overriding ==> punya induk



- 	private
	default
# 	protected
+	public

public void methodA(){}
public void methodA(String A){}
public void methodA(String B){}
public void methodA(String A, int B){}
public void methodA(String B, int A){}

()							Bisa
(String)					Bisa
(String)					Ngga Bisa
(int)						Bisa
(String, int)				Bisa
(String, int)				Ngga Bisa
(int, String)				Bisa
(int, double)				Bisa
(String, int, String)		Bisa



*/



