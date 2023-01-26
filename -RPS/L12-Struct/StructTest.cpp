#include <iostream>
using namespace std;

struct list{
    int lebar;
    int isi[];
};

int main()
{
    list nama;
    //int panjang;
    cout<<"Panjang array : ";
    cin >> nama.lebar;

   //panjang = nama.lebar;
   // cout<<"panjang : "<<panjang<<endl;
    for (int i = 0; i < nama.lebar; i++)
    {
        cout << "Isi Array Ke-" << i+1 << " = ";
        cin >> nama.isi[i];
    }
    cout << "Besar Array = " << nama.lebar << endl;
    for (int a = 0; a < nama.lebar; a++)
    {
        cout << "Isi Array Ke-" << a << " = " << nama.isi[a] << endl;
    }
}