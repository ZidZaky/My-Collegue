#include <iostream>

using namespace std;

int main()
{
    float PHI, luas, keliling;
    int r;

    PHI = 3.14;
    cout << "Panjang Jari-Jari : ";
    cin >> r;

    luas = PHI*r*r;
    keliling = PHI*(r+r);
    cout << "luas : " << luas << endl;
    cout << "Keliling : " << keliling << endl;

    return 0;
}
