#include <iostream>

using namespace std;

int main()
{
    int bilangan,prima;
    prima = 1;
    cout << "Berapakah Bilangan Anda : ";
    cin >> bilangan;
    for (int counter=2;counter<bilangan;counter++)
    {
        if (bilangan%counter==0){
            prima = 0;
        }
    }
    if (prima==0){
        cout << bilangan << " Bukan Bilangan Prima" << endl;
    } else {
        cout << bilangan << " Bilangan Sudah Prima" << endl;
    }
    return 0;
}
