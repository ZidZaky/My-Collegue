#include <iostream>
#include <string>
#include <conio.h>
#include <math.h>
#define PI 3.141592653589793238463
using namespace std;


int main()
{
  char choice;
  while(true)
  {
    double a, b, hasil;
    int pil, x, y, hasil1;

    cout << "---------------------------------------------";
    cout << "\n";
    cout << "              Calculator By K4ncu1          ";
    cout << "\n                 Using Else If            ";
    cout << "\n";
    cout << "---------------------------------------------";
    cout << "\n";

    cout << "   || Arithmetic Operations :            ||" << endl;
    cout << "   || 1. Addition         8. Squared     ||" << endl;
    cout << "   || 2. Subtraction      9. Sinus       ||" << endl;
    cout << "   || 3. Multiplication  10. Cosinus     ||" << endl;
    cout << "   || 4. Division        11. Tangen      ||" << endl;
    cout << "   || 5. Modulus         12. Logaritma   ||" << endl;
    cout << "   || 6. Squared Root    13. Logaritma10 ||" << endl;
    cout << "   || 7. Cube Root                       ||" << endl;
    cout << "---------------------------------------------" << endl;
    cout << "Input Options : ";
    cin >> pil;
    cout << "\n";

    if (pil==1){
      cout << "Enter The First Number : ";
      cin >> a;
      cout << "Enter The Second Number : ";
      cin >> b;
      hasil = a + b;
      cout << "\nAddition Results : " << a << " + " << b << " = " << hasil;
    }else if (pil==2){
      cout << "Enter The First Number : ";
      cin >> a;
      cout << "Enter The Second Number : ";
      cin >> b;
      hasil = a - b;
      cout << "\nSubtraction Results : " << a << " - " << b << " = " << hasil;
    }else if (pil==3){
      cout << "Enter The First Number : ";
      cin >> a;
      cout << "Enter The Second Number : ";
      cin >> b;
      hasil = a * b;
      cout << "\nMultiplication Results : " << a << " * " << b << " = " << hasil;
    }else if (pil==4){
      cout << "Enter The First Number : ";
      cin >> a;
      cout << "Enter The Second Number : ";
      cin >> b;
      hasil = a / b;
      cout << "\nDivision Results : " << a << " / " << b << " = " << hasil;
    }else if (pil==5){
      cout << "Enter The First Number : ";
      cin >> x;
      cout << "Enter The Second Number : ";
      cin >> y;
      hasil1 = x % y;
      cout << "\nModulus Results : " << x << " % " << y << " = " << hasil1;
    }else if (pil==6){
      cout << "Enter The Number : ";
      cin >> a;
      cout << "\nSquared Root of : " << a << " = " << sqrt(a);
    }else if (pil==7){
      cout << "Enter The Number : ";
      cin >> a;
      cout << "\nCube Root of : " << a << " = " << cbrt(a);
    }else if (pil==8){
      cout << "Enter The Number : ";
      cin >> x;
      cout << "Enter Squared : ";
      cin >> y;
      cout << "\nSquared Results : " << x << " ^ " << y << " = " << pow(x,y);
    }else if (pil==9){
      cout << "Enter The Number : ";
      cin >> a;
      cout << "Sin(" << a << ") = " << sin(a*(PI / 180.0));
    }else if (pil==10){
      cout << "Enter The Number : ";
      cin >> a;
      cout << "Cos(" << a << ") = " << cos(a*(PI / 180.0));
    }else if (pil==11){
      cout << "Enter The Number : ";
      cin >> a;
      cout << "Tan(" << a << ") = " << tan(a*(PI / 180.0));
    }else if (pil==12){
      cout << "Enter The Number : ";
      cin >> a;
      cout << "\nLog(" << a << ") = " << log(a);
    }else if (pil==13){
      cout << "Enter The Number : ";
      cin >> a;
      cout << "\nLog10(" << a << ") = " << log10(a);
    }else{
      cout << "Your Operator is Wrong !!!";
    }
     cout<<"\n\nWant to Try Again?(Y/N)"<<endl;
     cin >> choice;

        if(choice == 'Y'|| choice =='y'){
            continue;
        }else if(choice == 'N'||choice == 'n'){
            cout << "\n---------------------------------------------";
            cout << "\n";
            cout << "           Thank You For Trying Me!           ";
            cout << "\n";
            cout << "---------------------------------------------";
        }
  return 0;
  }
}
