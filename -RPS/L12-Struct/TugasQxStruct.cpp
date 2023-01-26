#include <iostream>
//import file untuk queue
#include <queue>
using namespace std;

struct pasien
{
    string nama;
    int nik;
    string keluhan;
};

int urutan;
string dokter[2] = {"Dr.Arief","Dr.Malik"};
//syntax stack & queue
//push  : add element
//pop : remove element
//stack : Tumpukan Data
//size : Isi Stack/queue
//empty : Pengecekan isi kalo kosong True
///paling atas
//tambahan untuk queue:
//queue : barisan
//back : menampilkan paling belakang
//front: menampilkan paling awal

void ceksisaantrian(queue<pasien> antri)
{
    int ngisi;
    ngisi = antri.size();
    if (ngisi == 0)
    {
        system("cls");
        cout << "Gaada Yang Antri" << endl;
    }
    else {
        cout << "List Antrian\t: " << endl;
    for (int i = 1; i<=ngisi; i++)
    {
    cout << "< --- --- --- >" << endl;
    cout << "Urutan Ke - " << i << "\t: " << antri.front().nama << endl;
    cout << "Dengan NIK\t: " << antri.front().nik << endl;
    cout << "Keluhan\t\t: " << antri.front().keluhan << endl;
    cout << "< --- --- --- >" << endl;
    cout << endl;
    antri.pop();
    }
    cout << endl;
    }
}

int main()
{
    pasien data;
    queue<pasien> antrian;
    int pilihan;
    do {
    cout << "Pilih Menu\t: " << endl;
    cout << "1. Menambah" << endl;
    cout << "2. Memanggil " << endl;
    cout << "3. List Antrian " << endl;
    cout << "Jumlah Antrian\t: " << antrian.size() << endl;
    cout << "Pilihan Anda\t: ";
    cin >> pilihan;
    system("cls");
    if (pilihan == 1)
    {
        cout << "Isikan Nama Pelanggan\t: ";
        cin >> data.nama;
        cout << "Isikan NIK\t\t: ";
        cin >> data.nik;
        cout << "Isikan Keluhan\t\t: ";
        cin >> data.keluhan;
        urutan++;
        antrian.push(data);
        system("cls");
        cout << data.nama << ", Anda Antrian Ke " << urutan << endl;
    }
    else if (pilihan == 2)
    {
        if (antrian.empty()==true)
        {
            cout << "Tidak Ada Yang Antri" << endl;
        }
        else
        {
        cout << "Paling Depan\t\t: " << antrian.front().nama << endl;
        cout << "Dengan No. NIK\t\t: " << antrian.front().nik << endl;
        cout << "Dengan Keluhan\t\t: " << antrian.front().keluhan << endl;
        cout << "Silahkan Menuju Dokter\t: " ;
        if (antrian.size()%2 == 0)
        {
            cout << dokter[1];
        }
        else 
        {
            cout << dokter[0];
        }
        cout << endl;
        antrian.pop();
        }
    }
    else if (pilihan == 3)
    {
        ceksisaantrian(antrian);
    }
    if (antrian.empty() == true)
    {
        cout << "Antrian Selesai" << endl;
    }
    } while(!antrian.empty());
}