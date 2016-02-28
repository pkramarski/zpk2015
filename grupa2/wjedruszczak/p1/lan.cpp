#include<iostream>
using namespace std;

int main() {
	// deklaracja zmiennych
	unsigned int telefon, rokUrodzenia;

	// wczytywanie
	cin >> telefon >> rokUrodzenia;

	// obliczenia
	int wynik = (((telefon % 10) * 2 + 5) * 50) + 1764 - rokUrodzenia;

	// wynik
	cout << wynik << endl;
}
