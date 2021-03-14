//программа, отображающая числа Фибоначчи
#include <iostream>
using namespace std;
int main ()
{
   int k;
    cout << "Vvedite colichestvo chisel: ";
    cin >> k;
    int a, b, c;
    a= 1;
    b= 1;
    if (k<= 0)
        cout << "oshibka";
    else if (k==1)
        cout << "1";
    else
    cout << a << endl << b << endl;
    for (int i=0; i<k-2; i++)
    {
        c= a+b;
        cout << c << endl;
        a= b;
        b= c;
    }
}
