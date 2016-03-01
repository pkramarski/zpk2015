#include <iostream>
using namespace std;
int main(){
    int numer_tel, rok_ur;
    cin >> numer_tel >> rok_ur;
    int wynik = numer_tel %10;
    wynik *= 2;
    wynik += 5;
    wynik *= 50;
    wynik += 1764;
    wynik -= rok_ur;
    cout << wynik << endl;
}
