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
    if(operasi = 1){
        hasil = op1+op2;
        cout << "Hasil Operasi Penjumlahan : " << hasil << endl;}
    else if(operasi = 1){
        hasil = op1-op2;
        cout << "Hasil Operasi Pengurangan : " << hasil << endl;}
    else if(operasi = 1){
        hasil = op1/op2;
        cout << "Hasil Operasi Pembagian : " << hasil << endl;}
    else if(operasi = 1){
        hasil = op1*op2;
        cout << "Hasil Operasi Perkalian : " << hasil << endl;}
    else{
        cout << "Operasi Tidak Ditemukan" << endl;}
        return 0;
    }
