#include<iostream>
using namespace std;

int main() {
	// deklaracja zmiennej
	unsigned int t;

	// wczytywanie
	cin >> t;

	// deklaracja zmiennych
	unsigned int godziny, minuty, sekundy;

	// obliczenia
	godziny = t / 3600;
	minuty = t / 60 - 60 * godziny;
	sekundy = t - 3600 * godziny - 60 * minuty;

	// wyswietlenie
	cout << godziny << "g" << minuty << "m" << sekundy << "s" << endl;
}