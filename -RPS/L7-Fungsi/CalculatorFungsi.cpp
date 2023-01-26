#include <iostream>
using namespace std;

int a,b,i,hasil;

int penjumlahan(int a, int b)
{
    return (a+b);
}

int perkalian(int a,int b)
{
    return (a*b);
}

int pembagian(int a,int b)
{
    return (a/b);
}

int pengurangan(int a,int b)
{
    return (a-b);
}

int pangkat(int a,int b)
{
       if (b==1){
        return a;
       } else {
        return (a * pangkat(a,b-1));
}
}

int main()
{
    cout << "KALKULATOR" << endl;
    cout << " 1. Penjumlahan" << endl;
    cout << " 2. Perkalian" << endl;
    cout << " 3. Pembagian" << endl;
    cout << " 4. Pengurangan" << endl;
    cout << " 5. Pangkat" << endl;
    cout << "Masukkan Pilihan           : ";
    cin >> i;
    cout << "Masukkan Angka Pertama     : ";
    cin >> a;
    cout << "Masukkan Angka Kedua       : ";
    cin >> b;

    if (i==1) {
        cout << "Hasilnya                   : " << penjumlahan(a,b);
    } else  if (i==2) {
        cout << "Hasilnya                   : " << perkalian(a,b);
    } else  if (i==3) {
        cout << "Hasilnya                   : " << pembagian(a,b);
    } else  if (i==4) {
        cout << "Hasilnya                   : " << pengurangan(a,b);
    } else  if (i==5) {
        cout << "Hasilnya                   : " << pangkat(a,b);
    }
    return 0;
}
