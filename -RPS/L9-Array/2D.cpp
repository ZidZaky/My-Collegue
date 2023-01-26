#include <iostream>

using namespace std;

int main()
{
    int a,b,e,c;
    cin >> a;
    cin >> b;
    cin >> c;

    int tabel[a][b];
    for (auto i{1}; i<=a; i++){
        for ( auto j{1}; j<=b; j++){
        cin >> e ;
        tabel[i][j]=e;
        }
    }
    int x1, x2, y1, y2, total[c];
    for (auto h{1}; h<=c; h++){
        cin >> x1;
        cin >> y1;
        cin >> x2;
        cin >> y2;
        total[h] = 0;
        for (auto i{x1}; i<=x2; i++){
            for ( auto j{y1}; j<=y2; j++){
                total[h]= tabel[i][j] + total[h];
                }
            }
    }
    for (auto h{1}; h<=c; h++){
    cout << total[h] << endl;
    }
}
