#include <iostream>
using namespace std;

int main()
{
    long int tel,rok,wynik;
    cin >> tel >> rok;
    wynik= 2*(tel%10);
    wynik+=5;
    wynik*=50;
    wynik+=1764;
    wynik-=rok;
    cout << wynik;
}
