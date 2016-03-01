#include <iostream>
using namespace std;

int main() {
   int t;
      cin >> t; /*t to liczba sekund
      liczba godzin to calkowita liczba z dzielenia przez 3600
      liczba minut to wziecie reszty z poprzedniego dzielenia i podzielenie przez 60 (calkowite)
      liczba sekund to wziecie reszty z powyzszego dzielenia
      */
   cout << t/3600 << "g" << (t%3600)/60 << "m"<< (t%3600)%60 <<"s" << endl;
}
