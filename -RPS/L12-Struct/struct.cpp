#include <iostream>
using namespace std;

struct tiketpesawat 
{
string user;
string kodepesawat;
string maskapai;
string tujuan;
string asal;
int jmlh;
};

int main()
{
system("cls");
tiketpesawat anda;
cout << "Nama User\t\t: " ;        cin >> anda.user;
cout << "Maskapai Anda\t\t: ";     cin >> anda.maskapai;
cout << "Tujuan Anda\t\t: ";       cin >> anda.tujuan;
cout << "Asal Anda\t\t: ";         cin >> anda.asal;
cout << "Kode Pesawat Anda\t: "; cin >> anda.kodepesawat;
cout << "Jumlah Kursi\t\t: ";      cin >> anda.jmlh;

system("cls");
cout << "Data Tiket Anda :" << endl;
cout << "Nama Pemesan       : " << anda.user << endl;
cout << "Maskapai Anda      : " << anda.maskapai << endl;
cout << "Tujuan Anda        : " << anda.tujuan << endl;
cout << "Asal Anda          : " << anda.asal << endl;
cout << "Kode Pesawat Anda  : " << anda.kodepesawat << endl;
cout << "Jumlah Kursi       : " << anda.jmlh << endl;
}