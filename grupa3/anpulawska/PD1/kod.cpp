#include <iostream>
using namespace std;

int main() {
    int wynik;
    char znak1, znak2;
    cin >> znak1 >> znak2;
    if (znak2 >= 'A' && znak2 <= 'F')
        wynik= 16 * (znak1-48) + znak2 - 55;
    else
    wynik = 16 * (znak1-48) + znak2-48;
    cout << wynik << endl << char(wynik) << endl;
}
