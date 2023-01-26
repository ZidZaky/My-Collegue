#include <iostream>
using namespace std;
int bulat = 100;
float pecahan = 27.5;
void Inisialisasi (int &i, float &f)
{
 i = 10;
 f = 94.2;
}

void ChangeThem (int i, float f)
{
i = 100;
f = 27.5;
bulat = i;
pecahan = f;
}

int main()
{
    Inisialisasi(bulat,pecahan);
    cout << "Nilai Bilangan Bulat awal : " << bulat << endl;
    cout << "Nilai Pecahan awal : " << pecahan << endl;

    ChangeThem (bulat,pecahan);
    cout << "Nilai Bilangan Bulat diganti : " << bulat << endl;
    cout << "Nilai Pecahan diganti : " << pecahan << endl;

    cout << "Nilai Bilangan Bulat akhir : " << bulat << endl;
    cout << "Nilai Pecahan akhir : " << pecahan << endl;

 return 0;
}
