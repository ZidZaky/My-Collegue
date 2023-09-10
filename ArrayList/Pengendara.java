//Tugas
/*Buatlah sebuah aplikasi yang digunakan untuk melakukan proses 
pengelolaan data Kepemilikan Surat Izin Mengemudi (SIM). 
Atribut data yang disimpan adalah : 
a.	Nama, 
b.	Tanggal lahir, 
c.	Tempat lahir,
d.	Golongan Darah,
e.	Jenis Kelamin,
f.	Alamat,
g.	Tanggal Kadaluarsa SIM,
h.	Jenis SIM (A/B/C),
i.	Kota penerbitan SIM.
Fitur yang harus dibuat adalah :
a.	Menerima inputan data
b.	Menampilkan Data seluruh pemilik SIM dan jenis SIM yang dimilikinya. (Hanya NAMA dan JENIS SIM saja)
Menampilkan Data Lengkap pemilik SIM, dilakukan dengan cara 
menampilkan nama pemilik SIM dan memilihnya berdasarkan nomor urut yang telah ditampilkan tersebut.
*/

import java.util.Scanner;
import java.util.ArrayList;

class TugasArr2 {

    Scanner input = new Scanner(System.in);

    ArrayList<Pengendara> arrPengendara = new ArrayList<>();

    public static void main(String[] args) {
        TugasArr2 dp = new TugasArr2();
        dp.menu();

    }

    void menu() {
        String ulangi;
        do {
            System.out.println("<===// Welcome To SIM APP //===>");
            System.out.println("1. Input Data Pengendara");
            System.out.println("2. Tampilkan Data Pengendara");
            System.out.println("3. Exit");
            System.out.print("Pilihan : ");
            int pilihan = input.nextInt();
            if (pilihan == 1) {
                inputData();
            } else if (pilihan == 2) {
                if (arrPengendara.size() == 0) {
                    System.out.println("DATA KOSONG");
                } else {
                    viewData();
                    System.out.print("Cetak Data Diri Lengkap?(yes/no) : ");
                    String print = input.next();
                    if (print.equals("yes")) {
                        viewDataLengkap();
                    }
                }
            } else if (pilihan == 3) {
                break;
            } else {
                System.out.print("<= Pilihan Tidak Tersedia =>");
            }
            System.out.print("Ulangi?(yes/no) : ");
            ulangi = input.next();
        } while (ulangi.equals("yes"));
        System.out.print("<=== App Closed ===>");
    }

    void viewData() {
        System.out.println("<=== Data Pengendara Pemilik SIM ===>");
        for (int a = 0; a < arrPengendara.size(); a++) {
            String nama = arrPengendara.get(a).getNama();
            String Jenis_SIM = arrPengendara.get(a).getJenis_SIM();
            System.out.println((a + 1) + "\tNama : " + nama);
            System.out.println("\tJenis SIM : " + Jenis_SIM);
        }
    }

    void viewDataLengkap() {
        int check=0;
        System.out.print("Masukkan Nama Pengendara : ");
        String namaPemilik = input.next();
        for (int a = 0; a < arrPengendara.size(); a++) {
            String nama = arrPengendara.get(a).getNama();
            if (nama.equals(namaPemilik)) {
                String Jenis_SIM = arrPengendara.get(a).getJenis_SIM();
                String alamat = arrPengendara.get(a).getAlamat();
                String GolonganDarah = arrPengendara.get(a).getGolonganDarah();
                String JenisKelamin = arrPengendara.get(a).getJenisKelamin();
                String KotaPenerbitan = arrPengendara.get(a).getKotaPenerbitan();
                String TanggalKadaluarsa = arrPengendara.get(a).getTanggalKadaluarsa();
                String TanggalLahir = arrPengendara.get(a).getTanggalLahir();
                String TempatLahir = arrPengendara.get(a).getTempatLahir();
                System.out.println((a + 1) + ".\tNama\t\t\t : " + nama);
                System.out.println("\tAlamat\t\t\t : " + alamat);
                System.out.println("\tJenis SIM\t\t : " + Jenis_SIM);
                System.out.println("\tGolongan Darah\t\t : " + GolonganDarah);
                System.out.println("\tJenis Kelamin\t\t : " + JenisKelamin);
                System.out.println("\tKota Penerbitan\t\t : " + KotaPenerbitan);
                System.out.println("\tTanggal Kadaluarsa\t : " + TanggalKadaluarsa);
                System.out.println("\tTanggal Lahir\t\t : " + TanggalLahir);
                System.out.println("\tTempat Lahir\t\t : " + TempatLahir);
                check++;
                break;
            }
        }
        if (check==0) {
            System.out.println("<== Nama Tidak Ditemukan ==>");
        }
    }

    void inputData() {
        System.out.println("<=== Masukkan Data Pengendara ===>");
        System.out.print("Nama\t\t\t : ");
        String nama = input.next();
        System.out.print("Jenis SIM\t\t : ");
        String Jenis_SIM = input.next();
        System.out.print("Tanggal Lahir\t\t : ");
        String TanggalLahir = input.next();
        System.out.print("Tempat Lahir\t\t : ");
        String TempatLahir = input.next();
        System.out.print("Golongan Darah\t\t : ");
        String GolonganDarah = input.next();
        System.out.print("Jenis Kelamin\t\t : ");
        String JenisKelamin = input.next();
        System.out.print("Alamat\t\t\t : ");
        String Alamat = input.next();
        System.out.print("Tanggal Kadaluarsa\t : ");
        String TanggalKadaluarsa = input.next();
        System.out.print("Kota Penerbitan\t\t : ");
        String kotaPenerbitan = input.next();
        System.out.println("<=== Data Telah Direkam ===>");

        arrPengendara.add(new Pengendara(nama,
                Jenis_SIM,
                TanggalLahir,
                TempatLahir,
                GolonganDarah,
                JenisKelamin,
                Alamat,
                TanggalKadaluarsa,
                kotaPenerbitan));

    }
}

public class Pengendara {
    String nama;
    String TanggalLahir;
    String TempatLahir;
    String GolonganDarah;
    String JenisKelamin;
    String Alamat;
    String TanggalKadaluarsa;
    String Jenis_SIM;
    String kotaPenerbitan;

    public Pengendara(String nama,
            String Jenis_SIM,
            String TanggalLahir,
            String TempatLahir,
            String GolonganDarah,
            String JenisKelamin,
            String Alamat,
            String TanggalKadaluarsa,
            String kotaPenerbitan) {
        this.nama = nama;
        this.Jenis_SIM = Jenis_SIM;
        this.Alamat = Alamat;
        this.GolonganDarah = GolonganDarah;
        this.JenisKelamin = JenisKelamin;
        this.TanggalKadaluarsa = TanggalKadaluarsa;
        this.TanggalLahir = TanggalLahir;
        this.TempatLahir = TempatLahir;
        this.kotaPenerbitan = kotaPenerbitan;
    }

    public void setNama(String nama) {
        this.nama = nama;
    }

    public void setJenis_SIM(String Jenis_SIM) {
        this.Jenis_SIM = Jenis_SIM;
    }

    public void setAlamat(String alamat) {
        this.Alamat = alamat;
    }

    public void setGolonganDarah(String golonganDarah) {
        this.GolonganDarah = golonganDarah;
    }

    public void setJenisKelamin(String jenisKelamin) {
        this.JenisKelamin = jenisKelamin;
    }

    public void setKotaPenerbitan(String kotaPenerbitan) {
        this.kotaPenerbitan = kotaPenerbitan;
    }

    public void setTanggalKadaluarsa(String tanggalKadaluarsa) {
        this.TanggalKadaluarsa = tanggalKadaluarsa;
    }

    public void setTanggalLahir(String tanggalLahir) {
        this.TanggalLahir = tanggalLahir;
    }

    public void setTempatLahir(String tempatLahir) {
        TempatLahir = tempatLahir;
    }

    public String getNama() {
        return nama;
    }

    String getJenis_SIM() {
        return Jenis_SIM;
    }

    public String getAlamat() {
        return Alamat;
    }

    public String getGolonganDarah() {
        return GolonganDarah;
    }

    public String getJenisKelamin() {
        return JenisKelamin;
    }

    public String getKotaPenerbitan() {
        return kotaPenerbitan;
    }

    public String getTanggalKadaluarsa() {
        return TanggalKadaluarsa;
    }

    public String getTanggalLahir() {
        return TanggalLahir;
    }

    public String getTempatLahir() {
        return TempatLahir;
    }

}
