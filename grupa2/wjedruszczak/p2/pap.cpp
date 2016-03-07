#include<iostream>
using namespace std;

int main() {
	// deklaracja zmiennych
	int gramy = 0, k, papryczki = 1, stanSklepu;

	// wczytywanie
	cin >> k;

	// zliczanie papryczek na stanie (po gramach)
	for (int i = 1; i <= k + 1; i++) {
		cin >> stanSklepu;
		gramy += papryczki * stanSklepu;
		papryczki *= 2;
	}

	// wynik
	cout << gramy + 1 << endl;
}