#include <iostream>
using namespace std;

int main()
{
    char a,b;
    int c,d;
    int wynik;
    cin >> a>>b;
    c=a-48;
    d=b;
                        //to robie po to, aby zamienic znak na liczbe z kodu ASCII i na tym operowac
    if (d >57)
        wynik=16*c + (d-55);
    else
        wynik= 16*c + d-48;

    cout << wynik<<endl;
    cout  <<char(wynik);
}
