#include<iostream>
using namespace std;

int main() {
	// deklaracja zmiennych
	int rok, A, B, d, m;

	// wczytywanie
	cin >> rok;

	// wyjatki lub wyznaczenie liczb A i B dla XIX, XX, XXI i XXII wieku
	if (rok == 1981 || rok == 2076 || rok == 2133 || rok == 2201 || rok == 2296) {
		// wyjatek I rodzaju
		d = 19;
		m = 4;
		cout << d << " " << m << endl;
		return 0;
	} else if (rok == 1954 || rok == 2049 || rok == 2106) {
		// wyjatek II rodzaju
		d = 18;
		m = 4;
		cout << d << " " << m << endl;
		return 0;
	} else if (rok >= 1800 && rok <= 1899) {
		A = 23;
		B = 4;
	} else if (rok >= 1900 && rok <= 2099) {
		A = 24;
		B = 5;
	} else if (rok >= 2100 && rok <= 2199) {
		A = 24;
		B = 6;
	} else if (rok == 2200) {
		A = 25;
		B = 0;
	}

	// algorytm Gaussa, zrodlo: pl.wikipedia.org/wiki/Wielkanoc#Metoda_Gaussa
	int ag = rok % 19;
	int bg = rok % 4;
	int cg = rok % 7;
	int	dg = ((ag * 19) + A) % 30;
	int eg = (2 * bg + 4 * cg + 6 * dg + B) % 7;

	if (dg + eg < 10) {
		m = 3;
		d = dg + eg + 22;
		cout << d << " " << m << endl;
	} else {
		m = 4;
		d = dg + eg - 9;
		cout << d << " " << m << endl;
	}
}
