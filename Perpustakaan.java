import java.io.ObjectInputStream.GetField;
import java.text.ParseException;
import java.text.ParsePosition;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.ArrayList;
import java.util.Scanner;
import java.util.Set;

import javax.print.event.PrintJobAdapter;

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

public class Perpustakaan {
    Scanner input = new Scanner(System.in);
    ArrayList<Koleksi> arrKoleksi = new ArrayList<>();

    public static void main(String args[]) {
        Perpustakaan dp = new Perpustakaan();
        dp.menu();
    }

    void menu() {
        String ulangi;
        do {
            System.out.println("<===// Welcome To PERPUSTAKAAN APP //===>");
            System.out.println("1. Input Koleksi");
            System.out.println("2. Tampilkan Data Koleksi");
            System.out.println("3. Exit");
            System.out.print("Pilihan : ");
            int pilihan = input.nextInt();
            if (pilihan == 1) {
                inputKoleksi();
            } else if (pilihan == 2) {
                if (arrKoleksi.size() == 0) {
                    System.out.println("DATA KOSONG");
                } else {
                    dataKoleksi();
                    System.out.print("Cetak Data Buku Lengkap?(yes/no) : ");
                    for (int index = 0; index < arrKoleksi.size(); index++) {
                        arrKoleksi.get(index).viewData();
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

    void inputKoleksi() {
        /*
         * private String nama;
         * private String idKoleksi;
         * private String penerbit;
         * private Date tanggalTerbit;
         * private int jenis;
         * private int status;k
         */

        System.out.println("<=== Masukkan Data Buku ===>");
        System.out.print("Nama\t\t\t : ");
        String nama = input.next();
        System.out.print("ID Koleksi\t\t : ");
        String idKoleksi = input.next();
        System.out.print("Penerbit\t\t : ");
        String penerbit = input.next();
        System.out.println("Tanggal Terbit");
        System.out.print("Format (dd/MM/yyyy)\t : ");
        String tanggalTerbit = input.next();
        System.out.print("Status\t\t\t : ");
        int status = input.nextInt();
        System.out.println("Jenis\t\t\t : ");
        System.out.println("1 = Buku");
        System.out.println("2 = Majalah");
        System.out.println("3 = Koran");
        System.out.println("4 = Cakram Digital");
        System.out.print("Input Angka\t\t : ");
        int jenis = input.nextInt();
        if (jenis == 1) {
            System.out.println("<== Data Jenis Buku ==>");
            System.out.print("Nama Pengarang\t\t\t\t: ");
            String Pengarang = input.next();
            System.out.print("Nama Archive\t\t\t\t: ");
            String arXiv = input.next();
            System.out.print("Tahun Masuk Buku\t\t\t: ");
            String TanggalKadaluarsa = input.next();
            System.out.print("International Standard Serial Number\t: ");
            String issn = input.next();
            System.out.print("International Standard Book Number\t: ");
            String isbn = input.next();

            arrKoleksi.add(new Buku(idKoleksi, nama, penerbit, tanggalTerbit, jenis, status, Pengarang,
                    TanggalKadaluarsa, issn, isbn, arXiv));
        } else if (jenis == 2) {
            System.out.println("<== Data Jenis Majalah ==>");
            System.out.print("Edisi Majalah\t\t : ");
            String edisi = input.next();
            arrKoleksi.add(new Majalah(idKoleksi, nama, penerbit, tanggalTerbit, jenis, status, edisi));
        } else if (jenis == 3) {
            System.out.println("<== Data Jenis Koran ==>");
            arrKoleksi.add(new Koran(idKoleksi, nama, penerbit, tanggalTerbit, jenis, status));
        } else if (jenis == 4) {
            System.out.println("<== Data Jenis Cakram Digital ==>");
            System.out.println("Jenis Media\t\t : ");
            System.out.println("1 = CD");
            System.out.println("2 = VCD");
            System.out.println("3 = Blue-Ray");
            System.out.println("4 = HD-DVD");
            System.out.print("Input Angka\t\t : ");
            int jenisMedia = input.nextInt();
            arrKoleksi.add(new CakramDigital(idKoleksi, nama, penerbit, tanggalTerbit, jenis, status, jenisMedia));
        }
        System.out.println("<=== Data Telah Direkam ===>");
    }

    void dataKoleksi() {
        System.out.println("<<== Data Seluruh Koleksi==>> ");
        for (int index = 0; index < arrKoleksi.size(); index++) {
            arrKoleksi.get(index).viewData();
            if(arrKoleksi.get(index) instanceof Majalah){
                String edisi = arrKoleksi.get(index).getEdisi();
                System.out.println("Edisi Ke - " + edisi);
            }
            System.out.println("<<== Next ==>> ");
        }
    }

}

class Koleksi {
    private String nama;
    private String idKoleksi;
    private String penerbit;
    private Date tanggalTerbit;
    private int jenis;
    private int status;

    public Koleksi(String idKoleksi, String nama, String Penerbit, String tanggalTerbit, int jenis, int status) {
        try {
            SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");
            Date date = sdf.parse(tanggalTerbit);
            this.tanggalTerbit = date;
        } catch (ParseException e) {
        }
        this.nama = nama;
        this.idKoleksi = idKoleksi;
        this.jenis = jenis;
        this.penerbit = Penerbit;
        this.status = status;
    }

    public void viewData() {
        System.out.println("Judul\t\t: " + this.nama);
        System.out.println("ID Koleksi\t: " + this.idKoleksi);
        System.out.println("Jenis\t\t: " + this.jenis);
        System.out.println("Penerbit\t: " + this.penerbit);
        System.out.println("Status\t\t: " + this.status);
        System.out.println("Tanggal Terbit\t: " + this.tanggalTerbit);
    }

    public void setIdKoleksi(String idKoleksi) {
        this.idKoleksi = idKoleksi;
    }

    public void setJenis(int jenis) {
        this.jenis = jenis;
    }

    public void setNama(String nama) {
        this.nama = nama;
    }

    public void setPenerbit(String penerbit) {
        this.penerbit = penerbit;
    }

    public void setStatus(int status) {
        this.status = status;
    }

    public void setTanggalTerbit(String tanggalTerbit) {
        try {
            SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");
            Date date = sdf.parse(tanggalTerbit);
            this.tanggalTerbit = date;
        } catch (ParseException e) {
        }
    }

    public String getEdisi() {
        return "";
    }

    public String getIdKoleksi() {
        return idKoleksi;
    }

    public int getJenis() {
        return jenis;
    }

    public String getNama() {
        return nama;
    }

    public String getPenerbit() {
        return penerbit;
    }

    public int getStatus() {
        return status;
    }

    public Date getTanggalTerbit() {
        return tanggalTerbit;
    }

}

class Buku extends Koleksi {
    private String pengarang;
    private Date tahunMasuk;
    private String issn;
    private String isbn;
    private String arXiv;

    /*
     * -pengarang: String
     * -tahunMasuk: date
     * -issn: String
     * -isbn: String
     * -doi: String
     * -arxivId: String
     */
    public Buku(String idKoleksi, String nama, String Penerbit, String tanggalTerbit, int jenis, int status,
            String pengarang, String tahunMasuk, String issn, String isbn, String arXiv) {
        super(idKoleksi, nama, Penerbit, tanggalTerbit, jenis, status);
        this.arXiv = arXiv;
        this.pengarang = pengarang;
        this.isbn = isbn;
        this.issn = issn;
        try {
            SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");
            Date date = sdf.parse(tanggalTerbit);
            this.tahunMasuk = date;
        } catch (ParseException e) {
        }
    }

    public void viewData() {
        // System.out.println("Judul\t\t: " + getNama());
        // System.out.println("Jenis\t\t: " + getJenis());
        // System.out.println("Penerbit\t: " + getPenerbit());
        // System.out.println("Status\t\t: " + getStatus());
        // System.out.println("Tanggal Terbit\t: " + getTanggalTerbit());
        System.out.println("Archive\t\t\t: " + this.arXiv);
        System.out.println("Pengarang\t\t: " + this.pengarang);
        System.out.println("Nomor ISBN\t\t: " + this.isbn);
        System.out.println("Nomor ISSN\t\t: " + this.issn);
        System.out.println("Tahun Masuk Buku\t: " + this.tahunMasuk);
    }

    public void setPengarang(String pengarang) {
        this.pengarang = pengarang;
    }

    public void setArXiv(String arXiv) {
        this.arXiv = arXiv;
    }

    public void setIsbn(String isbn) {
        this.isbn = isbn;
    }

    public void setIssn(String issn) {
        this.issn = issn;
    }

    public void setTahunMasuk(Date tahunMasuk) {
        this.tahunMasuk = tahunMasuk;
    }

    public String getIsbn() {
        return isbn;
    }

    public String getIssn() {
        return issn;
    }

    public String getPengarang() {
        return pengarang;
    }

    public Date getTahunMasuk() {
        return tahunMasuk;
    }

    public String getArXiv() {
        return arXiv;
    }
}

class Majalah extends Koleksi {
    private String edisi;

    public Majalah(String idKoleksi, String nama, String Penerbit, String tanggalTerbit, int jenis, int status,
            String edisi) {
        super(idKoleksi, nama, Penerbit, tanggalTerbit, jenis, status);
        this.edisi = edisi;
    }

    public String getEdisi() {
        return edisi;
    }

    public void setEdisi(String edisi) {
        this.edisi = edisi;
    }

}

class Koran extends Koleksi {
    public Koran(String idKoleksi, String nama, String Penerbit, String tanggalTerbit, int jenis, int status) {
        super(idKoleksi, nama, Penerbit, tanggalTerbit, jenis, status);
    }
}

class CakramDigital extends Koleksi {
    private int jenisMedia;
    private String[] macamMedia = {"CD","VCD","Blue-Ray","HD-DVD"};
    public CakramDigital(String idKoleksi, String nama, String Penerbit, String tanggalTerbit, int jenis,
            int status, int jenisMedia) {
        super(idKoleksi, nama, Penerbit, tanggalTerbit, jenis, status);
        this.jenisMedia = jenisMedia;
    }

    public void setJenisMedia(int jenisMedia) {
        this.jenisMedia = jenisMedia;
    }

    public int getJenisMedia() {
        return jenisMedia;
    }

    public void viewData() {
        System.out.println(macamMedia[jenisMedia]);
    }
}

/*
 * polimorfisme = Banyak Bentuk
 * Overloading = statis
 * Overriding = Dinamis, redefine
 * 
 * overloading = membuat 2 method sama dengan jumlah parameter beda.
 * boleh sama dengan urutan yang berbeda.
 * overriding = membuat 2 method yang sama tetapi beda class
 * 
 * overloading tidak terppengaruh public, return value (void),
 * content (body code), nama parameter tidak berpengaruh
 */
