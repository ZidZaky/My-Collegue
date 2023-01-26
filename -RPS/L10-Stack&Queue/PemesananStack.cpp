#include <iostream>
// import file untuk stack
#include <stack>
using namespace std;

int urutan;
int panggilandokter = 0;

// syntax stack & queue
// push  : add element
// pop : remove element
// stack : Tumpukan Data
// size : Isi Stack/queue
// empty : Pengecekan isi kalo kosong True
/// paling atas
// tambahan untuk queue:
// queue : barisan
// back : menampilkan paling belakang
// front: menampilkan paling awal

string isi[] = {};

void ceksisaantrian(stack<string> antri)
{
    int ngisi;
    ngisi = antri.size();
    cout << "List Antrian : " << endl;
    for (int i = 1; i <= ngisi; i++)
    {
        isi[i - 1] = antri.top();
        antri.pop();
    }
    for (int b = ngisi - 1; b >= 0; b--)
    {
        cout << "Pasien : " << isi[b] << endl;
    }
    cout << endl;
}

int main()
{
    stack<string> antrian;
    stack<string> tempo;
    int pilihan, ngisi, ukuran, ulangi, ngisi2;
    do
    {
        string mesen[] = {};
        ngisi = antrian.size();
        cout << "Pilih Menu : " << endl;
        cout << "1. Menambah" << endl;
        cout << "2. Memanggil " << endl;
        cout << "3. Jumlah Antrian " << endl;
        cout << "4. Total Antrian " << endl;
        cout << "Panjang Antrian : " << ngisi << endl;
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
            system("cls");
            cout << nama << ", Anda Antrian Ke " << urutan << endl;
        }
        else if (pilihan == 2)
        {
            if (antrian.size() != 0)
            {
                ulangi = ngisi;
                for (int a = 1; a <= ulangi - 1; a++)
                {
                    tempo.push(antrian.top());
                    antrian.pop();
                }
                cout << "Panggilan kepada : " << antrian.top() << endl;
                cout << "Silahkan Menuju  : ";
                panggilandokter++;
                if (panggilandokter % 2 == 0)
                {
                    cout << "Dr.Alpha" << endl;
                }
                else
                {
                    cout << "Dr.Beta" << endl;
                }
                antrian.pop();
                ngisi2 = tempo.size();
                for (int a = 1; a <= ngisi2; a++)
                {
                    antrian.push(tempo.top());
                    tempo.pop();
                }
            }
            else
            {
                cout << "Tidak Ada Yang Antri" << endl;
            }
        }
        else if (pilihan == 3)
        {
            system("cls");
            if (antrian.size() != 0)
            {
                cout << "Jumlah Antrian : " << antrian.size() << endl;
            }
            else
            {
                cout << "Antrian Sepi~" << endl;
            }
        }
        else if (pilihan == 4)
        {
            if (antrian.size() != 0)
            {
                ceksisaantrian(antrian);
            }
            else
            {
                cout << "Sepi~" << endl;
            }
        }
        if (antrian.size() == 0)
        {
            cout << "Antrian Selesai" << endl;
        }
    } while (antrian.size() != 0);
}