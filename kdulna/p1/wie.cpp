#include <iostream>
using namespace std;

int main() {
    int A, B, a, b, c, d, e, rok, dzien, mies;
    cin >> rok;
    if (rok <= 1899){
        A = 23;
        B = 4;
    }
    else if (rok <= 2099){
        A = 24;
        B = 5;
    }
    else if (rok <= 2199){
        A = 24;
        B = 6;
    }
    else {
        A = 25;
        B = 0;
    }
    a = rok % 19;
    b = rok % 4;
    c = rok % 7;
    d = (a * 19 + A) % 30;
    e = (2 * b + 4 * c + 6 * d + B) % 7;
    dzien = (22 + d + e) % 31;
    if (22 + d + e <= 31)
        mies = 3;
    else
        mies = 4;
    if (dzien == 0)
        dzien = 31;
    if (dzien == 26 && mies == 4)
        dzien = 19;
    if (d == 28 && e == 6 && a > 10)
        dzien = 18;
    cout << dzien << " " << mies << endl;
}
