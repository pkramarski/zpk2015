#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int k, suma=0, x = 0;
    cin >> k;
    int t[k+1];
    for (int i = 0; i <= k; ++i)
        cin >> t[i];
    suma = t[k];
    for (int i = k-1; i >= 0; --i)
        suma = 2 * suma + t[i];
    x = suma + 1;

    for (int i = k; i > 0; --i){
        if (suma - t[i] * pow(2, i) < pow(2, i) - 1)
            x = suma + 1;
        suma -= t[i] * pow(2, i);
    }
    cout << x << endl;
}
