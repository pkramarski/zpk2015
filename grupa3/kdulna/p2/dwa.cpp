#include <iostream>
#include <algorithm>
using namespace std;

int sum_min(int t[], int s[], int m){
    int suma = 0;
    for(int i = 0; i < m; ++i){
        if (t[i] >= s[i])
            suma += s[i];
        else
            suma += t[i];
    }
    return suma;
}
int main() {
    int n, m;
    cin >> n >> m;
    int t[n][m];
    int s[m], r[m];
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> t[i][j];
    int cena_min = 100000;
    for (int i = 0; i < n - 1; ++i){
        for (int j = i + 1; j < n; ++j){
            for (int k = 0; k < m; ++k){
                s[k] = t[i][k];
                r[k] = t[j][k];
            }
            int cena = sum_min(s, r, m);
            if (cena < cena_min)
                cena_min = cena;
        }
    }
    cout << cena_min << endl;

}
