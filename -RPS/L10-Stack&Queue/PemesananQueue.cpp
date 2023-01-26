#include <iostream>
//import file untuk queue
#include <queue>
using namespace std;

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

void ceksisaantrian(queue<string> antri)
{
    int ngisi;
    ngisi = antri.size();
    if (ngisi == 0)
    {
        system("cls");
        cout << "Gaada Yang Antri";
    }
    else {
        cout << "List Antrian : " << endl;
    for (int i = 1; i<=ngisi; i++)
    {
    cout << "Urutan Ke - " << i << " : " << antri.front() << endl;
    antri.pop();
    }
    cout << endl;
    }
}

int main()
{
    queue<string> antrian;
    int pilihan;
    do {
    cout << "Pilih Menu : " << endl;
    cout << "1. Menambah" << endl;
    cout << "2. Memanggil " << endl;
    cout << "3. List Antrian " << endl;
    cout << "Jumlah Antrian : " << antrian.size() << endl;
    cout << "Pilihan Anda : ";
    cin >> pilihan;
    system("cls");
    if (pilihan == 1)
    {
        string nama;
        cout << "Isikan Nama Pelanggan : ";
        cin >> nama;
        urutan++;
        antrian.push(nama);
        cout << nama << ", Anda Antrian Ke " << urutan << endl;
    }
    else if (pilihan == 2)
    {
        if (antrian.empty()==true)
        {
            cout << "Tidak Ada Yang Antri";
        }
        else
        {
        cout << "Paling Depan : " << antrian.front() << endl;
        cout << "Silahkan Menuju Dokter : " ;
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
        system("cls");
        cout << "Antrian Selesai" << endl;
    }
    } while(!antrian.empty());
}