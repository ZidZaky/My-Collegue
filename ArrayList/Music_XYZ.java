//Tugas
/*Fungsionalitas yang harus anda buat
1.	Input data lagu, berdasar data diatas.
2.	Memainkan lagu, pencarian didasarkan dari salah satu dari inputan berikut.
a.	Judul lagu
b.	Penyanyi
Anda tidak perlu benar-benar memainkan file lagunya, buat seolah-olah lagu telah diputar.
Mohon diingat bahwa proses pencarian tidaklah harus berdasar kepada data yang strict sama, namun penggalan kata. Gunakan method contains dari kelas String.
*/

import java.util.Scanner;
import java.util.Set;
import java.io.BufferedReader;
import java.util.ArrayList;

class MusicPlayer {

    Scanner input = new Scanner(System.in);
    // FileReader file = new FileReader("Music_XYZ.java");
    // BufferedReader inb = new BufferedReader(file);
    ArrayList<Lagu> listLagu = new ArrayList<>();

    public static void main(String[] args) {
        MusicPlayer Mp3 = new MusicPlayer();
        Mp3.runThis();
    }

    void runThis() {
        menu();
    };

    void menu() {
        String ulangi;
        do {
            System.out.println("<===// Welcome To My MP3 //===>");
            System.out.println("1. Tambah Lagu");
            System.out.println("2. Putar Lagu");
            System.out.println("3. Statistik Lagu");
            System.out.println("4. Keluar");
            System.out.print("Pilihan : ");
            int pilihan = input.nextInt();
            if (pilihan == 1) {
                tambahLagu();
            } else if (pilihan == 2) {
                if (listLagu.size() == 0) {
                    System.out.println("DATA KOSONG");
                } else {
                    putarLagu();
                }
            } else if (pilihan == 3) {
                statistic();
            } else if (pilihan == 4) {
                break;
            } else {
                System.out.print("<= Pilihan Tidak Tersedia =>");
            }
            System.out.print("Ulangi?(yes/no) : ");
            ulangi = input.next();
        } while (ulangi.equals("yes"));
        System.out.print("<=== App Closed ===>");
    }

    void putarLagu() {
        int check = 0;
        if (listLagu.size() == 0) {
            System.out.println("<== List Kosong ==>");
        } else {
            System.out.println("<=== Cari Lagu ===>");
            System.out.print("Judul Lagu\t\t : ");
            String Judul_LaguCheck = input.next();
            for (int a = 0; a < listLagu.size(); a++) {
                if (listLagu.get(a).getJudul_Lagu().contains(Judul_LaguCheck)) {
                    System.out.println("<=== Lagu Ditemukan ===>");
                    String namaPenyanyi = listLagu.get(a).getPenyanyi();
                    String Judul_Lagu = listLagu.get(a).getJudul_Lagu();
                    System.out.println("\tJudul Lagu\t: " + Judul_Lagu);
                    System.out.println("\tNama\t\t: " + namaPenyanyi);
                    System.out.println("<==//== Now Playing : " + Judul_Lagu + " ==\\==>");
                    check = 1;
                    int played = listLagu.get(a).getPlayed() + 1;
                    listLagu.get(a).setPlayed(played);
                }
            }
            if (check == 0) {
                System.out.println("<== Nama Tidak Ditemukan ==>");
            }
        }
    }

    void tambahLagu() {
        int id_Lagu = listLagu.size() + 1;
        System.out.println("<=== Masukkan Data Lagu ===>");
        System.out.print("Nama Penyanyi\t\t : ");
        String Penyanyi = input.next();
        System.out.print("Judul Lagu\t\t : ");
        String Judul_Lagu = input.next();
        System.out.print("Total Waktu (dalam Detik): ");
        int total_Waktu = input.nextInt();
        System.out.println("<=== Data Telah Direkam ===>");

        listLagu.add(new Lagu(id_Lagu,
                Penyanyi,
                Judul_Lagu,
                total_Waktu));

    }

    void statistic() {
        if (listLagu.size() == 0) {
            System.out.println("<== List Kosong ==>");
        } else {
            System.out.println("<=== List Lagu ===>");
            for (int a = 0; a < listLagu.size(); a++) {
                String namaPenyanyi = listLagu.get(a).getPenyanyi();
                String Judul_Lagu = listLagu.get(a).getJudul_Lagu();
                int Played = listLagu.get(a).getPlayed();
                System.out.println((a+1) + ".\tJudul Lagu\t: " + Judul_Lagu);
                System.out.println("\tNama\t\t: " + namaPenyanyi);
                System.out.println("\tPlayed\t\t: " + Played + " Times");
                int played = listLagu.get(a).getPlayed() + 1;
                listLagu.get(a).setPlayed(played);

            }
        }
    }

    class Lagu {
        int id_Lagu;
        String Penyanyi;
        String Judul_Lagu;
        int Jam;
        int Menit;
        int Detik;
        int total_Waktu;
        int Played;

        public Lagu(int id_Lagu,
                String Penyanyi,
                String Judul_Lagu,
                int total_Waktu) {
            this.id_Lagu = id_Lagu;
            this.Penyanyi = Penyanyi;
            this.Judul_Lagu = Judul_Lagu;
            this.total_Waktu = total_Waktu;
            this.Jam = total_Waktu / 3600;
            this.Menit = total_Waktu / 60;
            this.Detik = total_Waktu;
            this.Played = 0;
        }

        public void setDetik(int detik) {
            this.Detik = detik;
        }

        public void setId_Lagu(int id_Lagu) {
            this.id_Lagu = id_Lagu;
        }

        public void setJam(int jam) {
            this.Jam = jam;
        }

        public void setJudul_Lagu(String judul_Lagu) {
            this.Judul_Lagu = judul_Lagu;
        }

        public void setMenit(int menit) {
            this.Menit = menit;
        }

        public void setPenyanyi(String penyanyi) {
            this.Penyanyi = penyanyi;
        }

        public void setPlayed(int played) {
            this.Played = played;
        }

        public void setTotal_Waktu(int total_Waktu) {
            this.total_Waktu = total_Waktu;
        }

        public int getDetik() {
            return Detik;
        }

        public int getId_Lagu() {
            return id_Lagu;
        }

        public int getJam() {
            return Jam;
        }

        public String getJudul_Lagu() {
            return Judul_Lagu;
        }

        public int getTotal_Waktu() {
            return total_Waktu;
        }

        public int getMenit() {
            return Menit;
        }

        public String getPenyanyi() {
            return Penyanyi;
        }

        public int getPlayed() {
            return Played;
        }

    }
}
