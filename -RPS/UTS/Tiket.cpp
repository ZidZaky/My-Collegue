#include <iostream>
using namespace std;

int cek, isitanggal;
int aksesdev;
string tanggal, bulan, tahun;

// pembersih layar
void clearscreen()
{
    system("cls");
}

// main menu
void mainscreen(int developer)
{
    if (developer == 0)
    {
        cout << "Selamat Datang Di Java Airlines" << endl;
        cout << "1. Registrasi Akun" << endl;
        cout << "2. Pesan Tiket" << endl;
        cout << "3. Cek Jadwal Penerbangan" << endl;
        cout << "4. Cek Tiket Pesanan Yang Tersedia" << endl;
        cout << "5. Print Struk Pemesanan" << endl;
        cout << "6. Refund Tiket" << endl;
        cout << "7. Metode Pembayaran Yang Tersedia" << endl;
        cout << "8. About Aplicatiom" << endl;
        cout << "9. Exit" << endl;
    }
    else if (developer == 1)
    {
        cout << "Selamat Datang Di Java Airlines" << endl;
        cout << "1. Registrasi Akun" << endl;
        cout << "2. Pesan Tiket" << endl;
        cout << "3. Cek Jadwal Penerbangan" << endl;
        cout << "4. Cek Tiket Pesanan Yang Tersedia" << endl;
        cout << "5. Print Struk Pemesanan" << endl;
        cout << "6. Refund Tiket" << endl;
        cout << "7. Metode Pembayaran Yang Tersedia" << endl;
        cout << "8. About Aplicatiom" << endl;
        cout << "9. About Development" << endl;
        cout << "10.Exit" << endl;
    }
}

// developer
void developer()
{
    clearscreen();
    cout << "====================================================================" << endl;
    cout << "           Yang dapat Dikembangkan Dari Aplikasi Berikut :          " << endl;
    cout << "           1. Menggunakan Array Untuk Menyusun Jadwal               " << endl;
    cout << "           2. Menggunakan Database untuk Registrasi Akun            " << endl;
    cout << "           3. Perbaiki User Interference Agar Lebih Menarik         " << endl;
    cout << "           4. fungsi Random Character Maker untuk kode struk        " << endl;
    cout << "           5. fungsi class untuk mengextend akun pengguna           " << endl;
    cout << "           6. code keamanan untuk refund                            " << endl;
    cout << "           7. Menggunakan Array Untuk Menyimpan Tanggal Tiket Dipesan " << endl;
    cout << "           8. Menggunakan Database Untuk Mencocokkan                " << endl;
    cout << "              Tanggal Dan Jadwal Di Hari Tersebut                   " << endl;
    cout << "====================================================================" << endl;
    cout << endl;
}

// Struk Pemesanan
void strukpemesanan()
{
    string codestruk;
    char ulangi, print;
    do
    {
        cout << "Cek Pesanan Tiket Yang Tersedia" << endl;
            cout << "Code Penerbangan   : ";
            cin >> codestruk;
        if (codestruk == "L101")
        {
            cout << endl;
            cout << "Code Penerbangan   Asal    Tujuan  Keberangkatan" << endl;
            cout << "L101               SBY     JKT     21.00" << endl;
            cout << "Harga Tiket Rp. 1.500.000" << endl;
            cout << "Pesanan Yang Tersedia pada Tanggal : ";
            cout << tanggal << " - " << bulan << " - " << tahun << endl;
            cout << "Print? y/n : ";
            cin >> print;
            cout << endl;
            clearscreen();
        }
        else if (codestruk == "W102")
        {
            cout << endl;
            cout << "Code Penerbangan   Asal    Tujuan  Keberangkatan" << endl;
            cout << "W102               MLG     BGR     16.00" << endl;
            cout << "Harga Tiket Rp. 1.300.000" << endl;
            cout << "Print? y/n : ";
            cout << "Pesanan Yang Tersedia pada Tanggal : ";
            cout << tanggal << " - " << bulan << " - " << tahun << endl;
            cin >> print;
            cout << endl;
            clearscreen();
        }
        else if (codestruk == "Q103")
        {
            cout << endl;
            cout << "Code Penerbangan   Asal    Tujuan  Keberangkatan" << endl;
            cout << "Q103               BLI     BNDG    22.00" << endl;
            cout << "Harga Tiket Rp. 1.100.000" << endl;
            cout << "Pesanan Yang Tersedia pada Tanggal : ";
            cout << tanggal << " - " << bulan << " - " << tahun << endl;
            cout << "Print? y/n : ";
            cin >> print;
            cout << endl;
            clearscreen();
        }
        else if (codestruk == "L103")
        {
            cout << endl;
            cout << "Code Penerbangan   Asal    Tujuan  Keberangkatan" << endl;
            cout << "L103               SBY     YGY     17.00" << endl;
            cout << "Harga Tiket Rp. 1.700.000" << endl;
            cout << "Pesanan Yang Tersedia pada Tanggal : ";
            cout << tanggal << " - " << bulan << " - " << tahun << endl;
            cout << "Print? y/n : ";
            cin >> print;
            cout << endl;
            clearscreen();
        }
        else if (codestruk == "Y103")
        {
            cout << endl;
            cout << "Code Penerbangan   Asal    Tujuan  Keberangkatan" << endl;
            cout << "Y103               SDA     MLG     14.00" << endl;
            cout << "Harga Tiket Rp. 700.000" << endl;
            cout << "Pesanan Yang Tersedia pada Tanggal : ";
            cout << tanggal << " - " << bulan << " - " << tahun << endl;
            cout << "Print? y/n : ";
            cin >> print;
            cout << endl;
            clearscreen();
        }
        else
        {
            cout << "Tiket Tidak Tersedia" << endl;
        }
        cout << "Ulangi? y/n : ";
        cin >> ulangi;
    } while (ulangi != 'n');
    if (print == 'y')
    {
        clearscreen();
        cout << "Anda Telah Melakukan Print Tiket" << endl;
    }
    else
    {
        clearscreen();
        cout << "Anda Tidak Jadi Memesan Tiket" << endl;
    }
}

// Refund
void refund(string codestruk)
{
    int harga;
    if (codestruk == "L101")
    {
        cout << endl;
        cout << "Code Penerbangan   Asal    Tujuan  Keberangkatan" << endl;
        cout << "L101               SBY     JKT     21.00" << endl;
        cout << "Harga Tiket Rp. 1.500.000";
        harga = 1500000;
        cout << endl;
        clearscreen();
    }
    else if (codestruk == "W102")
    {
        cout << endl;
        cout << "Code Penerbangan   Asal    Tujuan  Keberangkatan" << endl;
        cout << "W102               MLG     BGR     16.00" << endl;
        cout << "Harga Tiket Rp. 1.300.000";
        harga = 1300000;
        cout << endl;
        clearscreen();
    }
    else if (codestruk == "Q103")
    {
        cout << endl;
        cout << "Code Penerbangan   Asal    Tujuan  Keberangkatan" << endl;
        cout << "Q103               BLI     BNDG    22.00" << endl;
        cout << "Harga Tiket Rp. 1.100.000";
        harga = 1100000;
        cout << endl;
        clearscreen();
    }
    else if (codestruk == "L103")
    {
        cout << endl;
        cout << "Code Penerbangan   Asal    Tujuan  Keberangkatan" << endl;
        cout << "L103               SBY     YGY     17.00" << endl;
        cout << "Harga Tiket Rp. 1.700.000";
        harga = 1700000;
        cout << endl;
        clearscreen();
    }
    else if (codestruk == "Y103")
    {
        cout << endl;
        cout << "Code Penerbangan   Asal    Tujuan  Keberangkatan" << endl;
        cout << "Y103               SDA     MLG     14.00" << endl;
        cout << "Harga Tiket Rp. 700.000";
        harga = 700000;
        cout << endl;
        clearscreen();
    }
    else
    {
        cout << "Tiket Tidak Tersedia" << endl;
    }
    int refundbayar;
    char yakin;
    if (harga > 1000000)
    {
        refundbayar = harga / 2;
    }
    else if (harga < 10000000)
    {
        refundbayar = harga / 4;
    }
    cout << "Refund Anda : " << refundbayar << endl;
    cout << "Apakah Anda Yakin Untuk Refund? y/n : ";
    cin >> yakin;
    if (yakin == 'n')
    {
        clearscreen();
        cout << "Refund Dibatalkan" << endl;
    }
    else if (yakin == 'y')
    {
        clearscreen();
        cout << "Refund Berhasil" << endl;
    }
}

// pengecekan pesanan
void order(string codepenerbangan)
{
    if (codepenerbangan == "L101")
    {
        cout << endl;
        cout << "Code Penerbangan   Asal    Tujuan  Keberangkatan" << endl;
        cout << "L101               SBY     JKT     21.00" << endl;
        cout << "Harga Tiket Rp. 1.500.000" << endl;
        cout << tanggal << " - " << bulan << " - " << tahun << endl;
        cout << endl;
    }
    else if (codepenerbangan == "W102")
    {
        cout << endl;
        cout << "Code Penerbangan   Asal    Tujuan  Keberangkatan" << endl;
        cout << "W102               MLG     BGR     16.00" << endl;
        cout << "Harga Tiket Rp. 1.300.000" << endl;
        cout << tanggal << " - " << bulan << " - " << tahun << endl;
        cout << endl;
    }
    else if (codepenerbangan == "Q103")
    {
        cout << endl;
        cout << "Code Penerbangan   Asal    Tujuan  Keberangkatan" << endl;
        cout << "Q103               BLI     BNDG    22.00" << endl;
        cout << "Harga Tiket Rp. 1.100.000" << endl;
        cout << tanggal << " - " << bulan << " - " << tahun << endl;
        cout << endl;
    }
    else if (codepenerbangan == "L103")
    {
        cout << endl;
        cout << "Code Penerbangan   Asal    Tujuan  Keberangkatan" << endl;
        cout << "L103               SBY     YGY     17.00" << endl;
        cout << "Harga Tiket Rp. 1.700.000" << endl;
        cout << tanggal << " - " << bulan << " - " << tahun << endl;
        cout << endl;
    }
    else if (codepenerbangan == "Y103")
    {
        cout << endl;
        cout << "Code Penerbangan   Asal    Tujuan  Keberangkatan" << endl;
        cout << "Y103               SDA     MLG     14.00" << endl;
        cout << "Harga Tiket Rp. 700.000" << endl;
        cout << tanggal << " - " << bulan << " - " << tahun << endl;
        cout << endl;
    }
    else
    {
        cout << endl;
        cout << "***Tiket Tidak Tersedia***" << endl;
        cout << endl;
    }
}

// regis akun
void registrasi()
{
    string nama, asal, notelp, email;
    char ulangi = 'y';
    do
    {
        cout << "Lakukan Registrasi Akun" << endl;
        cout << "Nama : ";
        cin >> nama;
        cout << "Address : ";
        cin >> asal;
        cout << "No. Telp : ";
        cin >> notelp;
        cout << "Email : ";
        cin >> email;
        cout << endl;
        clearscreen();
        cout << "Cek Ulang Akun Anda" << endl;
        cout << "Nama : " << nama << endl;
        cout << "Address : " << asal << endl;
        cout << "No. Telp : " << notelp << endl;
        cout << "Email : " << email << endl;
        cout << "Cek Ulang? (y/n) : ";
        cin >> ulangi;
        clearscreen();
    } while (ulangi != 'n');
    if (nama == "ZidZaky")
    {
        int password;
        cout << "What Is The pin? : ";
        cin >> password;
        if (password == 123)
        {
            clearscreen();
            cout << "Memasuki Mode Developer" << endl;
            aksesdev = 1;
        }
        else
        {
            cout << "password salah!!";
            return registrasi();
        }
    }
    cout << "***Selamat Datang keluarga Java Airlines***" << endl;
}

// cek jadwal
void Jadwal()
{
    if (isitanggal == 1)
    {
        cout << "Penerbangan Pada Tangal : ";
        cin >> tanggal;
        cout << "Penerbangan Pada Bulan : ";
        cin >> bulan;
        cout << "Penerbangan Pada Tahun : ";
        cin >> tahun;
    }
    cout << endl;
    clearscreen();
    cout << endl;
    cout << "Penerbangan Yang Tersedia : " << endl;
    cout << "Pesanan Yang Tersedia pada Tanggal : ";
    cout << tanggal << " - " << bulan << " - " << tahun << endl;
    cout << "Code Penerbangan   Asal    Tujuan  Keberangkatan" << endl;
    cout << "L101               SBY     JKT     21.00" << endl;
    cout << "W102               MLG     BGR     16.00" << endl;
    cout << "Q103               BLI     BNDG    22.00" << endl;
    cout << "L103               SBY     YGY     17.00" << endl;
    cout << "Y103               SDA     MLG     14.00" << endl;
    cout << endl;
}

// Cek Akses no.4
int checking(char booking, int ceknilai)
{
    if (booking == 'y' && ceknilai == 1)
    {
        return (cek = 1);
    }
    return 0;
}

// metode pembayaran & pembayaran
void metodepembayaran(int bayar)
{
    int pilihan;
    cout << "Berbagai Metode Pembayaran Di Java Airlines" << endl;
    cout << "1. Cash" << endl;
    cout << "2. Cashless" << endl;
    cout << "Pilihan Anda ? : ";
    cin >> pilihan;
    if (pilihan == 1)
    {
        clearscreen();
        cout << "***Datanglah Ke Agen Java Airline Terdekat***" << endl;
    }
    else if (pilihan == 2)
    {
        clearscreen();
        cout << "***Berbagai Pilihan Mitra Cashless Java Airlines***" << endl;
        cout << "   1. LinkAja " << endl;
        cout << "   2. OvO " << endl;
        cout << "   3. Dana " << endl;
        cout << "   4. Gopay " << endl;
        cout << "   5. Bank BRI " << endl;
        cout << "   6. Bank Mandiri " << endl;
        cout << "   7. Bank BCA " << endl;
        cout << endl;
        if (pilihan == 2 && bayar == 1)
        {
            cout << "Silahkan Memilih Mitra java Airlines : ";
            cin >> bayar;
            if (bayar > 7 || bayar < 1)
            {
                cout << "**Pembayaran Tidak Tersedia**" << endl;
            }
            cout << "Silahkan melakukan Transfer Ke Rekening berikut : 112358132134" << endl;
            cout << "Apabila Pembayaran Telah Selesai Maka Akan Dikonfirmasi Oleh Admin" << endl;
            cout << "Konfirmasi Setelah Pembayaran (Transfer) Paling Lambat 1x24 jam" << endl;
            cout << "Terimakasih Telah Menjadi Bagian dari Java Airlines Family, Have A Nice Flight!" << endl;
            cout << endl;
            bayar = 0;
        }
    }
    else if (pilihan > 2 || pilihan < 1)
    {
        cout << "**Pembayaran Tidak Tersedia**" << endl;
    }
}

// pesan tiket
void pesantiket()
{
    int ceknilai;
    char booking, show, akhiri;
    string asal, tujuan;
    cout << endl;
    do
    {
        cout << "Pesan? y/n : ";
        cin >> akhiri;
        clearscreen();
        if (akhiri == 'n')
        {
            break;
            ceknilai = 1;
        }
        cout << "Show Jadwal Penerbangan? y/n : ";
        cin >> show;
        cout << "Penerbangan Pada Tangal : ";
        cin >> tanggal;
        cout << "Penerbangan Pada Bulan : ";
        cin >> bulan;
        cout << "Penerbangan Pada Tahun : ";
        cin >> tahun;

        if (show == 'y')
        {
            isitanggal == 1;
            Jadwal();
        }
        cout << "Pesanan Yang Tersedia pada Tanggal : ";
        cout << tanggal << " - " << bulan << " - " << tahun << endl;
        cout << "Lakukan Pesan Tiket" << endl;
        cout << "Asal   : ";
        cin >> asal;
        cout << "Tujuan : ";
        cin >> tujuan;
        clearscreen();
        if (asal == "Surabaya" && tujuan == "Jakarta")
        {
            cout << "Code Penerbangan   Asal    Tujuan  Keberangkatan" << endl;
            cout << "L101               SBY     JKT     21.00" << endl;
            cout << "Harga Tiket Rp. 1.500.000" << endl;
            cout << tanggal << " - " << bulan << " - " << tahun << endl;
            cout << "Booking Now? y/n :";
            cin >> booking;
            if (booking == 'y')
            {
                metodepembayaran(1);
            }
            else
            {
                clearscreen();
            }
        }
        else if (asal == "Malang" && tujuan == "Bogor")
        {
            cout << "Code Penerbangan   Asal    Tujuan  Keberangkatan" << endl;
            cout << "W102               MLG     BGR     16.00" << endl;
            cout << "Harga Tiket Rp. 1.300.000" << endl;
            cout << tanggal << " - " << bulan << " - " << tahun << endl;
            cout << "Booking Now? y/n :";
            cin >> booking;
            if (booking == 'y')
            {
                metodepembayaran(1);
            }
            else
            {
                clearscreen();
            }
        }
        else if (asal == "Bali" && tujuan == "Bandung")
        {
            cout << "Code Penerbangan   Asal    Tujuan  Keberangkatan" << endl;
            cout << "Q103               BLI     BNDG    22.00" << endl;
            cout << "Harga Tiket Rp. 1.100.000" << endl;
            cout << tanggal << " - " << bulan << " - " << tahun << endl;
            cout << "Booking Now? y/n :";
            cin >> booking;
            if (booking == 'y')
            {
                metodepembayaran(1);
            }
            else
            {
                clearscreen();
            }
        }
        else if (asal == "Surabaya" && tujuan == "Yogyakarta")
        {
            cout << "Code Penerbangan   Asal    Tujuan  Keberangkatan" << endl;
            cout << "L103               SBY     YGY     17.00" << endl;
            cout << "Harga Tiket Rp. 1.700.000" << endl;
            cout << tanggal << " - " << bulan << " - " << tahun << endl;
            cout << "Booking Now? y/n :";
            cin >> booking;
            if (booking == 'y')
            {
                metodepembayaran(1);
            }
            else
            {
                clearscreen();
            }
        }
        else if (asal == "Sidoarjo" && tujuan == "Malang")
        {
            cout << "Code Penerbangan   Asal    Tujuan  Keberangkatan" << endl;
            cout << "Y103               SDA     MLG     14.00" << endl;
            cout << "Harga Tiket Rp. 700.000" << endl;
            cout << tanggal << " - " << bulan << " - " << tahun << endl;
            cout << "Booking Now? y/n :";
            cin >> booking;
            if (booking == 'y')
            {
                metodepembayaran(1);
            }
            else
            {
                clearscreen();
            }
        }
        else
        {
            cout << "Tidak Ditemukan Tiket Tersedia" << endl;
            booking = 'n';
        }
    } while (booking != 'y');
    ceknilai = 1;
    checking(booking, ceknilai);
    cout << "Terimakasih Telah Memesan Tiket Java Airlines" << endl;
}

// tentang
void about()
{
    clearscreen();
    cout << "====================================================================" << endl;
    cout << "           Aplikasi Ini Merupakan Hasil Brainstorming" << endl;
    cout << "                   Sesosok Zidan Irfan Zaky" << endl;
    cout << "           Mahasiswa Institut Teknologi Telkom Surabaya" << endl;
    cout << "                 Jurusan Software Engineering" << endl;
    cout << "           Bercita-cita menjadi Full-Stack Web Developer" << endl;
    cout << "               Aplikasi Ini Menggunakan Methode :" << endl;
    cout << "        1. If Else, 2. Do While Loop, 3. Materi Function" << endl;
    cout << "        Bahasa Yang Digunakan C++ , IDE : Visual Studio Code" << endl;
    cout << "====================================================================" << endl;
    cout << endl;
}

// fungsi utama
int main()
{
    int akhiri = 1;
    int akun = 0;
    string codepenerbangan;
    do
    {
        if (aksesdev == 0)
        {
            mainscreen(0);
        }
        else if (aksesdev == 1)
        {
            mainscreen(1);
        }
        int pilihan;
        cout << "Pilihan Anda : ";
        cin >> pilihan;
        if (pilihan == 1)
        {
            clearscreen();
            registrasi();
            akun = 1;
        }
        else if (pilihan == 2 && akun == 1)
        {
            clearscreen();
            pesantiket();
        }
        else if (pilihan == 2 && akun == 0)
        {
            clearscreen();
            cout << "***Buat Akun Terlebih Dahulu***" << endl;
        }
        else if (pilihan == 3)
        {
            clearscreen();
            Jadwal();
        }
        else if (pilihan == 4 && cek == 0)
        {
            clearscreen();
            cout << "***Anda Belum Memesan Tiket***" << endl;
        }
        else if (pilihan == 4 && cek > 0)
        {
            clearscreen();
            char ulangi;
            do
            {
                ulangi = 'y';
                cout << "Cek Pesanan Tiket Yang Tersedia" << endl;
                cout << "Code Penerbangan   : ";
                cin >> codepenerbangan;
                order(codepenerbangan);
                cout << "Ulangi? y/n :";
                cin >> ulangi;
                clearscreen();
            } while (ulangi != 'n');
        }
        else if (pilihan == 5 && cek == 0)
        {
            clearscreen();
            cout << "***Anda Belum Memesan Tiket***" << endl;
        }
        else if (pilihan == 5 && cek > 0)
        {
            string codestruk;
            clearscreen();
            strukpemesanan();
        }
        else if (pilihan == 6 && cek == 0)
        {
            clearscreen();
            cout << "***Anda Belum Memesan Tiket***" << endl;
        }
        else if (pilihan == 6 && cek > 0)
        {
            string codestruk;
            clearscreen();
            cout << "Refund Tiket Pesanan Anda" << endl;
            cout << "Code Penerbangan   : ";
            cin >> codestruk;
            refund(codestruk);
        }
        else if (pilihan == 7 && cek > 0)
        {
            clearscreen();
            metodepembayaran(0);
        }
        else if (pilihan == 7 && cek == 0)
        {
            clearscreen();
            cout << "***Anda Belum Memesan Tiket***" << endl;
        }
        else if (pilihan == 8)
        {
            clearscreen();
            about();
        }
        else if (pilihan == 9 && aksesdev == 0)
        {
            akhiri = 4;
        }
        else if (pilihan == 9 && aksesdev == 1)
        {
            clearscreen();
            developer();
        }
        else if (pilihan == 10 && aksesdev == 1)
        {
            akhiri = 4;
        }
        else
        {
            clearscreen();
            cout << "***Pilihan Tidak Tersedia***" << endl;
        }
    } while (akhiri != 4);
    clearscreen();
    return 0;
}