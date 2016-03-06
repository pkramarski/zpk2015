#include <iostream>
using namespace std;


int nwd(int a, int b) {
    int p;
    p = 1;
    for (int i = 2; i <= a; i++)
        if (a%i == 0 && b%i == 0)
            p=i;
        else
            p=p;
    return p;
}
/*
int main() {
    int n, m;
    cin >> n;
    cin >> m;
    cout << nwd(n, m) << endl;}
*/


int main() {
    int n;
    cin >> n;
    int t[n];
    int wynik;

    //wypelniam tablice liczb
    for (int i=0; i<=n-1; i++){
            cin >> t[i];}
    //licze nwd rekurencyjnie
    wynik = t[0];
    for (int i = 1; i<=n-1; i++){
        wynik = nwd(t[i], wynik);
    }

    cout << wynik<< endl;
}
