#include <iostream>
using namespace std;

int main() {
    int kom, rok, wynik;
    cin >> kom >> rok;
    wynik = (kom%10) * 2;
    wynik += 5;
    wynik *= 50;
    wynik += 1764;
    wynik -= rok;
    cout << wynik << endl;
}
