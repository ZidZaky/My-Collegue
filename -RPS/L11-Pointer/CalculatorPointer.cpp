#include <iostream>

using namespace std;

void penjumlahan(int *a, int *b, int *hasil)
{
    *hasil = *a + *b;
}

void perkalian(int *a, int *b, int *hasil)
{
    *hasil = *a * *b;
}

void pembagian(int *a, int *b, int *hasil)
{
    *hasil = *a / *b;
}

int pengurangan(int *a, int *b, int *hasil)
{
    *hasil = *a - *b;
}

int pangkat(int *a, int *b, int *hasil)
{
        int kali;
        kali = *a;
        for (int i = 1; i<*b; i++)
        {
            *a = *a * kali;
        }
        *hasil = *a;
}

int main()
{
    int a,b,pilih,hasil;
    cout << "KALKULATOR" << endl;
    cout << " 1. Penjumlahan" << endl;
    cout << " 2. Perkalian" << endl;
    cout << " 3. Pembagian" << endl;
    cout << " 4. Pengurangan" << endl;
    cout << " 5. Pangkat" << endl;
    cout << "Masukkan Pilihan Operasi   : ";
    cin >> pilih;
    if (pilih==5){
    cout << "Masukkan Angka Awal        : ";
    cin >> a;
    cout << "Masukkan Angka Pemangkat   : ";
    cin >> b;
    } else 
    {
        cout << "Masukkan Angka Pertama     : ";
    cin >> a;
    cout << "Masukkan Angka Kedua       : ";
    cin >> b;
    }

    if (pilih==1) {
        penjumlahan(&a,&b,&hasil);
        cout << "Hasilnya                   : " << hasil;
    } else  if (pilih==2) {
        perkalian(&a,&b,&hasil);
        cout << "Hasilnya                   : " << hasil;
    } else  if (pilih==3) {
        pembagian(&a,&b,&hasil);
        cout << "Hasilnya                   : " << hasil;
    } else  if (pilih==4) {
        pengurangan(&a,&b,&hasil);
        cout << "Hasilnya                   : " << hasil;
    } else  if (pilih==5) {
        pangkat(&a,&b,&hasil);
        cout << "Hasilnya                   : " << hasil;
    }
    return 0;
}
