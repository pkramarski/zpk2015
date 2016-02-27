#include <iostream>
using namespace std;

int main() {
    int telefon, ostatnia, rocznik;
    cin >> telefon >> rocznik;

    ostatnia = telefon % 10; // ostatnia cyfra
    ostatnia = ((ostatnia * 2) + 5) * 50 + 1764; // kroki lancuszka

    cout << ostatnia - rocznik << endl;

    return 0;
}
