#include <iostream>
using namespace std;

int main() {
    int ile;
    cin >> ile;
    /*oceny wpisane*/
    int t[ile];
    for (int i = 0; i < ile; i++)
        cin >> t[i];

    /*licznik ocen, inicjalnie po 0 ocen ka¿dego rodzaju*/
    int licznik[6];
    for (int i = 0; i < 6; i++)
        licznik[i] = 0;

    for (int i = 0; i < ile; i++){
        int ocena = t[i];
        licznik[ocena - 1] += 1;
    }


   for (int j =0; j < 6; j++)
        cout << licznik[j] << " ";





}

