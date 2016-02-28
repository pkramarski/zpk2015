#include<iostream>
using namespace std;

int main() {
	// deklaracja zmiennych
	char znak1, znak2;

	// wczytywanie
	cin >> znak1 >> znak2;
	// char przechowuje poj. znak!

	// dodatkowa zmienna
	int kod;

	// obliczenia
	if (znak2 >= 'A' && znak2 <= 'F')
	// drugi z przekazanych znakow to litera A, ..., F (por. alfabetycznie)
		kod = 16 * (znak1 - 48) + znak2 - 55;
		// dzialania arytmetyczne: domyslnie liczby
		// przeskalowanie znak1 z 57, ..., 49 na 9, ..., 1
		// przeskalowanie znak2 z 70, ..., 65 na 15, ..., 10
	else
	// podano cyfre jednosci
		kod = 16 * (znak1 - 48) + znak2 - 48;
		// przeskalowanie znak1 z 57, ..., 49 na 9, ..., 1
		// przeskalowanie znak2 j/w
	// wykorzystano: pl.wikipedia.org/wiki/ASCII

	// wynik
	cout << kod << endl << (char)kod << endl;
}
