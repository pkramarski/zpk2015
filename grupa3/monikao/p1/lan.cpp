#include <iostream>
using namespace std;
int main(){
    /*
    2012- przestepny
    2014 - nie
    2100, 2200- nie
    2000,2400 przest
    */
    int nr, rok;
    cin >> nr >> rok;
    int wynik = nr%10;
    wynik *= 2;
    wynik += 5;
    wynik *= 50;
    wynik += 1764;
    wynik -= rok;
    cout << wynik << endl;

}
