import java.util.Scanner;
import java.util.ArrayList;

class Rekening {
	private int no;
	private String nama;
	private double saldo;

	public Rekening(int no, String nama, double saldo) {
		this.no = no;
		this.nama = nama;
		this.saldo = saldo;
	}

	public void setNama(String nama) {
		this.nama = nama;
	}

	public void setNo(int no) {
		this.no = no;
	}

	public void setSaldo(double saldo) {
		this.saldo = saldo;
	}

	public String getNama() {
		return nama;
	}

	public int getNo() {
		return no;
	}

	public double getSaldo() {
		return saldo;
	}
}

class BankOfMiddleEarth {
	Scanner input = new Scanner(System.in);
	ArrayList<Rekening> aRek = new ArrayList<>();
	double saldoMinimal = 500000;

	public static void main(String[] abcd) {
		BankOfMiddleEarth b = new BankOfMiddleEarth();
		b.menu();
	}

	private void menu() {
		String Ulangi;
		do {
			System.out.println("<===// Welcome To BANK APP //===>");
			System.out.println("1. Buat Data Rekening");
			System.out.println("2. Cek Rekening");
			System.out.println("3. Tabung");
			System.out.println("4. Tarik");
			System.out.println("5. Transfer");
			System.out.println("6. Exit");
			System.out.print("Pilihan : ");
			int pilihan = input.nextInt();
			if (pilihan == 1) {
				buatRekening();
			} else if (pilihan == 2) {
				int noRek;
				System.out.print("Nomor rekening : ");
				noRek = input.nextInt();
				cekRekening(noRek);
				infoRekening(noRek);
			} else if (pilihan == 3) {
				tabung();
			} else if (pilihan == 4) {
				tarik();
			} else if (pilihan == 5) {
				transfer();
			} else if (pilihan == 6) {
				break;
			}
			System.out.print("Ulangi?(yes/no) : ");
			Ulangi = input.next();
		} while (Ulangi != "no");
		System.out.println("<== App Closed ==> ");
	}

	private void buatRekening() {
		/*
		 * . Input data nama dan saldo
		 */
		System.out.print("Nama : ");
		String nama = input.next();
		System.out.print("Saldo : ");
		double saldo = input.nextInt();

		if (saldo < saldoMinimal) { // No 12
			System.out.println("Saldo awal tidak mencukupi");
		} else {
			int no;
			if (!aRek.isEmpty()) {
				no = aRek.get(aRek.size() - 1).getNo() + 1;
				// jika array sudah terisi, maka no rekening diambilkan dari
				// rekening terakhir yang ditambahkan, kemudian ditambahkan 1
			} else {
				no = 1;
				// jika array masih kosong, maka no rekening adalah 1
			}
			Rekening rek = new Rekening(no, nama, saldo);
			aRek.add(rek); // No 13
			System.out.println("Rekening telah ditambahkan");
		}
	}
	/*
	 * . Method cekRekening merupakan sebuah method yang digunakan
	 * . untuk mencari indeks dalam arrayList dari no rekening yang dicari.
	 * . Jika ditemukan, maka akan mengembalikan indeks dari rekening tersebut.
	 * . Jika tidak ditemukan, maka akan mengembalikan nilai -1
	 */

	private int cekRekening(int noRek) {
		int ketemu = -1;
		for (int a = 0; a < aRek.size(); a++) {
			if (aRek.get(a).getNo() == noRek) { // No 14
				ketemu = a;
				break;
			}
		}
		return ketemu;
	}

	private void tabung() {
		/*
		 * . Input data no rekening dan saldo tambahan
		 */
		System.out.print("Nomor Rekening : ");
		int noRek = input.nextInt();
		System.out.print("Saldo Tambahan : ");
		double jumlah = input.nextInt();

		int pos = cekRekening(noRek);
		if (pos >= 0) {
			double saldoAkhir = aRek.get(pos).getSaldo() + jumlah;
			aRek.get(pos).setSaldo(saldoAkhir); // No 15
			System.out.println("Saldo telah ditambahkan");
		} else {
			System.out.println("No Rekening tidak ditemukan, Transaksi dibatalkan");
		}
	}

	private void tarik() {
		/*
		 * . Input no rekening dan saldo penarikan
		 */
		System.out.print("Nomor Rekening : ");
		int noRek = input.nextInt();
		System.out.print("Saldo Penarikan : ");
		double jumlah = input.nextInt();

		int pos = cekRekening(noRek);
		if (pos >= 0) {
			// cek apakah saldo akhir masih cukup atau tidak
			double saldoAkhir = aRek.get(pos).getSaldo() - jumlah;
			if (saldoAkhir < saldoMinimal) { // No 16
				aRek.get(pos).setSaldo(saldoAkhir); // No 17
				System.out.println("Transaksi Selesai");
			} else {
				System.out.println("Saldo tidak cukup, Transaksi dibatalkan");
			}
		} else {
			System.out.println("No Rekening tidak ditemukan, Transaksi dibatalkan");
		}
	}

	private void transfer()	{
        /* 
        .	Input no rekening asal, no rekening tujuan dan saldo penarikan
        */
        System.out.print("Nomor Rekening Asal : ");
		int noRekAsal = input.nextInt();
		System.out.print("Nomor Rekening Tujuan : ");
		int noRekTujuan = input.nextInt();
		System.out.print("Saldo Penarikan : ");
		double jumlah = input.nextInt(); 
		
        int posAsal 	= cekRekening(noRekAsal);				//No 18
            int posTujuan = cekRekening(noRekTujuan);				//No 19
            if ((posAsal>=0) && (posTujuan>=0)){
                double saldoAkhirAsal = aRek.get(posAsal).getSaldo() - jumlah;
            if ((saldoAkhirAsal >= 0))	{
                   aRek.get(posAsal).setSaldo(saldoAkhirAsal);			//No 20
                   double SaldoAkhirTujuan = aRek.get(posAsal).getSaldo() + jumlah;	//No 21
               aRek.get(posTujuan).setSaldo(SaldoAkhirTujuan);			//No 22
                   System.out.println("Transfer telah dilaksanakan");
                }
                else	{
                    System.out.println("Saldo tidak cukup, Transaksi dibatalkan");	
                }
            }
            else{
                System.out.println("No Rekening tidak ditemukan");		
            }		
        }

	private void infoRekening(int no) {
		int pos = cekRekening(no);
		if (pos >= 0) {
			System.out.println("Informasi Rekening");
			System.out.println("No Rek 	: " + aRek.get(pos).getNo()); // No 23
			System.out.println("Nama   	: " + aRek.get(pos).getNama()); // No 24
			System.out.println("Saldo  	: " + aRek.get(pos).getSaldo()); // No 25
		}
	}
} // end of class BankOfMiddleEarth
