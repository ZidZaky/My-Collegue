#include <iostream>

using namespace std;

void cekprima(int counter)
{
    int pembagi,prima;
    prima = 1;
    pembagi=2;
    do
    {
        if (counter%pembagi==0){
            prima = 0;
            break;
        } else if (counter%pembagi!=0)
            {
                do {
                    if (counter%pembagi==0)
                    {
                        return  cekprima(counter+1);
                    }
                    pembagi++;
                } while (pembagi<counter);
                 cout << counter << " ";   
                break;
            }   
            pembagi++;
        } while (pembagi<counter);
    if (counter == 2)
        {
            cout << counter << " ";
        }
        
}

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
            cekprima(counter);
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