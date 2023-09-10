import java.util.ArrayList;
import java.util.Scanner;

/*Note
 * Final : class tidak bisa diturunkan lagi
 * public : bisa dipanggil di lain class
 * priate : hanya bisa di ambil balue dari Dalam
 * protected : sama seperti public.
 * 
 * Logo:
 * - : private
 *   : default
 * # : protected
 * + : public
 * 
 * VMI : Virtual Method Invocation
 * Induk = Penmampung semua Anaknya
 * Penampung menggunakan Class Induk untuk Tipe data array list;
 */

import java.util.ArrayList;

class DriverKepegawaian{
    public static void main(String args[]){
        // PegawaiKontrak kontrak = new PegawaiKontrak("Bejo", "1", 500000);
        // kontrak.setJmlhHariKerja(22);
        // kontrak.hitungGaji();
        // kontrak.slipGaji();

        // Pegawai tetap = new PegawaiTetap("Zidan", "2");
        // tetap.hitungGaji();
        // tetap.slipGaji();
        Scanner input = new Scanner(System.in);
        ArrayList<Pegawai> arrPegawai = new ArrayList<>();
        arrPegawai.add(new PegawaiTetap("Zidan", "2"));
        arrPegawai.add(new PegawaiKontrak("Bejo", "1", 500000));
        arrPegawai.add(new PegawaiTetap("Ahmad", "3"));
        
        for(int index=0;index < arrPegawai.size(); index++){
            if(arrPegawai.get(index) instanceof PegawaiKontrak){
                System.out.print("Input Jumlah Hari Kerja :");
                int jmlhHari = input.nextInt();
                arrPegawai.get(index).setJmlhHariKerja(jmlhHari);
            }
            arrPegawai.get(index).hitungGaji();
            arrPegawai.get(index).slipGaji();
        }
        
    }
}

class Pegawai {
    private String nama;
    private String nip;
    private double totalGaji;
    private double gajiPokok;

    public Pegawai(String nama, String nip) {
        this.nama = nama;
        this.nip = nip;
        this.gajiPokok = 5000000;
    }

    public void hitungGaji() {
        this.totalGaji = gajiPokok;
    }

    public void slipGaji() {
        System.out.println("Gaji Pegawai");
        System.out.println("Nama\t\t:" + this.nama);
        System.out.println("NIP\t\t:" + this.nip);
        System.out.println("Total Gaji\t:" + this.totalGaji);
    }

    public void setGajiPokok(double gajiPokok) {
        this.gajiPokok = gajiPokok;
    }
    
    public void setNama(String nama) {
        this.nama = nama;
    }
    
    public void setNip(String nip) {
        this.nip = nip;
    }
    
    public void setTotalGaji(double totalGaji) {
        this.totalGaji = totalGaji;
    }

    public void setJmlhHariKerja(int jmlHariKerja){
    }

    public void setJmlhHariKerja(int jmlHariKerja, int honorHarian){
    }
    
    public double getTotalGaji() {
        return totalGaji;
    }

    public double getGajiPokok() {
        return gajiPokok;
    }
    
    public String getNama() {
        return nama;
    }
    
    public String getNip() {
        return nip;
    }
}

class PegawaiKontrak extends Pegawai{
    private int jmlHariKerja;
    private int honorHarian;
    public PegawaiKontrak(String nama, String nip, int honorHarian){
        super(nama, nip);
        this.honorHarian = honorHarian;
    }

    public void setJmlhHariKerja(int jmlHariKerja){
        this.jmlHariKerja = jmlHariKerja;
    }

    public void setJmlhHariKerja(int jmlHariKerja, int honorHarian){
        this.jmlHariKerja = jmlHariKerja;
        this.honorHarian = honorHarian;
    }

    public void hitungGaji(){
        this.setTotalGaji(jmlHariKerja * honorHarian); 
    }
}

class PegawaiTetap extends Pegawai{
    public PegawaiTetap(String nama, String nip){
        super(nama, nip);
        //super 2 fungsi :
        //1. Untuk Contarctor dari Induk
        //2. Untuk Mengambil value dari induk
    }
}

/*
 * polimorfisme = Banyak Bentuk
 * Overloading  = statis
 * Overriding   = Dinamis, redefine
 * 
 * overloading = membuat 2 method sama dengan jumlah parameter beda. 
 * boleh sama dengan urutan yang berbeda.
 * overriding = membuat 2 method yang sama tetapi beda class
 * 
 * overloading tidak terppengaruh public, return value (void), 
 * content (body code), nama parameter tidak berpengaruh
 */