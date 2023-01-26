// Linked List Based-App
#include <iostream>
#include <queue>
using namespace std;

struct Transaksi
{
    string namaPemesan;
    string namaBarang;
    int jumlahBarang;
};

struct Pesanan
{
    string nama;
    int harga;
    int stock;

    Pesanan *next;
};

void list(Pesanan *temp)
{
    /* Deklarasi */
    Pesanan *decoy, *decoy2, *decoy3, *decoy4;
    char pilihan;
    int panjang, pilihan2;

    /* Check Panjang */
    decoy = temp;
    for (panjang = 1; decoy->next != NULL; panjang++)
    {
        decoy = decoy->next;
    }
    cout << "<===== LIST BARANG =====>" << endl;
    cout << "Ingin Di Urutkan? : ";
    cin >> pilihan;
    system("cls");

    if (pilihan == 'y')
    {
        /* Convert Data Ke Array */
        int printStock[panjang];
        int printharga[panjang];
        string printNama[panjang];
        decoy2 = temp;
        for (int i = 0; decoy2 != NULL; i++)
        {
            printNama[i] = decoy2->nama;
            printharga[i] = decoy2->harga;
            printStock[i] = decoy2->stock;
            decoy2 = decoy2->next;
        }
        cout << "<=== PENGURUTAN ===> : " << endl;
        cout << "1. Stock Terbanyak Ke Terbatas " << endl;
        cout << "2. Stock Terbatas Ke Tersedikit " << endl;
        cout << "Pilihan Anda? : ";
        cin >> pilihan2;

        if (pilihan2 == 1)
        {
            /*Pengurutan*/
            for (int step = 1; step < panjang; step++)
            {
                int key = printStock[step];
                int key2 = printharga[step];
                string key3 = printNama[step];
                int j = step - 1;

                while (key > printStock[j] && j >= 0)
                {
                    printStock[j + 1] = printStock[j];
                    printharga[j + 1] = printharga[j];
                    printNama[j + 1] = printNama[j];
                    --j;
                }
                printStock[j + 1] = key;
                printharga[j + 1] = key2;
                printNama[j + 1] = key3;
            }
        }
        else if (pilihan2 == 2)
        {
            /*Pengurutan*/
            for (int step = 1; step < panjang; step++)
            {
                int key = printStock[step];
                int key2 = printharga[step];
                string key3 = printNama[step];
                int j = step - 1;

                while (key < printStock[j] && j >= 0)
                {
                    printStock[j + 1] = printStock[j];
                    printharga[j + 1] = printharga[j];
                    printNama[j + 1] = printNama[j];
                    --j;
                }
                printStock[j + 1] = key;
                printharga[j + 1] = key2;
                printNama[j + 1] = key3;
            }
        }
        /* Print ALl */
        cout << "<===== LIST BARANG =====>" << endl;
        cout << "Nama Barang \tStock \tHarga" << endl;
        for (int step = 0; step < panjang; step++)
        {
            cout << printNama[step] << "\t";
            cout << printStock[step] << "\t";
            cout << "Rp." << printharga[step] << endl;
        }
    }
    else
    {
        if (temp == NULL)
        {
            cout << "<=== Tidak Ada Barang Tersedia ===>" << endl;
        }
        else
        {
            cout << "<===== LIST BARANG =====>" << endl;
            cout << "Nama Barang \tStock \tHarga" << endl;
            while (temp != NULL)
            {

                cout << temp->nama << "\t";
                cout << temp->stock << "\t";
                cout << "Rp." << temp->harga << endl;
                temp = temp->next;
            }
        }
    }
}

void tambah(Pesanan **ptrAwal, Pesanan *temp)
{
    /* Deklarasi */
    Pesanan baru, setelah;
    Pesanan *decoy, *decoy2, *decoy3;
    int pilih, panjang;

    /* Check Panjang */
    decoy = (*ptrAwal);
    for (panjang = 1; decoy->next != NULL; panjang++)
    {
        decoy = decoy->next;
    }

    /* Print All */
    decoy2 = (*ptrAwal);
    cout << "<===== LIST BARANG =====>" << endl;
    cout << "Nama Barang \tStock \tHarga" << endl;
    while (decoy2 != NULL)
    {
        cout << decoy2->nama << "\t";
        cout << decoy2->stock << "\t";
        cout << "Rp." << decoy2->harga << endl;
        decoy2 = decoy2->next;
    }

    /* Pemilihan */
    cout << "<===== MENAMBAH BARANG =====>" << endl;
    cout << "1. Menambah Diawal" << endl;
    cout << "2. Menambah Diakhir" << endl;
    cout << "3. Menambah Setelah Barang" << endl;
    cout << "Pilihan Anda : ";
    cin >> pilih;

    system("cls");
    cout << "<===== MENAMBAH BARANG =====>" << endl;
    cout << "Nama Barang (Jenis_Nama)\t: ";
    cin >> baru.nama;
    cout << "Jumlah Stock Barang\t\t: ";
    cin >> baru.stock;
    cout << "Harga Barang /Pcs\t\t: ";
    cin >> baru.harga;

    system("cls");
    if (pilih == 1)
    {
        // front
        Pesanan *newPesanan = new Pesanan;
        newPesanan->nama = baru.nama;
        newPesanan->stock = baru.stock;
        newPesanan->harga = baru.harga;

        newPesanan->next = *ptrAwal;
        *ptrAwal = newPesanan;
    }
    else if (pilih == 2)
    {
        // last
        Pesanan *newPesanan = new Pesanan;
        newPesanan->nama = baru.nama;
        newPesanan->stock = baru.stock;
        newPesanan->harga = baru.harga;
        newPesanan->next = NULL;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newPesanan;
    }
    else if (pilih == 3)
    {
        decoy3 = (*ptrAwal);
        cout << "<===== LIST BARANG =====>" << endl;
        cout << "Nama Barang \tStock \tHarga" << endl;
        while (decoy3 != NULL)
        {
            cout << decoy3->nama << "\t";
            cout << decoy3->stock << "\t";
            cout << "Rp." << decoy3->harga << endl;
            decoy3 = decoy3->next;
        }

        cout << "<===== MENAMBAH BARANG =====>" << endl;
        cout << "Menambah Setelah Barang? : ";
        cin >> setelah.nama;
        system("cls");

        // After
        Pesanan *newPesanan = new Pesanan;
        newPesanan->nama = baru.nama;
        newPesanan->stock = baru.stock;
        newPesanan->harga = baru.harga;
        temp = (*ptrAwal);
        int check = 1;
        while (check <= panjang)
        {
            if (temp->nama == setelah.nama)
            {
                break;
            }
            temp = temp->next;
            check++;
        }
        if (check - 1 > panjang)
        {
            cout << "<== Barang Tidak Tersedia ==>" << endl;
        }
        else
        {
            newPesanan->next = temp->next;
            temp->next = newPesanan;
        }
    }
    else
    {
        cout << "<=== Pilihan Tidak Tersedia ===>" << endl;
    }
};

void hapus(Pesanan **ptrAwal, Pesanan *temp)
{
    /* Deklarasi */
    Pesanan *decoy, *decoy2, *decoy3;
    int pilih, panjang;
    Pesanan setelah;

    /* Check Panjang */
    decoy = (*ptrAwal);
    for (panjang = 1; decoy->next != NULL; panjang++)
    {
        decoy = decoy->next;
    }

    /* Print All */
    decoy2 = (*ptrAwal);
    cout << "<===== LIST BARANG =====>" << endl;
    cout << "Nama Barang \tStock \tHarga" << endl;
    while (decoy2 != NULL)
    {
        cout << decoy2->nama << "\t";
        cout << decoy2->stock << "\t";
        cout << "Rp." << decoy2->harga << endl;
        decoy2 = decoy2->next;
    }

    /* Pemilihan */
    cout << "<===== DELETE BARANG =====>" << endl;
    cout << "1. Menghapus Diawal" << endl;
    cout << "2. Menghapus Diakhir" << endl;
    cout << "3. Menghapus Setelah Barang" << endl;
    cout << "Pilihan Anda : ";
    cin >> pilih;

    temp = (*ptrAwal);
    system("cls");
    if (pilih == 1)
    {
        // fIRST
        Pesanan *trash;
        trash = *ptrAwal;
        *ptrAwal = trash->next;
        trash->next = NULL;
    }
    else if (pilih == 2)
    {
        Pesanan *temp2;
        // last
        if (panjang < 2)
        {
            temp2 = NULL;
        }
        else if (panjang == 2)
        {
            temp2 = temp->next;
            temp->next = NULL;
        }
        else
        {
            while (temp->next != NULL)
            {
                temp2 = temp;
                temp = temp->next;
            }
            temp2->next = NULL;
        }
    }
    else if (pilih == 3)
    {
        /* Print All */
        decoy3 = (*ptrAwal);
        cout << "<===== LIST BARANG =====>" << endl;
        cout << "Nama Barang \tStock \tHarga" << endl;
        while (decoy3 != NULL)
        {
            cout << decoy3->nama << "\t";
            cout << decoy3->stock << "\t";
            cout << "Rp." << decoy3->harga << endl;
            decoy2 = decoy3->next;
        }

        cout << "<===== DELETE BARANG =====>" << endl;
        cout << "Menghapus Setelah Barang? : ";
        cin >> setelah.nama;
        system("cls");

        // After
        Pesanan *temp2;
        int check = 1;
        while (check <= panjang)
        {
            if (temp->nama == setelah.nama)
            {
                temp2 = temp;
                temp = temp->next;
                break;
            }
            temp2 = temp;
            temp = temp->next;
            check++;
        }
        if (check == panjang)
        {
            cout << "<== Barang Tidak Tersedia ==>" << endl;
        }
        else
        {
            temp2->next = temp->next;
            temp->next = NULL;
        }
    }
    else
    {
        cout << "<=== Pilihan Tidak Tersedia ===>" << endl;
    }
}

void search(Pesanan *temp)
{
    /* Deklarasi */
    Pesanan *decoy;
    int panjang;
    int check = 1;
    char edit;
    Pesanan setelah;

    /* Check Panjang */
    decoy = temp;
    for (panjang = 1; decoy->next != NULL; panjang++)
    {
        decoy = decoy->next;
    }

    cout << "<===== SEARCH BARANG =====>" << endl;
    cout << "Mencari Barang? : ";
    cin >> setelah.nama;
    system("cls");
    while (check <= panjang)
    {
        if (temp->nama == setelah.nama)
        {
            cout << "<===== LIST BARANG =====>" << endl;
            cout << "Nama Barang \tStock" << endl;
            cout << temp->nama << "\t";
            cout << temp->stock << "\t";
            cout << temp->harga << endl;

            break;
        }
        temp = temp->next;
        check++;
    }
    cout << "Edit Data Barang? : ";
    cin >> edit;
    if (edit == 'y')
    {
        Pesanan *newPesanan = new Pesanan;
        cout << "<===== EDIT BARANG =====>" << endl;
        cout << "Nama Barang (Jenis_Nama)\t: ";
        cin >> temp->nama;
        cout << "Jumlah Stock Barang\t\t: ";
        cin >> temp->stock;
        cout << "Harga Barang /Pcs\t\t: ";
        cin >> temp->harga;
        cout << "<===== EDIT BERHASIL!! =====>" << endl;
    }
}

void penguranganItem(Pesanan *temp, Transaksi Pengurang)
{
    Pesanan *decoy, *decoy2;
    int panjang;
    int check = 1;

    /* Check Panjang */
    decoy2 = temp;
    for (panjang = 1; decoy2->next != NULL; panjang++)
    {
        decoy2 = decoy2->next;
    }

    /*PrintAll*/
    decoy = temp;
    list(decoy);

    cout << panjang;
    /* Cari Barang */
    while (check <= panjang)
    {
        if (temp->nama == Pengurang.namaBarang)
        {
            cout << "<===== LIST BARANG =====>" << endl;
            cout << "Nama Barang \tStock" << endl;
            cout << temp->nama << "\t";
            cout << temp->stock << " - " << Pengurang.jumlahBarang << endl;
            temp->stock = temp->stock - Pengurang.jumlahBarang;
            cout << temp->harga << endl;
            break;
        }
        temp = temp->next;
        check++;
    }
}

int main()
{
    /* Deklarasi */
    queue<Transaksi> Antrian;
    int pilih, stockbarang, antrian;
    Transaksi namabarang;

    /* Buat Barisan Linked List */
    Pesanan *Awal, *temp;
    Pesanan *one, *two, *three;

    /* Allocate memory */
    one = new Pesanan();
    two = new Pesanan();
    three = new Pesanan();

    /* Menghubungkan */
    one->next = two;
    two->next = three;
    three->next = NULL;

    /* Data Awal */
    one->nama = "Novel_Bulan";
    two->nama = "Novel_Centauri";
    three->nama = "Novel_Matahari";
    one->stock = 36;
    two->stock = 27;
    three->stock = 78;
    one->harga = 98000;
    two->harga = 87000;
    three->harga = 90000;

    /* Menghubungkan Barisan Pertama Dengan Variable Awal(head) */
    Awal = one;
    temp = one;
    do
    {
        /*Main Menu*/
        cout << "<===== WELCOME TO GRAHAMEDIA =====>" << endl;
        cout << "1. Daftar Barang" << endl;
        cout << "2. Tambah Barang" << endl;
        cout << "3. Hapus Barang" << endl;
        cout << "4. Cari Barang" << endl;
        cout << "5. Pesan Barang" << endl;
        cout << "6. Pembayaran Barang" << endl;
        cout << "7. Exit" << endl;
        cout << "Pilihan Anda : ";
        cin >> pilih;
        system("cls");
        if (pilih == 1)
        {
            list(Awal);
        }
        else if (pilih == 2)
        {
            tambah(&Awal, temp);
        }
        else if (pilih == 3)
        {
            hapus(&Awal, temp);
        }
        else if (pilih == 4)
        {
            list(Awal);
            search(temp);
        }
        else if (pilih == 5)
        {
            cout << "<=== Silahkan Memesan ===>" << endl;
            cout << "Isikan Nama Pemesan\t: ";
            cin >> namabarang.namaPemesan;
            cout << "Isikan Nama Barang\t: ";
            cin >> namabarang.namaBarang;
            cout << "Isikan Stock Barang\t: ";
            cin >> namabarang.jumlahBarang;
            antrian = Antrian.size() + 1;
            Antrian.push(namabarang);
            cout << namabarang.namaPemesan << ", Anda Antrian Ke " << antrian << endl;
        }
        else if (pilih == 6)
        {
            char konfirmasi;
            if (Antrian.empty() == true)
            {
                cout << "<=== Tidak Ada Yang Antri ===>" << endl;
            }
            else
            {
                cout << "Pesanan Atas Nama\t\t: " << Antrian.front().namaPemesan << endl;
                cout << "Nama Barang\t\t: " << Antrian.front().namaBarang << endl;
                cout << "Jumlah Barang\t\t: " << Antrian.front().jumlahBarang << endl;
                cout << "Konfirmasi (y/n) ? : ";
                cin >> konfirmasi;
                if (konfirmasi == 'y')
                {
                    penguranganItem(temp, Antrian.front());
                    cout << endl;
                    Antrian.pop();
                }
            }
        }
        else if (pilih == 7)
        {
            cout << "<=== Sampai Jumpa Kembali ===>" << endl;
        }
        else
        {
            cout << "<=== Pilihan Tidak Tersedia ===>" << endl;
        }
    } while (pilih != 7);
}
