#include <iostream>

using namespace std;

int main()
{
    int bilangan,prima;
    prima = 1;
    cout << "Berapakah Bilangan Anda : ";
    cin >> bilangan;
    int counter=2;
    do
    {
        if (bilangan%counter==0){
            prima = 0;
        }
        counter++;
    } while (counter<bilangan);

    if (prima==0){
        cout << endl;
        cout << "Bilangan Ini : " << bilangan << " Bukan Bilangan Prima" << endl;
    } else {
        cout << endl;
        cout << bilangan << " Bilangan Sudah Prima" << endl;
    }
    return 0;
}