#include <iostream>
using namespace std;

int main() {
   int nr, r; //nr to numer telefonu, r to rok urodzenia
      cin >> nr >> r;
    //1.krok ostatnia cyfre numeru telefonu dostaniemy, gdy liczbe bedaca numerem tel podzielimy przez 10
    // i wezmiemy reszte z tego dzielenia
    int wynik = nr%10 * 2;
    //2.krok
    wynik = wynik + 5;
    //3.krok
    wynik = 50* wynik;
    //4.krok
    wynik = wynik + 1764;
    //5.krok
    wynik = wynik - r;

    cout << wynik << endl;
}
