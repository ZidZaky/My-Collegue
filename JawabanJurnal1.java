import java.util.Scanner;

class Jawaban {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Silahkan Pilih Nomor Soal : ");
        System.out.println("1. Faktorial");
        System.out.println("2. Jarak bertemu 2 Pasangan");
        System.out.println("3. Check Bilangan Prima");
        System.out.println("4. Sebutkan Bilangan Prima Diantara");
        System.out.println("5. Fibonacci (Array)");
        System.out.println("6. Fibonacci");
        System.out.print("Pilihan Anda : ");
        int pilih = input.nextInt();
        if (pilih == 1) {
            // soal No.1
            System.out.println(" ");
            System.out.println("1. Faktorial");
            int batas;
            int nilai = 1;
            System.out.print("Silahkan Inputkan Angka Faktorial : ");
            batas = input.nextInt();
            System.out.println("Factorial Dari : " + batas);
            if (batas == 0) {
                System.out.println("Maka Factorial Dari : " + batas + " Ialah " + batas);
            } else {
                while (batas > 0) {
                    nilai = nilai * batas;
                    batas--;
                }
            }
            System.out.println("Ialah : " + nilai);
        } else if (pilih == 2) {
            System.out.println(" ");
            System.out.println("2. Jarak bertemu 2 Pasangan");
            // soal No.2
            // Sab = Sa + Sb
            // Sab = va*ta + vb*ta
            Double jarak, kecepatan1, kecepatan2, waktu, jarak2, menit,jam;
            System.out.print("Jarak Terpisah(km) : ");
            jarak = input.nextDouble();
            System.out.print("Kecepatan Lari Pria(km/h) : ");
            kecepatan1 = input.nextDouble();
            System.out.print("Kecepatan Lari Wanita(km/h) : ");
            kecepatan2 = input.nextDouble();
            waktu = jarak / (kecepatan1 + kecepatan2);
            jam = waktu;
            jarak2 = kecepatan2 * waktu;
            waktu = waktu * 3600;
            jarak = jarak - jarak2;
            menit = waktu / 60;
            System.out.println("Mereka Bertemu Setelah : " + waktu + " Sekon atau " + menit + " Menit Atau" + jam + " Jam");
            System.out.println("Mereka Bertemu Setelah : " + jarak + " Km");
        }
        else if (pilih == 3) {
            System.out.println(" ");
            System.out.println("3. Check Bilangan Prima");
            // soal No.3
            int angka;
            int check = 0;
            System.out.print("Silahkan Inputkan Angka : ");
            angka = input.nextInt();
            for (int i = 2; i < angka; i++) {
                if (angka % i == 0) {
                    check = 1;
                    break;
                } else {
                    check = 0;
                }
            }
            if (check == 1) {
                System.out.println("Bilangan " + angka + " Adalah BUKAN Bilangan Prima");
            } else {
                System.out.println("Bilangan " + angka + " Adalah Bilangan Prima");
            }
        }
        else if (pilih == 4) {
            System.out.println(" ");
            System.out.println("4. Sebutkan Bilangan Prima Diantara");
            // Soal no.4
            int angka;
            int check = 0;
            System.out.print("Silahkan Inputkan Angka : ");
            angka = input.nextInt();
            System.out.print("Bilangan Prima diantara 1 - " + angka + " Ialah : ");
            for (int i = 2; i < angka; i++) {
                for (int j = 2; j < i; j++) {
                    if (i == 3) {
                        System.out.print(i - 1 + " ");
                        break;
                    }

                    if (i % j == 0) {
                        break;
                    } else if (j == i - 1) {
                        System.out.print(i);
                        System.out.print(" ");
                    }
                }
                if (check == 0) {
                    if (angka % i == 0) {
                        check = 1;
                    } else {
                        check = 0;
                    }
                }
            }
            System.out.println(" ");
            if (check == 1) {
                System.out.println("Bilangan " + angka + " Adalah BUKAN Bilangan Prima");
            } else {
                System.out.println("Bilangan " + angka + " Adalah Bilangan Prima");
            }
        }
        else if (pilih == 5) {
            System.out.println(" ");
            System.out.println("5. Fibonacci (Array)");
            // Soal No.5
            // Bilangan Fibonaci Un = Un-1 + Un-2
            int angka, angka2, deret;
            System.out.print("Silahkan Inputkan Panjang Deret : ");
            deret = input.nextInt();
            int arr[] = new int[deret];
            System.out.print("Silahkan Inputkan Angka Pertama : ");
            arr[0] = input.nextInt();
            System.out.print("Silahkan Inputkan Angka Kedua : ");
            arr[1] = input.nextInt();
            int temp = 0;
            for (int i = 2; i < deret; i++) {
                arr[i] = arr[i - 1] + arr[i - 2];
            }
            for (int i = 0; i < deret; i++) {
                System.out.print(arr[i] + " ");
            }
        }
        else if (pilih == 6) {
            System.out.println(" ");
            System.out.println("6. Fibonacci");
            // Spal No.5
            int angka, angka2, deret, temp, temp2;
            System.out.print("Silahkan Inputkan Angka Pertama : ");
            angka = input.nextInt();
            System.out.print("Silahkan Inputkan Angka Kedua : ");
            angka2 = input.nextInt();
            System.out.print("Silahkan Inputkan Panjang Deret : ");
            deret = input.nextInt();
            System.out.print("Deret Fibonaci : ");
            temp2 = angka + angka2;
            for (int i = 0; i < deret; i++) {
                System.out.print(angka + " ");
                temp = angka + angka2;
                angka = angka2;
                angka2 = temp;
            }
            System.out.println(" ");
            System.out.print("Jumlah Semua Deret Fibonaci : " + temp2);
        }
    }
}
