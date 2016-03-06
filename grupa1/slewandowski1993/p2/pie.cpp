#include <iostream>
using namespace std;

int main() {
    int n, a, p = -1, o = -1;
    cin >> n >> a;
    int t[n];

    for (int i = 0; i < n; i++)
        cin >> t[i];

    for (int i = 0; i < n; i++)
        if (t[i] == a) {p = i + 1; break;}
    cout << p << " ";

    for (int i = n-1; i >= 0; i--)
        if (t[i] == a) {o = i + 1; break;}
    cout << o << endl;
}
