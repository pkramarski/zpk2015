#include <iostream>

using namespace std;

int main () {
    int A, B, K;
    cin >> A >> B >> K;

    int l;
    int m;
    if (A>B) {

        l=A/K;
        l=2*l;
        B=B-2*K;
        m=B/K;
        m=2*m;

    cout << m+l <<endl;
    }

    if (B>=A) {

        l=B/K;
        l=2*l;
        A=A-2*K;
        m=A/K;
        m=2*m;

    cout << m+l <<endl;
    }
return 0;
}
