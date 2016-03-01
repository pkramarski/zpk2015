#include <iostream>
using namespace std;

int main() {
     int  cyfra, kod, liczba_wyniku;
   char litera, litera_wyniku;

      cin >> cyfra >> litera;
   if (cyfra < 0 || cyfra >10) //warunki poprawnosci wprowadzonych danych
        cout <<"Blednie podana liczba. Wprowadz jeszcze raz." << endl;

   else if (litera != 'A' && litera != 'B' && litera != 'C' && litera != 'D' && litera != 'E' && litera != 'F' )
        cout <<"Blednie podana litera. Wprowadz jeszcze raz." << endl;

   else if ((cyfra < 0 || cyfra >10) && (litera != 'A' && litera != 'B' && litera != 'C' && litera != 'D' && litera != 'E' && litera != 'F' ))
        cout <<"Blednie podana cyfra i litera. Wprowadz jeszcze raz." << endl;
   else

     kod = litera; /*trzeba odczytac numer ascii podanej litery - stad latwo przypisac
                     literom od A do F liczby od 10 do 15*/

     liczba_wyniku = cyfra * 16 + kod - 55; //odejmuje 55 bo kod dla A to 65 a my chcemy 10 itd
     litera_wyniku = liczba_wyniku; /*dla danej liczby typu int odczytujemy jej znak (char) */
     cout  << liczba_wyniku << endl
       << litera_wyniku << endl;


}
