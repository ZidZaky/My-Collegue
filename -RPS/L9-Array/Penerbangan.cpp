#include<iostream>
using namespace std;

int maskapai,kelas,jam;
int penerbangan[3][3][4] =
{
    //Garuda Airlines
    {{7000000,6500000,5000000,4000000},
    {5000000,4500000,3000000,2500000},
    {3000000,1500000,2000000,1000000}},

    //Citilink
    {{7000000,6500000,5000000,4000000},
    {5000000,4500000,3000000,2500000},
    {3500000,300000,2000000,1500000}},

    //Lion Air
    {{7000000,6800000,5000000,4000000},
    {5000000,4500000,3500000,2900000},
    {4900000,4500000,2200000,1000000}}
};

string maskapaipenerbangan[3] = {"GarudaAirlines","Citilink","LionAir"};
string kelaspenerbangan[3] = {"VVIP","Bussiness","Ekonomi"};
string jamterbang[4] = {"12.00","13.00","14.00","15.00"};

void clearscreen()
{
    system("cls");
}

void printsemuaarray()
{
     cout << "Maskapai Yang Tersedia : " << endl;
     for (int i = 0; i<3; i++){
        cout << i+1 << ". " << maskapaipenerbangan[i] << endl;
     }
     cout << endl;
     cout << "Kelas Yang Tersedia : " << endl;
     for (int i = 0; i<3; i++){
        cout << i+1 << ". " << kelaspenerbangan[i] << endl;
     }
     cout << endl;
     cout << "Jam Yang Tersedia : " << endl;
     for (int i = 0; i<3; i++){
        cout << i+1 << ". " << jamterbang[i] << endl;
     }
     cout << endl;
}

void tampilkanharga()
{
    cout << "Pilih Maskapai :" << endl;
    cout << "1. Garuda Airlines" << endl;
    cout << "2. Citilink" << endl;
    cout << "3. Lion Air" << endl;
    cout << "Tampilkan Harga Maskapai Ke : ";
    cin >> maskapai;
    if (maskapai == 1 || maskapai == 2 || maskapai == 3)
    {
        cout << "Maskapai : " << maskapaipenerbangan[maskapai - 1] << endl;
        for (int i = 0; i<3; i++)
        {
            cout << "Kelas Penerbangan : " << kelaspenerbangan[i] << endl;
            cout << "Jam Terbang Yang Tersedia" << endl;
            for (int a = 0; a<4; a++)
            {
                cout << jamterbang[a] << " : " << penerbangan[maskapai-1][i][a] << endl;
            }
        }
        cout << endl;
    } else 
    {
        cout << "Informasi Tidak Tersedia" << endl;
    }
}

void pilihan()
{
    cout << "Melakukan Pesan Tiket" << endl;
    cout << "Pilih Maskapai :" << endl;
    cout << "1. Garuda Airlines" << endl;
    cout << "2. Citilink" << endl;
    cout << "3. Lion Air" << endl;
    cin >> maskapai;
    maskapai = maskapai - 1;
    clearscreen();
    cout << "Melakukan Pesan Tiket" << endl;
    cout << "Pilih Kelas :" << endl;
    cout << "1. VVIP" << endl;
    cout << "2. Bussiness" << endl;
    cout << "3. Ekonomi" << endl;
    cin >> kelas;
    kelas = kelas - 1;
    clearscreen();
    cout << "Melakukan Pesan Tiket" << endl;
    cout << "Pilih Jam :" << endl;
    cout << "1. 12.00" << endl;
    cout << "2. 13.00" << endl;
    cout << "3. 14.00" << endl;
    cout << "4. 15.00" << endl;
    cin >> jam;
    jam = jam - 1;
    clearscreen();
}

int main()
{
    char print,tampil;
    cout << "Apakah Ingin Ngeprint Semua Informasi Penerbangan? (y/n) : ";
    cin >> print;
    if (print == 'y') {
        printsemuaarray();
    } 
    cout << "Apakah Ingin Melihat Semua Harga Penerbangan? (y/n) : ";
    cin >> tampil;
    if (tampil == 'y')
    {
        tampilkanharga();
    }
    pilihan();
    
    cout << "Keterangan Tiket : " << maskapaipenerbangan[maskapai] << " " << kelaspenerbangan[kelas] << " " << jamterbang[jam] << endl;
    cout << "Harga Penerbangan = Rp. " << penerbangan[maskapai][kelas][jam] << ",-";
    
}