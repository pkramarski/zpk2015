#include <iostream>
using namespace std;


int max (int t[], int n) {

    int wynik = t[0];
    for (int i = 1; i < n; i++)
        if (t[i] > wynik)
            wynik = t[i];
    return wynik;
    }

int indeks_maxa (int t[], int n) {
    
    int wynik = t[0];
    int indeks = 0;
    for (int i = 1; i < n; i++)
    
        if (t[i] > wynik) {
            wynik = t[i];
            indeks = i;
        }
    return indeks;
    }

int main()
{
    int n;
    cin >> n;
    int tab[n];    
    for (int i = 0; i < n; i++)
        cin >> tab[i];
    
    tab[indeks_maxa(tab, n)] = 0; //zeruje maksa
    cout << max (tab, n);
    

}
