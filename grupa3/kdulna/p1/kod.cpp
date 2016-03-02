#include <iostream>
using namespace std;

int main() {
    int ascii;
    char znak1, znak2;
    cin >> znak1 >> znak2;
    if (znak2 == 'A' || znak2 == 'B' || znak2 == 'C' || znak2 == 'D' || znak2 == 'E' || znak2 == 'F')
        ascii = 16 * (znak1-48) + int(znak2) - 55;
    else
        ascii = 16 * (znak1-48) + znak2 - 48;
    cout << ascii << endl
         << char(ascii);
}
