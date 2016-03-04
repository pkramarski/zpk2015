#include <iostream>
using namespace std;

int najwieksza_mniejsza(int t[], int m, int n){
    int smax = 0;
    int nr;
    for (int i = 0; i < n; i++){
        if (t[i] > smax && t[i] < m)
            smax = t[i];
    }
    return smax;
}

int main() {
    int n;
    cin >> n;
    int t[n];
    for (int i = 0; i < n; i++)
        cin >> t[i];
    cout << najwieksza_mniejsza(t, najwieksza_mniejsza(t, 1000001, n), n) << endl;
}
