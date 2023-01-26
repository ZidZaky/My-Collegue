#include <iostream>
//import file untuk stack
#include <stack>
//import file untuk queue
#include <queue>
using namespace std;

//que dan stack
// ambil nom antrian,
// dokter ke mana, hapus antrian
// cek antrian ke berapa

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

//fungsi print out stack
void print(stack<string> print,int ngisi)
{
    cout << "List Bahasa Pemrograman : " << endl;
    for (int i = 1; i<=ngisi; i++)
    {
    cout << print.top() << ", ";
    print.pop();
    }
}

//fungsi print out queue
void printf(queue<string> print,int ngisi)
{
    cout << "List : " << endl;
    for (int i = 1; i<=ngisi; i++)
    {
    cout << print.front() << ", ";
    print.pop();
    }
}

int main()
{
    //deklarasi
    string anj;
    stack<string> languages;
    queue<string> list;
    int ngisi,ngisiq;
    cin >> ngisi;
    
    //stack
    for (int i = 1; i<=ngisi; i++)
    {
    cout << "Isi Stack ke " << i << " : ";
    cin >> anj;
    languages.push(anj);
    }
    print(languages,ngisi);
    cout << endl;

    //queue
    cout << "Besar Queue:" << endl;
    cin >> ngisiq;
    for (int i = 1; i<=ngisiq; i++)
    {
    cout << "Isi Queue ke " << i << " : ";
    cin >> anj;
    list.push(anj);
    }
    printf(list,ngisiq);
    return 0;
}