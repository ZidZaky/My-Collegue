#include <iostream>
using namespace std;

int main()
{
    string ulangi;
    int counter = -1;
    ulangi = "y";
    do
    {
        if (ulangi == "y")
        {
            cout << "apakah kamu ingin mengulang" << endl;
            cout << "jawab (y/n): ";
            cin >> ulangi;
        }
        else
        {
            cout << "Hurufnya salah!" << endl;
            cout << "jawab (y/n): ";
            cin >> ulangi;
        }
        counter++;
    } while (ulangi != "n");

    cout << "/n------n/" << endl;
    cout << "perulangan selesai!" << endl;
    cout << "Kamu mengulang sebanyak " << counter << " kali" << endl;

    return 0;
}
