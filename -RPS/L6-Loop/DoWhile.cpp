#include <iostream>

using namespace std;

int main()
{
    int i;
    do {
        cout << "Menu" << endl;
        cout << "1.   Ulang" << endl;
        cout << "2.   Keluar" << endl;
        cout << "Pilihan :" << endl;
        cin >> i;
        cout << " " << endl;
    } while (i!=2);
    return 0;
}
