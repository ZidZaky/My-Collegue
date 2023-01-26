#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a,b,c,d,e, pilih, luas, keliling;

    cout << "Jenis Segitiga : " << endl;
    cout << "1. Sama Sisi" << endl;
    cout << "2. Sama Kaki" << endl;
    cout << "Pilihan : ";
    cin >> pilih;

    if (pilih == 1)
    {
        
    cout << "Panjang Sisi Segitiga : ";
    cin >> a;
    system("cls");
    luas = (a * a)/2 ;
    keliling = 3 * a;
    cout << "luas : " << luas << endl;
    cout << "Keliling : " << keliling << endl;

    } else if (pilih == 2)
    {
        
    cout << "Panjang Alas Segitiga : ";
    cin >> a;
    cout << "Panjang Tinggi Segitiga : ";
    cin >> b;
    c = a/2;
    d = pow(c,2) + pow(b,2);
    e = sqrt(d); 
    luas =  (a * b) / 2;
    keliling = e + a + e;
    cout << "luas : " << luas << endl;
    cout << "Keliling : " << keliling << endl;

    } else 
    {
        system("cls");
        cout << "Pilihan Tidak Tersedia";
    }
}