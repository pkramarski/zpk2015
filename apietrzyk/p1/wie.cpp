#include <iostream>

using namespace std;

int main () {
    int r;
    cin >> r;
    int a, b, c, d, e, A, B;

    if (r>=1800 && r<1900) {
        A=23;
        B=4;
    }

    if (r>=1900 && r<2100) {
        A=24;
        B=5;
    }

    if (r>=2100 && r<2200) {
        A=24;
        B=6;
    }

    a = r % 19;
    b = r % 4;
    c = r % 7;
    d = (a*19+A)%30;
    e = (2*b+4*c+6*d+B)%7;

    if (d==29 && e==6)
        cout << 19 << " " << 4 << endl;

    if (d==28 && e==6)
            cout << 18 << " " << 4 << endl;

    else {

        int w;

        w=22+d+e;

        if (w<=31) {
            int m=3;
            int d=w;
            cout << d << " " << m << endl;
        }

        if (w>31 && w <61) {
            int m = 4;
            int d = w-31;
            cout << d << " " << m << endl;
    }
    }

return 0;
}

