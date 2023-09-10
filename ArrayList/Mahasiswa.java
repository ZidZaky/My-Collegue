import java.util.Scanner;
import java.util.ArrayList;

// class App {
//     // Kelas Driver Untuk melakukan pengolahan data
//     public static void main(String[] args) {
//         // Kelas Entitas Mahasiswa
//     }
// }


class DriverMahasiswa {

    Scanner in = new Scanner(System.in);

    ArrayList<Mahasiswa> arrMhs = new ArrayList<>();

    public static void main(String args[]) {
        DriverMahasiswa dm = new DriverMahasiswa();
        dm.runThis();
    
    }

    public void zidan() {
        DriverMahasiswa dm = new DriverMahasiswa();
        dm.runThis();
    }

    void runThis() {
        int ulangi;
        do{
            inputData();
            viewData();
            System.out.print("Ulangi?(1/0) : ");
            ulangi = in.nextInt();
        } while (ulangi != 0);
    }

    void viewData() {
        System.out.println("Data Mahasiswa");
        for (int a = 0; a < arrMhs.size(); a++) {
            String nama = arrMhs.get(a).getNama();
            int nim = arrMhs.get(a).getNim();
            System.out.println((a + 1) + ".\tNim : " + nim);
            System.out.println("\tNama : " + nama);
        }
    }

    void inputData() {
        System.out.println("Masukkan Data Mahasiswa");
        System.out.print("NIM  : ");
        int nim = in.nextInt();
        System.out.print("Nama : ");
        String nama = in.next();
        arrMhs.add(new Mahasiswa(nim, nama));

    }
}

class Mahasiswa {
    int nim;
    String nama;
    public static void main(String args[]) {
        System.out.println("halo");
    }
    public Mahasiswa(int nim, String nama) {
        this.nim = nim;
        this.nama = nama;
    }

    public void setNim(int nim) {
        this.nim = nim;
    }

    public void setNama(String nama) {
        this.nama = nama;
    }

    public int getNim() {
        return nim;
    }

    public String getNama() {
        return nama;
    }

    public String getDataMhs() {
        return nim + "; " + nama;
    }
}