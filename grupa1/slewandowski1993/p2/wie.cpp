#include <iostream>
using namespace std;

int main() {
    int S1, S2, a, b, c, d, e, r, dz, mi;
    cin >> r;

    if (r <= 1899){
        S1 = 23;
        S2 = 4;
    }
    else if (r <= 2099){
        S1 = 24;
        S2 = 5;
    }
    else if (r <= 2199){
        S1 = 24;
        S2 = 6;
    }

    a = r % 19;
    b = r % 4;
    c = r % 7;
    d = (a * 19 + S1) % 30;
    e = (2 * b + 4 * c + 6 * d + S2) % 7;
    dz = (22 + d + e) % 31;
    if (22 + d + e <= 31)
        mi = 3;
    else
        mi = 4;
    if (dz == 0)
        dz = 31;
    if (dz == 26 && mi == 4)
        dz = 19;
    if (d == 28 && e == 6 && a > 10)
        dz = 18;
    cout << dz << " " << mi << endl;
}
