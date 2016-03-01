#include<iostream>
using namespace std;

int main()
{
    int a,b,wynik;
    /*cout<<"Podaj numer telefonu:"<<"\n";*/
    cin >> a;
    /*cout<<"Podaj rok urodzenia:"<<"\n";*/
    cin >> b;
    wynik = ((a % 10 ) * 2 + 5) * 50  + 1764 - b;
    cout<<wynik;
}
