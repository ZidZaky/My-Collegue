#include <iostream>

using namespace std;

int main()
{
    int op1,op2,hasil,operasi;
    cout << "<---Kalkulator--->" << endl;
    cout << "1. Operasi Penjumlahan" << endl;
    cout << "2. Operasi Pengurangan" << endl;
    cout << "3. Operasi Pembagian" << endl;
    cout << "4. Operasi Perkalian" << endl;
    cout << "Input Nomor Operasi : " << endl;
    cin >> operasi;
    cout << "Input Angka Pertama : " <<endl;
    cin >> op1;
    cout << "Input Angka Kedua : " <<endl;
    cin >> op2;
    switch (operasi)
    {
    case 1:
        hasil = op1+op2;
        cout << "Hasil Operasi Penjumlahan : " << hasil << endl;
        break;
    case 2:
        hasil = op1-op2;
        cout << "Hasil Operasi Pengurangan : " << hasil << endl;
        break;
    case 3:
        hasil = op1/op2;
        cout << "Hasil Operasi Pembagian : " << hasil << endl;
        break;
    case 4:
        hasil = op1*op2;
        cout << "Hasil Operasi Perkalian : " << hasil << endl;
        break;
    default:
        cout << "Operasi Tidak Ditemukan" << endl;
        break;
    }
    return 0;
}
