#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int wynik = a % 10;
    wynik *= 2;
    wynik += 5;
    wynik *= 50;
    wynik += 1764;
    wynik -= b;
    cout << wynik << endl;
}
