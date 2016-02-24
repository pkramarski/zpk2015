#include <iostream>
using namespace std;

int main()
{
    int numer, rok, wynik;
    cin >> numer >> rok;
    int ostatnia = numer%10;

    wynik = ostatnia*2;
    wynik = wynik+5;
    wynik = wynik*50;
    wynik=wynik+1764;
    wynik=wynik-rok;

    cout << wynik << endl;
}
