#include <iostream>
using namespace std;

int main(){
    /*idea: przeskalowac stol do krzesla*/
    int a, b, k; // wejscie
    int poleStolu, poleKrzesla; // zmienne pomocnicze
    int krzeslaNaA, krzeslaNaB;

    cin >> a >> b >> k;

    a = a / k; b = b / k; k = k / k;

    if (min(a, b) < 2)
        cout << max(a, b);

    else if (min(a, b) >= 2)
        cout << 2 * max(a, b)  + 2 * min(a-2, b-2);

    return 0;
}
