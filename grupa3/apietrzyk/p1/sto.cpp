#include <iostream>

using namespace std;

int main () {
    int A, B, K;
    cin >> A >> B >> K;

    int w, m;
    if (A>B) {
        w=A;
        m=B;
    }
    else {
        w=B;
        m=A;
    }

    int l;
    int n;

    if (m<K)
        cout << 0 << endl;

    if (m<2*K && m>=K) {
        l = w/K;
        cout << l << endl;
    }

    if (m>=2*K) {

        l=A/K;
        l=2*l;
        B=B-2*K;
        n=B/K;
        n=2*n;

    cout << n+l <<endl;
    }

}
